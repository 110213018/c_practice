#include <stdio.h>
#include <string.h>

void findNaNb(char ori[], char num[]);

int main() {
    // ori: タ絋计
    // num: 块璶瞦计(程 5 Ω)
    char ori[5];
    char num[5];
    int i;

    printf("叫块タ絋计: ");
    scanf("%s", ori);

    for (i = 0; i < 5; i++) {
        printf("叫块瞦代计: ");
        scanf("%s", num);
        findNaNb(ori, num);
    }
    return 0;
}

void findNaNb(char ori[], char num[]) {
    int aNum = 0;
    int bNum = 0;

    // р﹃锣俱计皚
    int intOri[4];
    int intNum[4];
    
    int v, i, j;

    for ( v = 0; v < 4; v++) {
        // 盢じ锣Θ俱计
        intOri[v] = ori[v] - '0';
        intNum[v] = num[v] - '0';
    }

    for ( i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            // 狦瞦计蛤タ絋计Τ单竚妓计, aNum+1
            if (intOri[i] == intNum[j] && i == j) {
                aNum += 1;
            }
            // 狦瞦计蛤タ絋计Τ单竚ぃ妓计, bNum+1
            if (intOri[i] == intNum[j] && i != j) {
                bNum += 1;
            }
        }
    }

    // 块碭A碭B
    printf("%dA%dB\n", aNum, bNum);
}

