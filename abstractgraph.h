#ifndef ABSTRACTGRAPH_H
#define ABSTRACTGRAPH_H


class AbstractGraph
{
public:
    AbstractGraph();
    virtual ~AbstractGraph();
    virtual bool areConnected(int a, int b) = 0;
    virtual void connect(int a, int b) = 0;
};

#endif // ABSTRACTGRAPH_H
