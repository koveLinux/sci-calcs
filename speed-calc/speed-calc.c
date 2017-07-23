/*
        Copyright 2017 Kove W. Ochre-Salter.
        This program along with all it's ascociates is and has been distributed under terms of the GNU General Public License Version 3 (GNU GPLv3).
*/

#include <stdio.h>		//for printf, scanf
#include "../headers/scimath.h"		//for calcSpeed

int
main(void)
{
	/* distance and time */
	float dist, time;

	dist = 0;
	time = 0;

	printf("Enter distance, time: ");
	scanf("%f, %f", &dist, &time);
	/* printing the speed */
	printf("Speed = %f\n", calcSpeed(dist, time));
	
	return 0;
}
