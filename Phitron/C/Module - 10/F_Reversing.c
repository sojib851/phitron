#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    for (int i = 0, j = n; i < n; i++, j--)
    {
        printf("%d ", a[j]);
    }
    
    

    return 0;
}