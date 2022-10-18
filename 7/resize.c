#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
    char** array = malloc(1 * sizeof(*array));

    if (array)
    {
        array[0] = "This";

        printf("%s\n------\n", array[0]);

        char** tmp = realloc(array, 2 * sizeof(*array));
        if (tmp)
        {
            array = tmp;
            array[1] = "That";

            printf("%s\n", array[0]);
            printf("%s\n", array[1]);
        }

        free(array);
    }
    return 0;
}