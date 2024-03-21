#include <stdio.h>

void Floyd(int N) {
    int i, j, aux = 1;

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", aux++);
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    Floyd(N);
    return 0;
}
