#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=1;
	int j=1;
    while (i<10) {
    	while (j<10){
    		printf("%d * %d = %-2d  ",i,j,i*j);  // 最多2位數，靠左對齊 
    		j++;
		}
		i++;
		j=1;
		printf("\n");
	}
	system("pause");
    return 0;
}
