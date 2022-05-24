#include <iostream>
using namespace std;

class DataBase
{
private:
    static DataBase *dataBaseConnection;
    int data;
    DataBase()
    {
        data = 0;
        cout << "Connection\n";
    }

public:
    static DataBase *getConnection()
    {
        if (!dataBaseConnection)
        {
            dataBaseConnection = new DataBase;
        }
        return dataBaseConnection;
    }

    int getData()
    {
        return this->data;
    }

    void setData(int data)
    {
        this->data = data;
        cout << "New data: " << data << endl;
    }
};

DataBase *DataBase::dataBaseConnection = 0;

int main()
{
    DataBase *obj = obj->getConnection();
    cout << obj->getData() << endl;
    obj->setData(5);
    cout << obj->getData() << endl;
    obj->setData(10);
    cout << obj->getData() << endl;
    DataBase *obj1 = obj1->getConnection();
     cout << obj->getData() << endl;


    return 0;
}
