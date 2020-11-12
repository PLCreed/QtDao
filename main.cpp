#include <QtCore/QCoreApplication>

#include <QtTest/qtest.h>

#include "test/ConnectionPoolTest.h"
#include "test/query/BaseQueryTest.h"
#include "test/loader/DbLoaderTest.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ConnectionPoolTest connectionPoolTest;
    QTest::qExec(&connectionPoolTest);

    BaseQueryTest baseQueryTest;
    QTest::qExec(&baseQueryTest);

    DbLoaderTest dbLoadTest;
    QTest::qExec(&dbLoadTest);

    return a.exec();
}
