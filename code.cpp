class Solution {
public:
    int countCharacters(vector<string>& word, string cha) {
        map<char,int>M;
        int count;
        int res=0;
        for(int i=0;i<word.size();i++)
        {
            count=0;
            for(auto p:cha)// checking no. of character in string
            {
                M[p]++;
            }
            for(int j=0;j<word[i].size();j++)
            {
                auto z=M.find(word[i][j]);// finding character from map
                if(z->second!=0)// if character exist
                {
                    count++;
                    M[word[i][j]]--;
                }
                else
                {
                    break;
                }
            }
            if(count==word[i].size())// if size of word match size of count means all element of word present in cha string
            {
             res+=count;   
            }
            M.clear();
        }
        return res;
    }
};
