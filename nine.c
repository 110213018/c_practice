#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	int j;
    for (i=1; i<10; i++) {
    	for (j=1; j<10; j++){
    		printf("%d * %d = %2d  ",i,j,i*j);  // �̦h2��ơA�a����� 
		//  printf("%d * %d = %2d  ",i,j,i*j);  // �̦h2��ơA�a�k���
		//  printf("%d * %d = %02d  ",i,j,i*j);  // �̦h2��ơA�ɹs 
		}
		printf("\n");
	}
    return 0;
}
