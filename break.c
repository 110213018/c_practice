#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=1, num;
	
	printf("��J�G");
    scanf("%d", &num);
    
    while(num!=10){
		printf("��J�G");
		scanf("%d", &num);
		i++;
	}
	printf("��%d���q��\n",i);
	system("pause");
    return 0;
}
