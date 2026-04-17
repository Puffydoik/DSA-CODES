#include <stdio.h>
#define MAX 5

int adj[MAX][MAX] = {
    {0, 1, 1, 0, 0},
    {1, 0, 0, 1, 1},
    {1, 0, 0, 0, 0},
    {0, 1, 0, 0, 0},
    {0, 1, 0, 0, 0}
};
int visited[MAX] = {0};

void DFS(int v) {
    printf("%d ", v);
    visited[v] = 1;
    for (int i = 0; i < MAX; i++) {
        if (adj[v][i] == 1 && !visited[i]) DFS(i);
    }
}

void BFS(int start) {
    int q[MAX], f = 0, r = 0, vis[MAX] = {0};
    q[r++] = start;
    vis[start] = 1;
    
    while (f < r) {
        int node = q[f++];
        printf("%d ", node);
        for (int i = 0; i < MAX; i++) {
            if (adj[node][i] == 1 && !vis[i]) {
                q[r++] = i;
                vis[i] = 1;
            }
        }
    }
}

int main() {
    printf("DFS starting from node 0: ");
    DFS(0);
    printf("\nBFS starting from node 0: ");
    BFS(0);
    return 0;
}