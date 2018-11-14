#include "my_header.h"

int main(void)
{
	unsigned long int S2 = 3;
	unsigned char n = 2;	 //ici n = nombre de termes
	while(S2<9876)
	{
		
		S2 = S2 + 3*n;
	 	n = n + 1;
	}
		 return 0;
}
		
