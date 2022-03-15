#include <iostream>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;

class Graph{
    int v;
    list<int> *adj;
    int *heuristic;
    
    public:
        Graph(int v){
            this->v = v;
            adj = new list<int>[v];
            heuristic = new int[v];
        }
        
        void displayGraph(int v){
           for(int i = 0; i < v; i++) {
                cout<<"\nVertex " << i <<":";
                for(auto x : adj[i]) {
                    cout<< "<-->" << x;
                }
                cout<<endl;
            }
        }
        
        void addEdge(int u, int v, int cost){
            adj[u][v] = cost;
            adj[v][u] = cost;
        }
        
        void add_heuristic(int hr[]){
            for(int i = 0; i < v; i++){
                heuristic[i] = hr[i];
            }
        }

        int astar(int src, int dest) {
            int totalCost = 0;
            bool *visited = new bool[v];
            for(int i = 0; i < v; i++){
                visited[i] = false;
            }

            list<int> queue;
            visited[src] = true;
            queue.push_back(src);

            list<int>::iterator iter;
            while(!queue.empty()) {
                int currNode = queue.front();
                cout << "Visited " << currNode << endl;
                queue.pop_front();

                
            }

        }
};