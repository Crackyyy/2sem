#include <stdio.h>

int main(){

int kek[4][4] = {
{0, 1, 0, 1},
{0, 0, 1, 1},
{0, 1, 0, 0},
{1, 0, 1, 0}};

for (int i = 0; i < 4; i = i + 1){
    for(int j = 0; j < 4; j = j + 1){
      printf("%d\t", kek[i][j]);
    }
    printf("\n");
  }
	

	return 0;
}