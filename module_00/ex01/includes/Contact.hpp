/* Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. */
#ifndef EX01_INCLUDES_CONTACT_HPP_
#define EX01_INCLUDES_CONTACT_HPP_

#include <string>

class Contact {
 public:
    std::string getFirstName(void) const;
    std::string getLastName(void) const;
    std::string getNickName(void) const;
    std::string getPhoneNumber(void) const;
    std::string getDarkestSecret(void) const;

    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setNickName(std::string nickName);
    void setPhoneNumber(std::string phoneNumber);
    void setDarkestSecret(std::string darkestSecret);

 private:
    std::string _firstName, _lastName, _nickName, _phoneNumber, _darkestSecret;
};

#endif  // EX01_INCLUDES_CONTACT_HPP_
