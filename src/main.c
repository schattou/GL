//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

int main(void)
{
	int seuil;
	int i;
	unsigned char bin[10]={0, 1,  2, 3, 4, 5, 6, 7, 8, 9};
	seuil = 9;
	for (i=0 ; i<10 ; i++)
	{
						  if (bin[10]<seuil)
	{
		bin[i] = 0 ;
						  }
								   else
						  {
							  bin[i] = 1 ;
						  }
	}
    return 0;
}
