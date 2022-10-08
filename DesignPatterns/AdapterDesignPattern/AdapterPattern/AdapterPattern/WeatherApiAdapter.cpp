#include "pch.h"
#include "WeatherApiAdapter.h"
#include <memory>
#include "rapidjson/document.h"

using std::shared_ptr;
using std::make_shared;

shared_ptr<WeatherData> WeatherApiAdapter::GetById(const string& weather_id)
{
	const auto json = api_.GetWeatherDetails(weather_id);

	rapidjson::Document jsonDocument;
	jsonDocument.Parse(json.c_str());

	if (!jsonDocument.IsObject())
	{
		throw ErrorParsingWeatherInfoException();
	}

	auto something = jsonDocument["temp"].GetString();

	auto result = make_shared<WeatherData>(something);

	return result;
}