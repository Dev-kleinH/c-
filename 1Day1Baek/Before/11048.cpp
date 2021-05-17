#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int maze[1001][1001];

int main(){
    
    int n, m;
    cin >> n >> m;
    for(int i = 1;i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> maze[i][j];
        
    for(int i = 1; i <= n; i++)
        for(int  j = 1; j <= m; j++)
            maze[i][j] += max(max(maze[i-1][j-1],maze[i-1][j]), maze[i][j-1]);

    cout << maze[n][m];
    return 0;
}