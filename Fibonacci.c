#include<stdio.h>
int main(){
int n, t1=0, t2=1, nextterm;
printf("Enter the number of term:");
scanf("%d",&n);
printf("Fibonacci series:%d,%d",t1,t2);
for(int i=3; i<=n; i++){
nextterm=t1+t2;
printf("%d",nextterm);
t1=t2;
t2=nextterm;
}
return 0;
}
