#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int r=0;r<=2*n;r++){
    int cr=r>n?2*n-r:r;
    for(int c=0;c<=cr;c++){
        printf("* ");
    }
    printf("\n");
}
    return 0;
}