#include <stdio.h>

#define MAXIMKEY 63  /* number of unsigned parts in the key [KAKA] */

int main(int argc, char **argv)
{
        unsigned long int keyChange;
        unsigned long int keyKaka[MAXIMKEY];

        FILE *keyBookPtr;
        int i,j;
        int rangeNumber = 158730;

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


        for(j=0;j<rangeNumber;j++)
        {
                if(keyKaka[0] > keyKaka[1])
                	keyChange ^= keyKaka[62];
  		else	
  			keyChange ^= (~keyKaka[62]);
  		keyKaka[61] ^= keyChange;

    		if(keyKaka[1] > keyKaka[2])
                	keyChange ^= keyKaka[0];
  		else	
  			keyChange ^= (~keyKaka[0]);
  		keyKaka[62] ^= keyChange;
  		       	
  		if(keyKaka[2] > keyKaka[3])
                	keyChange ^= keyKaka[1];
  		else	
  			keyChange ^= (~keyKaka[1]);
  		keyKaka[0] ^= keyChange;
  		
  		if(keyKaka[3] > keyKaka[4])
                	keyChange ^= keyKaka[2];
  		else	
  			keyChange ^= (~keyKaka[2]);
  		keyKaka[1] ^= keyChange;			
	
      		if(keyKaka[4] > keyKaka[5])
                	keyChange ^= keyKaka[3];
  		else	
  			keyChange ^= (~keyKaka[3]);
  		keyKaka[2] ^= keyChange;
  		
  		if(keyKaka[5] > keyKaka[6])
                	keyChange ^= keyKaka[4];
  		else	
  			keyChange ^= (~keyKaka[4]);
  		keyKaka[3] ^= keyChange;
  		
  		if(keyKaka[6] > keyKaka[7])
                	keyChange ^= keyKaka[5];
  		else	
  			keyChange ^= (~keyKaka[5]);
  		keyKaka[4] ^= keyChange;
  		
  		if(keyKaka[7] > keyKaka[8])
                	keyChange ^= keyKaka[6];
  		else	
  			keyChange ^= (~keyKaka[6]);
  		keyKaka[5] ^= keyChange;
  		
  		if(keyKaka[8] > keyKaka[9])
                	keyChange ^= keyKaka[7];
  		else	
  			keyChange ^= (~keyKaka[7]);
  		keyKaka[6] ^= keyChange;
  		
  		if(keyKaka[9] > keyKaka[10])
                	keyChange ^= keyKaka[8];
  		else	
  			keyChange ^= (~keyKaka[8]);
  		keyKaka[7] ^= keyChange;
  		
  		if(keyKaka[10] > keyKaka[11])
                	keyChange ^= keyKaka[9];
  		else	
  			keyChange ^= (~keyKaka[9]);
  		keyKaka[8] ^= keyChange;
  		
  		if(keyKaka[11] > keyKaka[12])
                	keyChange ^= keyKaka[10];
  		else	
  			keyChange ^= (~keyKaka[10]);
  		keyKaka[9] ^= keyChange;
  		
  		if(keyKaka[12] > keyKaka[13])
                	keyChange ^= keyKaka[11];
  		else	
  			keyChange ^= (~keyKaka[11]);
  		keyKaka[10] ^= keyChange;
  		
  		if(keyKaka[13] > keyKaka[14])
                	keyChange ^= keyKaka[12];
  		else	
  			keyChange ^= (~keyKaka[12]);
  		keyKaka[11] ^= keyChange;
  		
  		if(keyKaka[14] > keyKaka[15])
                	keyChange ^= keyKaka[13];
  		else	
  			keyChange ^= (~keyKaka[13]);
  		keyKaka[12] ^= keyChange;
  		
  		if(keyKaka[15] > keyKaka[16])
                	keyChange ^= keyKaka[14];
  		else	
  			keyChange ^= (~keyKaka[14]);
  		keyKaka[13] ^= keyChange;
  		
  		if(keyKaka[16] > keyKaka[17])
                	keyChange ^= keyKaka[15];
  		else	
  			keyChange ^= (~keyKaka[15]);
  		keyKaka[14] ^= keyChange;
  		
  		if(keyKaka[17] > keyKaka[18])
                	keyChange ^= keyKaka[16];
  		else	
  			keyChange ^= (~keyKaka[16]);
  		keyKaka[15] ^= keyChange;
  		
  		if(keyKaka[18] > keyKaka[19])
                	keyChange ^= keyKaka[17];
  		else	
  			keyChange ^= (~keyKaka[17]);
  		keyKaka[16] ^= keyChange;
  		
  		if(keyKaka[19] > keyKaka[20])
                	keyChange ^= keyKaka[18];
  		else	
  			keyChange ^= (~keyKaka[18]);
  		keyKaka[17] ^= keyChange;
  		
  		if(keyKaka[20] > keyKaka[21])
                	keyChange ^= keyKaka[19];
  		else	
  			keyChange ^= (~keyKaka[19]);
  		keyKaka[18] ^= keyChange;
  		
  		if(keyKaka[21] > keyKaka[22])
                	keyChange ^= keyKaka[20];
  		else	
  			keyChange ^= (~keyKaka[20]);
  		keyKaka[19] ^= keyChange;
  		
  		if(keyKaka[22] > keyKaka[23])
                	keyChange ^= keyKaka[21];
  		else	
  			keyChange ^= (~keyKaka[21]);
  		keyKaka[20] ^= keyChange;
  		
  		if(keyKaka[23] > keyKaka[24])
                	keyChange ^= keyKaka[22];
  		else	
  			keyChange ^= (~keyKaka[22]);
  		keyKaka[21] ^= keyChange;
  		
  		if(keyKaka[24] > keyKaka[25])
                	keyChange ^= keyKaka[23];
  		else	
  			keyChange ^= (~keyKaka[23]);
  		keyKaka[22] ^= keyChange;
  		
  		if(keyKaka[25] > keyKaka[26])
                	keyChange ^= keyKaka[24];
  		else	
  			keyChange ^= (~keyKaka[24]);
  		keyKaka[23] ^= keyChange;
  		
  		if(keyKaka[26] > keyKaka[27])
                	keyChange ^= keyKaka[25];
  		else	
  			keyChange ^= (~keyKaka[25]);
  		keyKaka[24] ^= keyChange;
  		
  		if(keyKaka[27] > keyKaka[28])
                	keyChange ^= keyKaka[26];
  		else	
  			keyChange ^= (~keyKaka[26]);
  		keyKaka[25] ^= keyChange;
  		
  		if(keyKaka[28] > keyKaka[29])
                	keyChange ^= keyKaka[27];
  		else	
  			keyChange ^= (~keyKaka[27]);
  		keyKaka[26] ^= keyChange;
  		
  		if(keyKaka[29] > keyKaka[30])
                	keyChange ^= keyKaka[28];
  		else	
  			keyChange ^= (~keyKaka[28]);
  		keyKaka[27] ^= keyChange;
  		
  		if(keyKaka[30] > keyKaka[31])
                	keyChange ^= keyKaka[29];
  		else	
  			keyChange ^= (~keyKaka[29]);
  		keyKaka[28] ^= keyChange;
  		
  		if(keyKaka[31] > keyKaka[32])
                	keyChange ^= keyKaka[30];
  		else	
  			keyChange ^= (~keyKaka[30]);
  		keyKaka[29] ^= keyChange;
  		
  		if(keyKaka[32] > keyKaka[33])
                	keyChange ^= keyKaka[31];
  		else	
  			keyChange ^= (~keyKaka[31]);
  		keyKaka[30] ^= keyChange;
  		
  		if(keyKaka[33] > keyKaka[34])
                	keyChange ^= keyKaka[32];
  		else	
  			keyChange ^= (~keyKaka[32]);
  		keyKaka[31] ^= keyChange;
  		
  		if(keyKaka[34] > keyKaka[35])
                	keyChange ^= keyKaka[33];
  		else	
  			keyChange ^= (~keyKaka[33]);
  		keyKaka[32] ^= keyChange;
  		
  		if(keyKaka[35] > keyKaka[36])
                	keyChange ^= keyKaka[34];
  		else	
  			keyChange ^= (~keyKaka[34]);
  		keyKaka[33] ^= keyChange;
  		
  		if(keyKaka[36] > keyKaka[37])
                	keyChange ^= keyKaka[35];
  		else	
  			keyChange ^= (~keyKaka[35]);
  		keyKaka[34] ^= keyChange;
  		
  		if(keyKaka[37] > keyKaka[38])
                	keyChange ^= keyKaka[36];
  		else	
  			keyChange ^= (~keyKaka[36]);
  		keyKaka[35] ^= keyChange;
  		
  		if(keyKaka[38] > keyKaka[39])
                	keyChange ^= keyKaka[37];
  		else	
  			keyChange ^= (~keyKaka[37]);
  		keyKaka[36] ^= keyChange;
  		
  		if(keyKaka[39] > keyKaka[40])
                	keyChange ^= keyKaka[38];
  		else	
  			keyChange ^= (~keyKaka[38]);
  		keyKaka[37] ^= keyChange;
  		
  		if(keyKaka[40] > keyKaka[41])
                	keyChange ^= keyKaka[39];
  		else	
  			keyChange ^= (~keyKaka[39]);
  		keyKaka[38] ^= keyChange;
  		
  		if(keyKaka[41] > keyKaka[42])
                	keyChange ^= keyKaka[40];
  		else	
  			keyChange ^= (~keyKaka[40]);
  		keyKaka[39] ^= keyChange;
  		
  		if(keyKaka[42] > keyKaka[43])
                	keyChange ^= keyKaka[41];
  		else	
  			keyChange ^= (~keyKaka[41]);
  		keyKaka[40] ^= keyChange;
  		
  		if(keyKaka[43] > keyKaka[44])
                	keyChange ^= keyKaka[42];
  		else	
  			keyChange ^= (~keyKaka[42]);
  		keyKaka[41] ^= keyChange;
  		
  		if(keyKaka[44] > keyKaka[45])
                	keyChange ^= keyKaka[43];
  		else	
  			keyChange ^= (~keyKaka[43]);
  		keyKaka[42] ^= keyChange;
  		
  		if(keyKaka[45] > keyKaka[46])
                	keyChange ^= keyKaka[44];
  		else	
  			keyChange ^= (~keyKaka[44]);
  		keyKaka[43] ^= keyChange;
  		
  		if(keyKaka[46] > keyKaka[47])
                	keyChange ^= keyKaka[45];
  		else	
  			keyChange ^= (~keyKaka[45]);
  		keyKaka[44] ^= keyChange;
  		
  		if(keyKaka[47] > keyKaka[48])
                	keyChange ^= keyKaka[46];
  		else	
  			keyChange ^= (~keyKaka[46]);
  		keyKaka[45] ^= keyChange;
  		
  		if(keyKaka[48] > keyKaka[49])
                	keyChange ^= keyKaka[47];
  		else	
  			keyChange ^= (~keyKaka[47]);
  		keyKaka[46] ^= keyChange;
  		
  		if(keyKaka[49] > keyKaka[50])
                	keyChange ^= keyKaka[48];
  		else	
  			keyChange ^= (~keyKaka[48]);
  		keyKaka[47] ^= keyChange;
  		
  		if(keyKaka[50] > keyKaka[51])
                	keyChange ^= keyKaka[49];
  		else	
  			keyChange ^= (~keyKaka[49]);
  		keyKaka[48] ^= keyChange;
  		
  		if(keyKaka[51] > keyKaka[52])
                	keyChange ^= keyKaka[50];
  		else	
  			keyChange ^= (~keyKaka[50]);
  		keyKaka[49] ^= keyChange;
  		
  		if(keyKaka[52] > keyKaka[53])
                	keyChange ^= keyKaka[51];
  		else	
  			keyChange ^= (~keyKaka[51]);
  		keyKaka[50] ^= keyChange;
  		
  		if(keyKaka[53] > keyKaka[54])
                	keyChange ^= keyKaka[52];
  		else	
  			keyChange ^= (~keyKaka[52]);
  		keyKaka[51] ^= keyChange;
  		
  		if(keyKaka[54] > keyKaka[55])
                	keyChange ^= keyKaka[53];
  		else	
  			keyChange ^= (~keyKaka[53]);
  		keyKaka[52] ^= keyChange;
  		
  		if(keyKaka[55] > keyKaka[56])
                	keyChange ^= keyKaka[54];
  		else	
  			keyChange ^= (~keyKaka[54]);
  		keyKaka[53] ^= keyChange;
  		
  		if(keyKaka[56] > keyKaka[57])
                	keyChange ^= keyKaka[55];
  		else	
  			keyChange ^= (~keyKaka[55]);
  		keyKaka[54] ^= keyChange;
  		
  		if(keyKaka[57] > keyKaka[58])
                	keyChange ^= keyKaka[56];
  		else	
  			keyChange ^= (~keyKaka[56]);
  		keyKaka[55] ^= keyChange;
  		
  		if(keyKaka[58] > keyKaka[59])
                	keyChange ^= keyKaka[57];
  		else	
  			keyChange ^= (~keyKaka[57]);
  		keyKaka[56] ^= keyChange;
  		
  		if(keyKaka[59] > keyKaka[60])
                	keyChange ^= keyKaka[58];
  		else	
  			keyChange ^= (~keyKaka[58]);
  		keyKaka[57] ^= keyChange;
  		
  		if(keyKaka[60] > keyKaka[61])
                	keyChange ^= keyKaka[59];
  		else	
  			keyChange ^= (~keyKaka[59]);
  		keyKaka[58] ^= keyChange;
  		
  		if(keyKaka[61] > keyKaka[62])
                	keyChange ^= keyKaka[60];
  		else	
  			keyChange ^= (~keyKaka[60]);
  		keyKaka[59] ^= keyChange;
  		
  		if(keyKaka[62] > keyKaka[0])
                	keyChange ^= keyKaka[61];
  		else	
  			keyChange ^= (~keyKaka[61]);
  		keyKaka[60] ^= keyChange;
  		
  		
        }
	
	return 0;
}
