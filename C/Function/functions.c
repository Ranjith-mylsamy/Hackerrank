#include <stdio.h>
int max_of_four(int,int,int,int);
int max_of_four(int a,int b,int c,int d)
{
    int max;
if(a>b){
    if(a>c){
        if(a>d){
            max=a;
        }
        else{
            max=d;
        }
    }
}
if(b>c){
    if(b>d){
        max=b;
    }
    else{
        max=d;
    }
}
if(c>d){
   max=c;
}
else{
    max=d;
}
return max;
}
int main()
{
    int a,b,c,d,ans;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    ans=max_of_four(a,b,c,d);
    printf("%d",ans);
    return 0;
}
