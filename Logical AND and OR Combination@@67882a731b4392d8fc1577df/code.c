#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input two space-separated numbers
    scanf("%d %d", &num1, &num2);
    
    // Condition check using '&&' and '||'
    if ((num1 > 0 && num2 < 0) || (num1 == 0 && num2 == 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
