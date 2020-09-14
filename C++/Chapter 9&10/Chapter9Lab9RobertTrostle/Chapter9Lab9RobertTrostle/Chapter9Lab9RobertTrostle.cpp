//A program that uses a stack to reverse a string inputted by a user. 
//Created by Robert Trostle - CIT245
//Created on 6/15/20
#pragma warning(disable 4996)
#include<string>
#include<cstdlib>
#include <iostream>
#include <stack>   
#include<cstdio>
#include<cstring>
using namespace std;

char* reverse(char* s);
//string function which reverses the order of the passed string array and returns it. 

int main()
{
    int choice = 1;//to hold users choice whether or not to continue

    char* user = (char *)malloc(80);//char pointer array size 80 to hold user input

    cout << "This program reverses a string using the STL stack"<<endl;
  
    while (choice == 1) {
        
        cout << "Enter your string of less than 80 characters followed by an ENTER" << endl;
        
        cin.getline(user, 81, '\n');

            cout << reverse(user) << endl;

        cout << "Enter another? 1 = continue. Anything else to stop" << endl;
        cin >> choice;

        getchar();
    }
    free(user);//allocated with malloc
	system("pause");
	return 0;
}
char* reverse(char* s)
{
    int start = 0;
    int end = strlen(s);

    stack<char>letters;

    for (int  i = 0; i < end; i++)
    {
        letters.push(s[i]);
    }

    for (int i = 0; i < end; i++)
    {
        s[i] = letters.top();
        letters.pop();
    }
    return s;
}



