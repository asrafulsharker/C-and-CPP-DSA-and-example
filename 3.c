#include <stdio.h>
int main() {
    char c;
    int lowercase_vowel, uppercase_vowel,special_charecter;
    printf("Enter an alphabet: ");
    scanf("%c", &c);


    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');


    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    special_charecter =( c == '!'  || c == '@'  || c == '#' || c == '$' || c == '^' || c == '&' || c == '*' || c == '%' );



    if (lowercase_vowel || uppercase_vowel){
        printf(" %c is an Alphabet : Is is a vowel.", c);
    }


    else if(special_charecter){
        printf("%c is a Special Character", c);
    }

    else if(c >= '0' && c <= '9'){
        printf("%c is a Digit");
    }

    else
        printf("%c is an Alphabet : It is an consonant.", c);
    return 0;
}
