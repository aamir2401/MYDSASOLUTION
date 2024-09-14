void rearrange(vector<int> &arr) {
        // code here
        vector<int> positive;
        vector<int> negative;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i] >= 0)
            {
                positive.push_back(arr[i]);
            }
            else
            {
                negative.push_back(arr[i]);
            }
        }
        int g=0;
	   int j=0; 
	   while(g<negative.size() || g<positive.size())
       {
           if(g<positive.size())
           arr[j++] = positive[g];
           if(g<negative.size())
           arr[j++] = negative[g];
           g++;
       }   