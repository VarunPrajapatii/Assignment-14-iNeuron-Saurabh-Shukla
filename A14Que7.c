// 7. Write a program to find second largest in an array.Take array values from the user.

#include<stdio.h>
int main()
{
    int a[10], i, j, max, temp, maxind;
    printf("Enter 10 positive numbers: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<10;i++)
    {
        max=0;
        for(j=i; j<10; j++)
        {
            if(a[j]>=max)
            {
                max=a[j];
                maxind=j;
            }
        }
        temp=a[i];
        a[i]=max;
        a[maxind]=temp;
    }
    printf("Second largest value is %d.", a[1]);

    return 0;
}