#include <stdio.h>
#include "selectionSort.h"
#include <stdlib.h>
#include <getopt.h>
#include <string.h>

const char VERSIONSNR[] = "0.1";

int main(int argc, char* argv[]) {
    int option;
    char * ptr;
    while((option = getopt(argc, argv, "hvg:")) != -1)
        switch(option) {
        case 'h':
            printf("-h = Hilfe\n");
            printf("-v = Version\n");
            printf("-g = Auswahl, ob aufsteigend oder absteigend sortiert\n");
	    printf("     hi für aufsteigend und lo für absteigend\n");
            exit(0);
        case 'v':
            printf("Version: %s\n", VERSIONSNR);
            exit(0);
	case 'g':
	    ptr = optarg;
	    if (strcmp(ptr, "hi")==0){
		    printf("Es wird aufsteigend sortiert\n");
	    }
	    else if (strcmp(ptr, "lo")==0){
		    printf("Es wird absteigend sortiert\n");
	    }
	    else {
		    printf("Vertippt? Es wird aufsteigend sortiert\n");
	    }
	    break;
	default:
	    printf("Da ist etwas schiefgegangen.\n");
	    printf("-h für Hilfe");
	    exit(0);
	}
    int daten[] = {5, 2, 1, 4, 3};
    int laenge = sizeof(daten) / sizeof(int);
    printf("Unsortiertes Array:\n");
    printArray(daten, laenge);
    if (strcmp(ptr, "lo")==0){
	    selectionSortDown(daten, laenge);
    }
    else{
	    selectionSortUp(daten, laenge);
    }
    printf("Sortiertes Array:\n");
    printArray(daten, laenge);
}
