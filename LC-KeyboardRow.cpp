class Solution {
public:
    bool InOneRow (string word)
    {
        char Row1[10] = {'q','w','e','r','t','y','u','i','o','p'};
        char Row2[9] = {'a','s','d','f','g','h','j','k','l'};
        char Row3[7] = {'z','x','c','v','b','n','m'};
        bool InRow1 = false;
        bool InRow2 = false;
        bool InRow3 = false;
        for(int j = 0; j < word.size(); j++)
        {
            for(int k = 0; k < 10; k++)
                if(word[j] == Row1[k])
                    InRow1 = true;
            for(int m = 0; m < 9; m++)
                if(word[j] == Row2[m])
                    InRow2 = true;
            for(int n = 0; n < 7; n++)
                if(word[j] == Row3[n])
                    InRow3 = true;
        }
        switch(InRow1)
        {
            case 0:
                if(InRow2 == InRow3)
                    return false;
                else
                    return true;
            case 1:
                if(InRow2 == false && InRow3 == false)
                    return true;
                else
                    return false;
        }
    }
    vector<string> findWords(vector<string>& words) {
        vector<string> OneRows;
        for(int i = 0; i < words.size(); i++)
            if(InOneRow(words[i]))
                OneRows.push_back(words[i]);
        return OneRows;
    }
};