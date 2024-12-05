#include <stdio.h>
#include <stdlib.h>

int main() {
    int num,i,score,fail=0;  // num: 學生數, score: 學生成績, fail: 不及格學生數 
    float sum,average;       // sum: 總分, average: 平均 

    printf("輸入學生人數：");
    scanf("%d", &num);

	for (i=1; i<=num;i++){   // 輸入每位學生的成績, 並計算總分跟不及格人數 
		printf("輸入第%d位學生的成績：",i);  
    	scanf("%d", &score);
    	sum += score;
    	if(score<60){
    		fail++;
		}
	}
	average= sum/num;       // 算平均 
	printf("平均成績是：%3.2f\n",average);
    printf("不及格人數是：%d\n",fail);
    system("pause");
}

