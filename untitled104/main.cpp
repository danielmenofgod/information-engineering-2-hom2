

#include <iostream>
#include"Time.h"
//SREB
using namespace std;

int main(){
    Time t1(200);
    cout << t1 << std::endl; // output: 3m:20s

    Time t2;
    cin >> t2; // user inputs "10h:12m:01s"

    Time t3 = t2 - t1;
    int t3s = t3.toSeconds();

    cout << t3 << std::endl; // output: 9m:41s
    cout << t3s << std::endl; // output: 581
return 0;
}
