#include <stdlib.h>
#include <iostream>
#include <set>
#include <vector>
#include "listgraph.h"
#include "matrixgraph.h"
#include "abstractgraph.h"

using namespace std;

void parseFile(istream& stream, vector<pair<int, int> > &connections, int &vertices)
{
    set<int> s;
    int connectionsCount = 0;
    int a, b = 0;
    stream >> vertices >> connectionsCount;

    for(int i = 0; i < connectionsCount; i++)
    {
        stream >> a >> b;
        s.insert(a); s.insert(b);
        connections.push_back(pair<int, int>(a, b));
    }

    if(connections.size() != connectionsCount)
        throw std::logic_error("Connections count does not match");
    if(s.size() != vertices)
        throw std::logic_error("Too little vertices");
}

int main()
{
    int vertices = 0;
    vector<pair<int, int> > connections;

    parseFile(cin, connections, vertices);

    GrafMacierz gm = GrafMacierz(connections);
    GrafListowy gl = GrafListowy(connections);

    return 0;
}
