#include<bits/stdc++.h>

using namespace std;

class graph{
    public:
    unordered_map<int, list<pair<int, int>>> adj;

    void addEdges(int u, int v, int w){

        adj[u].push_back({v, w});
        
    }

    void printEdges(){

        for (auto it : adj){
            cout << it.first << " -> ";
            for (auto it1 : it.second)
            {
                cout <<"("<< it1.first << " , " << it1.second<<") ";
           }
           cout << endl;
        }
    }

    void dfs(int node, vector<bool> &visi, stack<int> &topoSort){
        visi[node] = true;
          
         for(auto neighbour : adj[node]){ 
        if(!visi[neighbour.first]){
           
            dfs(neighbour.first, visi, topoSort);
         }
       }
       topoSort.push(node);
    }

    void getShortestPath(int src, vector<int> &distArray, stack<int>&s){

        distArray[src] = 0;
        while(!s.empty()){
            int top = s.top();
            s.pop();
                 
            if(distArray[top] != INT_MAX){
                 for(auto it : adj[top]){

                if(distArray[top] + it.second < distArray[it.first]){

                    distArray[it.first] = distArray[top] + it.second;
                }
            }
                 }
        }
    }
};
int main(){

    graph g;
    g.addEdges(0, 1, 5);
    g.addEdges(0, 2, 3);
    g.addEdges(1, 2, 2);
    g.addEdges(1, 3, 6);
    g.addEdges(2, 3, 7);
    g.addEdges(2, 4, 4);
    g.addEdges(2, 5, 2);
    g.addEdges(3, 4, -1);
    g.addEdges(4, 5, -2);

    g.printEdges();

    vector<bool> visited(6);
    stack<int> s;

    for (int i = 0; i < 6; i++){
        if(!visited[i]){
            g.dfs(i, visited, s);
        }
    }

    // while(!s.empty()){
    //     cout << s.top() << " ";
    //     s.pop();
    // }

    vector<int> distArray(6);
    for (int i = 0; i < 6; i++){
        distArray[i] = INT_MAX;
    }

    
    g.getShortestPath(1,distArray, s);

    for (int i = 0; i < 6; i++){
        cout << distArray[i] << " ";
    }
        return 0;
}