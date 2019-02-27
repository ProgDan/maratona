#include <bits/stdc++.h>
using namespace std;

#define MAX_DEPTH 18
#define MAX_NODE 100005

int sparseTable[MAX_NODE][MAX_DEPTH];
int depth[MAX_NODE];
long long distFromRoot[MAX_NODE];

int LCA(int u, int v)
{
    if (depth[v] < depth[u])
        swap(u, v);

    int diff = depth[v] - depth[u];

    for (int i = 0; i < MAX_DEPTH; i++)
        if ((diff >> i) & 1)
            v = sparseTable[v][i];

    if (u == v)
        return u;

	// now they are at the same height
    for (int i = MAX_DEPTH-1; i >= 0; i--)
        if (sparseTable[u][i] != sparseTable[v][i])
        {
            u = sparseTable[u][i];
            v = sparseTable[v][i];
        }

    return sparseTable[u][0]; // this is the LCA
}

int main()
{
	//freopen("in.txt", "r", stdin);

    int N, node, Q, u, v;
    long long dist;

	sparseTable[0][0] = -1; // root has no parent
	distFromRoot[0] = 0;
	depth[0] = 0;

    while(1)
    {
        cin >> N;
        if(!N) return 0;

        memset(sparseTable, -1, sizeof(sparseTable[0][0]) * MAX_NODE * MAX_DEPTH);

        for(int i = 1; i < N; i++)
        {
            cin >> node >> dist;
			sparseTable[i][0] = node;
			distFromRoot[i] = dist + distFromRoot[node];
			depth[i] = depth[node] + 1;
        }

        for(int j = 1; (1 << j) < N; j++)
            for(int i = 0; i< N; i++)
                if(sparseTable[i][j-1] != -1)
                    sparseTable[i][j] = sparseTable[sparseTable[i][j-1]][j-1];

        cin >> Q;
        while(Q--)
        {
            cin >> u >> v;
            long long ans = distFromRoot[u] + distFromRoot[v] - 2*distFromRoot[LCA(u, v)];

            if(Q) printf("%lld ", ans);
            else printf("%lld\n", ans);
        }
    }

	return 0;
}
