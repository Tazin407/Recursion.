#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int fun(char a[], int i)
{
    if(a[i]=='\0') return 0;
    int l=fun(a,i+1);
    return l+1;
}
int main(){
      char arr[6]="Tazin";
      int length =fun(arr, 0);
    printf("%d", length);
    return 0;
}
