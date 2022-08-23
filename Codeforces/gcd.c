#include<stdio.h>
int main()
{
    int a,b,x,gcd;
    scanf("%d %d",&a,&b);
    //general_way
    /*if(a>b) x=b;
    else x=a;
    while(x>=1){
        if(a%x==0 && b%x==0){
            gcd=x;
            break;
        }
        else x--;
    }*/
    //divison_algorithm
    int t;
    if(a==0) gcd=a;
    else if(b==0) gcd=b;
    else {
        while(b!=0){
            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;
    }
    printf("GCD = %d\n",gcd);
    return 0;
}
