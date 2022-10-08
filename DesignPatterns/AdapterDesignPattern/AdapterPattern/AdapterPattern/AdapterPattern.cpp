#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    WeatherAbAPI api();
    WeatherApiAdapter adapter();
    WeatherDbRepository repository;
    const WeatherManager manager(repository);

    manager.ShowWeatherDetails("");
    return 0;
}
