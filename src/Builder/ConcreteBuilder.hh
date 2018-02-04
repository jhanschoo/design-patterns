#ifndef CONCRETE_BUILDER_HH
#define CONCRETE_BUILDER_HH

#include "Builder.hh"
#include "Product.hh"

class ConcreteBuilder : virtual Builder {
public:
    &Builder buildPartA() override;
    &Builder buildPartB() override;
    &builder buildPartC() override;
    Product getResult();
}

#endif // !CONCRETE_BUILDER_HH
