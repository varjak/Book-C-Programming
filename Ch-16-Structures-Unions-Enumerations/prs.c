#include <stdio.h>
#include "prs.h"

void pr1(void) {
    struct dialing_code {
        char *country;
        int code;
    };

    const struct dialing_code country_codes[] =
        {{.country = "Argentina", .code = 54},  {.country = "Bangladesh", .code = 880}, {.country = "Brazil", .code = 55},
         {.country = "China", .code = 86},  {.country = "Colombia", .code = 57}, {.country = "Congo, Dem. Rep. of", .code = 243},
         {.country = "Egypt", .code = 20},  {.country = "Ethiopia", .code = 251}, {.country = "France", .code = 33},
         {.country = "Germany", .code = 49},  {.country = "India", .code = 91}, {.country = "Indonesia", .code = 62},
         {.country = "Iran", .code = 98}, {.country = "Italy", .code = 39}, {.country = "Japan", .code = 81},
         {.country = "Mexico", .code = 52}, {.country = "Nigeria", .code = 234}, {.country = "Philippines", .code = 63},
         {.country = "Poland", .code = 48}, {.country = "Russia", .code = 7}, {.country = "South Africa", .code = 27},
         {.country = "South Korea", .code = 82}, {.country = "Spain", .code = 34}, {.country = "Sudan", .code = 249},
         {.country = "Thailand", .code = 66}, {.country = "Turkey", .code = 90}, {.country = "Ukraine", .code = 380},
         {.country = "United Kingdom", .code = 44}, {.country = "United States", .code = 1}, {.country = "Vietnam", .code = 84},
        };

    const size_t N = sizeof(country_codes) / sizeof(country_codes[0]);
    int dial_code;
    printf("Please provide a dialing code: ");
    scanf("%d", &dial_code);

    for (size_t i = 0; i < N; i++) {
        if (dial_code == country_codes[i].code) {
            printf("The country you picked was: %s\n", country_codes[i].country);
            return;
        }
    }
    printf("No country found for that dial code\n");
}

void pr3(void) {
    // See "./Auxiliary-Functions/pr-03.c"
}
