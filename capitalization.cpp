#include <iostream>

using namespace std;

string capitalize(string str);

int main ()
{
    cout << "type string below to capitalize.." << endl;

    string str, str2;

    while(str != "end"){
        cin >> str;
        str2 = capitalize(str);
        cout << "converted string: " << str2 << endl;
    }

    return 0;
}

string capitalize(string str)
{

    char lower[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char upper[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    int size = sizeof(lower)/sizeof(char);

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < size; ++j) {
            if (str[i] == lower[j])
                str[i] = upper[j];
        }
    }
    return str;
}