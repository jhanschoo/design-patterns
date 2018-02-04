#ifndef ABSTRACT_FACTORY_HH
#define ABSTRACT_FACTORY_HH

#include "AbstractProductA.hh"
#include "AbstractProductB.hh"

/*!
    The AbstractFactory class specifies factory methods to create objects AbstractProductA and AbstractProductB
    belonging to the same product family.
*/
class AbstractFactory {
public:
    virtual AbstractProductA createProductA() const;
    virtual AbstractProductB createProductB() const;
};

#endif // !ABSTRACT_FACTORY_HH
