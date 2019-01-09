#include <string>
#include <iostream>

using namespace std;

string permute(string s, int rank)
{
if (s.length() == 0)
return s;
if (s.length() == 1)
return s;
string newString;
int n = s.length();
int charnum = rank % n;
newString += s.at(charnum);
s.erase(charnum, 1);
newString += permute(s, rank / n);
return newString;
}

int main(void)
{
string s = "abc";

for (int rank = 0; rank < 6; rank++)
{
string p = permute(s, rank);
cout << p << endl;
}
}
 v
