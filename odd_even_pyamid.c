#include <stdio.h>

int main() {
  int i,j,row;
  printf("enter rows\n");
  scanf("%d",&row);
  for(i=1;i<=row;i++){
      int n;
      if(i%2==0){n=2;}else{n=1;}
      for(j=1;j<=i;j++){
          printf("%d\b",n);
          n=n+2;
      }
      printf("\n");
  }
    return 0;
}
