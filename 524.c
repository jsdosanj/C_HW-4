/* (Temperature Conversions) Implement the following integer functions:
a) Function celsius returns the Celsius equivalent of a Fahrenheit temperature.
b) Function fahrenheit returns the Fahrenheit equivalent of a Celsius temperature.
c) Use these functions to write a program that prints charts showing the Fahrenheit equivalents 
of all Celsius temperatures from 0 to 100 degrees, and the Celsius equivalents of
all Fahrenheit temperatures from 32 to 212 degrees. Print the outputs in a tabular for-
mat that minimizes the number of lines of output while remaining readable. */

#include <stdio.h>
#include <math.h>

float CelsiusToFahrenheit(float);
float fahrenheitToCelsius(float);

int main()
{
	float tempC = -100;
	float tempF;
	
	printf( "  Fahrenheit\tCelsius\t\tCelsius\tFahrenheit\n\n" ); // print column headers

	for ( tempF = -40; tempF <= 212; ++tempF ) //for loop to print the columns of temperatures as long as it's in the celcius range
	{
		printf("\n\t%-2.0f\t%-2.1f", tempF, fahrenheitToCelsius(tempF));
		if(tempC <= 100)
		{
			printf("\t\t%-2.0f\t%-2.1f", tempC, CelsiusToFahrenheit(tempC) );
			tempC+=1;
		}
	} //end for
	getchar();
	return 0;
}//end main

    float CelsiusToFahrenheit(float FtempC) // Call Function for °C to °F	Multiply by 9, then divide by 5, then add 32
    {
	    return ((FtempC * 9) / 5) + 32;
    }//end fahrenheit conversion function

    float fahrenheitToCelsius(float FtempF) //Call function for °F to °C	Deduct 32, then multiply by 5, then divide by 9
    {
    	return ((FtempF - 32) * 5) / 9;
    }//end CelsiUs Conversions function 