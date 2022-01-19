#include <stdio.h>
#include <dirent.h>
#include <string.h>

void listDir(char *path);

int main(int argc, char *argv[]){
  listDir(argv[1]);
  return 0;
}


void listDir(char *path){

  DIR *dir = opendir(path);
  struct dirent *file;

  while ((file = readdir(dir)) != NULL){
    printf("%s/%s\n", path, (*file).d_name);
  }

  closedir(dir);
}
