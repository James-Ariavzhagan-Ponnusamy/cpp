#include <iostream>
#include <cstring>

int main() {
    char szData[] = "SUVOJITSUVOSUVOJITUCSUVOJITSUVOVXSUVOJITSUVOGMSUVODMMVDSUVOJIT";
    int sjit = 0;
    int sj = 0;
    char* p2 = nullptr;
    char* p1 = szData;
    p2 = strstr(p1, "SUVOJIT");
    while (p2 != nullptr) {
        sjit++;
        p1 = p2 + 7;
        p2 = strstr(p1, "SUVOJIT");
    }
    std::cout << sjit << std::endl;
    p1 = szData;
    p2 = strstr(p1, "SUVO");
    while (p2 != nullptr) {
        sj++;
        p1 = p2 + 4;
        p2 = strstr(p1, "SUVO");
    }

    std::cout << sj << std::endl;
    std::cout << "only suvo is " << sj-sjit << std::endl;

    return 0;
}

/*
5
9
only suvo is 4

*/