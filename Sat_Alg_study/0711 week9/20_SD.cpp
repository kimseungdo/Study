class Solution {
public:
    bool isValid(string s) {
        //for(int i=0; i<s.size(); i++) cout<< (int) s[i] << " "; cout<< endl;
                
        /*
        ()  40  41   1    
        []  91  93   2
        {} 123  125  2
        */
        
        /*
        unordered_map<char, char> door = {
            { '[', ']' },
            { '(', ')' },
            { '{', '}' },
        };*/
        
        stack<char> dooor;
        char dr;
        
        for(char i: s){
            switch(i){
                case '(':
                case '{':
                case '[':
                    dooor.push(i);
                    break;
                // 개문까지 집어넣음
                

                //닫문부터 문 종류를 확인함
                case ')': {
                    if(!dooor.empty()){ //스딱이 비어있지 않으면
                        dr = dooor.top(); //열문을 탑으로 두고
                        dooor.pop(); //열문을 뺀다
                    }
                    if(dr != '(')
                        return false;
                    break;
                }
                case '}': {
                    if(!dooor.empty()){ 
                        dr = dooor.top();
                        dooor.pop();   
                    }
                    if(dr != '{')
                        return false;
                    break;
                }
                case ']': {
                    if(!dooor.empty()){
                        dr = dooor.top();
                        dooor.pop();   
                    }
                    
                    if(dr != '[')
                        return false;
                    break;
                }
            }
        }
        return dooor.empty();
    }
};

/*
문자열 뭐시기 괄호가 서로 맞게 닫히면 참

*/