#include<stdio.h>
#include<stdbool.h>
/*
	
	Challenge 9 :

Ecrivez un programme C pour trouver la position d'une valeur cible dans un tableau en utilisant la recherche linéaire.
*/
int main(){
	
	
	int valeurRecherche,taileDeTable,indiceDeValeur=-1;
	printf("on va commencer a chercher une valeur dans notre table des nombres avec l'algorithm de la recherche lineaire\n");
	printf("entrez le nombres des valeur que tu soit traiter  \n");
	scanf("%d",&taileDeTable);
	int nbrs[taileDeTable];
	for(int i=0;i<taileDeTable;i++){
			printf("\nentrez le %d%s nombre  ",(i+1),(i+1==1?"er":"eme"));
			scanf("%d",&nbrs[i]);
	}
	printf("\nentrez le nombre a rechercher  \n");
	scanf("%d",&valeurRecherche);
	for(int i=0;i<(sizeof(nbrs)/sizeof(nbrs[0]));i++){
		if(valeurRecherche==nbrs[i]){
			indiceDeValeur=i;
			break;
		}

	}

	if(indiceDeValeur!=-1){
		printf("\nl'element %d est dans l'indice %d",valeurRecherche,indiceDeValeur);
	}else{
		printf("\nla valeur %d n'exist pas dans la table",valeurRecherche);
	}


	return 0;
}