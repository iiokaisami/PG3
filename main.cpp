#include <algorithm>
#include <vector>
#include <string>
#include <cassert>
#include <sstream>
#include <fstream>

std::vector<std::string> mailAddress;

void LoadData()
{
    // ファイルを読み込む
    std::ifstream file("PG3_2024_03_02.txt");
    std::string line;

    // ファイルの内容を格納
    if (file.is_open())
    {
        while (std::getline(file, line)) 
        {
            std::stringstream line_stream(line);
            std::string email;
            // ,で区切る
            while (std::getline(line_stream, email, ','))
            {
                mailAddress.push_back(email);
            }
        }
        file.close();
    }
    else
    {
        printf("\nファイルを開けませんでした\n");
    }

}

int main() {

    LoadData();
   
    // 番号順にソート
    std::sort(mailAddress.begin(), mailAddress.end());

    // 番号順に並べて表示
    for (const auto& email : mailAddress)
    {
        printf("%s\n", email.c_str());
    }

    return 0;
}
