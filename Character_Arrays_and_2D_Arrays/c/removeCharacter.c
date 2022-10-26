#include <stdio.h>


void removeALlOccurrencesOfChar(char input[], char c) {
	int nextIndex = 0;
	for (int i =0 ; input[i] != '\0'; i += 1) {
		if (input[i] != c) {
			input[nextIndex] = input[i];
			nextIndex++;
		}
	}
	input[nextIndex] = '\0';
}
char input[1000000];

int main() {

    fgets(input, 1000000, stdin);
    char c;
    scanf("%c", &c);
    removeAllOccurrencesOfChar(input, c);
    printf("%s", input);
}
