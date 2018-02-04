#ifndef CONCRETE_FACTORY_2_HH
#define CONCRETE_FACTORY_2_HH

#include "AbstractFactory.hh"
#include "AbstractProductA.hh"
#include "AbstractProductB.hh"

/*!
    The ConcreteFactory2 class implements factory methods to create objects AbstractProductA and AbstractProductB
    belonging to the same product family, upon System 2.

    \todo Implement ConcreteFactory2's factory methods.
    \todo also comsider the Prototype pattern for implementation.
    \todo ConcreteFactory2 should follow best practice of being a singleton.
*/
class ConcreteFactory2 : virtual AbstractFactory {
public:

    /*!
        createProductA() creates and returns a ProductA2 object as an AbstractProductA
    */
    AbstractProductA createProductA() const override;

    /*!
        createProductB() creates and returns a ProductB2 object as an AbstractProductB
    */
    AbstractProductB createProductB() const override;
};

#endif // !CONCRETE_FACTORY_2_HH
