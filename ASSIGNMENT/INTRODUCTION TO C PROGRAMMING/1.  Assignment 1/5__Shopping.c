#include<stdio.h>
int main(){
    long long int N, baki;
    scanf("%lld", &N);
    baki = N - 1000;
    if (N>1000)
    {
        printf("I will buy Punjabi\n");
        if(baki>=500)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    }
    else
    {
        printf("Bad luck!");
    }
    return 0;
}