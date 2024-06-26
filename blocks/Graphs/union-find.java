class Solution {
    private int[] parent;
    private int[] rank;

    public int countComponents(int n, int[][] edges) {
        parent = new int[n];
        rank = new int[n];

        for(int i=0; i<n; i++) {
            parent[i] = i;
            rank[i] = 1;
        }

        int connComponents = n;

        for(int[] edge: edges) {
            if(union(edge[0], edge[1]) == 1) {
                connComponents--;
            }
        }

        return connComponents;
    }

    private int find(int node) {
        int result = node;

        while(result != parent[result]) {
            parent[result] = parent[parent[result]];
            result = parent[result];
        }

        return result;
    }

    private int union(int n1, int n2) {
        int p1 = find(n1);
        int p2 = find(n2);

        if(p1 == p2) {
            return 0;
        }

        if(rank[p1] > rank[p2]) {
            parent[p2] = p1;
            rank[p1] += rank[p2];
        } else {
            parent[p1] = p2;
            rank[p2] += rank[p1];
        }

        return 1;
    }
}
