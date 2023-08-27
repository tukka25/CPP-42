#ifndef Iter_TPP
# define Iter_TPP

template <class S, class T, class F> void Iter(S &a, T length, F function)
{

        for (int i = 0; i < length; i++)
        {
                a[i] = function(a[i]);
                // std::cout << a[i] << std::endl;
        }
}

template <class C> char Encryption(C c)
{
        int i = (int)c;

        i = i + 2 - 4 + 9;
        return (static_cast<char>(i));
}

template <class C> char Decryption(C c)
{
        int i = (int)c;

        i = i - 2 + 4 - 9;
        return (static_cast<char>(i));
}

#endif