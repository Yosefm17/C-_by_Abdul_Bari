#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream obj("write0.txt", ios::app);
    obj << "Jossy" << endl;
    obj << 3 << endl;
    obj << "Dire" << endl;
    obj.close();
}