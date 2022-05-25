#include <iostream>
using namespace std;

// interface
class DataSource
{
public:
    virtual void writeData(string data);
    virtual string readData() const = 0; // return data
};

class FileDataSource : DataSource
{
private:
    string filename;

public:
    FileDataSource(string filename)
    {
        this->filename = filename;
    }
    void writeData(string data) override
    {
        cout << "\nWrite data to file.\n";
    }
    string readData() const override
    {
        return "\nRead data from a file.\n";
    }
};

class DataSourceDecorator : DataSource
{
protected:
    DataSource *wrappee;

public:
    DataSourceDecorator(DataSource *source)
    {
        wrappee = source;
    }
    void writeData(string data) override
    {
        wrappee->writeData(data);
    }
    string readData() const override
    {
        return wrappee->readData();
    }
};

class EncryptionDecorator : DataSourceDecorator
{
    void writeData(string data) override
    {
        cout << "\nEncryption data to file.\n";
        wrappee->writeData(data);
    }
    string readData() const override
    {
        wrappee->readData();
        return "\nEncryption data to file and return.\n";
    }
};

class CompressionDecorator : DataSourceDecorator
{
    void writeData(string data) override
    {
        cout << "\nCompression data to file.\n";
        wrappee->writeData(data);
    }
    string readData() const override
    {
        wrappee->readData();
        return "\nCompression data to file and return.\n (" + DataSourceDecorator::readData() + ")";
    }
};

class SalaryManager
{
private:
    DataSource *source;

public:
    SalaryManager(DataSource *source)
    {
        this->source = source;
    }
    string load()
    {
        return source->readData();
    }
};
