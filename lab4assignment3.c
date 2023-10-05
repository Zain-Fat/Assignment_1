#include <stdio.h>

int main(int argc, char *argv[]){


char name[10];
printf("\nPlease enter your name:");
fgets(name, sizeof(name), stdin);


char age[4];
printf("\nPlease enter your age:");
fgets(age, sizeof(age), stdin);

char adres[10];
printf("\nPlease enter your address:");
fgets(adres, sizeof(adres), stdin);


printf("\t---------------------\n\t---------------------\n\t-------Welcome-------\n\t---------------------");

printf("\n\tName:%s\tAge:%s\tAddress:%s",name,age,adres);

printf("\t---------------------\n\t---------END---------\n\t---------------------\n\t---------------------\n");


}
