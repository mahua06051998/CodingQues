#include<stdio.h>
void check(char arr[],int i,int open,int close,int MAX)
{
if(close == MAX){
        arr[i] = '\0';
printf("%s\n",arr);
}

if(open < MAX){
arr[i] = '(';
check(arr,i+1,open+1,close,MAX);
}

if(close < open) {
arr[i] = ')';
check(arr,i+1,open,close+1,MAX);
}
}

int main()
{
    int MAX = 2;
char arr[MAX];
check(arr,0,0,0,MAX);
}
