#include <stdio.h>

int main() {
    int numbers[1000];
    int n;

    printf("ใส่จำนวนตัวเลขที่จะใส่: ");
    scanf("%d", &n);

    printf("ใส่จำนวนเต็ม %d ตัว: ", n);
    for (int i = 0; i < n; i++) {scanf("%d", &numbers[i]);}

    printf("ตัวเลขลำดับย้อนกลับ: ");
    for (int i = n - 1; i >= 0; i--) {printf("%d ", numbers[i]);}
       
    printf("\n");
    
    return 0;
}
