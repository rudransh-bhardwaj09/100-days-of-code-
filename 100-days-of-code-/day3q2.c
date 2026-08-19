#include<stdio.h>
int main(){
int a,b,c;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("new value of a %d\n",a);
printf("new value of b %d\n",b);
return 0;
}
