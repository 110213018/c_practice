#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=1, num;
	
	printf("輸入：");
    scanf("%d", &num);
    
    while(num!=10){
		printf("輸入：");
		scanf("%d", &num);
		i++;
	}
	printf("花%d次猜對\n",i);
	system("pause");
    return 0;
}
