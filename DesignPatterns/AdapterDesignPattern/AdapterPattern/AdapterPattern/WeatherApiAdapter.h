#pragma once

#include "WeatherRepository.h"
#include "WeatherDbAPI.h"
#include <string>

using std::string;

class WeatherApiAdapter : public WeatherRepository
{
	WeatherDbAPI api_;

public:
	shared_ptr<WeatherData> GetById(const string& weather_id);
};

