#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *sourceFile, *newFile;
    char sourceFilename[100], newFilename[100];
    char ch;
    printf("Enter the source filename: ");
    scanf("%s", sourceFilename);
    printf("Enter the destination filename: ");
    scanf("%s", newFilename);
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Could not open source file %s\n", sourceFilename);
        return 1;
    }
    newFile = fopen(newFilename, "w");
    if (newFile == NULL) {
        printf("Could not open destination file %s\n", newFilename);
        fclose(sourceFile);
        return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
        fputc(ch, newFile);
    }
    fclose(sourceFile);
    fclose(newFile);
    printf("File copied successfully with lowercase characters converted to uppercase.\n");
    return 0;
}
