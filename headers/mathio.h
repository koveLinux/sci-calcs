/*
        Copyright 2017 Kove W. Ochre-Salter.
        This program along with all it's ascociates is and has been distributed under terms of the GNU General Public License Version 3 (GNU GPLv3).
*/

/* is displayed on unsuccessful computation */
#define ERROR RED"Error"RESET": unknown argument.\nbeing helpful\n"
/* opposite of above */
#define SUCCESS GREEN"Object"RESET" = %f\n"

char
getMath(void);

char
getMath(void)
{
        char formular;

        printf("Enter formular: ");
        scanf("%c", &formular);
        return formular;
}
