#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>

using namespace std;

int randint(int x, int y)
{
	srand(int(time(0)));
	return rand() % (y - x + 1) + x;
}

int main()
{
    int kbh = 1;
    while (kbh != 27)
    {
        if (_kbhit())
        {
            kbh = _getch();
        }
        Sleep(50);
        int x, y;
        int cwcs = 0;
        滚蛋:if (cwcs == 0)
        {
            cout << "请输入两个数字:\n";
        }
        else
        {
            cout << "麻烦您再他妈的输入两个正常点的数字:\n";
        }
        cin >> x;
        cin >> y;
        if (x > y)
        {
            int bf = x;
            x = y;
            y = bf;
        }
        if (x == y)
        {
            int gongjushuzi = randint(0, 1);
            if (gongjushuzi == 1)
            {
                cout << "这边建议你滚蛋呢亲！\n";
            }
            if (gongjushuzi == 0)
            {
                cout << "WDNMD小闸总，你妈的学过数学吗？\n";
            }
            cwcs += 1;
            goto 滚蛋;
        }
        int ran = randint(x, y);
        int ans = -1231;
        while (ans == ran)
        {
            ran = randint(x, y);
        }
        cout << "随机数生成好了，猜下吧：\n";
        int cishu = 0;
        while (ran != ans)
        {
            cishu += 1;
            cin >> ans;
            if (ans > ran)
            {
                cout << "太大了，再试下:\n";
            }
            if (ans < ran)
            {
                cout << "太小了，再试下:\n";
            }
        }
        cout << "难以置信，你这个小呆呆居然猜对了！你猜了" << cishu << "次\n";
    }
}