#include <bits/stdc++.h>
using namespace std;


int s[40000][3], g[101000][2];

int main(void){
    
    int G;
    scanf("%d", &G);

    for (int i = 0; i < G; i++){
        scanf("%d %d", &g[i][0], &g[i][1]);
    }

    int S;
    scanf("%d", &S);

    for (int i = 0; i < S; i++){
        scanf("%d %d %d", &s[i][0], &s[i][1], &s[i][2]);    
    }

    int goblins = G;

    for (int i = 0; i < G; i++){
        for (int j = 0; j < S; j++){

            int x = g[i][0] - s[j][0];
            int y = g[i][1] - s[j][1];

            if (x*x+y*y <= s[j][2]*s[j][2]) {
                goblins--;
                break;
            }

        }
    }
    printf("%d\n", goblins);
}
