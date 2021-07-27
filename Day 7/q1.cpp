class Solution {
public:
  vector<int> luckyNumbers (vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    vector<int> m_row(m), answer;
    
    for(int i=0;i<m;i++)
    {
        m_row[i] = matrix[i][0];
        for(int j=1;j<n;j++)
        {
            if(m_row[i] > matrix[i][j]) 
                m_row[i] = matrix[i][j];
        } 
    }
    for(int j=0;j<n;j++)
    {
        int tmp_m = matrix[0][j], id = 0;
        for(int i=1;i<m;i++)
        {
            if(tmp_m < matrix[i][j])
            {
                tmp_m = matrix[i][j];
                id = i;
            }  
        }  
        if(tmp_m == m_row[id]) 
            answer.push_back(tmp_m);
    }
    return answer;
  }
};