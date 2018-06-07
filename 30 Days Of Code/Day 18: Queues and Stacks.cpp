// https://www.hackerrank.com/challenges/30-queues-stacks/problem

#include <iostream>
using namespace std;

int stackTop = -1;
int queueFront=0;
int queueRear=-1;
char stack[1000];
char queue[1000];
class Solution {
    public:
        void pushCharacter(char c){
            stack[++stackTop] = c;
        }
        char popCharacter(){
            return (stack[stackTop--]);
        }
        void enqueueCharacter(char c){
                queue[++queueRear]=c;
            return;
        }
        char dequeueCharacter(){
            return (queue[queueFront++]);
        }
};

// -----------Default Code------
int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
