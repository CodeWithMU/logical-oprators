#include <iostream>
using namespace std;
int main()
{
    double phy, chem, math;
    cout << "enter the physics marks:";
    cin >> phy;
    cout << "enter the cheminstry marks:";
    cin >> chem;
    cout << "enter the math marks:";
    cin >> math;

    double sum = phy + chem + math;
    cout << "the sum is :" << sum << endl;
    if (sum>60 || sum<80)
    {
        cout << "congratulations";
    }
   // if(sum>81 && sum<90)
    //{
      //  cout<<"excellent";
    //}


    return 0;
}