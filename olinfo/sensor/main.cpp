#include <stdio.h>
#include <assert.h>

// constraints
#define MAXN 100000

// input data
int N, i;
int V[MAXN];

int main() {

    assert(1 == scanf("%d", &N));
    for(i=0; i<N; i++)
        assert(1 == scanf("%d", &V[i]));

    int somma=V[0];
    for(int j=1; j<N; j++){
        if (V[j]<0){
            V[j]=V[j-1];
        }
        somma+=V[j];
    }

    printf("%d\n", somma);

    return 0;
}
