#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
/*
Challenge 5 :

Écrivez un programme en C pour trier une liste d'éléments en utilisant l'algorithme de tri par fusion (merge sort).

*/

/**
	used for testing reasons to print an arrays values in a single line
*/
void printArr(int t[],int taile){
	printf("\n");
	for(int i=0;i<taile;i++){
		if(i==1)
			printf("|\t");
		printf("%d\t",t[i]);
	}
}
void printArrFromTo(int t[],int startIndex,int endIndex){
	printf("\n");
	for(int i=startIndex;i<=endIndex;i++){
		//if(i==taile/2)
		//	printf("|\t");
		printf("%d\t",t[i]);
	}
}

/**
	takes the pointers of the tow numbers to swap
*/
void swapTowNbrs(int * a,int * b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
/*
*exchange to intervals with the same length 
*/
//
void swapInterval(int ar[],int part1Start,int part1End,int part2Start,int part2End){
	if((part1End+1)!=part2Start || (part2End-part1Start)<=0 ){
		printf("\ninvalide interval provided for swap interval function");
	}else{
		//let's first create an organized table in the wanted and then insert it i the original table
		int tempTable[part2End-part1Start];

		//let's first insert elemnts fro the second part
		for(int i=0;i<=(part2End-part2Start);i++){ 

		int intervalLength=(part1End-part1Start);
		for(int i=0;i<=intervalLength;i++){
			ar[part1Start+i]=tempTable[i];
		}

	}

}}
/**
	to sort an integers array using merge sort algo
*/			//{8,6,22,118,98,2}, 0 , 5
void mergeSort(int arr[],int startIndex,int endIndex){
	int intervalLength=endIndex-startIndex;//5
	if(intervalLength>1){
		int middleIndex=startIndex+intervalLength/2;
		printf("\nmergeSort length is bigger than 1");
		//       arr , 0        ,  2
		mergeSort(arr,startIndex,middleIndex);
		//		arr  , 3             ,5
		mergeSort(arr,middleIndex+1,endIndex);
		// if one interval's elements are bigger than the scond then let's swap them
		// part 1: 4,5,6  and aecond part 1,2,3 are tow parts
		//so if the first element in part 1 is bigger than the last element in part tow lets swap them
		printf("\ncomparing tow halfs");
		printArrFromTo(arr,startIndex,(startIndex+intervalLength)/2);
		printf("\nand");
		printArrFromTo(arr,(startIndex+intervalLength/2)+1,endIndex);
		if(arr[startIndex]>arr[endIndex]){
			printf("found that %d is bigger than %d so swaping",arr[startIndex],arr[startIndex]>arr[endIndex]);
			swapInterval(arr,startIndex,(startIndex+intervalLength)/2,(startIndex+intervalLength/2)+1,endIndex);
		}

	}else if(intervalLength==1){
		if(arr[startIndex] > arr[endIndex]){
			printf("\nmergeSort let's swap %d with %d",arr[startIndex],arr[endIndex]);
			swapTowNbrs(&arr[startIndex],&arr[endIndex]);
		}
	}else{
		printf("\nthe table size is 0 so there in nothing to sort\n");	
	}

}

void testPointer(int ar[]){
	printf("\npointer passed to the function is %p",ar);
}
int main(){
	int table[]={8,6,22,118,98,2};
	int length=sizeof(table)/sizeof(table[0]);
	printArr(table,length);
	mergeSort(table,0,length-1);
	printArr(table,length);
	return 0;
}

