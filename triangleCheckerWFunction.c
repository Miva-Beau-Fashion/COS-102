#include <stdio.h>
#include <locale.h>

// Function to get prompts, print and perform input validation & minor formatting
int get_valid_angle(const char* prompt) {
    int angle;
    printf("%s", prompt);
    
    while (1) {
        if (scanf (" %d", &angle) != 1) {
            printf ("Invalid Input Recieved\nPlease enter a valid angle: ");
        } else if (angle <= 0) {
            printf ("Invalid input \nEnter an angle greater than 0: ");
        } else { // Upon valid input, break out of loop
            break;
        }
        while ( getchar() != '\n' );
    }
    while ( getchar() != '\n' ); // clear input buffer

    return angle;
};

int main(int argc, char const *argv[]) {
    setlocale(LC_ALL, "en_NG.UTF-8");
    printf (
         " __     __       ___               __        ___                         \n"
        "|__) | / _` |__|  |      /\\  |\\ | / _` |    |__                          \n"
        "|  \\ | \\__> |  |  |     /~~\\ | \\| \\__> |___ |___                         \n"                              
       "___  __               __        ___     __        ___  __        ___  __ \n"
        " |  |__) |  /\\  |\\ | / _` |    |__     /  ` |__| |__  /  ` |__/ |__  |__)\n"
        " |  |  \\ | /~~\\ | \\| \\__> |___ |___    \\__, |  | |___ \\__, |  \\ |___ |  \\ - Group Beau, 100LVL 2nd Semester (COS 102) \n\n"
    );

    // Init integer variables to be used
    int angle1, angle2, angleEval;
    angle1 = get_valid_angle("Enter first angle: ");
    angle2 = get_valid_angle ("Enter second angle: ");
    angleEval = 180 - angle2 - angle1;

    // Process angles 1&2 to check if either out of 3 angles is right angled
    if ( angle1 == 90 || angle2 == 90 || angleEval == 90 ) {
        printf( "Triangle IS right angled\n" );
    } else {
        printf ( "This triangle is NOT right angled\n" );
        printf ( "Last angle: %d\n", angleEval );
    }

    return 0;
}
