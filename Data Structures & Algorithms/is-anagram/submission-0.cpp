class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.length(), n = t.length();
        if(m != n) return false;
        vector<int> characters(26,0);

        for(int x : s) characters[x - 'a']++;
        for(int x : t) characters[x - 'a']--;

        for(int i : characters) if(i != 0) return false;

        return true; 
    }
};
