#include <stdio.h>

struct name
{
	char first_name[20];
	char last_name[20];
};
struct student
{
	struct name n;
	char dept[10];
	int id;
};

main()
{
	struct student s1 = {"Bruce", "Wayne", "Forensic", 1337};
	printf("%s %s %s %d\n", s1.n.first_name, s1.n.last_name, s1.dept, s1.id);
}
