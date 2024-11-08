#include <iostream>
#include <string>
#include "AdjacencyList.h"

using namespace std;

int main() {
    int numLines, powerIterations;
    cin >> numLines >> powerIterations;
    string from, to;
    AdjacencyList graph;

    // Read the input
    for (int i = 0; i < numLines; ++i) {
        cin >> from >> to;
        graph.addEdge(from, to);
    }

    graph.PageRank(powerIterations);

    return 0;
}
