#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int num=0,a,b,c,d;
    a=n/10000;
    num=n%10000;
    b=num/1000;
    num=num%1000;
    c=num/100;
    num=num%100;
    d=num/10;
    num=num%10;
    int sum=a+b+c+d+num;
    printf("%d",sum);
    
    return 0;
}
