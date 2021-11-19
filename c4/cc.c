#include<stdio.h>
#include<stdbool.h>
/*
Challenge 4 :

Créez une fonction divededby(int n,int a) qui retoune la division des deux valeurs.
 Utilisez la fonction dividedby() pour contrôler si le nombre est premier en retourne true, sinon on retourne false.
*/
float divideby(int nbr,int divideBy){
	float a=(float)nbr,b=(float)divideBy;
	return a/b;
}

bool isPremier(int nbr){
	if(nbr==0 || nbr==1){
		return false;  
	}else{
		for(int i=2;i<nbr;i++){
			float dividingRes=divideby(nbr,i);
			if(dividingRes==(int)dividingRes){
				return false;
			}

		}	
	}
	return true;
}
int main(){

	printf("entrez un nombre pour verifier si il est premier\n");
	int a;
	scanf("%d",&a);
	if(isPremier(a)){
		printf("\nle nombre %d est premier",a);
	}else{
		printf("\nle nombre %d n'est pas premier",a);
	}
	return 0;
}