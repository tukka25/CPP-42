# include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Serializer Default Constructor" << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*   Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

Serializer::~Serializer()
{
    std::cout << "Serializer Default Destructor" << std::endl;
}