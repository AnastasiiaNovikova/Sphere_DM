#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    
    int ch;
    int number_of_lines = 0;
    
    FILE *infile = fopen(argv[1], "r");
    
    while (EOF != (ch=getc(infile)))
    {
        if (ch == '\n') number_of_lines++;
    }
    
    cout << number_of_lines << endl;
    
    return 0;
}
