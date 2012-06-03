#import <stdio.h>

int main(int argc, char* argv[])
{
	int i = 0;

	for (i = 1; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}

	char *regions[] = {
		"Prague",
		"Central Bohemian Region",
		"South Bohemian Region",
		"Plzeň Region",
		"Karlovy Vary Region",
		"Ústí nad Labem Region",
		"Liberec Region",
		"Hradec Králové Region",
		"Pardubice Region",
		"Olomouc Region",
		"Moravian-Silesian Region",
		"South Moravian Region",
		"Zlín Region",
		"Vysočina Region"
	};

	int number_of_regions = 14;

	for (i =0; i < number_of_regions; i++) {
		printf("region %d: %s\n", i, regions[i]);
	}

	return 0;
}
