#ifndef LISTGRAPH_H
#define LISTGRAPH_H

#include <vector>

class GrafListowy
{
public:
    GrafListowy(int krawedzie);
    GrafListowy(std::vector<std::pair<int, int> > & p);
    virtual ~GrafListowy();
    bool czyPolaczone(int a, int b);
    void polacz(int a, int b);

private:
    std::vector<int>* listy;
    int krawedzie;
};

#endif // LISTGRAPH_H
