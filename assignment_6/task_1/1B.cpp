#include <fstream>

int main() {
    std::ifstream in("in.txt");
    std::ofstream out("out.txt");
    double d;
    while (in >> d) {
        out << d << " ";
    }
    in.close();
    out.close();
    return 0;
}
