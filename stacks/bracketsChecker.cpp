#include <iostream>
#include<string>
using namespace std;


int checker(string str){ 
    string stack;
    int flag = 1;
    for(int i = 0;i<str.length();i++){
        if(str[i] == '{' || str[i] == '(' || str[i] == '['){
            if(str[i] == '{'){
                stack.push_back('}');
            }else if(str[i] == '('){
                stack.push_back(')');
            }else if(str[i] == '['){
                stack.push_back(']');
            }
        }else if(str[i] == '}' || str[i] == ')' || str[i] == ']'){
            if(str[i] == '}'){
                if(stack[stack.length()-1] != '}'){
                    flag = 0;
                    break;
                }else {
                  stack.pop_back(); 
                }
            }
            if(str[i] == ')'){
                if(stack[stack.length()-1] != ')'){
                    flag = 0;
                    break;
                }else {
                  stack.pop_back();
                }
            }
            if(str[i] == ']'){
                if(stack[stack.length()-1] != ']'){
                    flag = 0;
                    break;
                }else {
                  stack.pop_back() ;
                }
            }
        }
    }
    return stack.length() == 0 ? flag : 0;
}

int main (){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string str;
        cin>>str;
        if(checker(str) == 1){
            cout<<"balanced\n";
        }else {
            cout<<"not balanced\n";
        }
    }
    return 0;
}

// let obj = {
//         "{":"}",
//         "(":")",
//         "[":"]"
//     }
    
// function checker(str){
//     let stack = [];
//     let flag = true;
//     for(let i =0;i<str.length;i++){
//         //console.log(stack)
//         if(str[i] == "{" || str[i] == "[" || str[i] == "("){
//             stack.push(obj[str[i]]);
//         }else if(str[i] == "}" || str[i] == "]" || str[i] == ")"){
//             if(stack[stack.length-1] == str[i]){
//                 stack.pop();
//             }else{
//                 flag = false;
//                 break;
//             }
//         }
//     }
//     return stack.length == 0 ? flag ? "balanced" : "not balanced": "not balanced";
// }


// function runProgram(input){
// 	input = input.trim().split("\n");
// 	for(let i = 1;i<input.length;i++){
// 	    console.log(checker(input[i]));
// 	}
// }
// process.stdin.resume();
// process.stdin.setEncoding("ascii");
// let read = "";
// process.stdin.on("data", function (input) {
//     read += input;
// });
// process.stdin.on("end", function () {
// 	read = read.replace(/\n$/,"");
//   runProgram(read);
// });
// process.on("SIGINT", function () {
//     read = read.replace(/\n$/,"");
//     runProgram(read);
//     process.exit(0);
// });
