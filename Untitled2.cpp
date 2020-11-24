#include <iostream>
#include <cstring>
using namespace std;
class St {
private:
    char str[100];
    int len=0, j=0;
    char ch;
public:

    void input() {
        cout<<"Give String: ";
        cin>>str;
    }
    void display() {
        cout<<str;
    }
    void operator+(St str1) {
        strcat(str,str1.str);
        cout<<"Result: "<<str<<endl;
    }
    void operator==(St str1) {
        strcpy(str1.str, str);
        cout<<"Result String: "<<str1.str;
    }
    int operator=(St str1) {
        if(strcmp(str1.str, str)==0)
            return 1;
        else
            return 0;
    }
    void string_length() {
        for(int i=0; str[i]; i++)
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

int main()
{
    St a,b;
    int ch,c;
    cout<<"Menu: "<<endl;
    cout<<" 1.Concatenate \n 2.Copy \n 3.Compare \n 4.Length \n 5.Upper \n 6.Lower "<<endl;
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
