#include <stdio.h>
int gcdmain(int a, int b){
    while(b!=0){
        int temp=b;
        a=a%b;
        temp=a;
    }
    return a;
}
int main() {
    int sug, diz;
    scanf("%d",&sug);
    scanf("%d",&diz);
    int result=gcdmain(sug, diz);
    printf("your result is %d", result);
    return 0;
}