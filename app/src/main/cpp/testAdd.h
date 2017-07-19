//
// Created by PaiConor on 2017/6/1.
//

#ifndef TESTNDK_TESTADD_H
#define TESTNDK_TESTADD_H


class testAdd {
public:

    int Add(int a, int b);
};

extern "C" int testAdd(int a, int b)
{
    return a + b;
}


#endif //TESTNDK_TESTADD_H
