#include <stdio.h>
/*
* 2.5 表达式(Expression)
*/
int main(void)
{
	int hour, minute;
	hour = 11;             /* assign the value 11 to hour */
	minute = 59;           /* set minute to 59 */

	int total_minute, total;
	total = total_minute = hour * 60 + minute;

	printf("%d:%d is %d minutes after 00:00\n", hour, minute, total_minute);
	printf("%d\n", total);
	printf("%d\n", total_minute = hour * 60 + minute + 1);

	printf("%d hours and %d percent of an hour\n", hour, minute * 100 / 60);
	printf("%d and %f hours\n", hour, minute / 60.0);

	return 0;
}