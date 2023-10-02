class Solution {
public:
vector<vector<int>>ans;
void dfs(int node,int parent,vector<int>adj[],auto &vis,int timer,auto &in,auto &low){
    vis[node]=1;
    in[node]=low[node]=timer;
    timer++;
    for(auto it:adj[node]){
        if(it==parent)continue;
        else if(vis[it]==0){
            dfs(it,node,adj,vis,timer,in,low);
            low[node]=min(low[it],low[node]);
            if(in[node]<low[it]){
                ans.push_back({it,node});
            }

        }else{
            low[node]=min(low[node],low[it]);
        }
    }
}
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int>adj[n],vis(n),in(n),low(n);
        for(auto it:connections){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        dfs(0,-1,adj,vis,0,in,low);
        return ans;

        

        
    }
};
