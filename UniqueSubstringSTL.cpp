class Solution{
    public:
        int unique_substring(string str)
    {
        unordered_set<string> s;
        int i,j;
        string sub;
        for (i=0; i<str.length(); i++)
        for (j=0; j<str.length(); j++)
        {
            sub = str.substr(i,j);
            s.insert(sub);
        }
        return s.size();
    }
};
