#include <iostream>
using namespace std;
#include <string>
#include <math.h>
int main()
{
    int cnt;
    cin >> cnt;
    switch (cnt)
    {
    case 1:{
        cout << "I Love Luogu!" << endl;
        break;}
    case 2:{
        cout << "6 4" << endl;
        break;}
    case 3:{
        cout << "3 12 2" << endl;
        break;}
    case 4:{
        double t = 500;
        double q = t / 3;
        printf("%.6f", q);
        break;}
    case 5:{
        cout << "15" << endl;
        break;}
    case 6:{
        int w = (9 * 9) + (6 * 6);
        cout << sqrt(w) << endl;
        break;}
    case 7:{
        int mony = 100;
        mony += 10;
        cout << mony << endl;
        mony -= 20;
        cout << mony << endl;
        cout << "0" << endl;
        break;}
    case 8:{
        double c = 2 * 3.141593 * 5;
        double s = 3.141593 * 5 * 5;
        double v = (4 / 3.0) * 3.141593 * 5 * 5 * 5;
        cout << c << endl
             << s << endl
             << v << endl;
        break;}
    case 9:{
        cout << "22" << endl;
        break;}
    case 10:{
        cout << "9" << endl;
        break;}
    case 11:{   
        double m = 100.0 / (8 - 5);
        cout << m << endl;
        break;}
    case 12:{
        cout << "13" << endl
             << "R" << endl;
        break;}
    case 13:{
        cout << "16" << endl;
        break;}
    case 14:{
        cout << "50" << endl;
        break;}
    }
    return 0;
}