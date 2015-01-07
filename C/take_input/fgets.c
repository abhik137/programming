/* read up to 10 integers from each line of standard input and print the sum for each line */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
char linebuf[1024];  /* A 1024 character buffer is more than enough for this problem */
char* token;
int sum;

  while (fgets(linebuf, sizeof(linebuf), stdin) !=0) {
    sum=0;
    token = strtok (linebuf," \t");  /* we are using space and tab as delimiters */
    while (token != NULL) {
        sum += atoi(token);
        token = strtok (NULL, " \t");
    }
    printf("%d\n",sum);
  }
return 0;
}

/*
ref:
	http://man7.org/linux/man-pages/man3/strtok.3.html
	http://www.progsoc.uts.edu.au/wiki/Programming_Competition_Tips#2._How_to_parse_standard_input_in_C
	http://stackoverflow.com/questions/6665585/strtok-problem-getting-the-first-token-of-a-string (this is a bad example, probably wrong, trust your own interpretation)
	http://stackoverflow.com/questions/53849/how-do-i-tokenize-a-string-in-c/54048#54048
  https://www.gnu.org/software/libc/manual/html_node/Finding-Tokens-in-a-String.html
*/