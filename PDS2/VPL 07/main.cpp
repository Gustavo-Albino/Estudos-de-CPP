#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main() {
    int n;
    while (std::cin >> n && n != 0) {
        std::vector<std::string> mDNAs;
        std::map<std::string, int> speciesCount;

        for (int i = 0; i < n; i++) {
            std::string mDNA;
            std::cin >> mDNA;
            std::sort(mDNA.begin(), mDNA.end()); // Ordena as bases para facilitar a comparação
            mDNAs.push_back(mDNA);
        }

        std::sort(mDNAs.begin(), mDNAs.end()); // Ordena as sequências genéticas

        int species = 0;
        std::string prev_mDNA = "";

        for (const std::string& mDNA : mDNAs) {
            if (mDNA != prev_mDNA) {
                species++;
                speciesCount[mDNA]++;
            }
            prev_mDNA = mDNA;
        }

        std::cout << species << '\n';
    }

    return 0;
}
