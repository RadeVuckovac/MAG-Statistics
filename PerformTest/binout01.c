#include <stdio.h>

#define MAXIMKEY 63  /* number of unsigned parts in the key [KAKA] */
#define SPITBYTE 256 /* hash value to make byte from one round */

int main(int argc, char **argv)
{
        unsigned long int keyChange;
        unsigned long int keyKaka[MAXIMKEY];
        
        FILE *keyBookPtr;
        FILE *binOutPtr;
        int i=0,j,k;
        int rangeNumber;

        int changed[MAXIMKEY]={61,62,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60};
	int changer[MAXIMKEY]={62,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61};
        int comparA[MAXIMKEY]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62};
        int comparB[MAXIMKEY]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,0};

	    int indexA, indexB, indexC, indexD;
		//char c;
		/*this part gets size of algorithm loop*/

        rangeNumber = 158730;

        /*this part read key from file*/

        printf("Please wait ...\n");
		
		if((keyBookPtr = fopen("key.book","r")) == NULL)
                printf("key.book file could not be opened\n");
        else
        {
                fscanf(keyBookPtr,"%lu",&keyChange);

                for(i=0;i<MAXIMKEY;i++)
                {
                        fscanf(keyBookPtr,"%lu",&keyKaka[i]);
                }
                fclose(keyBookPtr);
        }


        if((binOutPtr = fopen("binout.32","wb")) == NULL)
                printf("binout.32 file could not be opened\n");
        else
        {
                for(j=0;j<128;j++)
                {
                        for(k=0;k<MAXIMKEY;k++)
                        {
                                indexA=comparA[k];
								indexB=comparB[k];
								indexC=changer[k];
								indexD=changed[k];
								
								if(keyKaka[indexA] > keyKaka[indexB])
                                {
                                        keyChange ^= keyKaka[indexC];
                                        keyKaka[indexD] ^= keyChange;
                                        keyChange += 84215045;
										
										//c=(char)keyKaka[indexD] % SPITBYTE;
                                        //fwrite(&c,sizeof(char),1,binOutPtr);
										//fwrite(&keyKaka[comparB[k]],sizeof(unsigned long int),1,binOutPtr);

										
                                }
                                else
                                {
                                        keyChange ^= (~keyKaka[indexC]);
                                        keyKaka[indexD] ^= keyChange;
                                        keyChange += 84215045;
										
										//c=(char)keyKaka[indexD] % SPITBYTE;
                                        //fwrite(&c,sizeof(char),1,binOutPtr);                                     
										//fwrite(&keyKaka[comparB[k]],sizeof(unsigned long int),1,binOutPtr);
                                }
                        }
                }
				/*this part does rounds*/
                for(j=0;j<rangeNumber;j++)
                {
                        for(k=0;k<MAXIMKEY;k++)
                        {
                                indexA=comparA[k];
								indexB=comparB[k];
								indexC=changer[k];
								indexD=changed[k];
								
								if(keyKaka[indexA] > keyKaka[indexB])
                                {
                                        keyChange ^= keyKaka[indexC];
                                        keyKaka[indexD] ^= keyChange;
                                        //keyChange += 84215045;
										
										//c=(char)keyKaka[indexD] % SPITBYTE;
                                        //fwrite(&c,sizeof(char),1,binOutPtr);
										//fwrite(&keyKaka[indexD],sizeof(unsigned long int),1,binOutPtr);

										
                                }
                                else
                                {
                                        keyChange ^= (~keyKaka[indexC]);
                                        keyKaka[indexD] ^= keyChange;
                                        //keyChange += 84215045;
										
										//c=(char)keyKaka[indexD] % SPITBYTE;
                                        //fwrite(&c,sizeof(char),1,binOutPtr);                                     
										//fwrite(&keyKaka[indexD],sizeof(unsigned long int),1,binOutPtr);
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

                for(i=0;i<MAXIMKEY;i++)
                {
                        fprintf(keyBookPtr,"%lu\n",keyKaka[i]);
                }
                fclose(keyBookPtr);
        }
		
		return 0;
}
