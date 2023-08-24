# include "Data.hpp"

Data::Data()
{
    std::cout << "Data Default Constructor" << std::endl;
}

uintptr_t Data::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*   Data::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

Data::~Data()
{
    std::cout << "Data Default Destructor" << std::endl;
}