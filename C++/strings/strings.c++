#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    char d,e;
    cin>>a;
    cin>>b;
    int len =a.size();
    int len1 =b.size();
    string c=a+b;
    d=b[0];
    e=a[0];
    a[0]=d;
    b[0]=e;
    cout<<len<<" "<<len1<<endl;
    cout<<c<<endl;
    cout<<a<<" "<<b<<endl;
    return 0;
}