#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int r=0;r<=n;r++){
    int ns=n-r;
    int nos=n-ns;
    for(int s=1;s<=nos;s++){
    printf(" ");
    }
        for(int c=1;c<=ns;c++){
        printf("* ");
        }
    printf("\n");
}
    return 0;
}
/*



* * * * *
 * * * *
  * * *
   * *
    *






*/