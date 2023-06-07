int max_hourglass(vector<vector<int>>&a){
    vector<vector<int>>temp(a.size(),vector<int>(a[0].size()));
        for (int i = 0; i < a.size(); i++)
        {   temp[i][0]=a[i][0];
            for (int j = 1; j < a[0].size(); j++)
            {
                temp[i][j] = a[i][j]+temp[i][j-1];
            }

        }
        for (int i = 0; i < a[0].size(); i++)
        {   temp[0][i]=a[0][i];
            for (int j = 1; j < a.size(); j++)
            {
                temp[j][i] = a[j][i]+temp[j-1][i];
            }

        }
        int top=0,left=0,topleft=0,max=0;
        for (int i = 2; i < temp.size(); i++)
        {
            for (int j = 2; j < temp[0].size(); j++)
            {
                if ((i-2)>0)
                {
                    top=temp[i-3][j];
                }
                if ((j-2)>0)
                {
                    left=temp[i][j-3];
                }
                if((i-2)>0 && (j-2)>0){
                    topleft=temp[i-3][j-3];
                }
                int sum=temp[i][j]-(top+left-topleft+a[i-1][j]+a[i-1][j-2]);
                if(sum>max){
                    max=sum;
                }

            }

        }
        return max;

}