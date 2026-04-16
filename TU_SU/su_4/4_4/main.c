#include <stdio.h>
#include <stdlib.h>

int *friends[100005];
int friend_count[100005];
int capacity[100005];

void add_friend(int u, int v) {
    if (capacity[u] == 0) {
        capacity[u] = 2;
        friends[u] = (int *)malloc(capacity[u] * sizeof(int));
    } else if (friend_count[u] == capacity[u]) {
        capacity[u] *= 2;
        friends[u] = (int *)realloc(friends[u], capacity[u] * sizeof(int));
    }
    friends[u][friend_count[u]++] = v;
}

int main() {
    int n, m;
    printf("Enter number of people (N) and friendships (M): ");
    scanf("%d %d", &n, &m);

    printf("Enter %d pairs of friends:\n", m);
    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        add_friend(u, v);
        add_friend(v, u);
    }

    int query;
    printf("Enter person ID: ");
    scanf("%d", &query);

    if (query >= 1 && query <= n) {
        printf("Person %d has %d friends.\n", query, friend_count[query]);
        printf("Friends: ");
        for (int i = 0; i < friend_count[query]; i++) {
            printf("%d ", friends[query][i]);
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++) {
        if (friends[i] != NULL) {
            free(friends[i]);
        }
    }

    return 0;
}