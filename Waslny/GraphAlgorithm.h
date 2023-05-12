#pragma once

#include <utility>
#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <stack>
#include "EdgeMapper.h"
#include "NodeMapper.h"

using namespace std;

class GraphAlgorithm
{
    int N = 1e5;
    long long inf = 1e9;
    vector<long long> dist;
    vector<pair<int, int>> pr;
    vector<bool> visited;

public:
    GraphAlgorithm();
    void dijkstra(int n, int end, vector<vector<pair<int, int>>>& adj, EdgeMapper& edgeMappper);
    stack<pair<string, int>> getPath(int start, int end, vector<vector<pair<int, int>>>& adj, EdgeMapper& edgeMappper, NodeMapper& nodeMapper);

    //              n1   n2   e
    void bfs(vector<int> sources, vector<vector<pair<int, int>>>& adjList, vector<pair<pair<int, int>, int>>& v);
    void dfs(vector<int> sources, vector<vector<pair<int, int>>>& adjList, vector<pair<pair<int, int>, int>>& v);
    void dfs(int node, vector<vector<pair<int, int>>>& adjList);
    vector<pair<pair<int, int>, int>> getConnections(vector<vector<pair<int, int>>>& adjList, int AlgorithmUsed);
    bool dfs(int start, int target, vector<vector<pair<int, int>>>& adjList);

    void clr();


};