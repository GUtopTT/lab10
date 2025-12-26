#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream source;
    ofstream dest;
    string line;

    source.open("cheerbook.txt");
    dest.open("cheerbook_copy.txt");

    
    dest << "-------------------- BOOM ---------------------" << endl;

    
    while (getline(source, line)) {
        dest << line << endl;
    }

    
    dest << "-------------------- HA!! ---------------------" << endl;

    source.close();
    dest.close();

    return 0;
}
