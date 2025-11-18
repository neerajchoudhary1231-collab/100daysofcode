//Find the first repeating lowercase alphabet in a string.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int freq[26] = {0};

    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            if (freq[c - 'a'] == 1) {   // Already seen once → repeating
                cout << "First repeating lowercase letter: " << c << endl;
                return 0;
            }
            freq[c - 'a']++;
        }
    }

    cout << "No repeating lowercase alphabet found." << endl;
    return 0;

}
//Check if two strings are anagrams of each other.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cout << "Enter first string: ";
    cin >> a;
    cout << "Enter second string: ";
    cin >> b;

    if (a.length() != b.length()) {
        cout << "Not anagrams" << endl;
        return 0;
    }

    int freq[26] = {0};

    for (char c : a)
        freq[c - 'a']++;

    for (char c : b)
        freq[c - 'a']--;

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            cout << "Not anagrams" << endl;
            return 0;
        }
    }

    cout << "Strings are anagrams" << endl;
    return 0;
}
//Find the longest word in a sentence.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string longest = "", current = "";

    for (char c : sentence) {
        if (c != ' ') {
            current += c;      // build current word
        } else {
            if (current.length() > longest.length())
                longest = current;
            current = "";
        }
    }

    // Check last word as well
    if (current.length() > longest.length())
        longest = current;

    cout << "Longest word: " << longest << endl;
    return 0;
}

//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int isRotation(char a[], char b[]) {
    // Lengths must match
    if (strlen(a) != strlen(b))
        return 0;

    char temp[400];        // big enough for a+a
    strcpy(temp, a);
    strcat(temp, a);       // concatenate a with itself

    // If b is a substring of (a+a)
    return strstr(temp, b) != NULL;
}

int main() {
    char a[200], b[200];

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    if (isRotation(a, b))
        printf("Strings are rotations of each other\n");
    else
        printf("Strings are NOT rotations of each other\n");

    return 0;
}

//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

int main() {
    char a[200], b[200];
    int freq[26] = {0};

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    // If lengths differ → not anagrams
    if (strlen(a) != strlen(b)) {
        printf("Not anagrams\n");
        return 0;
    }

    // Count characters of first string
    for (int i = 0; a[i] != '\0'; i++) {
        freq[a[i] - 'a']++;
    }
//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[300];
    char longest[100] = "";
    char word[100] = "";
    int j = 0;

    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            word[j++] = sentence[i];   // build current word
        } else {
            word[j] = '\0';            // end of current word
            if (strlen(word) > strlen(longest))
                strcpy(longest, word);
            j = 0;                      // reset for next word
        }
    }

    // Check the last word as well
    word[j] = '\0';
    if (strlen(word) > strlen(longest))
        strcpy(longest, word);

    printf("Longest word: %s\n", longest);

    return 0;
}
//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int isRotation(char a[], char b[]) {
    // Lengths must be equal
    if (strlen(a) != strlen(b))
        return 0;

    char temp[400];        // large enough for a+a
    strcpy(temp, a);
    strcat(temp, a);       // create a+a

    // Check if b is a substring of (a+a)
    return strstr(temp, b) != NULL;
}

int main() {
    char a[200], b[200];

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    if (isRotation(a, b))
        printf("Strings are rotations of each other\n");
    else
        printf("Strings are NOT rotations of each other\n");

    return 0;
}//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

int isRotation(char a[], char b[]) {
    // Lengths must be equal
    if (strlen(a) != strlen(b))
        return 0;

    char temp[400];        // large enough for a+a
    strcpy(temp, a);
    strcat(temp, a);       // create a+a

    // Check if b is a substring of (a+a)
    return strstr(temp, b) != NULL;
}

int main() {
    char a[200], b[200];

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    if (isRotation(a, b))
        printf("Strings are rotations of each other\n");
    else
        printf("Strings are NOT rotations of each other\n");

    return 0;
}
//Print the initials of a name.
#include <stdio.h>

int main() {
    char name[200];

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first character if it's not a space
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Print characters that come after a space
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0')
            printf("%c", name[i+1]);
    }

    printf("\n");
    return 0;
}
//#include <stdio.h>

int main() {
    char name[200];

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first character if it's not a space
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Print characters that come after a space
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0')
            printf("%c", name[i+1]);
    }

    printf("\n");
    return 0;
}
//#include <stdio.h>

int main() {
    char name[200];

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first character if it's not a space
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Print characters that come after a space
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0')
            printf("%c", name[i+1]);
    }

    printf("\n");
    return 0;
}
//Change the date format from dd/04/yyyy to dd-Apr-yyyy.


int main() {
    char name[200];

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first character if it's not a space
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Print characters that come after a space
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0')
            printf("%c", name[i+1]);
    }

    printf("\n");
    return 0;
}
//#include <stdio.h>

int main() {
    char name[200];

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first character if it's not a space
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Print characters that come after a space
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0')
            printf("%c", name[i+1]);
    }

    printf("\n");
    return 0;
}
//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    char initials[100] = "";
    char surname[100] = "";
    
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline if present
    size_t len = strlen(name);
    if (name[len - 1] == '\n') n
//
#include <stdio.h>

int main() {
    char date[20];
    int day, month, year;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    // Extract day, month, year
    sscanf


