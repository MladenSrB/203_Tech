#include <iostream>
using namespace std;

int main(){

    int total;
    cin >> total;

    if(total >= 4000)
        total = total * 0.8;
    else if(total >= 3000)
        total = total * 0.85;
    else if(total >= 2000)
        total = total * 0.9;
    else if(total >= 1000)
        total = total * 0.95;
//
    cout << "��I���B" << total << endl;
  return 0;
}


