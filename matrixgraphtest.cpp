#include "matrixgraphtest.h"
#include "matrixgraph.h"

void MatrixGraphTest::itShouldConnectTwoVertices()
{
    //given
    int edges = 10;
    MatrixGraph mg = MatrixGraph(edges);

    //when
    mg.connect(1, 2);

    //then
    QCOMPARE(mg._matrix[0][1], 1);
}
