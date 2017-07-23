/*
        Copyright 2017 Kove W. Ochre-Salter.
        This program along with all it's ascociates is and has been distributed under terms of the GNU General Public License Version 3 (GNU GPLv3).
*/

#include <stdio.h>	//for printf, scanf
#include "../headers/scimath.h"	//for calcDense()

int
main(void)
{
	/* Holds mass and volume */
	float mass, vol;
	
	mass = 0;
	vol = 0;

	printf("Enter mass, volume: ");
	scanf("%f, %f", &mass, &vol);
	/* Printing the density */
	printf("Density = %1.3f\n", calcDense(mass, vol));

	return 0;
}
