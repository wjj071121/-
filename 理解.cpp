#include <iostream>
using namespace std;
#include <string>
#include <math.h>
#include<ctime>
struct 学生
{
    string 名字;
    long long 学号;
    int 年龄;
};
struct 老师
{
    string 名字;
    long long 工号;
    int 年龄;
    struct 学生 s[5];
};
void 输入(struct 老师 t[], int len)
{
    for (int i = 0; i < len; i++)
    {
        string 编号 = "ABCDEFG";
        t[i].名字 = "老师_";
        t[i].名字 += 编号[i];
        for (int j = 0; j < 5; j++)
        {
            string 号数="12345";
            t[i].s[j].名字="学生_";
            t[i].s[j].名字+=号数[j];
            int wna=rand()%9+10;
            t[i].s[j].年龄=wna;
        }
    }
}
void print(struct 老师 t[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<"老师姓名："<<t[i].名字<<endl
        <<"学生信息："<<endl;
        for(int j=0;j<5;j++)
        {
            cout<<"\t"<<t[i].s[j].名字<<"  "<<"年龄:"<<t[i].s[j].年龄<<endl;
        }
        cout<<endl;
    }
}
int main()
{
    system("chcp 65001");
    srand((unsigned int)time(NULL));
    struct 老师 t[5];
    int len = sizeof(t) / sizeof(t[0]);
    输入(t, len);
    print(t,len);
    return 0;
}