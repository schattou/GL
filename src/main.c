//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "stdio.h"
#include "TP_lib_suite.h"

int main(void)
{
unsigned char joueur[6]={22,30,4,6,2,10},loto[6]={},i=0,h=0,i2=0,i3=0,i4=0,t=0,i5=0;

for (i3=0;i3 <100;i3++)
{
initialiserTirage();
for (i=0;i<6; i++)
{
loto[i]=tirerNumero();

for(h=0;h<6;h++)
{
if(joueur[h]==loto[i])
i2++;
}

if (h==6)
{
t=i2;
i2=0;
}
}

if (i4<t)
{
i4=t;
i5=i3;
}

}	
printf("Best score = %d Essaie = %d",i4,i5);
getchar();
    return 0;
}
