#include <stdio.h>
#include <stdlib.h>
// Function to encrypt/decrypt a file using XOR Cipher
void xorCipher(const char *inputFile, const char *outputFile, char key) {
FILE *inFile = fopen(inputFile, "r");
FILE *outFile = fopen(outputFile, "w");
if (inFile == NULL || outFile == NULL) {
printf("Error: Unable to open file(s).\n");
exit(1);
}
char ch;
while ((ch = fgetc(inFile)) != EOF) {
// XOR the character with the key and write to the output file
fputc(ch ^ key, outFile);
}
fclose(inFile);
fclose(outFile);
printf("Operation completed successfully. Check the output file: %s\n", outputFile);
}
int main() {
char inputFile[100], outputFile[100], key;
int choice;
printf("File Encryption and Decryption Program\n");
printf("1. Encrypt a file\n");
printf("2. Decrypt a file\n");
printf("Enter your choice: ");
scanf("%d", &choice);
printf("Enter the name of the input file: ");
scanf("%s", inputFile);
printf("Enter the name of the output file: ");
scanf("%s", outputFile);
printf("Enter the encryption/decryption key (single character): ");
scanf(" %c", &key);
if (choice == 1) {
printf("Encrypting file...\n");
xorCipher(inputFile, outputFile, key);
} else if (choice == 2) {
printf("Decrypting file...\n");
xorCipher(inputFile, outputFile, key);
} else {
printf("Invalid choice. Exiting...\n");
}
return 0;
}