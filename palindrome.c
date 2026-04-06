#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void reverseString ( char * string ) {
    char *startPointer, *endPointer, tempVar;
    int i;
    int stringLength = strlen(string);

    // Set the starting pointer to start off the string
    startPointer = string;

    //setting end pointer to the end of the string
    endPointer = string + stringLength - 1;

    // loop through string
    for (i = 0; i < stringLength / 2; i++) {
        tempVar = *endPointer;  // Store char from pointer "end" at the end
        *endPointer = *startPointer;  // replace char at the end with char at the star e.g 
        *startPointer = tempVar;    


        startPointer++; // Move inwards to the next address/character in the string
        endPointer--;   // Move inwards to next address/character in the string
    }

}

int main () {
    
    int num = 0;
    printf ("Enter a number: ");
    scanf ("%d", &num);

    char stringifiedInteger[20]; // Buffer/ max allowed bytes
    snprintf(stringifiedInteger, sizeof(stringifiedInteger), "%d", num); // Convert num to string

    char *duplicateIntString = strdup( stringifiedInteger ); // copy string into pointer
    reverseString(duplicateIntString);
    printf ("reversed string: %s\n", duplicateIntString);
    

    // compare both strings, if the comparison returns true (successful comparison), it's a palindrome. else it's not.
    if (strcmp(duplicateIntString, stringifiedInteger) == 0) {
        printf("The number \"%s\" is a palindrome\n", stringifiedInteger);
    } else {
        printf("The number \"%s\" is NOT a palindrome\n", stringifiedInteger);
    }
    
    free(duplicateIntString);
    return 0;
}