#include <fstream>
#include <string>

int main() {
    std::ifstream in("in.txt");
    std::ofstream out("out.txt");
    std::string s;
    while (in >> s) {
        out << s << " ";
    }
    in.close();
    out.close();

    in.open("in.txt");
    out.open("out.txt");
    while (std::getline(in, s)) {
        out << s << "\n";
    }
    in.close();
    out.close();
    return 0;
}
