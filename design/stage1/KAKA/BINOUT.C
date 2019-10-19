#include <stdio.h>

#define MAXIMKEY 15  /* number of unsigned parts in the key [KAKA] */
#define SPITBYTE 256 /* hash value to make byte from one round */

int main(int argc, char **argv)
{
        unsigned long int keyChange;
        unsigned long int keyKaka[MAXIMKEY];
        
        FILE *keyBookPtr;
        FILE *binOutPtr;
        int i=0,j,k;
        int rangeNumber;

        int changer[MAXIMKEY]={14,0,1,2,3,4,5,6,7,8,9,10,11,12,13};
        int comparA[MAXIMKEY]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
        int comparB[MAXIMKEY]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,0};

		char c;

        /*this part gets size of algorithm loop*/

        rangeNumber = 764667;

        /*this part read key from file*/

        printf("Please wait ...\n");
		
		if((keyBookPtr = fopen("key.book","r")) == NULL)
                printf("key.book file could not be opened\n");
        else
        {
                fscanf(keyBookPtr,"%lu",&keyChange);

                while(!feof(keyBookPtr))
                {
                        fscanf(keyBookPtr,"%lu",&keyKaka[i]);
                        i++;
                }
                fclose(keyBookPtr);
        }


        if((binOutPtr = fopen("binout.32","wb")) == NULL)
                printf("binout.32 file could not be opened\n");
        else
        {
                /*this part does rounds*/
                for(j=0;j<rangeNumber;j++)
                {
                        for(k=0;k<MAXIMKEY;k++)
                        {
                                if(keyKaka[comparA[k]] < keyKaka[comparB[k]])
                                {
                                        keyChange ^= keyKaka[changer[k]];
                                        keyKaka[comparB[k]] ^= keyChange;
                                        keyChange ++;
										
						    c=(char)keyKaka[comparB[k]] % SPITBYTE;
                                        
						    fwrite(&c,sizeof(char),1,binOutPtr);

                                }
                                else
                                {
                                        keyChange ^= ~keyKaka[changer[k]];
                                        keyKaka[comparB[k]] ^= keyChange;
                                        keyChange ++;

                                        c=(char)keyKaka[comparB[k]] % SPITBYTE;
                                        
						    fwrite(&c,sizeof(char),1,binOutPtr);

                                }
                        }
                }
                fclose(binOutPtr);
        }
        
	  if((keyBookPtr = fopen("key.book","w")) == NULL)
                printf("key.book file could not be opened for writing\n");
        else
        {
                fprintf(keyBookPtr,"%lu\n",keyChange);

                for(i=0;i<15;i++)
                {
                        fprintf(keyBookPtr,"%lu\n",keyKaka[i]);
                }
                fclose(keyBookPtr);
        }
	  return 0;
}
