#include <stdio.h>
int main() {
    int arr[] = {12,15,16};
    int i,j;
    
    for(i=0;i<8;i++){
        printf("{");
        for(j=0;j<3;j++){
            if(i&(1<<j)){
                printf("%d ",arr[j]);
            }
        }printf("}");
    }
    return 0;
}