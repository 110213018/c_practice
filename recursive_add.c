#include <stdio.h>
#include <stdlib.h>
int add(int num){

	if (num<=1){
		return 1;
	}else{
		return num+add(num-1);
	}
}

int main(){
	int num;
	printf("¿é¤J¤@¼Æ¦r:");
	scanf("%d",&num);
	
	printf("total = %d\n",add(num));
	
	system("pause");
}


