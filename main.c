#include <stdio.h>
/*
* 2.4 赋值(Assignment)
*/
int main(void)
{
	char firstletter;
	int hour, minute;
	firstletter = 'a';   /* give firstletter the value 'a' */
	hour = 11;             /* assign the value 11 to hour */
	minute = 59;           /* set minute to 59 */

	printf("firstletter is %c\n", firstletter);
	printf("Current time is %d:%d\n", hour, minute);

	return 0;
}