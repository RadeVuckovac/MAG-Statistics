#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define SIZERND 17

int main()
{
	struct fourBits
    {
		unsigned int kaka : 2;
    };
    typedef struct fourBits pack;

	pack changeling, checkChange;
	pack Pack [SIZERND];
   	pack Check [SIZERND];

	unsigned long int i,j,k,l; /*counters*/
    unsigned long int loopSize = 4200000000;    
	srand(time(NULL));
	changeling.kaka = rand() % 4;
	checkChange.kaka = changeling.kaka;
		
	printf("%lu\n",loopSize);
	
	for(k=0;k<SIZERND;k++)
	{
		Pack[k].kaka = rand() % 4;
	}
	/*printf("initialized values\n");*/	
	for(k=0;k<SIZERND;k++)
    {
		Check[k].kaka=Pack[k].kaka;
        /*printf("%d\t",Check[k].kaka);*/
	}
    	/*printf("**%2d**\n",checkChange.kaka);*/

	for(j=0;j<loopSize;j++)
    {
	    	if(Pack[SIZERND-1].kaka > Pack[0].kaka)
			changeling.kaka ^= Pack[SIZERND-1].kaka;
		else
			changeling.kaka ^= (~(Pack[SIZERND-1].kaka));
		
		Pack[0].kaka ^= changeling.kaka;

		for(i=0;i<(SIZERND-1);i++)
		{
			if(Pack[i].kaka > Pack[i+1].kaka)
				changeling.kaka ^= Pack[i].kaka;
			else
				changeling.kaka ^= (~(Pack[i].kaka));

			Pack[i+1].kaka ^= changeling.kaka;       
		}
                
		l=j;
        if(changeling.kaka==checkChange.kaka)
			if(Check[0].kaka==Pack[0].kaka)
				if(Check[1].kaka==Pack[1].kaka)
					if(Check[2].kaka==Pack[2].kaka)
						if(Check[3].kaka==Pack[3].kaka)
							if(Check[4].kaka==Pack[4].kaka)
								if(Check[5].kaka==Pack[5].kaka)
									if(Check[6].kaka==Pack[6].kaka)
										if(Check[7].kaka==Pack[7].kaka)
											if(Check[8].kaka==Pack[8].kaka)
												if(Check[9].kaka==Pack[9].kaka)
													if(Check[10].kaka==Pack[10].kaka)
														if(Check[11].kaka==Pack[11].kaka)
															if(Check[12].kaka==Pack[12].kaka)
																if(Check[13].kaka==Pack[13].kaka)
																	if(Check[14].kaka==Pack[14].kaka)
																		if(Check[15].kaka==Pack[15].kaka)
																			if(Check[16].kaka==Pack[16].kaka)
																				j=loopSize;
																			
		
  
	}
    	/*printf("checked values\n");
	for(k=0;k<SIZERND;k++)
		printf("%d\t",Pack[k].kaka);
         
	printf("**%2d**\n",changeling.kaka);
	printf("rounds done\n");*/
	printf("%lu\n",l);
	/*printf("**********************************************************************\n");*/
	
	return 0;
}
