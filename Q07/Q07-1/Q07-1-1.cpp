#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Car
{
private:
    int gasolineGauge;

public:
    Car() {}
    Car(int gas) : gasolineGauge(gas) {}
    ~Car() {}
    int GetGasGauge()
    {
        return gasolineGauge;
    }
};

class HybridCar : public Car
{
private:
    int electricGauge;

public:
    HybridCar() {}
    HybridCar(int gas, int elec) : Car(gas), electricGauge(elec) {}
    ~HybridCar() {}
    int GetElecGauge()
    {
        return electricGauge;
    }
};

class HybridWaterCar : public HybridCar
{
private:
    int waterGauge;

public:
    HybridWaterCar() {}
    HybridWaterCar(int gas, int elec, int water) : HybridCar(gas, elec), waterGauge(water) {}
    ~HybridWaterCar() {}
    void ShowCurrentGauge()
    {
        cout << "ÀÜ¿© °¡¼Ö¸°: " << GetGasGauge() << endl;
        cout << "ÀÜ¿© Àü±â·®: " << GetElecGauge() << endl;
        cout << "ÀÜ¿© ¿öÅÍ·®: " << waterGauge << endl;
    }
} int main()
{
}