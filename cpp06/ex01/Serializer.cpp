# include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Serializer Default Constructor" << std::endl;
}

uintptr_t Serializer::serialize(Serializer* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Serializer*   Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Serializer *>(raw));
}

Serializer::~Serializer()
{
    std::cout << "Serializer Default Destructor" << std::endl;
}