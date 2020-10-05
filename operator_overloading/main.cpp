#include <iostream>

class Intlist
{
private:
    int m_list[10];

public:
    Intlist()
    {

    }

    void setList(int index, int value)
    {
        m_list[index] = value;
    }

    int getList(const int &index)
    {
        return m_list[index];
    }

    int * getList()
    {
        return m_list;
    }

    int & operator[] (const int &index)
    {
        return m_list[index];
    }
};

int main()
{
    using namespace std;

    Intlist my_list;

    my_list[3] = 10;
    cout << my_list[3] << endl;
    // my_list.setList(3, 1);
    // cout << my_list.getList(3) << endl;
    // my_list.getList()[3] = 1;
    // cout << my_list.getList()[3] << endl;

    return 0;
}