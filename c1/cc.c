#include<stdio.h>

/*
	Challenge 1 :

Créez une fonction add(int a , int b) qui permet de faire l'addition des deux nombres a et b.

*/
int add(int a,int b){
	return a=b;

}
int main(){
	int a,b;
	int entree=0;
	printf("ce programme vous aide a calculer aa somme de deux nombres\n");
	
	do{
		printf("\nentrez le premier nombre (nombre entier)\n");
		entree=scanf("%d",&b);
		if(entree==0){
			fflush(stdin);
		}

	}while(!entree);

	do{
		printf("\nentrez le deuxiemme nombre (nombre entier)\n");
		entree=scanf("%d",&a);
		if(entree==0){
			fflush(stdin);
		}

	}while(!entree);
	printf("\nresultat:\n\n%d + %d = %d",a,b,add(a,b));
	
	return 0;
}