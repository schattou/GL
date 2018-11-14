#include "my_header.h"
#include <stdlib.h>

int main(void)
{
    int s1=0 , n=3 , n1=3 , s3=0 , nb_rand =0 , i=1, s4=0, a=1 , d=1;
    long unsigned int s2=0;
    while(n1<36)	   // partie 1
    {
        s1 = s1+n;
        n = n+3;
    }
    while(n1<=9876)	   // partie 2
    {
        s2= s2+n1;
        n1= n1+3;
    }
    while(i<=12)			//partie 3
    {
        nb_rand = rand() %10 +1; // pour une valeur entre 1 et 10
        s3= s3+nb_rand;
        i++;
    }
    while(d<=20)	 // partie 4 (les 20 premier multiples) 
    {
        if(a%3==0 || a%7==0)
        {
            s4= s4+a;
            d++;
        }
        a++;
    }
    return 0;
}
