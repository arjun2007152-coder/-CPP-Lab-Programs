#include <iostream>                       // cout, endl
using namespace std;                      // avoid std:: prefix

class Register {                          // models one 8-bit hardware register
private:
    unsigned char value;                  // stores a value from 0 to 255
public:
    void write(unsigned char v) { value = v; }      // store a new value
    unsigned char read() const { return value; }    // return the stored value (const: no change)
    void reset() { value = 0; }                     // clear the register to 0
};

int main() {                              // program starts here
    Register file[4];                     // array of 4 Register objects
    for (int i = 0; i < 4; ++i) file[i].reset();    // reset every register to 0
    file[0].write(0xAB);                  // R0 = 0xAB (171)
    file[3].write(0x10);                  // R3 = 0x10 (16)
    for (int i = 0; i < 4; ++i)           // print all four registers
        cout << "R" << i << " = " << (int)file[i].read() << endl;   // cast to int so a number prints, not a character
    return 0;                             // successful exit
}