#include <iostream>
#include <list>
using namespace std;

#define ll long long
#define MOD 1000000007

class Graph {
	int V;
	list<int> *l;
public:
	Graph(int V) {
		this -> V = V;
		l = new list<int> [V];
	}
	void addEdge(int x, int y) {
		l[x].push_back(y);
		l[y].push_back(x);
	}
	void printAdjList() {
		for(int i = 0; i < V; i++) {
			cout <<"Vertex " << i <<"->";
			for(int nbr: l[i]) {
				cout << nbr <<",";
			} cout <<"\n";
		}
	}
};

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL); cout.tie(NULL);

	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,3);

	g.printAdjList();

	return 0;
}

/*

Graph using AdjList

output

Vertex 0->1,2,
Vertex 1->0,2,
Vertex 2->0,1,3,
Vertex 3->2,

*/