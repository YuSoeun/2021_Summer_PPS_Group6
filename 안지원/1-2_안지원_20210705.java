class Solution {
    public int solution(String skill, String[] skill_trees) {
        int answer = 0;
        int index = 0;
        
        while(true) {
            String tree = skill_trees[index];
             String skill_tree = "";
            
            for (int i=0; i<tree.length(); i++) {
                String ch = String.valueOf(tree.charAt(i));
                if (skill.contains(ch)) {
                    skill_tree += ch;
                }
            }
            
            if (skill.indexOf(skill_tree) == 0) {
                answer++;
            }
            
            index++;
            if (index == skill_trees.length) {break;}
        }
        return answer;
    }
}