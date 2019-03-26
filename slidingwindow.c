#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    int i = 0, j = k;
    printf("%d\n", sum);
    while (j != n)
    {
        sum -= arr[i];
        sum += arr[j];
        i++;
        j++;
        printf("%d\n", sum);
    }
    return 0;
}
