#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

class Element
{
public:
    string name;
    string symbol;
    int atomicNumber;
    float atomicMass;
    string category;
    string electronConfiguration;

    Element(string n, string s, int z, float m, string c, string e) : name(n), symbol(s), atomicNumber(z), atomicMass(m), category(c), electronConfiguration(e) {}
};

int main()
{
    unordered_map<int, Element> periodicTable = {
        {1, Element("Hydrogen", "H", 1, 1.008, "Nonmetal", "1s^1")},
        {2, Element("Helium", "He", 2, 4.0026, "Noble Gas", "1s^2")},
        {3, Element("Lithium", "Li", 3, 6.94, "Alkali Metal", "1s^2 2s^1")},
        {4, Element("Beryllium", "Be", 4, 9.0122, "Alkaline Earth Metal", "1s^2 2s^2")},
        {5, Element("Boron", "B", 5, 10.81, "Metalloid", "1s^2 2s^2 2p^1")},
        {6, Element("Carbon", "C", 6, 12.011, "Nonmetal", "1s^2 2s^2 2p^2")},
        {7, Element("Nitrogen", "N", 7, 14.007, "Nonmetal", "1s^2 2s^2 2p^3")},
        {8, Element("Oxygen", "O", 8, 15.999, "Nonmetal", "1s^2 2s^2 2p^4")},
        {9, Element("Fluorine", "F", 9, 18.998, "Nonmetal", "1s^2 2s^2 2p^5")},
        {10, Element("Neon", "Ne", 10, 20.180, "Noble Gas", "1s^2 2s^2 2p^6")},
        {11, Element("Sodium", "Na", 11, 22.990, "Alkali Metal", "[Ne] 3s^1")},
        {12, Element("Magnesium", "Mg", 12, 24.305, "Alkaline Earth Metal", "[Ne] 3s^2")},
        {13, Element("Aluminum", "Al", 13, 26.982, "Post-Transition Metal", "[Ne] 3s^2 3p^1")},
        {14, Element("Silicon", "Si", 14, 28.085, "Metalloid", "[Ne] 3s^2 3p^2")},
        {15, Element("Phosphorus", "P", 15, 30.974, "Nonmetal", "[Ne] 3s^2 3p^3")},
        {16, Element("Sulfur", "S", 16, 32.06, "Nonmetal", "[Ne] 3s^2 3p^4")},
        {17, Element("Chlorine", "Cl", 17, 35.45, "Nonmetal", "[Ne] 3s^2 3p^5")},
        {18, Element("Argon", "Ar", 18, 39.948, "Noble Gas", "[Ne] 3s^2 3p^6")},
        {19, Element("Potassium", "K", 19, 39.098, "Alkali Metal", "[Ar] 4s^1")},
        {20, Element("Calcium", "Ca", 20, 40.078, "Alkaline Earth Metal", "[Ar] 4s^2")},
        {21, Element("Scandium", "Sc", 21, 44.956, "Transition Metal", "[Ar] 3d^1 4s^2")},
        {22, Element("Titanium", "Ti", 22, 47.867, "Transition Metal", "[Ar] 3d^2 4s^2")},
        {23, Element("Vanadium", "V", 23, 50.942, "Transition Metal", "[Ar] 3d^3 4s^2")},
        {24, Element("Chromium", "Cr", 24, 51.996, "Transition Metal", "[Ar] 3d^5 4s^1")},
        {25, Element("Manganese", "Mn", 25, 54.938, "Transition Metal", "[Ar] 3d^5 4s^2")},
        {26, Element("Iron", "Fe", 26, 55.845, "Transition Metal", "[Ar] 3d^6 4s^2")},
        {27, Element("Cobalt", "Co", 27, 58.933, "Transition Metal", "[Ar] 3d^7 4s^2")},
        {28, Element("Nickel", "Ni", 28, 58.693, "Transition Metal", "[Ar] 3d^8 4s^2")},
        {29, Element("Copper", "Cu", 29, 63.546, "Transition Metal", "[Ar] 3d^10 4s^1")},
        {30, Element("Zinc", "Zn", 30, 65.38, "Transition Metal", "[Ar] 3d^10 4s^2")},
        {31, Element("Gallium", "Ga", 31, 69.723, "Post-Transition Metal", "[Ar] 3d^10 4s^2 4p^1")},
        {32, Element("Germanium", "Ge", 32, 72.63, "Metalloid", "[Ar] 3d^10 4s^2 4p^2")},
        {33, Element("Arsenic", "As", 33, 74.922, "Metalloid", "[Ar] 3d^10 4s^2 4p^3")},
        {34, Element("Selenium", "Se", 34, 78.971, "Nonmetal", "[Ar] 3d^10 4s^2 4p^4")},
        {35, Element("Bromine", "Br", 35, 79.904, "Nonmetal", "[Ar] 3d^10 4s^2 4p^5")},
        {36, Element("Krypton", "Kr", 36, 83.798, "Noble Gas", "[Ar] 3d^10 4s^2 4p^6")},
        {37, Element("Rubidium", "Rb", 37, 85.468, "Alkali Metal", "[Kr] 5s^1")},
        {38, Element("Strontium", "Sr", 38, 87.62, "Alkaline Earth Metal", "[Kr] 5s^2")},
        {39, Element("Yttrium", "Y", 39, 88.906, "Transition Metal", "[Kr] 4d^1 5s^2")},
        {40, Element("Zirconium", "Zr", 40, 91.224, "Transition Metal", "[Kr] 4d^2 5s^2")},
        {41, Element("Niobium", "Nb", 41, 92.906, "Transition Metal", "[Kr] 4d^4 5s^1")},
        {42, Element("Molybdenum", "Mo", 42, 95.95, "Transition Metal", "[Kr] 4d^5 5s^1")},
        {43, Element("Technetium", "Tc", 43, 98, "Transition Metal", "[Kr] 4d^5 5s^2")},
        {44, Element("Ruthenium", "Ru", 44, 101.07, "Transition Metal", "[Kr] 4d^7 5s^1")},
        {45, Element("Rhodium", "Rh", 45, 102.91, "Transition Metal", "[Kr] 4d^8 5s^1")},
        {46, Element("Palladium", "Pd", 46, 106.42, "Transition Metal", "[Kr] 4d^10")},
        {47, Element("Silver", "Ag", 47, 107.87, "Transition Metal", "[Kr] 4d^10 5s^1")},
        {48, Element("Cadmium", "Cd", 48, 112.41, "Transition Metal", "[Kr] 4d^10 5s^2")},
        // ... Thêm các nguyên tố khác theo yêu cầu
        {118, Element("Oganesson", "Og", 118, 294, "Noble Gas", "[Rn] 7s^2 5f^14 6d^10 7p^6")}};

    int Z;
    cout << "Enter the atomic number (Z): ";
    cin >> Z;

    if (periodicTable.find(Z) != periodicTable.end())
    {
        Element element = periodicTable[Z];
        cout << "Element Name: " << element.name << endl;
        cout << "Symbol: " << element.symbol << endl;
        cout << "Atomic Number: " << element.atomicNumber << endl;
        cout << "Atomic Mass: " << element.atomicMass << endl;
        cout << "Category: " << element.category << endl;
        cout << "Electron Configuration: " << element.electronConfiguration << endl;
    }
    else
    {
        cout << "Element with atomic number " << Z << " not found in the periodic table." << endl;
    }

    main();

    return 0;
}
