#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>

void		printSeperator();
void		printDefaultPrompt();
std::string	formatText(const std::string &text);
bool		isBlank(const std::string &s);
bool		readNonEmptyField(const std::string &prompt, std::string &value);

#endif
