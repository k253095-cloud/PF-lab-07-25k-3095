#include <stdio.h>

int main() {
    char str[100];

    printf("Enter characters (alphabets will not be stored): ");
    scanf("%[^A-Za-z]", str);   // scanset ? sab kuch lo except A–Z aur a–z

    printf("\nYou entered non-alphabetic characters: %s", str);

    return 0;
}

