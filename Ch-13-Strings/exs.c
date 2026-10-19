#include "exs.h"
#include <stdio.h>

static int read_line(char str[], int n);
static int read_line_a(char str[], int n);
static int read_line_b(char str[], int n);
static int read_line_c(char str[], int n);
static int read_line_d(char str[], int n);
static void censor(char str[], int n, const char censor_str[], int nc);
static int ex14_fun(void);
static int f(char *s, char *t);
static int count_spaces(const char *s);
static int count_spaces_a(const char *s);

void ex2(void) {
    char *p = "abc";
    // putchar(p);  // Illegal: Expects int, is given char*
    // putchar(*p); // Legal: Puts 'a'
    // puts(p); // Legal: Puts the whole string pointed by pointer
    // puts(*p); // Illegal: Expects char*, is given char
}

void ex3(void) {
    // i = 12
    // s = abc34\0...
    // j = 56
    int i, j;
    char s[20];
    scanf("%d%s%d", &i, s, &j);
    printf("%d  %s  %d\n", i, s, j);
}

void ex4(void) {
    const int n = 10;
    char str[n];
    read_line_d(str, n);
    printf("%s\n", str);
}

static int read_line(char str[], const int n) {
    int ch, i = 0;
    while ((ch = getchar()) != '\n' && ch != EOF)
        if (i < n)
            str[i++] = (char)ch;
    str[i] = '\0';
    return i;
}

static int read_line_a(char str[], const int n) {
    int ch, i = 0;
    ch = getchar();
    while (ch != '\n' && ch != EOF && ch == ' ')
        ch = getchar();
    while (ch != '\n' && ch != EOF) {
        if (i < n)
            str[i++] = (char)ch;
        ch = getchar();
    }
    str[i] = '\0';
    return i;
}

static int read_line_b(char str[], const int n) {
    int ch, i = 0;
    while ((ch = getchar()) != '\n' && ch != EOF && !isspace(ch)) {
        if (i < n)
            str[i++] = (char)ch;
    }
    str[i] = '\0';
    return i;
}

static int read_line_c(char str[], const int n) {
    int ch, i = 0;
    while ((ch = getchar()) != '\n' && ch != EOF && !isspace(ch)) {
        if (i < n)
            str[i++] = (char)ch;
    }
    str[i++] = '\n';
    str[i] = '\0';
    return i;
}

static int read_line_d(char str[], const int n) {
    int ch, i = 0;
    while ((ch = getchar()) != '\n' && ch != EOF)
        if (i < n)
            str[i++] = (char)ch;
    str[i] = '\0';
    return i;
}

void ex6(void) {
    char str[22] = "lala foody junky food";
    char censor_str[3+1] = "foo";
    printf("Before censor: %s\n", str);
    censor(str, 21, censor_str, 3);
    printf("After censor: %s\n", str);
}

static void censor(char str[], const int n, const char censor_str[], const int nc) {
    for (int i = 0; i < n - nc; i++) {
        for (int j = 0; j < nc; j++) {
            if (str[i+j] != censor_str[j])
                break;
            if (j == nc - 1) {
                for (int k = 0; k < nc; k++) {
                    str[i+k] = 'x';
                }
            }
        }
    }
}

void ex8(void) {
    // Assuming str has the size to accomodate the copies and concatenation: tired-or-wired
}

void ex10(void) {
    // char * q is initialized as a pointer but it's not made to point to a specific address.
    // strcpy will start copying from that unspecified address onwards, writting in addresses
    // that might be used to something else
    // it should be initiailzed luke this: char q[n]; and n (the size of p) passed as an argument
    // as well
}

void ex14(void) {
    // Grinch
    ex14_fun();
}

static int ex14_fun(void) {
    char s[] = "Hsjodi", *p;
    for (p = s; *p; p++)
        --*p;
    puts(s);
    return 0;
}

void ex15(void) {
    // a) 3
    // b) 0
    // The position of the first character in s that is not in t
    printf("%d\n", f("abcd", "bcd"));
}

static int f(char *s, char *t) {
    char *p1, *p2;
    for (p1 = s; *p1; p1++) {
        for (p2 = t; *p2; p2++)
            if (*p1 == *p2) break;
        if (*p2 == '\0') break;
    }
    return p1 - s;
}

void ex16(void) {
    printf("%d", count_spaces_a("sdv  sdf s"));
}

static int count_spaces(const char *s) {
    int count = 0;
    for (; *s != '\0'; s++)
        if (*s == ' ')
            count++;
    return count;
}

static int count_spaces_a(const char *s) {
    int count = 0;
    while (*s)
        if (*s++ == ' ')
            count++;
    return count;
}
