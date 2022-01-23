#include <stdio.h>
int max_of_four(int,int,int,int);
int max_of_four(int a,int b,int c,int d)
{
int max = 0;
    
    if(max <= a) max = a;
    if(max <= b) max = b;
    if(max <= c) max = c;
    if(max <= d) max = d;
    return max; 
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