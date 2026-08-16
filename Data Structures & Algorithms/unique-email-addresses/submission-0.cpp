class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> seen;
        for(string s : emails){
            string actual = "";
            bool at = false;
            int index = 0;
            while(index < s.size()){
                char ch = s[index];
                if(ch=='@'){
                    at = true;
                }
                if(ch=='.' && !at){
                    index++;
                    continue;
                }
                if(ch=='+'){
                    while(s[index]!='@') index++;
                    continue;
                }
                actual+=ch;
                index++;
            }
            seen.insert(actual);
        }
        return seen.size();
    }
};