//Copy the contents of one text file to another file, after removing all whitespaces
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream inFile;
    ofstream outFile;
    string line;
    inFile.open("26.cpp");
    outFile.open("26_out.cpp");
    if (!inFile)
    {
        cout << "Error opening file" << endl;
        return 1;
    }
    if (!outFile)
    {
        cout << "Error opening file" << endl;
        return 1;
    }
    while (getline(inFile, line))
    {
        for (int i = 0; i < line.length(); i++)
        {
            if (isspace(line[i]))
            {
                line.erase(i, 1);
                i--;
            }
        }
        outFile << line << endl;
    }
    inFile.close();
    outFile.close();
    return 0;
}