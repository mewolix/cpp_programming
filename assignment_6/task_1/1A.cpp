#include <fstream>

int main() {
    std::ifstream in("in.txt");
    std::ofstream out("out.txt");
    int x;
    while (in >> x) {
        out << x * 2 << " ";
    }
    in.close();
    out.close();
    return 0;
}
