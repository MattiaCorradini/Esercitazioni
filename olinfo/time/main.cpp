#include <stdio.h>
#include <assert.h>

int H0, M0, H1, M1;

int main() {

    assert(4 == scanf("%d%d%d%d", &H0, &M0, &H1, &M1));

    int Md= (H0*60)+M0;
    int Ms= (H1*60)+M1;
    int h = 0, m=0;

    if (Ms>Md){
        int F= abs(Ms-Md);
        h= F/60;
        m= F%60;
    }

    else if (Md>Ms){
        int F= abs((1440-Md)+Ms);
        h= F/60;
        m= F%60;
    }


    printf("%d ", h);
    printf("%d", m);

    return 0;
}
