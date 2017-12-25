class Solution {
    public String[] findWords(String[] words) {
        List<String> ansList = new ArrayList<String> ();
        
        int flag1 = 0, flag2 = 0, flag3 = 0;
        String line1 = "qwertyuiop";
        String line2 = "asdfghjkl";
        String line3 = "zxcvbnm";
        
        for (int j = 0; j<words.length; j++)
        {
            for (int i = 0; i<words[j].length(); i++)
            {
                char c1 = words[j].charAt(i);
                if(!line1.contains(c1))
                {
                    flag1 = 1;
                    break;
                }
            }
            
            for (int i = 0; i<words[j].length(); i++)
            {
                char c2 = words[j].charAt(i);
                if(!line2.contains(c2))
                {
                    flag2 = 1;
                    break;
                }
            }
            
            for (int i = 0; i<words[j].length(); i++)
            {
                char c3 = words[j].charAt(i);
                if(!line3.contains(c3))
                {
                    flag3 = 1;
                    break;
                }
            }
            
            if (flag1 == 0 || flag2 == 0 || flag3 == 0)
            {
                ansList.add(words[j]);
            }
            
        }
        
        String[] ansArr = new String[ansList.size()];
        ansArr = ansList.toArray(ansArr);
        return ansArr;
    }
}
