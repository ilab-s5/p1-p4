#include <iostream>
#include <string>
int match(const std::string& text, const std::string& pattern){
    int posisi = -1, text_length = text.length(), pattern_length = pattern.length();
    if (pattern_length > text_length) return -1;
    for (int i = 0; i <= text_length - pattern_length; i++){
        posisi = i;
        int j;
        for (j = 0; j < pattern_length; j++)
            if (pattern[j] != text[i + j]) break;
        if (j == pattern_length) return posisi;
    }
    return -1;
}
int main(){
    std::string a, b;
    int posisi;
    std::cout << "\n\t\tProgram Untuk Menentukan Substring Dari Sebuah String\n\t\tMuhammad Sahal Nurdin_51421075\n";
    std::cout << "\nMasukkan String :\n\t"; std::getline(std::cin, a);
    std::cout << "\nMasukkan Substring :\n\t"; std::getline(std::cin, b);
    posisi = match(a, b);
    std::cout << ((posisi != -1) ? "\n\n\t\tSubstring ADA di dalam string.\n\n" : "\n\n\t\t\tSubstring TIDAK ada di dalam string.\n\n");
    return 0;
}

