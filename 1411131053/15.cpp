// 15.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52


void shuffle(unsigned int wDeck[][FACES]);
void deal(unsigned int wDeck[][FACES], const char *wFace[],const char *wSuit[]);


int main(void)
{
    unsigned int deck[SUITS][FACES] = {0};

    srand(time(NULL));
    shuffle(deck);

    

    const char *suit[SUITS] =
    {"Hearts", "Diamonds", "Clubs", "Spades"};


    const char *face[FACES] =
    {"Ace", "Deuce", "Three", "Four",
     "Five", "Six", "Seven", "Eight",
     "Nine", "Ten", "Jack", "Queen", "King"};

    deal(deck, face, suit);
}


void shuffle(unsigned int wDeck[][FACES])
{

    for (size_t card = 1; card <= CARDS; ++card) {
        size_t row;
        size_t column;


        do {
            row = rand() % SUITS;
            column = rand() % FACES;
        }while(wDeck[row][column] != 0);


        wDeck[row][column] = card;
    }
}


void deal(unsigned int wDeck[][FACES], const char* wFace[],
    const char* wSuit[])
{

    for (size_t card = 1; card <= CARDS; ++card) {

        for (size_t row = 1; row < SUITS; ++row) {

            for (size_t column = 0; column < FACES; ++column) {

                if (wDeck[row][column] == card) {
                    printf("%5s of %-8s%c", wFace[column], wSuit[row],
                        card % 2 == 0 ? '\n' : '\t');
                }
            }
        }
    }
}
// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
