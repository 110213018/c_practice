#include <stdio.h>
#include <stdlib.h>

int main(){
	int n=5, i, j, sum=1;
	for (i=1; i<=5; i++) {
		sum=1;
		for (j=1; j<=i; j++){
			sum*=j;
		}
		printf("%d! = %d\n",i,sum);
	}
	
	system("pause");
}


