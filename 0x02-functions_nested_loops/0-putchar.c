#include "main.h"

/**function prints word usng putchar()
 * no standard libraries
 */
/*betty style doc for function main goes there */
int main(void)
{
	char zita = "_putchar\n";
	
	for (int i = 0; i != '\0'; i++){
		putchar(zita[i]);
	}
	return (0);
}
