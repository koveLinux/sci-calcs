/*
        Copyright 2017 Kove W. Ochre-Salter.
        This program along with all it's ascociates is and has been distributed under terms of the GNU General Public License Version 3 (GNU GPLv3).
*/

#define PI 3.14
#define HALF 0.5

/* Fuction Declarations: */

double
calcRectVol(float Length, float Breadth, float Height);
double
calcBoxVol(float Length);
double
calcSphereVol(float radius);
double
calcCCPVol(float radius, float height);
double
calcRectArea(float length, float height);
double
calcBoxArea(float length);
double
calcCirArea(float radius);
double 
calcTriArea(float base, float height);
double 
calcDense(float mass, float volume);
double 
calcSpeed(float distance, float time);

/* Function Definitions: */

/* Takes 3 arguments and returns their product */
double 
calcRectVol(float Length, float Breadth, float Height)
{
        return Length * Breadth * Height;
}

/* Takes 1 argumanent and returns its cubed value */
double 
calcBoxVol(float Length)
{
        return Length * Length * Length;
}

/* Takes 1 argument and returns the volume of sphere */
double
calcSphereVol(float radius)
{
	return (4.0 / 3.0) * PI * (radius * radius * radius);
}

/* Takes 2 arguments and returns the volume of the cylender, cone or pyramid */
double 
calcCCPVol(float radius, float height)
{
	return (PI * (radius * radius)) * height;
}

/* Takes 2 arguments and returns their product */
double 
calcRectArea(float length, float height)
{
	return length * height;
}

/* Takes 1 argument and returns it's square value */
double 
calcBoxArea(float length)
{
	return length * length;
}

/* Takes 1 argument and returns the area of the circle */
double 
calcCirArea(float radius)
{
	return PI * (radius * radius);
}

/* Takes 2 arguments and returns their product */
double
calcTriArea(float base, float height)
{
	return HALF * base * height;
}


/* Takes 2 arguments and returns their product */
double 
calcDense(float mass, float volume)
{
	return mass / volume;
}

/* Takes 2  arguments and returns their qoutient */
double
calcSpeed(float distance, float time)
{
	return distance / time;
}
