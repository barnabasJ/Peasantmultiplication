# Peasantmultiplication

#This is my C code for a Computer Science assignment in School.

/*	Alen Frey	
/	Bauernmultiplikation
/	ITB1_3
/	UE05 Aufgabe 1/5
*/

#include <stdio.h>



int main()
{
	
/*	
//	Case 1= 19*33
//	erwartetes Ergebnis ist 627
*/
	int num1=19;
	int num2=33;


/*	
//	Case 2= 0*0
//	erwartetes Ergebnis ist 0
/
	int num1=0;
	int num2=0;
*/

/*	
//	Case 3= 10*10
//	erwartetes Ergebnis ist 100
/
	int num1=10;
	int num2=10;
*/


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


