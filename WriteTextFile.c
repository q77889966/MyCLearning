#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *f = fopen("file.txt", "w");
	if (f == NULL)
	{
		printf("\n");
		exit(1);
	}
	
	const char *text = "TestGitHubEdit";
	fprintf(f, "%s\n", text);
	
	int i = 1;
	float py = 3.1415927;
	fprintf(f, " %d %f\n", i, py);
	
	char c = 'A';
	fprintf(f, "%c\n", c);
	
	fclose(f);
	return 0;
}
