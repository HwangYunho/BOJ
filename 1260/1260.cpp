//
//  1260.cpp
//  algorithm
//
//  Created by 황윤호 on 2018. 7. 21..
//  Copyright © 2018년 황윤호. All rights reserved.
//

#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;
vector<int> a[1001];
bool check[1001];

// 깊이 우선 탐색
void dfs(int node) {
    check[node] = true;
    printf("%d ", node);
    for (int i=0; i<a[node].size(); i++) {
        int next = a[node][i];
        if (check[next] == false) {
            dfs(next);
        }
    }
}

// 너비 우선 탐색
void bfs(int start) {
    queue<int> q;
    memset(check,false,sizeof(check));
    check[start] = true;
    q.push(start);
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        printf("%d ", node);
        for (int i=0; i<a[node].size(); i++) {
            int next = a[node][i];
            if (check[next] == false) {
                check[next] = true;
                q.push(next);
            }
        }
    }
}

int main() {
    int vertex_size, edge_size, vertex_start; // 정점, 간선, 시작점
    scanf("%d %d %d", &vertex_size, &edge_size, &vertex_start);
    
    for (int i=0; i<edge_size; i++) {        //간선 시작, 도착
        int start_point, end_point;
        scanf("%d %d", &start_point, &end_point);
        a[start_point].push_back(end_point);
        a[end_point].push_back(start_point);
    }
    
    for (int i=1; i<=vertex_size; i++) {     // 오름차순 정렬
        sort(a[i].begin(), a[i].end());
    }
    
    dfs(vertex_start);
    puts("");
    bfs(vertex_start);
    return 0;
}
