#include <stdio.h>
     int main(){
	int n,i,j;
	printf("Enter number of elements you want: ");
	scanf("%d",&n);
	printf("You entered %d element(s)", n);
	for(i=0;i<=n;i++){
		for(j=1;j<=i;j--){
			printf("\n ",j);}	
			printf("*",i);
			  }
return 0;}

			
