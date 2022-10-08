#include "pch.h"
#include "WeatherRepository.h"
#include <memory>

using std::shared_ptr;

shared_ptr<WeatherData> WeatherRepository::GetById(const string& weather_id)
{
	return std::make_shared<WeatherData>("Cool");
}


