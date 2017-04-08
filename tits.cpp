// i/o example

#include <iostream>
using namespace std;

void print(const std::string& input)
{
    cout << input << endl;
}

int main(int argc, char* argv[]) {
    print("----0-----------0--0-----------0----");
    print("---0-------------00-------------0---");
    print("---0------+------00------+------0---");
    print("---0----+++++----00----+++++----0---");
    print("----0-----+-----0--0-----+-----0----");
    print("-----00-------00----00-------00-----");
    print("-------0000000--------0000000-------");
    return 0;
}
