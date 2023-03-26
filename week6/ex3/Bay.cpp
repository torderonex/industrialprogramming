#include "Bay.h"


Bay::Bay() : Sea() {}
Bay::Bay(string n, float d, long long s, string parentOceanName_, string parentSeaName_) : Sea(
        std::move(n),d, s, std::move(parentOceanName_)
    ) {
    seaName = std::move(parentSeaName_);
}

string Bay::getParentSeaName() { return seaName; }
void Bay::setParentSeaName(string parentSeaName) { seaName = std::move(parentSeaName); }

ostream& operator<<(ostream& stream, const Bay& bay) {
    cout << "Bay:" << endl;
    cout << "Name: " << bay.name << ";" << endl;

    cout << "Depth: " << bay.depth << ";" << endl;
    cout << "Square: " << bay.square << ";" << endl;

    cout << "It belongs to ocean: " << bay.oceanName << endl;
    cout << "It belongs to sea: " << bay.seaName << endl;
    return stream;
}
istream& operator>>(istream& stream, Bay& bay) {
    cout << "Bay:" << endl;

    cout << "Enter name: " << endl;
    cin >> bay.name;

    cout << "Enter depth: " << endl;
    cin >> bay.depth;

    cout << "Enter square: " << endl;
    cin >> bay.square;

    cout << "Enter it's ocean name: " << endl;
    cin >> bay.oceanName;

    cout << "Enter it's sea name: " << endl;
    cin >> bay.seaName;

    return stream;
}