#include <stdio.h>
#include <unistd.h>

// 10-1. Create a timer using previous code. This time, user input will be used to determine how many seconds
//       will pass before code reaches its end.

int main()
{
    int count, value, seconds, hours, minutes;

    printf("Type an integer value: ");
    scanf("%d", &value);

    count = 0;
    while (count <= value)
    {
        printf("\e[1;1H\e[2J");
        
        seconds = count;
        minutes = (seconds / 60) % 60;
        hours = (seconds / 60 / 60) % 24;
        seconds = seconds % 60;

        printf("    ===========\n");
        printf("====           ====\n");
        printf("| |  %02dh%02dm%02ds  | |\n", hours, minutes, seconds);
        printf("====           ====\n");
        printf("    ===========\n");
        
        count++;
        sleep(1);
    }
    
    printf("\n\n      Timeout!\n\nPress ENTER to exit.");
    while ( getchar() != '\n' );
    value = getchar();
    return 0;
}

//
// Created by felipe-san on 16/09/23.
//


