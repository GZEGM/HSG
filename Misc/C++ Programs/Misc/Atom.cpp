

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Atom
{
public:
    Atom(int atomicNumber) : atomicNumber(atomicNumber) {}

    void displayElectronConfiguration()
    {
        vector<string> shells = {"1s", "2s", "2p", "3s", "3p", "4s", "3d", "4p", "5s", "4d", "5p", "6s", "4f", "5d", "6p", "7s", "5f", "6d", "7p"};
        vector<int> shellCapacities = {2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6};
        vector<string> nobleGases = {"[Ne]", "[Ar]", "[Kr]", "[Xe]", "[Rn]"};
        vector<int> nobleGasesAtomicNumber = {10, 18, 36, 54, 86};
        vector<string> nobleGasesShells = {"1s^2 2s^2 2p^6", "1s^2 2s^2 2p^6 3s^2 3p^6", "1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4p^6", "1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4p^6 5s^2 4d^10 5p^6", "1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4p^6 5s^2 4d^10 5p^6 6s^2 4f^14 5d^10 6p^6"};

        vector<string> configuration;
        int remainingElectrons = atomicNumber;

        for (int i = 0; i < shells.size(); ++i)
        {
            if (remainingElectrons > shellCapacities[i])
            {
                configuration.push_back(shells[i] + "^" + to_string(shellCapacities[i]));
                remainingElectrons -= shellCapacities[i];
            }
            else
            {
                configuration.push_back(shells[i] + "^" + to_string(remainingElectrons));
                break;
            }
        }

        for (size_t i = nobleGasesAtomicNumber.size(); i > 0; --i)
        {
            if (atomicNumber > nobleGasesAtomicNumber[i - 1])
            {
                string nobleGasConfig = nobleGasesShells[i - 1];
                string currentConfig = "";
                for (const auto &config : configuration)
                {
                    currentConfig += config + " ";
                }
                replaceInVector(configuration, nobleGasConfig, nobleGases[i - 1]);

                break;
            }
        }

        if (atomicNumber != 24 && atomicNumber != 29 && atomicNumber != 42 && atomicNumber != 47 && atomicNumber != 79)
        {

            cout << "Electron configuration for Z=" << atomicNumber << ": ";
            for (const auto &config : configuration)
            {
                cout << config << " ";
            }
            cout << endl;
        }
        else
        {
            if (atomicNumber == 24)
            {
                cout << "Special configuration for Chromium (Z=24): [Ar] 3d^5 4s^1" << endl;
            }
            else if (atomicNumber == 29)
            {
                cout << "Special configuration for Copper (Z=29): [Ar] 3d^10 4s^1" << endl;
            }
            else if (atomicNumber == 42)
            {
                cout << "Special configuration for Molybdenum (Z=42): [Kr] 4d^5 5s^1" << endl;
            }
            else if (atomicNumber == 47)
            {
                cout << "Special configuration for Silver (Z=47): [Kr] 4d^10 5s^1" << endl;
            }
            else if (atomicNumber == 79)
            {
                cout << "Special configuration for Gold (Z=79): [Xe] 4f^14 5d^10 6s^1" << endl;
            }
        }
    }

    void replaceInVector(vector<string> &vec, const string &oldStr, const string &newStr)
    {
        for (auto &str : vec)
        {
            size_t pos = 0;
            while ((pos = str.find(oldStr, pos)) != string::npos)
            {
                str.replace(pos, oldStr.length(), newStr);
                pos += newStr.length();
            }
        }
    }

private:
    int atomicNumber;
};

int main()
{
    int Z;

    cout << "Enter the atomic number (Z): ";
    cin >> Z;
    if (Z > 118)
    {
        cout << "Out data of periodic table." << endl;
        main();
    }
    Atom atom(Z);
    atom.displayElectronConfiguration();
    main();
    return 0;
}
