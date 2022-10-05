#include <iostream>
using namespace std;

int main(){
    int sc1, sc2, sc3, sum;
    float ave;
    cin >> sc1 >> sc2 >> sc3;

    sum = sc1 + sc2 + sc3;
    ave= sum / 3.0;

    cout << "總分 = " <<  sum << endl;
    cout << "平均 = " <<  ave;


    return 0;
}
