#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int one=a*((b%100)%10);
    int two=a*((b-((b/100)*100))/10);
    int th=a*(b/100);
    cout << one << endl;
    cout << two << endl;
    cout << th << endl;
    cout << one+two*10+th*100 << endl;
}