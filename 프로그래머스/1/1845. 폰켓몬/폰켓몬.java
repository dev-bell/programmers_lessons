import java.util.HashSet;

class Solution {
    public int solution(int[] nums) {
        HashSet<Integer> poketmon_types = new HashSet<>(); 
        
        for(int num : nums){
            poketmon_types.add(num);
        }
        
        int total_num = nums.length;
        int max_num = total_num / 2;
        int answer = poketmon_types.size();
        
        if(answer > max_num) answer = max_num;
        
        return answer;
    }
}