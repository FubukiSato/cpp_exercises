#ifndef INCLUDED_STREAM
#define INCLUDED_STREAM
#define N 256

#include <iostream>
#include <stdlib.h>
#include <string>
#include "stack.h"

int main(int argc, char *argv[]){
    FILE *file;
    char *data;

    if ((file = fopen(argv[1], "r"))==NULL) {
    printf("ファイルを開くのに失敗しました\n");
    exit(1);
  }

    fgets(data, N, file);
	
	

return 0;

}

#endif