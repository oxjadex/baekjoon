#include <stdio.h>
int main (){
    int n, i, j, x, stack[100000];
    char word;
    scanf("%d", &n);
    for (i=0; i<n; i++)  {
        scanf("%s %d", &word, &x);
        if (word == "push") stack[i]=x;
        if else (word == "pop") {
            for (j=1; j<i; j++) printf("%d", stack[j]);
        }
        if else (word == "size") printf("%d", i+1);
        if else (word == "empty") printf("%d", i==0? 0 : 1);
        if else (word == "top") printf("%d", stack[0]);
    }
}