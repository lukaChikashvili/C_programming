#include <stdio.h>
#include <ctype.h>


int main() {
    char alpha = 'a';
    char upper = toupper(alpha);
    printf("%c", upper);

    char lower = tolower(upper);
    printf("\n%c", lower);


    return 0;

}
