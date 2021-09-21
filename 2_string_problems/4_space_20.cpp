/* Given a string, write a function to replace all spaces in a string with 
'%20'. It is given that the string has sufficiant space at the end to hold
the additional characters.

INPUT
hello world,  how are you?

OUTPUT
hello%20world,%20%20how%20are%20you? */

#include<iostream>
#include<cstring>

using namespace std;

void replaceSpace(char *str){
    int spaces = 0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i] == ' '){
            spaces += 1;
        }
    }
    int idx = strlen(str)+2*spaces;
    str[idx]='\0';
    for(int i=strlen(str)-1; i>=0; i--){
        if(str[i]==' '){
            str[idx-1]='0';
            str[idx-2]='2';
            str[idx-3]='%';
            idx -= 3;
        }
        else{
            str[idx-1]=str[i];
            idx--;
        }
    }
}

int main(){
    char input[1000];
    cin.getline(input,1000);
    replaceSpace(input);
    cout << input ;
    return 0;
}