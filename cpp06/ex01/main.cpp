#include "Serializer.hpp"

int main()
{
    Data data;
    Serializer *d = NULL;
    data.t = Serializer::serialize(d);
    if (Serializer::deserialize(data.t) == d)
        std::cout << "leessgoooo" << std::endl;
    else
        std::cout << "looser" << std::endl;
}