#include <stdio.h>

int main() {
    char input[1000];
    fgets(input, 1000, stdin);
    reverseEachWord(input);
    printf("%s", input);
}
