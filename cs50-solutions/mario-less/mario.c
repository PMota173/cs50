#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ASK THE USER FOR THE HEIGHT
    int height;
    do
    {
        height = get_int("height: ");
    }
    while (height < 1 || height > 8);

    // REPEAT THE CODE FOR THE GIVEN NUMBER (HEIGHT)
    for (int i = 0; i < height; i++)
    {
        // PRINT SPACES FOR THE NUMBER GIVEN BY THE USE - 1 FOR EACH ROW
        for (int x = height; x > i + 1; x--)
        {
            printf(" ");
        }

        // PRINT HASHES DEPENDING ON THE
        for (int z = 0; z < i; z++)
        {
            printf("#");
        }
        // PRINT THE FIRST HASH
        printf("#");
        printf("\n");
    }
}