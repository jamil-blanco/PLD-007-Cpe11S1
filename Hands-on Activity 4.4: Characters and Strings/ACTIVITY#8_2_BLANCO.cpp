#include <iostream>
using namespace std;
int main()
{
	char ch;
	
	cout << "Input a character: ";
	cin >> ch;
	cout << "HANDLING LIBRARY SUMMARY:" << endl;
	
	// Determining whether lowercase or not
	if (islower(ch))
	{
		cout << ch << " is a lowercase"<< endl; 
	}
	else if (isupper(ch))
	{
		cout << ch << " is not a lowercase" << endl;
	}
	else
	{
		cout << ch << " is not a letter " << endl;
	}
	
	// Determining whether uppercase or not
	if (isupper(ch))
	{
		cout << ch << " is a uppercase"<< endl; 
	}
	else if (islower(ch))
	{
		cout << ch << " is not a uppercase" << endl;
	}
	else
	{
		cout << ch << " is not a character/letter" << endl;
	}
	
	// Converting lowercase into uppercase
	if (islower(ch))
	{
		char upper = toupper(ch);
		cout << ch << " converted to uppercase "<< upper << endl; 
	}
	else
	{
		cout << ch << " is already uppercase" << endl;
	}
	
	// Converting uppercase into lowercase
	if (isupper(ch))
	{
		char lower = tolower (ch);
		cout << ch << " converted to lowercase "<< lower << endl; 
	}
	else
	{
		cout << ch << " is already lowercase" << endl;
	}
	
	// Determining whether blank character or not
	if (isblank(ch))
	{
		cout << ch << " is a blank character"<< endl; 
	}
	else
	{
		cout << ch << " is not a blank character" << endl;
	}
	
	// Determining whether digit or not
	if (isdigit(ch))
	{
		cout << ch << " is a digit"<< endl; 
	}
	else
	{
		cout << ch << " is not a digit" << endl;
	}
	
	// Determining whether it's letter or not
	if (isalpha(ch))
	{
		cout << ch << " is a letter" << endl;
	}
	else
	{
		cout << ch << " is not a letter" << endl;
	}

    // Check if alphanumeric or not (letter or digit)
    if (isalnum(ch)) 
	{
        cout << ch << " is alphanumeric" << endl;
    } 
	else 
	{
        cout << ch << " is not alphanumeric" << endl;
    }

    // Check if hexadecimal digit or not
    if (isxdigit(ch)) 
	{
        cout << ch << " is a hexadecimal digit" << endl;
    } 
	else 
	{
        cout << ch << " is not a hexadecimal digit" << endl;
    }

    // Check if whitespace or not
    if (isspace(ch)) 
	{
        cout << ch << " is a whitespace character" << endl;
    } 
	else 
	{
        cout << ch << " is not a whitespace character" << endl;
    }

    // Check if graphical or not (printable and not a space)
    if (isgraph(ch)) 
	{
        cout << ch << " has a graphical representation (printable and not a space)" << endl;
    } 
	else 
	{
        cout << ch << " does not have a graphical representation" << endl;
    }

    // Check if control character or not
    if (iscntrl(ch)) 
	{
        cout << ch << " is a control character" << endl;
    } 
	else 
	{
        cout << ch << " is not a control character" << endl;
    }

    // Check if printable or not
    if (isprint(ch)) 
	{
        cout << ch << " is a printable character" << endl;
    } 
	else 
	{
        cout << ch << " is not a printable character" << endl;
    }

    // Check if punctuation or not
    if (ispunct(ch)) 
	{
        cout << ch << " is a punctuation character" << endl;
    } 
	else 
	{
        cout << ch << " is not a punctuation character" << endl;
    }
    
	return 0;
}
