// Code written By Eric Krivoy Sekler
// I have implemented this code based Lecture 5- 8 from  https://www.youtube.com/playlist?list=PLLssT5z_DsK9JDLcT8T62VtzwyW9LNepV
// I have implemented this code based on lecture from module 10 video adjacency list


#include "AdjacencyList.h"

// Constructor of the AdjacencyList with initial values of pages with 0
AdjacencyList::AdjacencyList() : numPages(0) {}

// Calculate the initial rank knowing the number of pages
void AdjacencyList::initializeRanks() {
    double initialRank = 1.0 / numPages;
    for (const auto& node : nodes) {
        ranks[node] = initialRank;
    }
}

// Calculate PageRank with the power iteration
void AdjacencyList::computePageRank(int iterations) {
    for (int i = 1; i < iterations; ++i) {
        unordered_map<string, double> newRanks;
        for (const auto& node : nodes) {
            newRanks[node] = 0.0;
        }

        for (auto it = graph.begin(); it != graph.end(); ++it) {
            const string& node = it->first;
            const vector<string>& neighbors = it->second;
            for (const auto& neighbor : neighbors) {
                newRanks[neighbor] += ranks[node] / outDegrees[node];
            }
        }

        ranks = newRanks;
    }
}

// Add a directed edge
void AdjacencyList::addEdge(const string& from, const string& to) {
    if (graph.find(from) == graph.end()) {
        graph[from] = vector<string>();
        numPages++;
    }
    if (outDegrees.find(from) == outDegrees.end()) {
        outDegrees[from] = 0;
    }
    if (graph.find(to) == graph.end()) {
        graph[to] = vector<string>();
        numPages++;
    }
    graph[from].push_back(to);
    outDegrees[from]++;
    nodes.insert(from);
    nodes.insert(to);
}

// Initialize the ranks, compute PageRank, and print the results in the right order
void AdjacencyList::PageRank(int iterations) {
    initializeRanks();
    computePageRank(iterations);

    vector<pair<string, double>> sortedRanks(ranks.begin(), ranks.end());
    sort(sortedRanks.begin(), sortedRanks.end());

    for (const auto& page : sortedRanks) {
        cout << page.first << " " << fixed << setprecision(2) << page.second << endl;
    }
}
