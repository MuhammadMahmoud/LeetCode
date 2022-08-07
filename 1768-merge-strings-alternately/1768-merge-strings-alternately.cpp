class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merge="";
        int size=word1.size()+word2.size();
        for(int i=0,j=0,k=0;i<size;i++){
            if(i%2 == 0 && word1.size()>j) merge+=word1[j++];
            else if(i%2 != 0 && word2.size()>k) merge+=word2[k++];
            else if(i%2 == 0 && !(word1.size()>j) ) merge+=word2[k++];
            else if(i%2 != 0 && !(word2.size()>k) ) merge+=word1[j++];
        }
        return merge;
    }
};