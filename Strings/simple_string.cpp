#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
  string fir,sec;
    char temp;
    cin>>fir>>sec;
    cout<<fir.size()<<" "<<sec.size()<<"\n";
    cout<<fir+sec<<"\n";
    temp = fir[0];
    fir[0]=sec[0];
    sec[0]=temp;
    cout<<fir<<" "<<sec;

    return 0;
}
