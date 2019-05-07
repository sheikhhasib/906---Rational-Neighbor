#include<stdio.h>
int main()
{
    long long h,a,s,c;
    double bul;
    while(scanf("%lld %lld", &h, &a) == 2){
        scanf("%lf",&bul);
        long double t1 = (long double)h/a,t2;
        for(s=1; ;s++)
        {
            c = (long long)(t1*s);
            while(h*s>=a*c)
                c++;
            t2 = (long double)c/s;
            if(t2-t1<=bul){
                printf("%lld %lld\n",c,s);
                break;
            }
        }
    }
    return  0;
}
