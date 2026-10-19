#include "prs.h"

static void to_upper_str(char str[]) ;

void pr1(void) {

    char input_str[MAX_WORD_L+1], smallest_str[MAX_WORD_L+1], largest_str[MAX_WORD_L+1];
    int first = 1, ask = 1;
    while (ask) {
        printf("Enter word: ");
        scanf("%s", input_str);
        if (strlen(input_str) == 4) {
            ask = 0;
        } else if (first) {
            strcpy(smallest_str, input_str);
            strcpy(largest_str, input_str);
            first = 0;
        } else if (strcmp(input_str, smallest_str) < 0) {
            strcpy(smallest_str, input_str);
        } else if (strcmp(input_str, largest_str) > 0) {
            strcpy(largest_str, input_str);
        }
    }
    if (first) {
        printf("No valid word (not having 4 letters) was introduced.");
    } else {
        printf("Smallest word: %s\n", smallest_str);
        printf("Largest word: %s", largest_str);
    }
}

void pr4(const int argc, char *argv[]) {
    for (int i = argc - 1; i > 0; i--) {
        printf("%s ", argv[i]);
    }
    // First build (using hammer on top)
    // Second open terminal (bot)
    // Third, input: cd <folder of the executable>
    // Lastly, input: ./Ch13-Prs lala Of MOUTH
}

void pr6(int argc, char *argv[]) {
    // int argc = 7;
    // char argv[][10] = {"lala", "Of", "MOUTH", "Pluto", "venus", "Mercury"};
    char planets[][10] = {"Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto"};

    for (int i = 0; i < 9; i++) {
        to_upper_str(planets[i]);
    }

    int i, j;
    for (i = 1; i < argc; i++) {
        char inputPlanet[20];
        strcpy(inputPlanet, argv[i]);
        to_upper_str(argv[i]);
        for (j = 0; j < NUM_PLANETS; j++) {
            if (strcmp(argv[i], planets[j]) == 0) {
                printf("%s is planet %d\n", inputPlanet, j + 1);
                break;
            }
        }

        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", inputPlanet);
    }
}

static void to_upper_str(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = (char)toupper(str[i]);
    }
}
