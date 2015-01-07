/**
 * ref:
 * https://stackoverflow.com/questions/314401/how-to-read-a-line-from-the-console-in-c
 * [*]http://stackoverflow.com/questions/5744393/how-to-explain-the-parameters-of-getline-in-c
 * [*]http://www.crasseux.com/books/ctutorial/getline.html
 * http://www.crasseux.com/books/ctutorial/getdelim.html#getdelim
 *
 * https://www.gnu.org/s/libc/manual/html_node/Line-Input.html
 * Prototype: ssize_t getline(char **lineptr, size_t *n, FILE *stream);
 */

/**
 * NOTE: getline() stops reading at first newline.
 * We can use getdelim() to specify some other delimiter
 * bytes_read = getline (&my_string, &nbytes, stdin);
 * bytes_read = getdelim (&my_string, &nbytes, '\n', stdin);
 * https://stackoverflow.com/questions/201992/how-to-read-until-eof-from-cin-in-c
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int bytes_read;
	// int nbytes = 100;
	size_t nbytes = 100;
	char *my_string;

	puts ("Please enter a line of text.");

	/* These 2 lines are the heart of the program. */
	my_string = (char *) malloc (nbytes + 1);
	bytes_read = getline (&my_string, &nbytes, stdin);

	if (bytes_read == -1)
		{
			puts ("ERROR!");
		}
	else
		{
			puts ("You typed:");
			puts (my_string);
		}	
	return 0;
}

/**
 * https://stackoverflow.com/questions/2550774/what-is-size-t-in-c
 * https://stackoverflow.com/questions/2454474/what-is-the-difference-between-printf-and-puts-in-c
 */