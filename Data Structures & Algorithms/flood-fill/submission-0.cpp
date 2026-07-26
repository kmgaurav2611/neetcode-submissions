class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int rows = image.size();
        int col = image[0].size();

        vector<vector<bool>> visited(rows, vector<bool>(col));

        queue<pair<int, int>> q;
        q.push({sr, sc});
        visited[sr][sc]= true;
       

        while(!q.empty()){
            pair<int, int> curr = q.front();
            int cr = curr.first;
            int cc = curr.second;
            q.pop();
            if(cr -1 >= 0 && visited[cr-1][cc] == false && image[cr-1][cc] == image[sr][sc] )
            {
                q.push({cr-1, cc});
                visited[cr-1][cc]= true;
                image[cr-1][cc]=color;
            }
             if(cr + 1 <rows && visited[cr+1][cc] == false && image[cr+1][cc] == image[sr][sc])
            {
                q.push({cr+1, cc});
                visited[cr+1][cc]= true;
                image[cr+1][cc]=color;
            }
             if(cc -1 >= 0 && visited[cr][cc -1] == false && image[cr][cc -1] == image[sr][sc])
            {
                q.push({cr, cc -1});
                visited[cr][cc -1]= true;
                image[cr][cc - 1]=color;
            }
             if(cc +1 < col && visited[cr][cc + 1] == false && image[cr][cc +1] == image[sr][sc])
            {
                q.push({cr, cc +1});
                visited[cr][cc +1]= true;
                image[cr][cc +1]=color;
            }

        }
 image[sr][sc]= color;
        return image;
    }
};