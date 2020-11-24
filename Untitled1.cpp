#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
class String {
private:
    char str[100];
public:
    int len=0, j=0;
    char ch;
    void input() {
        cout<<"Give String: ";
        cin>>str;
    }
    void display() {
        cout<<str;
    }
    void operator+(String str1) {
        strcat(str,str1.str);
        cout<<"Result: "<<str<<endl;
    }
    void operator==(String str1) {
        strcpy(str1.str, str);
        cout<<"Result String: "<<str1.str;
    }
    int operator=(String str1) {
        if(strcmp(str1.str, str)==0)
            return 1;
        else
            return 0;
    }

    void string_length() {
        for(int i=0; str[i]!=0; i++)
            len++;
        cout<<"Length of "<<str<<" is "<<len<<endl;

    }
    void to_upper() {
        cout<<"Result: ";
        for (int i=0; i<strlen(str); i++)
            putchar(toupper(str[i]));

    }
    void to_lower() {
        cout<<"Result: ";
        for (int i=0; i<strlen(str); i++)
            putchar(tolower(str[i]));
    }

};

int main() {

    String a,b;
    int ch,c;
    cout<<"Select any one option: "<<endl;
    cout<<"1.concatenatec \n 2.copy \n 3.compare \n 4.length \n 5.upper \n 6.lower "<<endl;
    cin>>ch;
    switch(ch) {
    case 1:
        a.input();
        b.input();
        a+b;
        break;
    case 2:
        a.input();
        a==b;
        break;
    case 3:
        a.input();
        b.input();
        c = a=b;
        if(c==1)
            cout<<"Strings are Equal";
        else
            cout<<"Not Equal";
        break;
    case 4:
        a.input();
        a.string_length();
        break;
    case 5:
        a.input();
        a.to_upper();
        break;
    case 6:
        a.input();
        a.to_lower();
        break;
    default:
        cout<<"Enter Valid Option.";
    }

    return 0;

}
