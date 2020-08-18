#include<stdio.h>
#include<string.h>
#define size 100
int main()
{
  int arr[size],n,i,j,sum=0,l,a[]={1,2,3,4,5,6,7,8,9,10},k,count=0;
  char b[][10]={"one","two","three","four","five","six","seven","eight","nine","ten"},c[20];
  scanf("%d",&n);
  for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
  for(i=0;i<n;i++)
  {
   for(k=0;k<10;k++)
  {
    if((arr[i]==a[k]))
    {  l=strlen(b[k]);
       strcpy(c,b[k]);
       //printf("%s",c);
       for(j=0;j<l;j++)
       {
          if(c[j]=='a' || c[j]=='e' || c[j]=='i' || c[j]=='o' || c[j]=='u')
            sum+=1;
       }
    }
  }
  }
   //printf("%d\n",sum);
  for(i=0;i<n;i++)
  {
    for(j=i;j<n;j++)
     {
        if((arr[i]+arr[j])==sum)
           { //printf("{%d,%d}",arr[i],arr[j]);
              count++;
            }
     }
  }
   if(count-1==-1)
      printf("zero");
    else
      printf("%s",b[count-1]);
  return 0;
}
