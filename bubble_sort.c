#include<stdio.h>
#include<stdlib.h>
int main(){
	//declare variables //

	int data[6] ={45, 43, 93, 12, 78, 10};
	int i,j,temp;

	for(i=0; i<6 ; i++){

		for(j=0; j<6-i-1; j++){
			if(data[j] > data[j+1]){
				// swap //
				temp 		= data[j];
				data[j] 	= data[j+1];
				data[j+1]	= temp;
			}
		}
		
	}


	// now print the value of data //

	for(i=0; i<6 ; i++){
		printf("data[%d] = %d \n",i,data[i]);
	}
	
}
