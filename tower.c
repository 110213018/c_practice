#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, num;
    printf("¿é¤J¡G");
    scanf("%d", &num);
 
	for (i=1; i<=num; i++){
		for (j=1; j<=num-i; j++){
			printf(" ");
		}
		for (j=1; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

// 3
//   *    i=1 j=2
//  * *   i=2 j=1
// * * *  i=3 j=0
