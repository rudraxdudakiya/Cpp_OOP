// Q4. Create a class CString to represent a string.

// Overload the + , == , != , < , <= , > , >= operators for strings.

#include <iostream>
using namespace std;

class CString
{
    string str;
public:
    void input()
    {
        cout << "Enter your string : ";
        cin >> str;
    }
    void showStr()
    {
        cout << str << endl;
    }
    int len()
    {
        int i=0;
        while(str[i] != '\0')
        {
            i++;
        }
        return i;
    }
    
    string operator +(CString s)
    {
        int len = CString::len()+s.len(), i=0, si=0;
        cout << len << endl;
        char merged[len];

        while(str[i] != '\0')
        {
            merged[i] = str[i];
            i++;
        }
        while(s.str[si] != '\0')
        {
            merged[i] = s.str[si];
            si++, i++;
        }
        merged[i] = '\0';
        return merged;
    }
    
    bool operator ==(CString s)
    {
        if(str==s.str)
            return true;
        return false;
    }
    
    bool operator !=(CString s)
    {
        if(str!=s.str)
            return true;
        return false;
    }
    bool operator <=(CString s)
    {
        if(str<=s.str)
            return true;
        return false;
    }
    bool operator >=(CString s)
    {
        if(str>=s.str)
            return true;
        return false;
    }
    bool operator <(CString s)
    {
        if(str<s.str)
            return true;
        return false;
    }
    bool operator >(CString s)
    {
        if(str>s.str)
            return true;
        return false;
    }
};

int main()
{
    CString s1, s2;
    s1.input();
    s2.input();
    s1.showStr();
    s2.showStr();
    cout << "Merged String : " << s1+s2 << endl;
    if(s1<=s2)
        cout << "YAa";
    else
        cout << "NAA";
    return 0;
}