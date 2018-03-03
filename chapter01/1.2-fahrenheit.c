#include <stdio.h>

/*
	Celsius = (5/9) * (Fahrenheit-32)

*/

main() {

	float fahr, celsius;
	int lower, upper, step;

	lower = 0;		// lower limit of temperature table
	upper = 300;	// upper limit
	step = 20;

	fahr = lower;

	printf("Fahr.\tCelsius\n==============\n");

	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr += step;
	}

	celsius = -20;
	step = 3;
	upper = 40;

	printf("\n\nCelsius\tFahr.\n==============\n");

	while (celsius<=upper) {
		fahr = (celsius+32) * (9.0/5.0);
		printf("%2.0f\t%6.1f\n", celsius, fahr);
		celsius += step;
	}
}
