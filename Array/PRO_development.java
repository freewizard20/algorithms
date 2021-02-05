// https://programmers.co.kr/learn/courses/30/lessons/42586

import java.util.Vector;

class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        int[] done = new int[progresses.length];
        for(int i = 0 ; i < done.length ; i++){
            done[i] = 0;
        }
        Vector<Integer> answer = new Vector<Integer>();
        for(int i = 0 ; i < 100 ; i++){
            for(int j = 0 ; j < progresses.length ; j++){
                progresses[j] = progresses[j] + speeds[j];
            }
            int finishedToday = 0;
            for(int j = 0 ; j < progresses.length ; j++){
                if(progresses[j]>=100 && done[j]==0){
                    done[j] = 1;
                    finishedToday++;
                }else if(progresses[j]>=100 && done[j]==1){
                    continue;
                }else{
                    break;
                }
            }
            if(finishedToday!=0) answer.add(finishedToday);
        }
        int[] result = new int[answer.size()];
        for(int i = 0 ; i < answer.size() ; i++){
            result[i] = answer.get(i);
        }
        return result;
    }
}
