class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

    //    vector<int>rows(n,-1);
    //    vector<int>col(m,-1);
    //    for(int i=0;i<n;i++){
    //        for(int j=0;j<m;j++){
    //            if(matrix[i][j]==0){
    //                col[j]=0;
    //                rows[i]=0;
    //            }
    //        }
    //    }
    //    for(int i=0;i<n;i++){
    //        for(int j=0;j<m;j++){
    //            if(rows[i]==0 || col[j]==0){
    //                matrix[i][j]=0;
    //            }
    //        }
    //    }
        int flag=1;
        for(int i=0;i<n;i++){
            if(matrix[i][0]==0){
                flag=0;
            }
            for(int j=1;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }

        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=1;j--){
               if(matrix[0][j]==0|| matrix[i][0]==0){
                   matrix[i][j]=0;
               }
            }
            if(flag==0){
                matrix[i][0]=0;
            }
        }
    }
};
