//
//  main.cpp
//  c++
//
//  Created by bill on 2022/8/11.
//

#include <iostream>
#include <unistd.h>
using namespace std;
//菜单界面
void showMenu()
{
    cout << "************************" << endl ;
    cout << "*****  1.添加联系人  *****" << endl ;
    cout << "*****  2.显示联系人  *****" << endl ;
    cout << "*****  3.删除联系人  *****" << endl ;
    cout << "*****  4.查找联系人  *****" << endl ;
    cout << "*****  5.修改联系人  *****" << endl ;
    cout << "*****  6.清空联系人  *****" << endl ;
    cout << "*****  0.退出通讯录  *****" << endl ;
    cout << "************************" << endl ;
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    int select = 0;
    while (true) {
        // 菜单的调用
        showMenu();
        cin >> select;
        switch (select) {
            case 1:     //添加联系人
                break;
            case 2:     //显示联系人
                break;
            case 3:     //删除联系人
                break;
            case 4:     //查找联系人
                break;
            case 5:     //修改联系人
                break;
            case 6:     //清空联系人
                break;
            case 0:     //退出通讯录
                cout << "欢迎下次使用" << endl;
                return 0;
                break;
            default:
                break;
        }
    }
    
    return 0;
}
