
#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int x,y,r;
    printf("Enter Two number:\n");
    scanf("%d%d",&x,&y);
    r = add(x,y);
    printf("%d",r);
}
