#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    char s1[1000] = {'1', 'a', 'b', 'c', '\0'};
    cin.getline(s1, 1000); // take a line input
    cin >> s1;             // take a word input

    string s2; //dynamic array

    //initialization 1
    string s3 = {"Hello world"};

    //initialization 2
    string s4("Hello World"); //calling an constructor to create an object

    //take  in put from user
    getline(cin, s2);

    string s5;
    getline(cin, s5, '.'); // thrid argument is to stop the getline
    //iterate over all the elements
    for (char ch : s5)
    {
        cout << ch << ",";
    }
    cout << s5 << endl;

    // array of string
    int n = 5;
    vector<string> s6;
    string temp;
    //iterating over vector string
    while (n--)
    {
        getline(cin, temp);
        s6.push_back(temp);
    }
    for (string x : s6)
    {
        cout << x << "," << endl;
    }

    return 0;
}