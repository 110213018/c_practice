#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[5]={76, 32, 88, 45, 65};
    int num, i, flag=0;
    
    printf("�п�J�}�C���j�M��:");
    scanf("%d",&num);
    for (i=0; i<5; i++){
    	if (num == arr[i]){
    		printf("arr[%d]=%d",i,arr[i]);
    		flag=1;
    		break;
		}
	}
	if (flag!=1){
		printf("�S�����");
	}
	return 0;
    
}

