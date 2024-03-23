#include <iostream>
using namespace std;
#include "GraphType.h"

int main()
{
	GraphType<int> graph;

	int VertexNum, EdgeNum;
	cin >> VertexNum >> EdgeNum;

	for (int i = 0; i < VertexNum; i++) {
		graph.AddVertex(i);
	}


	int x, y;

	for (int j = 0; j < EdgeNum; j++) {
		cin >> x >> y;
		graph.AddEdge(x, y, 1);
	}

	graph.ClearMarks();
	graph.MarkVertex(0);

	QueType<int> queue;
	graph.GetToVertices(0, queue);
	while (!queue.IsEmpty())
	{
		int item;
		queue.Dequeue(item);
		if (!graph.IsMarked(item)) {
			graph.GetToVertices(item, queue);
			graph.MarkVertex(item);
		}
	}

	int count = 0;
	for (int i = 0; i < VertexNum; i++) {
		if (graph.IsMarked(i))
			count++;
	}

	cout << count << endl;
}