#include <stdio.h>
#include <stdlib.h>

int main() {
    int i=1, j, num;

    printf("輸入：");
    scanf("%d", &num);

    do {
        j = i;
        do {
            printf(" ");
            j++;
        } while (j < num); // j= 1 2 

        j = 1;
        do {
            printf("*");
            j++;
        } while (j <= i); // i 等於幾，就印出多少 * 

        printf("\n");
        i++;
    } while (i <= num);

    printf("\n");
    system("pause");
    return 0;
}

// 3
//   * i=1 j=2
//  ** i=2 j=1
// *** i=3 j=0

//int main(){
//	int num, i, j;
//	
//	printf("輸入樓高:");
//	scanf("%d",&num);
//	
//	for (i=1; i<=num; i++){
//		for(j=1; j<=num-i; j++){
//			printf(" ");
//		}
//		for (j=1; j<=i; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

