/**
 * https://www.owasp.org/index.php/Dangerous_Function
 * http://www.dwheeler.com/secure-class/Secure-Programs-HOWTO/dangers-c.html
 * https://stackoverflow.com/questions/167165/what-c-c-functions-are-most-often-used-incorrectly-and-can-lead-to-buffer-over
 * https://stackoverflow.com/questions/1694036/why-is-the-gets-function-dangerous-why-should-it-not-be-used
 * https://www.gnu.org/software/libc/manual/html_node/POSIX-Safety-Concepts.html
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char str[100];
	int i;

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	/* remove newline, if present */
	i = strlen(str)-1;
	if( str[ i ] == '\n') 
			str[i] = '\0';

	printf("This is your string: %s", str);

	return 0;
}