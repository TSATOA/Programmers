#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <iostream>
using namespace std;

string solution(string letter) {
    string answer = "";
    unordered_map<string,char> morse {
        {".-", 'a'}, {"-...", 'b'}, {"-.-.", 'c'}, {"-..", 'd'}, {".", 'e'}, {"..-.", 'f'}, {"--.", 'g'}, {"....", 'h'}, {"..", 'i'}, {".---", 'j'}, {"-.-", 'k'}, {".-..", 'l'}, {"--", 'm'}, {"-.", 'n'}, {"---", 'o'}, {".--.", 'p'}, {"--.-", 'q'}, {".-.", 'r'}, {"...", 's'}, {"-", 't'}, {"..-", 'u'}, {"...-", 'v'}, {".--", 'w'}, {"-..-", 'x'}, {"-.--", 'y'}, {"--..", 'z'}
    };
    
    istringstream str(letter);
    string word;
    while(getline(str,word,' ')){
        answer.push_back(morse.find(word)->second);
    }
    

    return answer;
}