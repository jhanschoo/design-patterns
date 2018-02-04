#ifndef DIRECTOR_HH
#define DIRECTOR_HH

#include "Builder.hh"

/*!
    The Director class is one of multiple classes that "direct" the Builder class, each specifying one
    structure to be built through the Builder interface. The Director classes need not know exactly what
    kind of product is being built, since the procedure is specified through the Builder interface.
*/
class Director {
public:
    Director(Builder builder) builder(builder) {};
    void construct();
private:
    Builder builder;
}

#endif // !DIRECTOR_HH
