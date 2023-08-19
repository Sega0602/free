#include <stdio.h>

void printTable(int leftR, int rightR, int ball) {
     for (int height = 0; height < 25; height++)  {  // height - высота поля
         for (int width = 0; width < 80; width++) {   // width - ширина поля
         if (height == 0 || height == 24) {
             printf("-");
         } else if (((height == leftR || height == leftR+1 || height == leftR - 1) && width == 0) ||
         ((height == rightR ||height == rightR+1 || height == rightR-1) && width == 79)) {
         printf("|");
         } else  if (height == 12 && width == ball) {
             printf("o");
             } else {
             printf(" ");
         }
         }
         printf("\n");
     
    }

    let Start()
    {
        printf();
        return 0;
        
    }

