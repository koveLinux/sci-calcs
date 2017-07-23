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
	char help[] = "\tr: Rectangular math.\n\tb: Boxish math.\n\ts: Spherical math.\n\tc: C.C.P.ish math.\n\th: display this message.\n";

	float volume, length, breadth, height, radius;
	char formular;

	volume = 0;
	length = 0;
	breadth = 0;
	height = 0;
	radius = 0;

	/* ask for and get forumlar */
	formular = getMath();

	switch(formular)
	{
		
		case 'r':
			printf("Enter length, breadth, beight: ");
			scanf("%f, %f, %f", &length, &breadth, &height);
			volume = calcRectVol(length, breadth, height);
			goto print;
	
		case 'b':
			printf("Enter side, unit: ");
 			scanf("%f", &length);
			volume = calcBoxVol(length);
			goto print;

		case 's':
			printf("Enter radius: ");
			scanf("%f, %s", &radius);
			volume = calcSphereVol(radius);
			goto print;

		case 'c':
			printf("Enter radius, height: ");
			scanf("%f, %f", &radius, &height);
			volume = calcCCPVol(radius, height);
			goto print;

		case 'h':
			print_help:
				printf("%s", help);
				return 0;


		default:
			printf(ERROR);
			goto print_help;
	}

	print:
		printf(SUCCESS, volume);
		return 0;
}
