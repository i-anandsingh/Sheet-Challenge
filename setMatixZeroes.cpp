void setZeros(vector<vector<int>> &matrix){
	// Write your code here.
    vector<vector<int>> idx;
    int r = matrix.size(), c = matrix[0].size();
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(matrix[i][j] == 0){
                vector<int> pos(2);
                pos[0] = i, pos[1] = j;
//                 cout<<i<<" "<<j<<endl;
                idx.push_back(pos);
            }
        }
    }
    
    
//     cout<<"Inside 2nd for loop"<<endl;
    for(int i = 0; i < idx.size(); i++){
        int x = idx[i][0], y = idx[i][1];
//         cout<<x<<" "<<y<<endl;
        for(int j = 0; j < c; j++)
            matrix[x][j] = 0;
        for(int j = 0; j < r; j++)
            matrix[j][y] = 0;
    }
    
}