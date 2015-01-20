#include <iostream>
#include <fstream>

// cd ~/Desktop/C++/Lab\ 1/Lab\ 1/
// g++ main.cpp -o main.exe
// ./main.exe
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream input;
    int n, sum = 0;
    ofstream output;
    
    for (int i = 0; i < argc; i++) {
        cout << "argv[" << i << "] = " << argv[i] << endl;
    }
    
    input.open(argv[1]);
    
    while (input >> n) {
        sum += n;
        cout << n << "\t" << n*n << "\t" << sum << endl;
    }
    
    input.close();
    
//    output.open();
    /*
    if (input.fail(argv[1]);
        cout << "The file cannot be opened" << endl;
    else
      */
}