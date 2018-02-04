#ifndef BUILDER_H
#define BUILDER_H

/*!
    The Builder class specifies an a common interface for creating different types of objects that
    share the same kinds of complex, flexible structure whose creations requires an involved procedure. We
    expose with Builder methods the low-level general creation steps common among the implemetations,
    and we implement them for different types through concrete builders that inherit from Builder.
*/
class Builder {
public:
    virtual &Builder buildPartA();
    virtual &Builder buildPartB();
    virtual &builder buildPartC();
}

#endif // !BUILDER_H
