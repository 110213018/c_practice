#include <stdio.h>
#include <stdlib.h>
void palindrome(int n){
	char next;
	
	if( n <= 1)
	{
		next = getche();
		printf("\n");
		putchar(next);
	}else{
		next = getche();
		palindrome(n-1);
		putchar(next);
	}

}

int main(){
	int i = 5;
	
	printf("�п�J 5 �Ӧr���G\n");
	palindrome(i);
	printf("\n");
	
	system("pause");

}


