#include "matrixgraph.h"
#include <limits>
#include <vector>

using namespace std;

GrafMacierz::GrafMacierz(int krawedzie)
{
    this->krawedzie = krawedzie;
    this->macierz = new int*[krawedzie];
    for(int i = 0; i < krawedzie; i++)
    {
        for(int j = 0; j < krawedzie; j++)
        {
            macierz[i][j] = 0;
        }
    }
}

GrafMacierz::GrafMacierz(vector<pair<int, int> > &p) : GrafMacierz(p.size())
{
    for(vector<pair<int, int> >::iterator it = p.begin(); it != p.end(); it++)
    {
        pair<int, int> a = *it;
        polacz(a.first, a.second);
    }
}

GrafMacierz::~GrafMacierz()
{
    for(int i = 0; i < krawedzie; i++)
    {
        delete[] macierz[i];
    }
    delete[] macierz;
}

bool GrafMacierz::czyPolaczone(int a, int b)
{
    return macierz[a][b] == 1;
}

void GrafMacierz::polacz(int a, int b)
{
    macierz[a][b] = 1;
}
