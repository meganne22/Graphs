#ifndef MATRIXGRAPH_H
#define MATRIXGRAPH_H

#include <vector>

class GrafMacierz
{
public:
    GrafMacierz(int edges);
    GrafMacierz(std::vector<std::pair<int, int> > &p);
    virtual ~GrafMacierz();
    bool czyPolaczone(int a, int b);
    void polacz(int a, int b);

private:
    int** macierz;
    int krawedzie;
};

#endif // MATRIXGRAPH_H
