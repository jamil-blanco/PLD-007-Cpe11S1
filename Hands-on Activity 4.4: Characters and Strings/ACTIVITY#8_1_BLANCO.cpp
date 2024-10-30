#include <stdio.h> 
#include <ctype.h>
int main()

{
	// Islower
    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to islower:",

        islower('p') ? "p is a ": "p is not a ", "letter",

        islower('P') ? "P is a ": "P is not a ", "letter",
        
        islower('5') ? "5 is a ": "5 is not a ", "letter",
        
        islower('!') ? "! is a ": "! is not a", "letter");
        
	// IsUpper
    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to isupper:",

        isupper('D') ? "D is a ": "D is not a ", "letter",

        islower('d') ? "d is a ": "d is not a ", "letter",
        
        islower('8') ? "8 is a ": "8 is not a ", "letter",
        
        islower('&') ? "& is a ": "& is not a ", "letter");
        
	// Converting into lowercase/uppercased
	char c1 = toupper('u');
	char c2 = toupper('7');
	char c3 = toupper('$');
	char c4 = tolower('L');
	
	printf ("u converted to uppercase is %c\n", c1);
	printf ("7 converted to uppcase is %c\n", c2);
	printf ("$ converted to uppercase is %c\n", c3);
	printf ("L converted to lowercase is %c\n", c4);
	
   

    return 0;

}
