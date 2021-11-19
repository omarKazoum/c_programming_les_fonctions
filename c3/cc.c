#include<stdio.h>
#include<stdbool.h>
/*
Challenge 3 :
Créez une fonction bool isPremier() pour vérifier si un nombre 
il est premier ou non (constatez que le type de la fonction est bool, donc vous devez créez votre type Bool).
*/
bool isPremier(int nbr){
	if(nbr==0 || nbr==1){
		return false;  
	}else{
		for(int i=2;i<nbr;i++){
			if((nbr%i)==0){
				return false;
			}

		}	
	}
	return true;
}
int main(){
	
	printf("entrez un nombre pour verifier si il est premier\n");
	int nbr;
	scanf("%d",&nbr);
	printf("\nle nombre %d %s",nbr,(isPremier(nbr))? "est premier":"n'est pas premier");

	return 0;
}