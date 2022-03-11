#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 * Return : Always 0 (Success)
 */
int main(void)
{
int n = rand();
if(n>0){
printf("is positive");
}
else if(n==0){
printf("is zero");
}
else
printf("is negative");
return 0;

}
