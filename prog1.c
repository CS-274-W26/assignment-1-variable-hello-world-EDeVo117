#include <stdio.h> // Necessary for printf()
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

    int myrand = rand() % 11;

    if (myrand < 5) {
        printf("Eat more beef, kick less cats\n");

    } else if (myrand < 10) {
        printf("FRODO LIVES\n");

    } else {
        printf("Larn is the best roguelike\n");

    }

    printf("Random int [0,10]: %d\n", myrand);

    return 0;
}
