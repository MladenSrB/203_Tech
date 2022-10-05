#include <iostream>
using namespace std;

int main(){
    int sc1, sc2, sc3, sc4, sc5, sum;
    float ave;
    cin >> sc1 >> sc2 >> sc3 >> sc4 >> sc5;

    sum = sc1 + sc2 + sc3 + sc4 + sc5;
    ave= sum / 5.0;

    cout << "總分 = " <<  sum << endl;
    cout << "平均 = " <<  ave;


    return 0;
}
