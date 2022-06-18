class NaiveSearch {
    public static void search(String pattern, String text){
        int l1 = pattern.length();
        int l2 = text.length();
        int i = 0, j = l2-1;

        for(i = 0, j = l2-1; j < l1;){
            if(text.equals(pattern.substring(i,j+1))){
                System.out.println("Pattern found at : "+ (i+1));
                // for (int j2 = 0; j2 < l2; j2++) {
                //     System.out.print(text.charAt(j2));
                // }
                // System.out.println();
            }
            i++;
            j++;
        }
    }

    public static void main(String[] args) {
        String pattern = "AABAACAADAABAAABAA";
        String text = "AABA";

        search(pattern, text);
    }
}
