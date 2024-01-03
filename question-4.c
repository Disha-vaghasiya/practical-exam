/*Q.4 WAP to print all boundary elements of a given 2D array.

24163
9   7
8   5
3   1
23957
*/

#include<stdio.h>
main(){
	int a[5][5]={{2,4,1,6,3},{9,5,4,6,7},{8,2,6,3,5},{3,4,8,5,1},{2,3,9,5,7}};
	int i,j;
	for(i=0; i<5;i++){
		for(j=0; j<5; j++){
			if(i==0 || j==0 ||i==4 || j==4){
				printf("%d",a[i][j]);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
