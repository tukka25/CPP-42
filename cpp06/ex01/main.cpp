#include "Serializer.hpp"

int main()
{
    Data data;

    data.kalam = "Toodope";
    data.x = 7;
    std::cout << Serializer::deserialize (Serializer::serialize(&data))->kalam << std::endl;
    std::cout << Serializer::deserialize (Serializer::serialize(&data))->x << std::endl;
}