class Solution {
    public int mostWordsFound(String[] sentences) {
        int maxWords=0;
        for (String string : sentences) {
            int words=0;
            string+=" ";
            for (int i = 0; i < string.length(); i++) {
                if(string.charAt(i)==' ')
                    words++;
            }
            if(words>maxWords)
                maxWords=words;
        }
        return maxWords;
    }
}