import java.util.HashMap;

class Solution {
    public String solution(String[] participant, String[] completion) {
        HashMap<String, Integer> participant_names = new HashMap<>();
        String answer = "";
        
        for(String name : participant){
            participant_names.put(name, participant_names.getOrDefault(name, 0) + 1);
        }
        
        for(String name : completion){
            participant_names.put(name, participant_names.get(name) - 1);
        }
        
        for(String name : participant_names.keySet()) { 
            if (participant_names.get(name) > 0) answer = name;
        }

        return answer;
    }
}