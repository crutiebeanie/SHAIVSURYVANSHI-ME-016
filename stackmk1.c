#Include <stdio.h>
#define int a[10]={}
#define int top=-1;

void push(int val){
top++;
a[top]=val;
}
void pop(){
if(top>=0){
printf("%d", a[top]);
top--;}
else{
printf("stack is empty");
}
}
