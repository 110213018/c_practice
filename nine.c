#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	int j;
    for (i=1; i<10; i++) {
    	for (j=1; j<10; j++){
    		printf("%d * %d = %2d  ",i,j,i*j);  // 程2计綼オ癸霍 
		//  printf("%d * %d = %2d  ",i,j,i*j);  // 程2计綼癸霍
		//  printf("%d * %d = %02d  ",i,j,i*j);  // 程2计干箂 
		}
		printf("\n");
	}
    return 0;
}
