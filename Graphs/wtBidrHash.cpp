#include <iostream>
#include <unordered_map>
#include <cstring>
#include <list>
using namespace std;

#define ll long long
#define MOD 1000000007

class Graph {
	unordered_map<string, list<pair<string,int>>> l;
public:
	void addEdge(string x, string y, bool bidir, int wt) {
		l[x].push_back(make_pair(y,wt));
		if(bidir) l[y].push_back(make_pair(x,wt));
	}
	void printAdjList() {
		for(auto p : l) {
			string city = p.first;
			list<pair<string,int>> nbrs = p.second;
			cout << city <<"-> ";
			for(auto nbr : nbrs) {
				string dest = nbr.first;
				int dist = nbr.second;
				cout << dest << " " << dist << ", ";
			}
			cout << "\n";
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

	Graph g;
	g.addEdge("A","B",true,20);
	g.addEdge("A","C",true,10);
	g.addEdge("A","D",false,50);
	g.addEdge("B","D",true,30);
	g.addEdge("C","D",true,40);

	g.printAdjList();

	return 0;
}

/*

Graph using AdjList

output

C-> A 10, D 40, 
D-> B 30, C 40, 
A-> B 20, C 10, D 50, 
B-> A 20, D 30, 

*/