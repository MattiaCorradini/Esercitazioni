#include <stdio.h>
#include <assert.h>

#define MAXN 1000000

int N, i;
int C[MAXN];

int main() {

    assert(1 == scanf("%d", &N));
    for(i=0; i<N; i++)
        assert(1 == scanf("%d", &C[i]));

    int L=C[0];
    for(int j=0; j<N-1; ++j){
        if(C[j+1]-C[j]>L){
            L=C[j+1]-C[j];
        }
    }

    printf("%d\n", L);
    return 0;
}
