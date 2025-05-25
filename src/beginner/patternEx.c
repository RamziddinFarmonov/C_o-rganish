#include <stdio.h>
#include <string.h>

typedef struct {
    char patterns[5][100];
    int pattern_count;
} Options;

void add_pattern(Options *opts, const char *pattern) {
    if (opts->pattern_count < 5) {
        strncpy(opts->patterns[opts->pattern_count], pattern, 99);
        opts->patterns[opts->pattern_count][99] = '\0';
        opts->pattern_count++;
    }
}


int main(){

    Options opts = {0}; // pattern count 0 ga teng buladi

    char input[100];

    for(int i = 0; i < 3; i++){
        printf("Pattern kiriting: ");
        fgets(input, sizeof(input), stdin);

        input[strcspn(input, "\n")] = '\0';  // fgets oxiridagi '\n' ni olib tashlash:

        add_pattern(&opts, input);
    }

    printf("\nKiritilgan patternlar : \n");

    for (int i = 0; i < opts.pattern_count; i++)
    {
        printf("Pattern %d : %s \n", i + 1, opts.patterns[i]);
    }
    
    return 0;
}