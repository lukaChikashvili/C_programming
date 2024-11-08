#include <stdio.h>
#include <string.h>



int main() {
    // string length
    char language[] = "chinese";
    
    printf("%zu", strlen(language));

    // string copy
     char secondLanguage[strlen(language)];

     strcpy(secondLanguage, language);
     printf("\n second language: %s", secondLanguage);

     // string concatanation
     char name[] = "luka ";
     char surname[] = "chikashvili";

     strcat(name, surname);
     printf("\n %s", name);

     // string compare
     char str1[] = "abc";
     char str2[] = "abc";

     int result = strcmp(str1, str2);
     printf("\n%d", result);

     
         return 0;

}
