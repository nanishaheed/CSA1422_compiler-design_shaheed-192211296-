#include <stdio.h>
#include <stdlib.h>

void countCharactersWordsLines(FILE *file) {
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    
    while ((ch = fgetc(file)) != EOF) {
        characters++;
        
        if (ch == '\n') {
            lines++;
        }
        
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }
    
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
}

int main() {
    FILE *file;
    char filename[100];
    
    printf("Enter filename: ");
    scanf("%s", filename);
    
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    countCharactersWordsLines(file);
    fclose(file);
    
    return 0;
}
