#pragma once
#include<iostream>

class GeometryException : public std::domain_error{
public:

    GeometryException(const std::string& message):
    std::domain_error(message){}

   
};