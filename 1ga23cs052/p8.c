#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc < 3 || argc > 4 || (argc == 4 && strcmp(argv[1], "-s")))
    {
        printf("Usage: %s [-s] <target> <link_name>\n", argv[0]);
        return 1;
    }

    if (argc == 4)
    {
        if ((symlink(argv[2], argv[3])) == -1)
            perror("Cannot create symbolic link");
        else
            printf("Symbolic link created\n");
    }
    else
    {
        if ((link(argv[1], argv[2])) == -1)
            perror("Cannot create hard link");
        else
            printf("Hard link created\n");
    }
    return 0;
}
