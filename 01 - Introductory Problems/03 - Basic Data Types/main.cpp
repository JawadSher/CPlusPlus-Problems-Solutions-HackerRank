#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    
    cin >> a >> b >> c >> d >> e;
    
    cout << a << "\n";          
    cout << b << "\n";            
    cout << c << "\n";             
    
    cout << fixed << setprecision(3) << d << "\n";
    cout << fixed << setprecision(9) << e << "\n";
    
    return 0;
}
