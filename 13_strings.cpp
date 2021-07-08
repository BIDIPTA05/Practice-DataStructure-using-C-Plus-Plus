// String is a part of STL(Standard Template Library)

#include <bits/stdc++.h>
// #include <algorithm> //For Using String Sorting
using namespace std;

int main()
{
    // string str;
    // cin >> str;  //Basic String Input
    // cout << str; //Basic String Output

    // string str;
    // string str(5, 's'); // "s" print 5 times
    // cout << str << endl;

    // string str = "ProgrammerShri"; // Fixed Input Method
    // cout << str;

    // string str;
    // getline(cin, str); // Used for Input Full Sentense Like ("This is a VScode Editor")
    // cout << str << endl;

    //********Different Function of String********

    //***********Append***********
    // string s1 = "Programmer";
    // string s2 = "Shri";
    // s1.append(s2);           //s1 = s1 append with s2
    // cout << s1 << endl;      //(Method 1) Output : ProgrammerShri
    // cout << s1 + s2 << endl; //(Method 2) Output : ProgrammerShri

    //***********Access Character***********
    // string str = "ProgrammerShri";
    // cout << str[0] << endl; // Output : "P" // Str[index]

    //***********Clear***********
    // string str = "ProgrammerShri";
    // str.clear();
    // cout << str << endl;

    //***********Compare***********
    // string s1 = "Programmer";
    // string s2 = "Shri";
    // cout << s2.compare(s1) << endl; //s2 compare with s1

    //***********Empty***********
    // string str = "Shri";
    // cout << str << endl;
    // str.clear();
    // if (str.empty())
    // {
    //     cout << "String is Empty";
    // }

    //***********Erase***********
    // string str = "ProgrammerShri";
    // str.erase(10, 4); //Erase from 10 Position to 4 words
    // cout << str << endl;

    //***********Find***********
    // string str = "ProgrammerShri";
    // cout << str.find("Shri") << endl; //Find "Word" from String

    //************Insert***********
    // string str = "ProgramShri";
    // str.insert(7, "mmer"); //Insert String From 7th Positon
    // cout << str << endl;

    //***********Length or Size***********
    // string str = "ProgrammerShri";
    // for (int i = 0; i < str.length(); i++) // or str.size() same meaning
    // {
    //     cout << str[i] << " " << endl;
    // }

    //***********Find SubString***********
    // string str = "ProgrammerShri";
    // string s = str.substr(0, 10); // substr(from, to)
    // cout << s << endl;

    // ***********Convert String to Integer***********
    // string str = "7415";
    // int i = stoi(str); s=string to i = integer == stoi
    // cout<< i + 5 <<endl;

    // ***********Convert Integer to String***********
    // int i = 7415;
    // cout << to_string(i) + " 5 " << endl;

    // ***********Sort String*********** <algorithm>
    // string str = "qwertyuiopasdfghjklzxcvbnm";
    // sort(str.begin(), str.end());
    // cout << str << endl; //abcdefghijklmnopqrstuvwxyz
    return 0;
}