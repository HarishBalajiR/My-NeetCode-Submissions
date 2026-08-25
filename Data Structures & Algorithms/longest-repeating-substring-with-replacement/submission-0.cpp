class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxfreq = 0,left = 0,maxlen = 0, N = s.size();
        unordered_map<char,int> umap;
        for(int right = 0 ; right < N ; right++){
            umap[s[right]]++;
            maxfreq = max(maxfreq, umap[s[right]]);
            if(right-left+1 - maxfreq > k){
                umap[s[left]]--;
                if(umap[s[left]] == 0) umap.erase(s[left]);
                left++;
            }
            maxlen = max(maxlen, right-left+1);
        }
        return maxlen;
    }
};
/*
Longest substring with one distinct character - Done
Atmost k replacements.

We can get min replacements in a window using

windowsize - maxfreq

A A B B B C
k = 1
We can pick the window B B B C to get longest substring and with only one replacement (C)

So number of min replacements we can do with our current window is that forumla

if it exceeds k, -> invalid window we have to shrink

The biggest valid substring we can get is of size maxfreq + k. So, the larger maxfreq is, the better. 

If maxfreq doesn't change or goes down, our potential best answer doesn't change. We don't need to update maxfreq in this case.
*/