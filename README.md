# Peasantmultiplication

#This is my C code for a Computer Science assignment in School.

#include <stdio.h>


int main(){
	
	int num1=19;
	int num2=33;
	int result=0;

	if(num1%2!=0)		
		result=result+num2;

	while(num1>1) {
		num1=num1/2;
		num2=num2*2;
			if(num1%2!=0)
				result=result+num2;
			}
	printf("Das Ergebnis ist %d",result);
}
