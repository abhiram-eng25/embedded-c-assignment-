#include<stdio.h>
#include<limits.h>   
int getsecondlargest(int arr[],int a)
{
   int first = INT_MIN;
   int second = INT_MIN;
   for(int i = 0;i < a;i++)
   {
    if(arr[i] > first)
     {
      second = first;
      first  =arr[i];
     }
    else if (arr[i] > second && arr[i] !=first)
    {
     second = arr[i];
    }
   }
    return second;
}

int main()
{
    int arr[] = {13, 1, 20, 35, 1};
    int a=sizeof(arr) / sizeof(arr[0]);
    printf("second laregest element is: %d\n",getsecondlargest(arr, a));
     return 0;
}
 