#ifndef ADJACENCYLIST_H
#define ADJACENCYLIST_H

#include <unordered_map>
#include <vector>
#include <string>
#include <set>
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

class AdjacencyList {
private:
    unordered_map<string, vector<string>> graph; // Adjacency list to represent the graph
    unordered_map<string, double> ranks; // Use to store rank of each page
    unordered_map<string, int> outDegrees; // Use to store out degree
    set<string> nodes; // Use to store all unique nodes
    int numPages; // Total number of pages

    // Calculate the initial rank knowing the number of pages
    void initializeRanks();

    // Calculate PageRank with the power iteration
    void computePageRank(int iterations);

public:
    AdjacencyList(); // Constructor of the AdjacencyList with initial values of pages with 0

    // Add a directed edge
    void addEdge(const string& from, const string& to);

    // Initialize the ranks, compute PageRank, and print the results in the right order
    void PageRank(int iterations);
};

#endif // ADJACENCYLIST_H
