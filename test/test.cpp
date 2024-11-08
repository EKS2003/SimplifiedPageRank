#include <catch2/catch_test_macros.hpp>
#include <iostream>

// change if you choose to use a different header name
#include "AdjacencyList.h"

using namespace std;


TEST_CASE("Test Case 1 - PageRank Output Test 1", "[pagerank]") {
    AdjacencyList graph;
    graph.addEdge("facebook.com", "weather.com");
    graph.addEdge("facebook.com", "instagram.com");
    graph.addEdge("roblox.com", "twitter.com");
    graph.addEdge("twitter.com", "facebook.com");
    graph.addEdge("instagram.com", "twitter.com");
    graph.addEdge("roblox.com", "weather.com");
    graph.addEdge("twitter.com", "roblox.com");
    graph.addEdge("instagram.com", "facebook.com");
    graph.addEdge("weather.com", "roblox.com");
    graph.addEdge("instagram.com", "weather.com");

    ostringstream output;
    streambuf* oldCoutStreamBuf = cout.rdbuf();
    cout.rdbuf(output.rdbuf());

    graph.PageRank(11);

    cout.rdbuf(oldCoutStreamBuf);

    REQUIRE(output.str() == "facebook.com 0.12\ninstagram.com 0.06\nroblox.com 0.36\ntwitter.com 0.20\nweather.com 0.26\n");
}
TEST_CASE("Test Case 2 - PageRank Output Test 2", "[pagerank]") {
    AdjacencyList graph;
    graph.addEdge("reactjs.org", "youtube.com");
    graph.addEdge("google.com", "samsung.com");
    graph.addEdge("chase.com", "ufl.edu");
    graph.addEdge("disney.com", "samsung.com");
    graph.addEdge("reactjs.org", "openai.com");
    graph.addEdge("twitter.com", "stackoverflow.com");
    graph.addEdge("openai.com", "roblox.com");

    ostringstream output;
    streambuf* oldCoutStreamBuf = cout.rdbuf();
    cout.rdbuf(output.rdbuf());

    graph.PageRank(16);

    cout.rdbuf(oldCoutStreamBuf);

    REQUIRE(output.str() == "chase.com 0.00\ndisney.com 0.00\ngoogle.com 0.00\nopenai.com 0.00\nreactjs.org 0.00\nroblox.com 0.00\nsamsung.com 0.00\nstackoverflow.com 0.00\ntwitter.com 0.00\nufl.edu 0.00\nyoutube.com 0.00\n");
}
TEST_CASE("Test Case 3 - PageRank Output Test 3", "[pagerank]") {
    AdjacencyList graph;
    graph.addEdge("getbootstrap.com", "python.org");
    graph.addEdge("samsung.com", "getbootstrap.com");
    graph.addEdge("reactjs.org", "python.org");
    graph.addEdge("samsung.com", "zoom.us");
    graph.addEdge("twitter.com", "stackoverflow.com");
    graph.addEdge("python.org", "aman.com");
    graph.addEdge("aman.com", "reactjs.org");
    graph.addEdge("aman.com", "zoom.us");
    graph.addEdge("python.org", "openai.com");
    graph.addEdge("reactjs.org", "zoom.us");
    graph.addEdge("zoom.us", "openai.com");
    graph.addEdge("python.org", "samsung.com");
    graph.addEdge("getbootstrap.com", "aman.com");
    graph.addEdge("reactjs.org", "openai.com");
    graph.addEdge("getbootstrap.com", "twitter.com");
    graph.addEdge("zoom.us", "stackoverflow.com");
    graph.addEdge("aman.com", "stackoverflow.com");
    graph.addEdge("stackoverflow.com", "twitter.com");
    graph.addEdge("stackoverflow.com", "getbootstrap.com");
    graph.addEdge("zoom.us", "aman.com");
    graph.addEdge("getbootstrap.com", "reactjs.org");
    graph.addEdge("aman.com", "twitter.com");
    graph.addEdge("zoom.us", "getbootstrap.com");
    graph.addEdge("python.org", "zoom.us");
    graph.addEdge("samsung.com", "openai.com");
    graph.addEdge("openai.com", "python.org");
    graph.addEdge("openai.com", "zoom.us");

    ostringstream output;
    streambuf* oldCoutStreamBuf = cout.rdbuf();
    cout.rdbuf(output.rdbuf());

    graph.PageRank(14);

    cout.rdbuf(oldCoutStreamBuf);

    REQUIRE(output.str() == "aman.com 0.09\ngetbootstrap.com 0.15\nopenai.com 0.08\npython.org 0.10\nreactjs.org 0.06\nsamsung.com 0.02\nstackoverflow.com 0.22\ntwitter.com 0.17\nzoom.us 0.11\n");
}

TEST_CASE("Test Case 4 - PageRank Output Test 4", "[pagerank]") {
    AdjacencyList graph;
    graph.addEdge("reactjs.org", "chase.com");
    graph.addEdge("roblox.com", "weather.com");
    graph.addEdge("weather.com", "pcbuildinguf.com");
    graph.addEdge("apple.com", "microsoft.com");
    graph.addEdge("microsoft.com", "chase.com");

    ostringstream output;
    streambuf* oldCoutStreamBuf = cout.rdbuf();
    cout.rdbuf(output.rdbuf());

    graph.PageRank(2);

    cout.rdbuf(oldCoutStreamBuf);

    REQUIRE(output.str() == "apple.com 0.00\nchase.com 0.29\nmicrosoft.com 0.14\npcbuildinguf.com 0.14\nreactjs.org 0.00\nroblox.com 0.00\nweather.com 0.14\n");
}
TEST_CASE("Test Case 5 - PageRank Output Test 5", "[pagerank]") {
    AdjacencyList graph;
    graph.addEdge("microsoft.com", "stackoverflow.com");
    graph.addEdge("samsung.com", "reactjs.org");
    graph.addEdge("disney.com", "apple.com");
    graph.addEdge("reactjs.org", "pcbuildinguf.com");
    graph.addEdge("ufl.edu", "twitter.com");
    graph.addEdge("ufl.edu", "youtube.com");
    graph.addEdge("microsoft.com", "youtube.com");
    graph.addEdge("reactjs.org", "youtube.com");
    graph.addEdge("pcbuildinguf.com", "youtube.com");
    graph.addEdge("twitter.com", "reactjs.org");
    graph.addEdge("youtube.com", "disney.com");
    graph.addEdge("reactjs.org", "ufl.edu");
    graph.addEdge("microsoft.com", "openai.com");
    graph.addEdge("youtube.com", "ufl.edu");
    graph.addEdge("microsoft.com", "ufl.edu");
    graph.addEdge("samsung.com", "stackoverflow.com");
    graph.addEdge("disney.com", "microsoft.com");
    graph.addEdge("disney.com", "youtube.com");
    graph.addEdge("openai.com", "youtube.com");
    graph.addEdge("stackoverflow.com", "twitter.com");
    graph.addEdge("stackoverflow.com", "samsung.com");
    graph.addEdge("youtube.com", "stackoverflow.com");
    graph.addEdge("pcbuildinguf.com", "samsung.com");
    graph.addEdge("stackoverflow.com", "apple.com");
    graph.addEdge("samsung.com", "openai.com");
    graph.addEdge("openai.com", "reactjs.org");
    graph.addEdge("apple.com", "twitter.com");
    graph.addEdge("pcbuildinguf.com", "disney.com");

    ostringstream output;
    streambuf* oldCoutStreamBuf = cout.rdbuf();
    cout.rdbuf(output.rdbuf());

    graph.PageRank(17);

    cout.rdbuf(oldCoutStreamBuf);

    REQUIRE(output.str() == "apple.com 0.05\ndisney.com 0.08\nmicrosoft.com 0.03\nopenai.com 0.02\npcbuildinguf.com 0.06\nreactjs.org 0.17\nsamsung.com 0.05\nstackoverflow.com 0.08\ntwitter.com 0.15\nufl.edu 0.13\nyoutube.com 0.18\n");
}