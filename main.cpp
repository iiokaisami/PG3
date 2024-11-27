#include <Windows.h>
#include <iostream>
#include <list>

using namespace std;

void Draw(const list<const char*>& stations) {
    for (const auto& station : stations) {
       
        printf(" %s ,", station);
    }  
}

int main() {

    // 駅名
    list<const char*> stations1970 = {
        "Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani",
        "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro",
        "Mejiro", "Takadanobaba", "Shin-Okubo", "Shinjuku", "Yoyogi", "Harajuku",
        "Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Shinagawa",
        "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
    };

    // 1971年西日暮里駅を追加
    auto it = stations1970.begin();
    advance(it, 8);
    stations1970.insert(it, "Nishi-Nippori");

    // 2019年西日暮里駅を追加
    list<const char*> stations2019 = stations1970;

    // 2022年高輪ゲートウェイ駅を追加
    list<const char*> stations2022 = stations2019;
    it = stations2022.begin();
    advance(it, 22);
    stations2022.insert(it, "Takanawa Gateway");

    // 表示
    printf("\n\nStations in 1970\n");
    Draw(stations1970);

    printf("\n\nStations in 2019\n");
    Draw(stations2019);

    printf("\n\nStations in 2022\n");
    Draw(stations2022);

    return 0;
}
