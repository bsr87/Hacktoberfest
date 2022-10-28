// A Quick implementation of BFS using vectors and queue
#include <bits/stdc++.h>
#define pb push_back

using namespace std;

vector<bool> v;
vector<vector<int> > g;

void edge(int a, int b)
{
  g[a].pb(b);

  // for undirected graph add this line
  // g[b].pb(a);
}

void bfs(int u)
{
  queue<int> q;

  q.push(u);
  v[u] = true;

  while (!q.empty()) {

    int f = q.front();
    q.pop();

    cout << f << " ";

    // Enqueue all adjacent of f and mark them visited
    for (auto i = g[f].begin(); i != g[f].end(); i++) {
      if (!v[*i]) {
        q.push(*i);
        v[*i] = true;
      }
    }
  }
}

// Driver code
int main()
{
  int n, e;
  cin >> n >> e;

  v.assign(n, false);
  g.assign(n, vector<int>());

  int a, b;
  for (int i = 0; i < e; i++) {
    cin >> a >> b;
    edge(a, b);
  }

  for (int i = 0; i < n; i++) {
    if (!v[i])
      bfs(i);
  }

  return 0;
}


//-----------------------------------Zeuidon's Code-------------------------------------//


// #include<bits/stdc++.h>
// using namespace std;
// void addEdge(vector <int> adj[], int u,int v) 
// { 
//     adj[u].push_back(v); 
// } 
// void BFS(int V,int s,vector <int> adj[])
// {
//   bool *visited=new bool[V];
//   memset(visited,false,sizeof(visited));
//   queue<int>q;
//   q.push(s);
//   vector<int>::iterator i;
    
//   while(!q.empty())
//   {
//     int s=q.front();
//     q.pop();
//     visited[s]=true;
//     cout<<s<<" "; 
//     for(i=adj[s].begin();i!=adj[s].end();i++)
//       if(!visited[*i])
//       q.push(*i);
    
//   }
// }

// int main()
// { 
//     int V; cin>>V; 
//     vector<int>adj[V]; 
//     for(int i=0; i<V; i++) { 
//       int x, y; cin>>x>>y;
//       addEdge(adj, x, y); 
//     }
//   BFS(V,0,adj);
//   return 0;
// }

//-----------------------------------Zeuidon's Code-------------------------------------//


// class Solution {
// public:
//     Node* connect(Node* root) {
//         queue<Node*> q;
//         if(root) q.push(root);

//         while(!q.empty()){
//          int siz=q.size();
//          Node* nxt=nullptr;
//          for(int i=0;i<siz;i++){
//           auto top=q.front();
//           q.pop();
//           top->next=nxt;
//           nxt=top;
//           if(top->right) q.push(top->right);
//           if(top->left) q.push(top->left);
//          }
//         }
//         return root;
//     }
// };



