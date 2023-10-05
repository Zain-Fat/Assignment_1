#include <stdio.h>

int main(int argc, char *argv[]){


int numb[3];
int max =0;
int min =0;
for(int i=0; i<3; i++){
	printf("Please enter integer %d:",i+1);
	scanf("%d",&numb[i]);
	max = numb[0];
	min = numb[0];

	for(int j=0; j<3;j++){
		if(max < numb[j]){
			max = numb[j];}
		if(min > numb[j]){
			min = numb[j];}
		}
}

int avreg=(numb[0]+numb[1]+numb[2])/3;
printf("integers are:%d, %d, %d\nMax is:%d\nMin is:%d\nAverage is:%d.\n",numb[0],numb[1],numb[2],max,min,avreg);


}
