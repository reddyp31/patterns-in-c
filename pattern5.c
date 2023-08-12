#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int r=0;r<=n;r++){
    int nos=n-r;
    for(int s=1;s<=nos;s++){
    printf(" ");
    }
        for(int c=0;c<=r;c++){
        printf("* ");
        }
    printf("\n");
}
    return 0;
}