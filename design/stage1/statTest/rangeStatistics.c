#include <stdio.h>

#define MAXIMKEY 15  /* number of unsigned parts in the key [KAKA] */
#define SPITBYTE 256 /* hash value to make byte from one round */

int main(int argc, char **argv)
{
        unsigned long int keyChange;
        unsigned long int keyKaka[MAXIMKEY];
        int streamByteOut;
        int statistics[SPITBYTE-1]={0};
        FILE *keyBookPtr;
        int i=0,j,k,m;
        unsigned long int rangeNumber;

        /*this part gets size of algorithm loop*/

        rangeNumber = atol(argv[argc-1]);

        /*this part read key from file*/

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

        /*this part does rounds*/

        for(j=0;j<rangeNumber;j++)
        {
                if(keyKaka[MAXIMKEY-1] > keyKaka[0])
                        keyChange ^= keyKaka[MAXIMKEY-1];
                else
                        keyChange ^= ~keyKaka[MAXIMKEY-1];

                keyKaka[0] ^= keyChange;
                streamByteOut = keyKaka[0] % SPITBYTE;

                statistics[streamByteOut]++;
                keyChange++;

                for(k=0;k<(MAXIMKEY-1);k++)
                {
                        if(keyKaka[k] > keyKaka[k+1])
                                keyChange ^= keyKaka[k];
                        else
                                keyChange ^= ~keyKaka[k];

                        keyKaka[k+1] ^= keyChange;
                        streamByteOut = keyKaka[k+1] % SPITBYTE;

                        statistics[streamByteOut]++;
                        keyChange++;
                }
        }
        for(m=0;m<(SPITBYTE-1);m++)
                printf("%d\n",statistics[m]);
}
