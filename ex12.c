#include <stdio.h>

int main(int argc, char *argv[]) 
{
	int i = 0;
	while (i < argc) {
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}

	char *regions[] = {
		"Central Bohemian Region", "South Bohemian Region",
		"Plzeň Region",	"Karlovy Vary Region",
		"Ústí nad Labem Region"
	};

	int num_of_regions = 5;

	i = 0;

	while (i < num_of_regions) {
		printf("Region %d: %s\n", i, regions[i]);
		i++;
	}

	printf("----> Counting down...\n");

	i = num_of_regions;

	while(i > 0) {
		int index = num_of_regions - i;
		printf("Region %d: %s\n", index, regions[index]);
		i--;
	}

	return 0;
}