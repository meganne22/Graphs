#include "listgraph.h"
#include <stdlib.h>
#include <algorithm>

using namespace std;

GrafListowy::GrafListowy(int krawedzie)
{
    this->krawedzie = krawedzie;
    this->listy = new vector<int>[krawedzie];
}

GrafListowy::GrafListowy(vector<pair<int, int> > & p) : GrafListowy(p.size())
{
    for(vector<pair<int, int> >::iterator it = p.begin(); it != p.end(); it++)
    {
        pair<int, int> a = *it;
        polacz(a.first, a.second);
    }
}

GrafListowy::~GrafListowy()
{
    delete[] this->listy;
}

bool GrafListowy::czyPolaczone(int a, int b)
{
    vector<int> nodes = this->listy[a];

    for(vector<int>::iterator it = nodes.begin(); it != nodes.end(); it++)
    {
        if(*it == b)
        {
            return true;
        }
    }

    return false;
}

void GrafListowy::polacz(int a, int b)
{
    vector<int>& nodes = this->listy[a];
    if(nodes.empty()) {
        nodes.push_back(b);
    } else {
        if(!czyPolaczone(a, b)) {
            nodes.push_back(b);
        }
    }
}
