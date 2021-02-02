#include <iostream>
#include <queue>
#include <list>

using namespace std;

class Graph {
public:
	Graph(int n);
	~Graph();
	void addEdge(int src, int tar);
	void BFTraversal();
	void DFTraversal();
	void printVertices();
	void printEdges();
private:
	int vertexCount;
	int edgeCount;
	bool** adjMat;
	void BFS(int n, bool marked[]);
	void DFS(int n, bool marked[]);
};

Graph::Graph(int n) {
	vertexCount = n;
	edgeCount = 0;
	
	if(n == 0)
		adjMat = 0;
	else {
		adjMat = new bool* [n];
		for(int i=0; i < n; i++)
			adjMat[i] = new bool [n];
		for(int i=0; i < n; i++)
			for(int j=0; j < n; j++)
				adjMat[i][j] = 0;
	}
}

Graph::~Graph() {
	for(int i=0; i < vertexCount; i++)
		delete [] adjMat[i];
		
	delete [] adjMat;
}

void Graph::addEdge(int src, int tar) {
	if(src < 0 || tar < 0 || src > vertexCount-1 || tar > vertexCount-1)
		cout << "Invalid vertex index! No edge has been added." << endl;
	else if(src == tar)
		cout << "No self loop! No edge has been added." << endl;
	else if (adjMat[src][tar] == 1)
		cout << "This edge already exists. No edge has been added." << endl;
	else {
		adjMat[src][tar] = 1;
		edgeCount++;
	}
}

void Graph::BFTraversal() {
// TO DO
// You are expected to call BFS() in this function,
// potentially multiple times in loops.
    bool *marked = new bool[vertexCount];
    for(int i = 0; i < vertexCount; i++){
        marked[i]= false;
    }
    for(int j = 0; j < vertexCount; j++){
        if (marked[j] == false){
            BFS(j,marked);
        }
     }
    cout << "\n";
}

void Graph::BFS(int n, bool marked[]) {
// TO DO
// You are expected to use a queue<int> from C++ STL.
// This function is not recursive, and you are expected to use a while loop.
    queue<int> q;
    q.push(n);
    marked[n] = true;

    while (!q.empty()) {
        n = q.front();
        q.pop();
        cout << n << " ";
        for (int i = n; i < vertexCount; i++) {
            if (!marked[i] && adjMat[n][i] == 1){
                q.push(i);
                marked[i] = true;
            }
        }
    }

}

void Graph::DFTraversal() {
// TO DO
// You are expected to call DFS() in this function,
// potentially multiple times in loops.
    bool *marked = new bool[vertexCount];

    for(int i = 0; i < vertexCount; i++){
        marked[i] = false;
    }

    for(int j = 0; j < vertexCount; j++){
        if(marked[j] == false){
            DFS(j, marked);
        }
    }
    cout << "\n";
}

void Graph::DFS(int n, bool marked[]) {
// TO DO
// You are asked to implement this function using recursion.
// However, a for loop is expected --- the recursive calls are within the loop.
    cout << n << " ";
    marked[n] = true;

    for(int i = n; i < vertexCount; i++){
        if (!marked[i] && adjMat[n][i] == 1){
            DFS(i, marked);
        }
    }
}

void Graph::printVertices() {
	cout << "This directed graph has " << vertexCount << " vertex (vertices), ";
	cout << "indexed from 0 to " << vertexCount-1 << endl; 
}

void Graph::printEdges() {
	cout << "This directed graph has " << edgeCount << " edge(s):" << endl;
	for(int i=0; i < vertexCount; i++)
		for(int j=0; j < vertexCount; j++)
			if(adjMat[i][j])
				cout << "(" << i << "," << j << ")" << endl;
}

int main() {
	cout << "Constructing a directed graph..." << endl;
	cout << "Please enter the number of vertices in this graph: ";
	int n = 0;
	cin >> n;
	Graph G(n);
	
	while(1) {
		cout << "Adding an directed edge..." << endl;
		cout << "Trying to add an edge (-1,-1) indicates the end of adding edges and prints outputs." << endl;
		cout << "Please enter the vertex index of the source of the edge to be added: ";
		int a;
		cin >> a;
		cout << "Please enter the vertex index of the target of the edge to be added: ";
		int b;
		cin >> b;
		if( a == -1 && b == -1)
			break;
		else
			G.addEdge(a,b);
	}
	
	cout << "A directed graph has been constructed:" << endl;
	G.printVertices();
	G.printEdges();
	
	cout << "Breadth-First Traversal: ";
	G.BFTraversal();
	cout << "Depth-First Traversal: ";
	G.DFTraversal();
	return 0;
}