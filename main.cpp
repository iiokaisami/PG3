#include <iostream>
#include <string>
#include <chrono>

int main()
{

    // 100000文字の'a'で初期化
    std::string a(100000, 'a');

    // コピーの時間計測
    auto copyStart = std::chrono::high_resolution_clock::now();
    std::string b = a; // コピー
    auto copyEnd = std::chrono::high_resolution_clock::now();
    auto copyTime = std::chrono::duration_cast<std::chrono::microseconds>(copyEnd - copyStart).count();

    // 移動の時間計測
	auto moveStart = std::chrono::high_resolution_clock::now();
    std::string c = std::move(a); // 移動
    auto moveEnd = std::chrono::high_resolution_clock::now();
    auto moveTime = std::chrono::duration_cast<std::chrono::microseconds>(moveEnd - moveStart).count();

    // 結果表示
    std::cout << "コピー : " << copyTime << " μs" << std::endl;
    std::cout << "移動 : " << moveTime << " μs" << std::endl;


	return 0;
}