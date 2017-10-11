#ifndef A_H
#define A_H

class B;//forward declaration

class A
{
public:
    A();
    B *b;
};

#endif // A_H
