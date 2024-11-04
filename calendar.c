#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

struct Day
{
    char *name;
    int date;
    char *activity;
};
struct Day *calendar[7];
void create()
{
    for (int i = 0; i < 7; i++)
    {
        calendar[i] = (struct Day *)malloc(sizeof(struct Day));
        calendar[i]->name = (char *)malloc(20 * sizeof(char));
        calendar[i]->activity = (char *)malloc(100 * sizeof(char));

        printf("Enter day name: ");
        scanf("%s", calendar[i]->name);
        printf("Enter date: ");
        scanf("%d", &calendar[i]->date);
        printf("Enter activity: ");
        fgets(calendar[i]->activity,100,stdin);
        printf("\n");
    }
}

void read()
{
    for (int i = 0; i < 7; i++)
    {
        printf("Day %d\n", i + 1);
        printf("Day name: %s\n", calendar[i]->name);
        printf("Date: %d\n", calendar[i]->date);
        printf("Activity: %s\n", calendar[i]->activity);
        printf("\n");
    }
}

void display()
{

    printf("Weekly Activity Details:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Day %d: %s - %d, Activity: %s\n", i + 1, calendar[i]->name, calendar[i]->date, calendar[i]->activity);
    }
}

int main()
{
    printf("Creating Calendar:\n");
    create();

    printf("Reading Calendar:\n");
    read();

    printf("Displaying Calendar:\n");
    display();

    // Free memory
    for (int i = 0; i < 7; i++)
    {
        free(calendar[i]->name);
        free(calendar[i]->activity);
        free(calendar[i]);
    }

    return 0;
}
