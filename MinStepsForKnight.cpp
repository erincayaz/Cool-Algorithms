#include <cmath>
#include <cstdio>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// This algorithm is taken from GeekForGeeks
// It uses BFS to compute minimum steps to reach to target location.

struct cell {
    int x, y;
    int dis;
    cell() {}
    cell(int x, int y, int dis) 
        : x(x), y(y), dis(dis) 
        {            
        }
    
};

bool isInside(int x, int y) {
    if(x >= 1 && x <= 8 && y >= 1 && y <= 8)
        return true;
    return false;
}

int minStep(vector <int> k, vector <int> t) {
    int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
    int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};
    
    queue <cell> q;
    
    q.push(cell(k[0], k[1], 0));
    
    cell temp;
    int x, y;
    vector <vector <bool>> visit(9, vector<bool>(9, false));
    
    visit[k[0]][k[1]] = true;
    
    while(!q.empty()) {
        temp = q.front();
        q.pop();
        
        if(temp.x == t[0] && temp.y == t[1])
            return temp.dis;
        
        for(int i = 0; i < 8; i++) {
            x = temp.x + dx[i];
            y = temp.y + dy[i];
            
            if(isInside(x, y) && !visit[x][y]) {
                visit[x][y] = true;
                q.push(cell(x, y, temp.dis + 1));
            }
        }
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    
    string a, b;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        vector <int> knightPos(2), targetPos(2);
        
        knightPos[0] = int(a[0] - 'a' + 1);
        knightPos[1] = int(a[1] - '0');
        
        targetPos[0] = int(b[0] - 'a' + 1);
        targetPos[1] = int(b[1] - '0');
        
        cout << "To get from " << a << " to " << b << " takes " << minStep(knightPos, targetPos) << " knight moves." << endl;
        
    }
    
    
    return 0;
}
