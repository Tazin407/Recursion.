//Printing 5->1 
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void fun(int n){
    if(n>5) return;
    fun(n+1);
    printf("%d\n", n);
}
int main(){
      
      fun(1);

    return 0;
}
