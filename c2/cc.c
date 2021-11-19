#include<stdio.h>

/*
Challenge 2 :

Créez une fonction echanger() pour échanger la valeur de a avec la valeur de b, qu'est ce que vous constatez ? affichez aussi l'etat initial
des variables a et b.
*/
void echanger(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a=8,b=9;
	printf("ce promme sert a echanger les valeurs de deux variables a et b\nmaintenant a=%d et b=%d",a,b);
	echanger(&a,&b);
	printf("\net apres l'echange les valeurs sont comme ca:\n a=%d et b=%d\n",a,b);
	return 0;
}