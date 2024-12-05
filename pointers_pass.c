# include <stdlib.h>
# include <stdio.h>

void info(int *p){
	printf("address = %X \t val = %d\n",p, *p);
}

int main(){
	int x = 10;
	int *ptr = &x;
	
	printf("x   address = %X\n", &x);
	printf("ptr address = %X\n",ptr);
	printf("©I¥s address\n");
	info(ptr);
	info(&x);
	system("pause");
	return 0;
	
	
} 
