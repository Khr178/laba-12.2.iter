#include "pch.h"
#include "CppUnitTest.h"
#include "../лаба 12.2 ітер. спосіб/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест122ітерсп
{
    TEST_CLASS(юніттест122ітерсп)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            Node* myList = NULL;
            insertNode(myList, 5);
            insertNode(myList, 2);
            insertNode(myList, 8);
            insertNode(myList, 3);
            deleteNode(myList, 8);
            Assert::AreEqual(myList->next->data,2);
            Assert::AreEqual(myList->next->next->data,3);
            deleteNode(myList, 5);
            Assert::AreEqual(myList->data,2);
            Assert::AreEqual(myList->next->data,3);
            
        }
    };
}