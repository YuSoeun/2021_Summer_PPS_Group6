#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 
string str;
string str_group[1005];
 
int main() {
    scanf("%s", str);
    int length = str.size();
 
    for (int i = 0; i < length; i++) str_group[i] = str.substr(i);
    sort(str_group, str_group + length);
    for (int i = 0; i < length; i++) printf("%s\n", str_group[i]);
 
    return 0;
}