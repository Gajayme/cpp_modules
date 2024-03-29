#ifndef UTILS_HPP
# define UTILS_HPP

#include <string>

namespace utils {

	std::string ltrim(const std::string &s);

	std::string rtrim(const std::string &s);

	std::string trim(const std::string &s);

	void exitWithError(const std::string &errString);

	void printParseError(const std::string &errMsg);

	void printPrice(const std::string &date, const double amount, const double price);

	bool checkDate(const std::string &dateString, const std::string &minDate);

	bool checkPrice(const std::string &priceString);

	bool checkLowerBorder(const double value);

	bool checkUpperBorder(const double value);

} // utils

#endif
