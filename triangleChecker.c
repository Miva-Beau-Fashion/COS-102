#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]) {
    setlocale(LC_ALL, "en-NG.UTF-8");   // Fixes possible degree "°" symbol display issues, setting encoding to UTF-8
    printf ( // print group watermark
         " __     __       ___               __        ___                         \n"
        "|__) | / _` |__|  |      /\\  |\\ | / _` |    |__                          \n"
        "|  \\ | \\__> |  |  |     /~~\\ | \\| \\__> |___ |___                         \n"
                                                                                
       "___  __               __        ___     __        ___  __        ___  __ \n"
        " |  |__) |  /\\  |\\ | / _` |    |__     /  ` |__| |__  /  ` |__/ |__  |__)\n"
        " |  |  \\ | /~~\\ | \\| \\__> |___ |___    \\__, |  | |___ \\__, |  \\ |___ |  \\ - Group Beau, 100LVL 2nd Semester (COS 102) \n\n"
    );


    // Init integer variables to be used
    int angle1, angle2, angleEval;
    
    printf ("Enter your first angle: ");

    // Check if angle1 is a positive integer
    while (1) {
        if (scanf(" %d", &angle1) != 1) {
            fprintf (stderr, "Invalid Input Recived. \nEnter a valid first angle: ", angle1);        
        } else if (angle1 <= 0) {  // 
            fprintf (stderr, "Invalid Input Recived. \nEnter an angle greater than 0: ", angle2);
        } else {    // on valid input, break out of loop
            break;
        }
        while (getchar() != '\n'); // Clear buffer properly, iterate over buffer and clear each value that's not "\n"
    };
    
    
    printf ("Enter second angle: ");

    // Check if angle2 is an integer
    while (scanf (" %d", &angle2) != 1 ) {
        fprintf (stderr, "Invalid Input Recived. \nEnter a valid second angle: ", angle2);
        while (getchar() != '\n');
    }

    // Process angles 1&2 to check if either out of 3 angles is right angled
    angleEval = 180 - angle1 - angle2;

    if (angleEval >= 1) {
        if ( angle1 == 90 || angle2 == 90 || angleEval == 90 ) {
           printf( "Triangle IS right angled\n" );
        } else {
            printf ( "This triangle is NOT right angled \n");
            printf ("Last Angle: %d°", angleEval );
        }
    } else {
        printf("This is NOT a valid Triangle");
    }

    return 0;
}
