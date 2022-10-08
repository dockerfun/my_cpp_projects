#pragma once

#include <memory>
#include <string>
#include "WeatherData.h"

using std::shared_ptr;
using std::string;

class WeatherRepository
{
public:
	virtual shared_ptr<WeatherData> GetById(const string& weather_id) = 0;
};

class WeatherDbRepository : public WeatherRepository
{
public:
	shared_ptr<WeatherData> GetById(const string& weather_id) override;
};

