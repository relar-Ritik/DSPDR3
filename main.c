#include <stdio.h>
#include <stdlib.h>
#include "Ritik.h"

int matrix[12][10]= {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -5, 120, 120, 122, 122, 120, 120, 120, -1, -1, 120, -1, -1, -1, 120, -1,
                     -1, 122, -1, -1, 122, 122, 122, 122, 122, 120, 120, 122, -1, -1, -1, 120, 120, 120, -1, 120, 120, -1, -1, -1, 120, -1, -1, 122, -1,
                     122, -1, -1, -1, -1, -1, 120, 120, 120, 120, 122, 120, 120, -1, -1, 120, -1, 120, -1, 122, 122, -1, 120, -1, -1, -1, -1, 120,
                     -1, 122, -1, -1, -1, -1, -1, 120, 122, 122, -1, 122, 122, 120, 120, -1, -1, 120, -1, 120, 120, 122, 122, -1, 1000, -1, -1, -1,
                     -1, -1, -1, -1, -1, -1, -1, -1};
int done;
int main() {
    /*for (int j = 0; j < 12; ++j) {
        for (int i = 0; i < 10; ++i) {
            if(matrix[j][i]==-1){
                printf("# ");
            } else if (matrix[j][i]==-2){
                printf("_ " );
            } else{
                printf("- ");
            }
        }
        printf("\n");
    }*/
    ledger pq;
    init_ledger(&pq);
    int max=100;
    done=0;
    printf("vvv");
    while(!done){
        done=1;
        for (int i = 0; i < max; ++i) {
            if(pq.priority[i]!=NULL){
                done=0;
               // printf("%d\n ",i);
                max = travel(&pq,i,max);
            }
        }

    }
 //   print_path(&pq);

    return 0;
}
