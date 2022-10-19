#include <iostream>
#include <fstream>

const std::string INPUT_FILE_PATH = "C:\\Users\\Aldiyar\\OneDrive\\Documents\\IITU\\4-1\\System Programming\\Practice1\\in.txt";
const std::string OUTPUT_FILE_PATH = "C:\\Users\\Aldiyar\\OneDrive\\Documents\\IITU\\4-1\\System Programming\\Practice1\\out.txt";

int main() {
    std::fstream in(INPUT_FILE_PATH, std::ios::binary | std::ios::in);
    std::fstream out(OUTPUT_FILE_PATH, std::ios::binary | std::ios::out);

    char c;
    while (in.get(c)) {
        if (in.eof()) break;
        out.put(c);
    }

    in.close();
    out.close();

    return 0;
}

