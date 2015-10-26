#include <stdlib.h>
#include <iostream>
#include <set>
#include <vector>
#include "listgraph.h"
#include "matrixgraph.h"
#include "abstractgraph.h"

using namespace std;

void parseFile(istream& strumien, vector<pair<int, int> > &polaczenia, int &vertices)
{
    set<int> s;
    int iloscPolaczen = 0;
    int a, b = 0;
    strumien >> vertices >> iloscPolaczen;

    for(int i = 0; i < iloscPolaczen; i++)
    {
        strumien >> a >> b;
        s.insert(a); s.insert(b);
        polaczenia.push_back(pair<int, int>(a, b));
    }

    if(polaczenia.size() != iloscPolaczen)
        throw logic_error("Connections count does not match");
    if(s.size() != vertices)
        throw logic_error("Too little vertices");
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
