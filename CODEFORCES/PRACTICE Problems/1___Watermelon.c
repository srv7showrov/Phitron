#include<stdio.h>
int main (){
    int a;
    int b = 2;
    scanf("%d", &a);
    int reminder = a % b;
    if (a == 2 && reminder == 0)
    {
        printf("NO");
    }
    else if (reminder == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    } 
 
    return 0;
}



#include<stdio.h>
int main (){
    int a;
    int b = 2;
    scanf("%d", &a);
    int reminder = a % b;
    if (a == 2)
    {
        printf("NO");
    }
    else if (reminder == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    } 
 
    return 0;
}