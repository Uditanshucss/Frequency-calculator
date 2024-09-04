
#include <stdio.h>
#include<stdlib.h>

int main() {
    
   
    int arr[100000];
    printf("Enter the number of elements=");
    int n=0,c=0,neg=0,temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<0)
           neg=1;
        c++;
    }
   int max=arr[n-1],min=arr[0];
    for(int i=0;i<c;i++)
{
        if(max<arr[i])
    {
        max=arr[i];
    }
        if(min>arr[i])
    {
        min=arr[i];
    }
}
   int size=(max-min)+1;
    int b[size];
        for(int i=0;i<size;i++)
    {  
        b[i]=0;  
    }
    int index;
    for(int i=0;i<size;i++)
    {   if(neg==0)
         { 
             index=arr[i]-(min);
             b[index]++;
         }
        else if(neg>0)
        {
            index=arr[i]+abs(min);
             b[index]++;
            
        }
    }
    printf("Frequency of elements is-\n");
    for(int i=0;i<size;i++)
    {if(b[i]>0)
      {   if((i+min)!=0)
          printf("%d occurs %d times \n",i+min,b[i]);
      }
    }
}
