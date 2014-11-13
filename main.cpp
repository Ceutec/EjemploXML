#include <iostream>
#include "tinyxml2.h"

using namespace std;
using namespace tinyxml2;

int main()
{
    XMLDocument doc;
    doc.LoadFile("test.xml");
    XMLElement* titleElement = doc.FirstChildElement( "A" )->FirstChildElement( "B" );
    const char* ejemplo = titleElement->GetText();
    cout<<"Leyendo XML: "<<ejemplo;
    return 0;
}
