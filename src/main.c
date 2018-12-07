#include <ansi_c.h>
#include "my_header.h"
#include <userint.h>
#include <string.h>

	
	char lign1[80]="nom triangle_A";
	char lign2[80]="nb de points 3";
	char lign3[80]= "Cordonnees 10 20 30 20 30 40";
    char n_pts[20];
	char nom_figure[100];
	
	unsigned char x1,x2,x3,y1,y2,y3;
	char x[8] = "x1,x2,x3";
	char y[8] = "y1,y2,y3";

int main(void)
{

	
	sscanf(lign1,"%*s %s",nom_figure);
	sscanf(lign2,"%*s %*s %*s %s",n_pts);
	sscanf(lign3,"%*s %u %*u %*u %*u %*u %*u",x1);
	sscanf(lign3,"%*s %*u %u %*u %*u %*u %*u",y1);
	sscanf(lign3,"%*s %*u %*u %u %*u %*u %*u",x2);
	sscanf(lign3,"%*s %*u %*u %*u %u %*u %*u",y2);
	sscanf(lign3,"%*s %*u %*u %*u %*u %u %*u",x3);
	sscanf(lign3,"%*s %*u %*u %*u %*u %*u %u",y3);

	

	
	printf("la figure %s possede %s sommets",nom_figure, n_pts);

	getchar();
 
}
