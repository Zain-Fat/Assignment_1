#include <stdio.h>

int main(int argc, char *argv[]){
int hours =0;

printf("Please enter a number of hours:");
scanf("%d",&hours);
//int hour=0;
//gets(hour, sizeof(hour), stdin);
int sec=0;
sec = hours * 60 * 60;

printf("number of seconds in %d hour(s) is:%d seconds\n",hours,sec);





}
