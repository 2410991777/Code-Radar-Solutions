// #include <stdio.h>
// int main(){
//     int a,b;
//     char c;
//     scanf("%d %d %c",&a,&b,&c);
//     if(c== '+'){
//         printf("%d",a+b);
//     }else if(c== '-'){
//         printf("%d",a-b);
//     }else if(c== '*'){
//         printf("%d",a*b);
//     }else if(c== '/'){
//         printf("%d",a/b);
//     }else{
//         printf("error");
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int a, b;
    char c;
    
    scanf("%d %d %c", &a, &b, &c);

    if (c == '+') {
        printf("%d\n", a + b);
    } else if (c == '-') {
        printf("%d\n", a - b);
    } else if (c == '*') {
        printf("%d\n", a * b);
    } else if (c == '/' && b != 0) {
        printf("%d\n", a / b);
    } else {
        printf("error\n");
    }

    return 0;
}
