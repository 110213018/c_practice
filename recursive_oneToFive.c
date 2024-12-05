#include <stdio.h>
#include <stdlib.h>
int oneToFive(int i){

	if (i<1){
		return 0;
	}else{
		oneToFive(i-1);
	}
	printf("%d\n",i);
}

int main(){
	oneToFive(5);
	system("pause");
}

// stack (先進後出)
// 			    	1
// 		    	2	2
// 	    	3	3	3
// 	   4	4	4	4
// 5   5	5	5	5
//
// i=
// 5	4	3	2	1
