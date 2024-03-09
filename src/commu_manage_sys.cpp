#include <iostream>
#include <string>

#define MAX 1000
//设计联系人结构体
struct Person
{
    std::string m_Name;
    
    int Sex;

    int m_Age;

    std::string m_Phone;

    std::string m_Addr;
};

struct Addressbooks
{
    struct Person personArray[MAX];

    int m_Size;
};


void showMenu(){
    std::cout << "1.add" <<std::endl;
    std::cout << "2.show" <<std::endl;
    std::cout << "3.delete" <<std::endl;
    std::cout << "4.find" <<std::endl;
    std::cout << "5.modify" <<std::endl;
    std::cout << "6.clear" <<std::endl;
    std::cout << "0.out" <<std::endl;
}

void addPerson(Addressbooks &){

}

int main(){

        Addressbooks abs;    

        abs.m_Size = 0; 

        int select = 0;

        while (true)
        {
            //菜单调用
            showMenu();

            std::cin >> select;

            switch (select)
            {
                case 1:
                    addPerson(&abs);
                    break;
                case 2:
                    
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    break;
                case 0:
                    std::cout << "welcome next use" << std::endl;
                    return 0;
                    break;
                default:
                    break;
            }

        }
        


        return 0;
}
    

