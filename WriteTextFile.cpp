#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *f = fopen("file.txt", "w");
	if (f == NULL)
	{
		printf("Error opening file!\n");
		exit(1);
	}
	
	const char *text = "TestGitHubEdit";
	fprintf(f, "Some text: %s\n", text);
	
	int i = 1;
	float py = 3.1415927;
	fprintf(f, "Integer: %d, float: %f\n", i, py);
	
	char c = 'A';
	fprintf(f, "A character: %c\n", c);
	
	fclose(f);
	return 0;
}