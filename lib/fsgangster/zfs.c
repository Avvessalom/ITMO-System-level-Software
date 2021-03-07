//
// Created by kain on 21.02.2021.
//
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <zfs.h>

#define BLOCK_SIZE 512


bool isZfs()
{

}

void openZfs(filesystem* fs, const char* path){
    FILE* file = fopen(path, "rb");
    if (!file){
        perror("Cannot open\n");
        return -1;
    }
    fclose(file);
    return 0;
}

int main (){
    FILE *file;
    char shelf1[50];
    int n;

    file = fopen("./fs.img", "rb");
    n = fread(shelf1, sizeof(char), 50, file);

    for (int i = 0; i < sizeof(shelf1); ++i) {
        printf("%o\n",shelf1[i]);
    }
    fclose(file);

    return 0;
}
