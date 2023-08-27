#ifndef TEMPLATES_TPP
# define TEMPLATES_TPP

template <class T> T min(T a, T b)
{
        if (a >= b)
                return (b);
        else
                return (a);
}

template <class T> T max(T a, T b)
{
        if (a > b)
                return (a);
        else
                return (b);
}

template <class T> void swap(T &a, T &b)
{
        T c = a;
        a = b;
        b = c;
}

#endif