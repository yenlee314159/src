#ifndef GRAPH_H
#define GRAPH_H

#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <cstring>
#include <fstream>

#define DIS_INF 2147483647

using namespace std;

class Node;

class Edge{

	public:
		Edge(Node *a, Node *b);
		Node* node[2];
		
		Node* getNeighbor(Node *n);
		bool operator < (const Edge& rhs) const;
};

class Node{

	public:
		Node(const int i, int* c);
		void addEdge(Edge *e);
		void sortEdge();

		int id;
      int color;
		int x1;
		int y1;
		int x2;
		int y2;
		vector<Edge *> edge;	
		
		bool color;
		int ref;
};

class Graph{

	public:
		Graph() {}
		~Graph();
		
		void addEdge(Node* v1, Node* v2);
		void sortEdgesOfNode();
      void sortNodesByID();
      void sortNodesByX1(); 
      void sortNodesByY1();  
      void addEdgesInY();
      void addEdgesInX();                 
		void init();
		Node* getNodeById(const int& id);

		int alpha;
		int beta;
		int omega;
		map<int, Node *> nodesMap;
      vector<Node *> nodes;
		vector<Edge *> edges;
};

#endif
