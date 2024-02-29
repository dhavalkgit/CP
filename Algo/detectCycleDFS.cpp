bool iscycle(vector<vector<int>>&adj, vector<bool>&visi, vector<bool>&dfs,int node){
    visi[node]=true;
    dfs[node]=true;
    bool ans = true;

    for(auto el:adj[node]){
        if(!visi[el]){
            ans |= iscycle(adj,visi,dfs,el);
        }
        else if(dfs[el]) return false;
    }
    
    dfs[node]=false;
    return ans;
}
