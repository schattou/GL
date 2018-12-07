//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "Tp_lib_suite.h"
 int main(void){
	char phrase [100]= "Je m'appelle prenom nom et je suis ne en annee";
	char nom [100];
	char prenom [100];
	unsigned long int annee=2000;
	
	printf("Nom SVP: ");
	scanf("%s", nom);
	printf("Prenom SVP: ");
	scanf("%s", prenom);
	printf("Annee SVP: ");
	scanf("%lu", &annee);
	sprintf(phrase, "Je m'appelle %s %s et je suis ne en %lu", prenom, nom, annee);
	
	printf ("%s\0", phrase);
	
	return 0;
}
