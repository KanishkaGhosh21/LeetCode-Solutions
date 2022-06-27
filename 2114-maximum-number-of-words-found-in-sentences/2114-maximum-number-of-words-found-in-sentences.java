class Solution {
    public int mostWordsFound(String[] sentences) {
        int maxWords=0;
        for (String string : sentences) {
            int words=(string.split(" ")).length;
            if(words>maxWords)
                maxWords=words;
        }
        return maxWords;
    }
}