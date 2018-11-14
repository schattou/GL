#include "my_header.h"
#include "stdlib.h"
int main(void)
{
	unsigned long int S3 = 0;
	unsigned char nb_rand; 
	unsigned char i = 0;	 
while ( i < 12 )
        
    {
        nb_rand = rand()%11;
        
        S3 = S3 + nb_rand ;
        
        i++;
    
    }
}
