#include <stdio.h>

int main(int argc, char *argv[]){

char *string[12];

string[0] = "January";
string[1] = "Fabruary";
string[2] = "Mars";
string[3] = "April";
string[4] = "May";
string[5] = "June";
string[6] = "July";
string[7] = "Augest";
string[8] = "September";
string[9] = "October";
string[10] = "November";
string[11] = "December";

for (int i=0; i < 12; i++){
	printf("%s\n",string[i]);
}


}
