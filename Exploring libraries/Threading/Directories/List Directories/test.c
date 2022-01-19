#include <dirent.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char path[] = ".";

    DIR *d = opendir(path);
    struct dirent *dir;
    while ((dir = readdir(d)) != NULL)
    {
        printf("%s/%s\n", path, dir->d_name);
    }
    closedir(d);
}
