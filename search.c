#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[5]={76, 32, 88, 45, 65};
    int num, i, flag=0;
    
    printf("請輸入陣列的搜尋值:");
    scanf("%d",&num);
    for (i=0; i<5; i++){
    	if (num == arr[i]){
    		printf("arr[%d]=%d",i,arr[i]);
    		flag=1;
    		break;
		}
	}
	if (flag!=1){
		printf("沒有找到");
	}
	return 0;
    
}

