class Solution {
    public int findCenter(int[][] edges) {
        int node1[]=edges[0];
        int node2[]=edges[1];
        if(node1[0]==node2[0] || node1[0]==node2[1])
            return node1[0];
        return node1[1];
    }
}