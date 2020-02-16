#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr[5],max=0,min=0,sum=0;
for (int i=0; i<5; i++) 
{
scanf("%d",&arr[i]);
sum+=arr[i];
}
min=sum;
for (int i=0; i<5; i++) 
{
int val=sum;

val=sum-arr[i];
if (val>=max){max=val;}
else if(val<min){min =val;}
}
printf("%d %d",min,max);
    return 0;
}
