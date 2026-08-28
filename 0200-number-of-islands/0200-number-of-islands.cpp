class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {

        int n=grid.size();
        int m=grid[0].size();
        int count =0;
        int dx[4]={-1,1,0,0};
        int dy[4]={0,0,-1,1};

        queue<pair<int,int>>q;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='1'){
                    count++;
                    q.push({i,j});
                    grid[i][j]='0';

                    while(!q.empty()){
                        int x=q.front().first;
                        int y=q.front().second;
                        q.pop();

                        for(int d=0;d<4;d++){
                            int nx = x+dx[d];
                            int ny= y+dy[d];

                            if(nx>=0 && nx<n && ny>=0 && ny<m &&
                               grid[nx][ny]=='1'){
                                grid[nx][ny]=0;
                                q.push({nx,ny});
                            }
                        }
                    }
                }
            }
        }
        return count;

        
    }
};