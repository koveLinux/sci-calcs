/*
	Copyright 2017 Kove W. Ochre-Salter.
	This program along with all it's ascociates is and has been distributed under terms of the GNU General Public License Version 3 (GNU GPLv3).
*/

#include <stdio.h>
#include "../headers/scimath.h"
#include "../headers/mathio.h"
#include "../headers/color.h"

int
main(void)
{
	/* help string */
	char help[] = "\tr: rectangular math.\n\tb: boxish math.\n\tc: circular math.\n\tt: triangular math.\n\th: be helpful\n";

	float length, height, radius, breadth, area;
	char formular;
	length = 0;
	height = 0;
	radius = 0;
	breadth = 0;
	area = 0;

	formular = getMath();

	switch(formular)
	{

		case 'r':	
			printf("Enter length, height: ");
			scanf("%f, %f", &length, &height);
			area = calcRectArea(length, height);
			goto print;
	
		case 'b':
			printf("Enter length: ");
			scanf("%f", &length);
			area = calcBoxArea(length);
			goto print;

		case 'c':	
			printf("Enter radius: ");
			scanf("%f", &radius);
			area = calcCirArea(radius);
			goto print;

		case 't':
			printf("Enter base, height: ");
			scanf("%f, %f", &breadth, &height);
			area = calcTriArea(breadth, height);
			goto print;	

		case 'h':
			help:
				printf("%s\n", help);
				return 0;
		
		default:
			printf(ERROR);
			goto help;
	}

	print:
		printf(SUCCESS, area);
	return 0;
}
