#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double R;
    double x;  // ������� ��������     
    double y;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R; // ������������ � ����� ����
    
    if (((y>=x) && (x>=0) && (y>=0) && (y<=R)) && (R=sqrt(x*x+y*y)) ||
        ((y<=x) && (x<=0) &&(y<=0) ) && (R = sqrt(x * x + y * y)))
        cout << "yes" << endl;
    else

        cout << "no" << endl;
        
    cin.get();
    return 0;
}