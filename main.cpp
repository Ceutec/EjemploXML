#include <iostream>
#include "tinyxml2.h"

using namespace std;
using namespace tinyxml2;

int main()
{
    XMLDocument doc;
    doc.LoadFile("test.xml");
    XMLElement* pasteles = doc.FirstChildElement("Pasteles");
    for(XMLElement* pastel = pasteles->FirstChildElement("Pastel");
            pastel!=NULL;
            pastel=pastel->NextSiblingElement())
    {
        cout<<"-------------------------"<<endl;
        cout<<pastel->Attribute("nombre")<<endl;
        cout<<pastel->Attribute("esta_vencido")<<endl;
        cout<<pastel->Attribute("cantidad")<<endl;
    }

//    XMLElement* titleElement = doc.FirstChildElement( "A" )->FirstChildElement( "B" );
//    const char* ejemplo = titleElement->GetText();
//    cout<<"Leyendo XML: "<<ejemplo;
    return 0;
}
