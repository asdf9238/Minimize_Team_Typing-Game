#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


void interface1() // 메인 UI
{
    printf("                          ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("                         ㅣ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ㅣ\n");
    printf("                         ㅣ■ ■ Esc ■ F1 F2 F3 F4 □ F5 F6 F7 F8 □ F9 F10 F11 F12   ■ㅣ\n");
    printf("                         ㅣ■ ` ■ ■ 1  2  3  4  5  6  7  8  9  0  -  =  ←  ■ ■ ■ ■ㅣ\n");
    printf("                         ㅣ■ Tab ■■ Q  W  E  R  T  Y  U  I  O  P  [  ]  |  ■ ■ ■ ■ㅣ\n");
    printf("                         ㅣ■ Cap ■■■ A  S  D  F  G  H  J  K  L  ;  ' Enter   ■ ■ ■ㅣ\n");
    printf("                         ㅣ■ Shift ■■ Z  X  C  V  B  N  M  ,  .  /   Shift ■ ■ ■ ■ㅣ\n");
    printf("                         ㅣ■ Ctrl window Alt ==== Space ==== Alt Fn ■ Ctrl  ■ ■ ■ ■ㅣ\n");
    printf("                         ㅣ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ㅣ\n");
    printf("                          ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n\n");

    printf("          ■■■■■■ ■■   ■■■■■■■■■ ■■    ■■■■■■     ■ ■■     ■■■■   ■■\n");
    printf("          ■■■■■■ ■■   ■■■■■■■■■ ■■    ■■■■■■     ■ ■■    ■■■■■  ■■\n");
    printf("          ■■         ■■       ■■■■■     ■■            ■■     ■ ■■    ■■  ■■  ■■\n");
    printf("          ■■         ■■         ■■■       ■■            ■■     ■ ■■    ■■  ■■  ■■\n");
    printf("          ■■■■■■ ■■■■   ■■  ■■     ■■■■        ■■ ■■■ ■■    ■■■■■  ■■\n");
    printf("          ■■■■■■ ■■■■  ■■    ■■    ■■■■        ■■ ■■■ ■■     ■■■■   ■■\n");
    printf("          ■■         ■■      ■■    ■■    ■■            ■■     ■ ■■\n");
    printf("          ■■         ■■     ■■      ■■   ■■            ■■     ■ ■■      ■■■■■■■\n");
    printf("          ■■■■■■ ■■    ■■        ■■  ■■            ■■     ■ ■■      ■■      ■■\n");
    printf("          ■■■■■■ ■■    ■■        ■■  ■■            ■■     ■ ■■      ■■■■■■■\n\n");
    printf("                                             ===================\n");
    printf("                                                1. 게임 시작\n");
    printf("                                                2. 게임 종료\n");
    printf("                                             ===================\n");
}

void win() // 게임 승리 UI
{
    printf("\n\n");
    printf("                                                 ■   ■   ■   ■\n");
    printf("                                    ■■       ■ ■■ ■■ ■■ ■        ■■ \n");
    printf("                                   ■  ■     ■                   ■     ■  ■\n");
    printf("                                   ■■■    ■                     ■    ■■■\n");
    printf("                                   ■  ■   ■  ■■■      ■■■   ■   ■  ■\n");
    printf("                                   ■  ■  ■  ■    ■    ■    ■   ■  ■  ■\n");
    printf("                                   ■  ■  ■ ■      ■  ■      ■  ■  ■  ■\n");
    printf("                                   ■  ■  ■                         ■  ■  ■\n");
    printf("                                   ■   ■ ■                         ■ ■   ■\n");
    printf("                                    ■   ■■       ■■■■■        ■■   ■\n");
    printf("                                     ■   ■■        ■  ■        ■■    ■\n");
    printf("                                      ■   ■■        ■■        ■■   ■\n");
    printf("                                       ■   ■■                 ■■   ■\n");
    printf("                                        ■    ■                ■    ■\n");
    printf("                                         ■                          ■\n");
    printf("                                          ■  ■                ■  ■\n");
    printf("                                           ■ ■                ■ ■\n");
    printf("                                            ■■                ■■\n");
    printf("                                              ■                ■\n");
    printf("                                              ■                ■\n");
    printf("                                              ■                ■\n");
    printf("                                              ■                ■\n");
    printf("                                              ■                ■\n\n");
    printf("                                               승리하셨습니다!!\n\n");

    printf("                                             ======================\n");
    printf("                                               1. 게임 다시 시작\n");
    printf("                                               2. 게임 종료\n");
    printf("                                             ======================\n");
}

void lose() // 게임 패배 UI
{
    printf("\n\n");
    printf("                                                    ■■■■■■■■■■■■■\n");
    printf("                                                  ■                          ■\n");
    printf("                                                ■                              ■\n");
    printf("                        ■■        ■■        ■                                ■\n");
    printf("                      ■    ■    ■■■■      ■                                ■\n");
    printf("                        ■■■  ■■■■■■    ■        ■■■■■■■■      ■\n");
    printf("                                ■■■■■■    ■      ■            ■      ■\n");
    printf("                                  ■■■■      ■    ■            ■      ■\n");
    printf("                          ■■      ■■        ■    ■          ■      ■\n");
    printf("                        ■  ■                  ■    ■        ■      ■\n");
    printf("                        ■■■    ■■■■■■■■    ■      ■      ■■■■■■■\n");
    printf("                                ■                    ■    ■                      ■\n");
    printf("                                  ■■■■■■■■■■        ■■■■■■■■■■■\n\n");
    printf("                                                패배하셧습니다 ㅠ_ㅠ..\n\n");

    printf("                                               =========================\n");
    printf("                                                   1. 게임 다시 시작\n");
    printf("                                                   2. 게임 종료\n");
    printf("                                               ==========================\n");
}

void levelLow() // 난이도 (하)
{
    srand((unsigned int)time(NULL));  // 시간에 따른 시드 값 변경

    clock_t start1, end1;             // 타이머 변수1
    clock_t start2, end2;             // 타이머 변수2
    float time = 0;                   //  상대방의 입력이 끝나는 시간 변수
    int k = 0;

    char you[1024] = { 0 };             // 사용자 입력 문자형 배열 변수
    char opp[10][1024] = { { "참외를 버리고 호박을 먹는다."}
                         ,{"옷은 새 옷이 좋고 임은 옛 임이 좋다."}
                         ,{"전당 잡은 촛대 같고, 꾸어 온 보릿자루 같다."}
                         ,{"눈물 아롱아롱 피리 불고 가신 님의 밟으신 길은"}
                         ,{"지금 눈 내리고, 매화 향기 홀로 아득하니"}
                         ,{"남 떡 먹는 데 팥고물 떨어지는 걱정한다."}
                         ,{"제 새끼 잡아먹는 범은 없다."}
                         ,{"장부의 한 말이 천금같이 무겁다."}
                         ,{"인간은 만물의 척도이다."}
                         ,{"저 팽이가 돌면 이 팽이도 돈다."} };    // 문구 문자형 배열 변수


    for (k = 0; k < 3; k++) // 3번 반복
    {
        int random = rand() % 10;                // opp의 문장 랜덤 선택 변수
        int random1 = rand() % 101 + 400;        // 상대방의 입력 속도 변수
        int a = strlen(opp[random]);             // 문구의 입력 길이 변수

        printf("=============================================================================\n");
        printf("상대방의 속도: %d \n\n", random1);

        start1 = clock();                         // 상대방의 걸린 시간 측정 시작
        printf("상대방의 입력 : ");

        for (int i = 0; i < a; i++)               // 상대방이 한 글자씩 입력 시작
        {
            printf("%c", opp[random][i]);
            Sleep(random1);
        }

        end1 = clock();                                 // 상대방의 걸린 시간 측정 종료
        time = (float)(end1 - start1) / CLOCKS_PER_SEC; // time이라는 변수에 상대방의 걸린 시간 저장

        printf("\n\n상대방이 걸린시간(clock): %.1f\n", time);  // 상대방이 걸린 시간 출력

        printf("\n상대방의 문장을 더 빨리 입력하시오\n");     // 상대방이 입력 종료 후 사용자에게 알려주는 문구



        start2 = clock();  // 사용자의 걸린 시간 측정 시작


        while (1)
        {

            printf("\n사용자의 입력 : ");
            scanf(" %[^\n]s\n", you);

            printf("=============================================================================\n");
            end2 = clock();   // 사용자의 걸린 시간 측정 종료

            if (strcmp(you, opp[random]) != 0)  // 사용자가 입력한 문장과 입력해야할 문장이 다른 경우
            {
                printf("다시 입력하세요\n");
                printf("남은시간: %.1f\n", time - (float)(end2 - start2) / CLOCKS_PER_SEC); // 남은시간 출력
                printf("=============================================================================\n");

                if (time < (float)(end2 - start2) / CLOCKS_PER_SEC)  // 남은시간이 없을 경우
                {
                    printf("시간 초과입니다.\n");
                    printf("사용자가 걸린시간(clock): %.1f\n", (float)(end2 - start2) / CLOCKS_PER_SEC);
                    Sleep(3000);
                    break;                         //반복문 종료
                }
            }

            else if (strcmp(you, opp[random]) == 0)  //사용자가 입력한 문장과 입력해야할 문장이 같은 경우
            {
                if ((time > (float)(end2 - start2) / CLOCKS_PER_SEC))
                {
                    printf("사용자가 걸린시간(clock): %.1f\n", (float)(end2 - start2) / CLOCKS_PER_SEC);  // 걸린 시간 출력
                    break;
                }

                else if ((time < (float)(end2 - start2) / CLOCKS_PER_SEC))
                {
                    printf("시간 초과입니다.\n");
                    printf("사용자가 걸린시간(clock): %.1f\n", (float)(end2 - start2) / CLOCKS_PER_SEC);
                    Sleep(3000);
                    system("cls");
                    break;                                                                                   //반복문 종료
                }
            }
        }

        if (k == 2 && strcmp(you, opp[random]) == 0 && time > (float)(end2 - start2) / CLOCKS_PER_SEC) // 승리 조건이 충족 되었을 경우 게임 승리 UI 출력
        {
            system("cls");
            win();
        }

        else if (k < 3 && (time < (float)(end2 - start2) / CLOCKS_PER_SEC || time == (float)(end2 - start2) / CLOCKS_PER_SEC)) // 패배 조건에 충족할 경우 패배 UI 출력
        {
            system("cls");
            lose();
            break;
        }
    }
}

void levelm()
{
    srand((unsigned int)time(NULL));  // 시간에 따른 시드 값 변경

    clock_t start1, end1;             // 타이머 변수1
    clock_t start2, end2;             // 타이머 변수2
    float time = 0;                   //  상대방의 입력이 끝나는 시간 변수
    int k = 0;
    char you[1024];
    char opp1[10][1024] = { { "한 나라가 잘되고 못되는 열쇠는 그 나라 국어를 얼마나 사랑하느냐에 있다."}
                         ,{"희극에서 가장 어려운 배역은 바보이고, 그 역을 맡는 배우는 바보가 아니다"}
                         ,{"언젠간 쌀이 떨어질 정도로 어려웠을 때 쌀 한자루를 선뜻 들고 왔던 그 친구를 잊을 수 없습니다. 지금은 많이 아프지만 내 소중한 친구가 언제나 건강하길 빕니다."}
                         ,{"'지금이 최악의 사태다'라고 말할 수 있는 동안은 아직도 최악의 사태는 아니다."}
                         ,{"최후의 승리는 안내하는 사람에게 돌아간다. 인내하는 데서 운명이 좌우되고, 성공이 따르게 된다."}
                         ,{"사람은 자신이 하는 일에 대하여 신념을 가져야 한다. 그리고 자신이 옳다고 확신하는 일을 실행할 만한 힘을 모두가 다 가지고 있는 법이다. 자신에게 그같은 힘이 있을까 주저 말고 앞으로 나아가라."}
                         ,{"모든 것을 젊었을 때 구해야 한다. 젊음은 그 자체가 하나의 빛이다. 빛이 흐려지기 전에 열심히 구해야 한다."}
                         ,{"좋은 사람을 보면 그를 본보기로 삼아 모방하려 노력하고, 나쁜 사람을 보면 내게도 그런 흠이 있나 찾아보라."}
                         ,{"인격이 나무라면 평판은 그 그림자와 같다. 우리가 나무에 대해 생각하는 바가 그림자라면 나무는 실제 모습인 것이다."}
                         ,{"책의 가장 좋은 영향력은 독자로 하여금 스스로 행동하도록 자극하는 것이다."} };

    for (k = 0; k < 3; k++)
    {
        int random = rand() % 10;                // 위에 문구 번호의 랜덤 선택
        int random1 = rand() % 101 + 250;        // 상대방의 입력 속도
        int a = strlen(opp1[random]);             // 문구의 입력 길이

        printf("=============================================================================\n");
        printf("상대방의 속도: %d \n\n", random1);

        start1 = clock();                         // 상대방의 시간 시작
        printf("상대방의 입력 : ");

        for (int i = 0; i < a; i++)               // 상대방이 한 글자씩 입력 시작
        {
            printf("%c", opp1[random][i]);
            Sleep(random1);
        }

        end1 = clock();   // 상대방의 시간 종료
        time = (float)(end1 - start1) / CLOCKS_PER_SEC;

        printf("\n\n상대방이 걸린시간(clock): %.1f\n", time);  // 걸린시간출력

        printf("\n상대방의 문장을 더 빨리 입력하시오\n"); // 상대방이 입력 종료 후 사용자에게 알려주는 문구



        start2 = clock();  // 사용자의 시간 시작

        while (1)
        {

            printf("\n사용자의 입력 : ");
            scanf(" %[^\n]s\n", you);

            printf("=============================================================================\n");
            end2 = clock();   // 사용자의 걸린 시간 측정 종료

            if (strcmp(you, opp1[random]) != 0)  // 사용자가 입력한 문장과 입력해야할 문장이 다른 경우
            {
                printf("다시 입력하세요\n");
                printf("남은시간: %.1f\n", time - (float)(end2 - start2) / CLOCKS_PER_SEC); // 남은시간 출력
                printf("=============================================================================\n");

                if (time < (float)(end2 - start2) / CLOCKS_PER_SEC)  // 남은시간이 없을 경우
                {
                    printf("시간 초과입니다.\n");
                    printf("사용자가 걸린시간(clock): %.1f\n", (float)(end2 - start2) / CLOCKS_PER_SEC);
                    Sleep(3000);
                    break;                         //반복문 종료
                }
            }

            else if (strcmp(you, opp1[random]) == 0)  //사용자가 입력한 문장과 입력해야할 문장이 다른 경우
            {
                if ((time > (float)(end2 - start2) / CLOCKS_PER_SEC))
                {
                    printf("사용자가 걸린시간(clock): %.1f\n", (float)(end2 - start2) / CLOCKS_PER_SEC);  // 걸린 시간 출력
                    break;
                }

                else if ((time < (float)(end2 - start2) / CLOCKS_PER_SEC))
                {
                    printf("시간 초과입니다.\n");
                    printf("사용자가 걸린시간(clock): %.1f\n", (float)(end2 - start2) / CLOCKS_PER_SEC);
                    Sleep(3000);
                    system("cls");
                    break;                                                                                   //반복문 종료
                }
            }
        }

        if (k == 2 && strcmp(you, opp1[random]) == 0 && time > (float)(end2 - start2) / CLOCKS_PER_SEC) // 승리 조건이 충족 되었을 경우 게임 승리 UI 출력
        {
            system("cls");
            win();
        }

        else if (k < 3 && (time < (float)(end2 - start2) / CLOCKS_PER_SEC || time == (float)(end2 - start2) / CLOCKS_PER_SEC)) // 패배 조건에 충족할 경우 패배 UI 출력
        {
            system("cls");
            lose();
            break;
        }
    }
}


void levelh()
{
    srand((unsigned int)time(NULL));

    clock_t start1, end1;             // 타이머 변수1
    clock_t start2, end2;             // 타이머 변수2
    float time = 0;                   //  상대방의 입력이 끝나는 시간 변수
    int k = 0;
    char you[1024];
    char opp2[10][1024] = { { "우리는 가지고 있는 15가지 재능으로 칭찬받으려 하기보다, 가지지도 않은 한가지 재능으로 돋보이려 안달한다."}
                         ,{"참된 스승은 제자들이 자신의 개인적 영향을 받지 않도록 방어한다"}
                         ,{"시간은 당신 삶의 코인이다. 그것은 당신에게만 주어진 코인이고, 그것을 어떻게 쓸지는 당신에게 달렸다. 그렇기에 이것 하나만 명심하라. 당신의 코인을 다른 사람들이 쓸 수도 있다는 것을..."}
                         ,{"인격이 나무라면 평판은 그 그림자와 같다. 우리가 나무에 대해 생각하는 바가 그림자라면 나무는 실제 모습인 것이다."}
                         ,{"최후의 승리는 안내하는 사람에게 돌아간다. 인내하는 데서 운명이 좌우되고,성공이 따르게 된다."}
                         ,{"나에 대한 자신감을 잃으면 온 세상이 나의 적이 된다 이성으로 비관해도 의지로써 낙관하라 스스로 자신을 존경하면 다른 사람도 그대를 존경할 것이다."}
                         ,{"남들이 당신을 어떻게 생각할까? 너무 걱정하지 마라 남들은 그렇게 당신에 대해 많이 생각하지 않는다. 당신이 동의하지 않는 한, 이 세상 누구도 당신이 열등하다고 느끼게 할 수 없다."}
                         ,{"우리가 가지고 있는 15가지 재능으로 칭찬 받으려 하기보다, 가지지도 않은 한가지 재능으로 돋보이려 안달한다."}
                         ,{"쉬운 일을 어려운 일처럼 어려운 일을 쉬운 일처럼 대하라 전자는 자신감이 잠들지 않게 후자는 자신감을 잃지 않기 위함이다."}
                         ,{"나는 힘과 자신감을 찾아 항상 바깥으로 눈을 돌렸지만, 자신감은 내면에서 나온다. 자신감은 언제나 그곳에 있다."} };

    for (k = 0; k < 3; k++)
    {
        int random = rand() % 10;                // 위에 문구 번호의 랜덤 선택
        int random1 = rand() % 101 + 100;        // 상대방의 입력 속도
        int a = strlen(opp2[random]);             // 문구의 입력 길이

        printf("=============================================================================\n");
        printf("상대방의 속도: %d \n\n", random1);

        start1 = clock();                         // 상대방의 시간 시작
        printf("상대방의 입력 : ");

        for (int i = 0; i < a; i++)               // 상대방이 한 글자씩 입력 시작
        {
            printf("%c", opp2[random][i]);
            Sleep(random1);
        }

        end1 = clock();   // 상대방의 시간 종료
        time = (float)(end1 - start1) / CLOCKS_PER_SEC;

        printf("\n\n상대방이 걸린시간(clock): %.1f\n", time);  // 걸린시간출력

        printf("\n상대방의 문장을 더 빨리 입력하시오\n"); // 상대방이 입력 종료 후 사용자에게 알려주는 문구



        start2 = clock();  // 사용자의 시간 시작

        while (1)
        {

            printf("\n사용자의 입력 : ");
            scanf(" %[^\n]s\n", you);

            printf("=============================================================================\n");
            end2 = clock();   // 사용자의 걸린 시간 측정 종료

            if (strcmp(you, opp2[random]) != 0)  // 사용자가 입력한 문장과 입력해야할 문장이 다른 경우
            {
                printf("다시 입력하세요\n");
                printf("남은시간: %.1f\n", time - (float)(end2 - start2) / CLOCKS_PER_SEC); // 남은시간 출력
                printf("=============================================================================\n");

                if (time < (float)(end2 - start2) / CLOCKS_PER_SEC)  // 남은시간이 없을 경우
                {
                    printf("시간 초과입니다.\n");
                    printf("사용자가 걸린시간(clock): %.1f\n", (float)(end2 - start2) / CLOCKS_PER_SEC);
                    Sleep(3000);
                    break;                         //반복문 종료
                }
            }

            else if (strcmp(you, opp2[random]) == 0)  //사용자가 입력한 문장과 입력해야할 문장이 다른 경우
            {
                if ((time > (float)(end2 - start2) / CLOCKS_PER_SEC))
                {
                    printf("사용자가 걸린시간(clock): %.1f\n", (float)(end2 - start2) / CLOCKS_PER_SEC);  // 걸린 시간 출력
                    break;
                }

                else if ((time < (float)(end2 - start2) / CLOCKS_PER_SEC))
                {
                    printf("시간 초과입니다.\n");
                    printf("사용자가 걸린시간(clock): %.1f\n", (float)(end2 - start2) / CLOCKS_PER_SEC);
                    Sleep(3000);
                    system("cls");
                    break;                                                                                   //반복문 종료
                }
            }
        }

        if (k == 2 && strcmp(you, opp2[random]) == 0 && time > (float)(end2 - start2) / CLOCKS_PER_SEC) // 승리 조건이 충족 되었을 경우 게임 승리 UI 출력
        {
            system("cls");
            win();
        }

        else if (k < 3 && (time < (float)(end2 - start2) / CLOCKS_PER_SEC || time == (float)(end2 - start2) / CLOCKS_PER_SEC)) // 패배 조건에 충족할 경우 패배 UI 출력
        {
            system("cls");
            lose();
            break;
        }
    }
}




void levelchoice(int level)
{
  
         printf("게임을 시작합니다.");

         printf("\n\n타자게임!\n");
         printf("난이도를 입력하세요\n");
         printf("난이도 (하) : 1\n");
         printf("난이도 (중) : 2\n");
         printf("난이도 (상) : 3\n");

         scanf("%d", &level);                       // 레벨 선택

         switch (level)
         {
            case 1:                                 // 1을 선택 -> 1단계 
                system("cls");
                levelLow();
                break;
            case 2:                                   // 2을 선택 -> 2단계 
                system("cls"); 
                levelm();
                break;
            case 3:                                   // 3을 선택 -> 3단계
             system("cls");
             levelh();
             break;
             
            default:                                  // 그 외의 값은 -> 다시 입력
              system("cls");
              printf("다시 입력 해주세요\n\n");
              levelchoice(level);
              break;                 
    }
}

int main()
{
    int level = 0;
    int choice = 0;
    int choice1 = 0;
    int choice2 = 0;

    interface1();                             // 인터페이스 함수 호출
    printf("숫자를 입력하시오\n");

    while (1)
    {
        scanf(" %d", &choice);                    // 게임 시작 및 종료 선택


        if (choice == 1)                          // 처음 인터페이스에서 1번을 눌렀을 때 게임 시작
        {
            system("cls");
            printf("=================================================================\n");
            printf("게임 설명\n");
            printf("플레이어가 난이도 선택 후 타자 게임 시작이 됩니다.\n");
            printf("무작위로 선정된 문장을 상대방(컴퓨터)이 문장을 입력합니다.\n");
            printf("상대방(컴퓨터)이 입력하는데 걸린 시간보다 더 빨리 입력하면 승리합니다.\n");
            printf("=================================================================\n");
            printf("이해가 완료 되셨으면 1을 눌러주세요\n");

            while (1)                              
            {
                scanf("%d", &choice1);                         // 이해가 완료되면 사용자가 숫자 입력

                if (choice1 == 1)                              // 게임 설명 UI에서 1을 눌렀을 때
                {

                    while (1)
                    {
                        system("cls");                      
                        levelchoice(level);                     //레벨 초이스 함수 호출

                            printf("숫자를 입력하세요\n");

                            while (choice2 != 1)                //승패출력에서 사용자가 1(다시 시작)을 입력 안했을때 반복문 진행
                            { 
                                scanf(" %d", &choice2);         // 승패출력에서 사용자가 숫자를 입력

                               if (choice2 == 2)                // 승패출력에서 숫자 2를 입력하면 반복문 종료
                                {
                                    printf("게임을 종료합니다.\n");
                                    break;
                                }

                                else                             // 승패출력에서 숫자 1를 입력하면 반복문 종료 or 다른 숫자를 입력하면 다시 입력
                                {
                                    printf("다시 입력하세요.\n");
                                }
                            }

                            if (choice2 == 2)                 // 승패출력에서 사용자가 숫자 2를입력하면 반복문 종료
                            {
                                break;
                            }

                            choice2 = 0;                     // choice2를 0으로 초기화
                    }
                }

                else                                         // 게임 설명 UI에서 사용자가 1이 아닌 숫자를 눌렀을때 다시 입력
                {
                    printf("다시 입력하시오.\n");
                    continue;
                }
                
                break;                      // 승패 출력에서 사용자가 숫자 2를 눌렀을 때 반복문 종료
            }
        }

        else if (choice == 2)               // 처음 인터페이스 숫자 2를 눌렀을때 게임 종료
        {
            printf("\n게임을 종료합니다.");
            break;
        }

        else                               // 처음 인터페이스 숫자에서 다른 숫자를 입력했을 때 게임 종료
        {
            printf("다시 입력하세오.\n"); 
            continue;
        }

        break;
    }

    return 0;
}