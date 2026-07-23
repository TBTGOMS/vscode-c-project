#include <stdio.h>



int main() {

    long long a = 0;

    long long b = 0;

    while(scanf("%lld%lld",&a,&b)!=EOF)

    {
        if(a==b)
        {

            printf("%lld=%lld\n",a,b);

        }
        else if(a>b)
        {

            printf("%lld>%lld\n",a,b);

        }
        else 
        {

             printf("%lld<%lld\n",a,b);

        }
    } 

    return 0;

}