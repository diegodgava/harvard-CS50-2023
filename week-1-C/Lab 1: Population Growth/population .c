#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
int start;
    do
    {
        start = get_int("Start number lhamas: \n");
    }
    while (start < 9);
    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("End number of lhamas: \n");
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold
     int years = 0;
    while (start < end)
    {
        start = start + (start/3) - (start/4);
        years++;
    }

    // TODO: Print number of years
 printf("Years: %d\n", years);
}
