#ifndef MATRIXGRAPHTEST_H
#define MATRIXGRAPHTEST_H
#include <QtTest/QtTest>

class MatrixGraphTest : public QObject
{
    Q_OBJECT

private slots:
    void itShouldConnectTwoVertices();
};

#endif // MATRIXGRAPHTEST_H
