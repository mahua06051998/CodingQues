#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
long int N,x,y,S;
int count = 0;
scanf("%ld",&N);
int arr1[N];
int arr2[N];
for(int i = 0;i<N;i++)
{
scanf("%ld %ld",&x,&y);
arr1[i] = x;
arr2[i] = y;
}
scanf("%ld",&S);

for(int i=0;i<N;i++){
  for(int j=i;j<N;j++){

   if((abs(abs(arr1[i]) - abs(arr1[j])) +abs(abs(arr2[i]) -abs(arr2[j]))) == abs(S))
   {
        count++;
        if(i != j)
            count++;
   }



  }
}
printf("%ld",count);
}
