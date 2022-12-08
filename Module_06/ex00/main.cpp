/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:44:43 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/29 15:01:39 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <climits>
#include <limits>

#define DBL_MAX 1.7976931348623158e+308 
#define DBL_MIN 2.2250738585072014e-308 

#define FLT_MAX 3.402823466e+38F 
#define FLT_MIN 1.175494351e-38F

int is_char(char *str)
{
    if (std::strlen(str) == 3 && str[0] == '\'' && str[2] == str[0])
        return (1);
    return (0);
}
int is_interger(char *str)
{
    int i = 0;
    
    if (str[0] == '+' || str[0] == '-')
        i++;
    while (str[i])
    {
        if (!std::isdigit(str[i]))
            return (0);
        i++;
    }
    double a = std::stod(str);
    if (a > 2147483647 || a < -2147483648)
        return (0);
    return (2);
}
int is_float(char *str)
{
    int point = 1;
    int i = 0;
    if (!std::strcmp(str, "-inff") || !std::strcmp(str, "+inff") || !std::strcmp(str, "nanf"))
        return (3);
    if (str[0] == '+' || str[0] == '-')
        i++;
    while (str[i])
    {
        if (!std::isdigit(str[i]))
        {
            if (str[i] == '.')
            {
                if (!point)
                    return (0);
                point = 0;
            }
            else if (str[i] == 'f' && !str[i + 1])
            {
                int j = 0;
                char srt[i + 1];
                while (j < i)
                {
                    srt[j] = str[j];
                    j++;
                }
                srt[i] = '\0';
                double a = std::stod(srt);
                if (a > FLT_MAX || a < FLT_MIN)
                    return (0);           
                return (3);
            }
            else
                return (0);
        }
        i++;
    }
    return (0);
}
int is_double(char *str)
{
    int point = 1;
    int i = 0;
    if (!std::strcmp(str, "-inf") || !std::strcmp(str, "+inf") || !std::strcmp(str, "nan"))
        return (3);
    if (str[0] == '+' || str[0] == '-')
        i++;
    while (str[i])
    {
        if (!std::isdigit(str[i]))
        {
            if (str[i] == '.')
            {
                if (!point)
                    return (0);
                point = 0;
            }
            else
                return (0);
        }
        i++;
    }
    return (4);
}
void    char_Tothers(char *str)
{
    char    c;
    int     i;
    float   f;
    double  d;
    c = str[1];
    std::cout<<"the input is a character and its value is : "<<c<<std::endl;
    std::cout<<"converting char to int ..."<<std::endl;
    i = static_cast<int>(c);
    std::cout<<"the value after converting is "<<i<<std::endl;
    
    std::cout<<"converting char to float ..."<<std::endl;
    f = static_cast<float>(c);
    std::cout<<"the value after converting is "<<f<<std::endl;
    
    std::cout<<"converting char to double ..."<<std::endl;
    d = static_cast<double>(c);
    std::cout<<"the value after converting is "<<d<<std::endl;
    
}
void    int_Tothers(char *str)
{
    int i;
    char    c;
    float   f;
    double  d;
    i = std::stoi(str);
    std::cout<<"the input is a intger and its value is : "<<i<<std::endl;
    std::cout<<"converting int to char ..."<<std::endl;
    if (i > 126 || i < 1)
        std::cerr<<"the type conversion is causing overflow or is impossible"<<std::endl;
    else if (i < 33 && i >= 0)
        std::cerr<<"non displayable"<<std::endl;
    else
    {
        c = static_cast<char>(i);
        std::cout<<"the value after converting is "<<c<<std::endl;
    }

    std::cout<<"converting int to float ..."<<std::endl;
    f = static_cast<float>(i);
    std::cout<<"the value after converting is "<<f<<std::endl;
    
    std::cout<<"converting int to double ..."<<std::endl;
    d = static_cast<double>(i);
    std::cout<<"the value after converting is "<<d<<std::endl;
    
}
void    float_Tothers(char *str)
{
    float   f;
    char    c;
    int     i;
    double  d;
    if (!std::strcmp(str, "-inff"))
    {
        f = FLT_MIN;
        std::cout<<"the input is a float and its value is : -inff"<<std::endl;
    }
    else if (!std::strcmp(str, "+inff"))
    {
        f = FLT_MAX;
        std::cout<<"the input is a float and its value is : +inff"<<std::endl;
    }
    else
    {
        f = std::stof(str);
        if (!std::strcmp(str, "nanf"))
            std::cout<<"the input is a float and its value is : nanf"<<std::endl;
        else
        std::cout<<"the input is a float and its value is : "<<f<<std::endl;
    }

    std::cout<<"converting float to char ..."<<std::endl;
    if (f > 126 || f < 1 || !std::strcmp(str, "nanf"))
        std::cerr<<"the type conversion is causing overflow or  is impossible"<<std::endl;
    else if (f < 33 && f  >= 0)
        std::cerr<<"non displayable"<<std::endl;
    else
    {
        c = static_cast<char>(f);
        std::cout<<"the value after converting is "<<c<<std::endl;
    }
    std::cout<<"converting float to int ..."<<std::endl;
    if (f > INT_MAX || f < INT_MIN || !std::strcmp(str, "nanf"))
        std::cerr<<"the type conversion is causing overflow or Non displayable"<<std::endl;
    else
    {
        i = static_cast<int>(f);
        std::cout<<"the value after converting is "<<i<<std::endl;
    }
    std::cout<<"converting float to double ..."<<std::endl;
    if (!std::strcmp(str, "+inff"))
        std::cout<<"the value after converting is +inf"<<std::endl;
    else if (!std::strcmp(str, "-inff"))
        std::cout<<"the value after converting is -inf"<<std::endl;
    else if (!std::strcmp(str, "nanf"))
        std::cout<<"the value after converting is nan"<<std::endl;
    else
    {
        d = static_cast<double>(f);
        std::cout<<"the value after converting is "<<d<<std::endl;
    }
    
}
void    double_Tothers(char *str)
{
    float   d;
    char    c;
    int     i;
    float   f;
     if (!std::strcmp(str, "-inf"))
        d = DBL_MIN;
    else if (!std::strcmp(str, "+inf"))
        d = DBL_MAX;
    else
        d = std::stod(str);
    std::cout<<"the input is a double and its value is : "<<d<<std::endl;
    std::cout<<"converting doble to char ..."<<std::endl;
    if (d > 126 || d < 1 || !std::strcmp(str, "nan"))
    {
        std::cerr<<"the type conversion is causing overflow or is impossible"<<std::endl;
    }
    else if (d < 33 && d >= 0)
    {
        std::cerr<<"non displayable"<<std::endl;
    }
    else
    {
        c = static_cast<char>(d);
        std::cout<<"the value after converting is "<<c<<std::endl;
    }
    
    std::cout<<"converting doble to int ..."<<std::endl;
    if (d > INT_MAX || d < INT_MIN || !std::strcmp(str, "nan"))
    {
        std::cerr<<"the type conversion is causing overflow or impossible"<<std::endl;
    }
    else
    {
        i = static_cast<int>(d);
        std::cout<<"the value after converting is "<<i<<std::endl;
    }
    
    std::cout<<"converting doble to float ..."<<std::endl;
    if (d > FLT_MAX || d < FLT_MIN)
    {
        std::cerr<<"the type conversion is causing overflow"<<std::endl;
    }
    else if (!std::strcmp(str, "nan"))
        std::cerr<<"the type conversion is nanf"<<std::endl;
    else
    {
        f = static_cast<float>(d);
        std::cout<<"the value after converting is "<<f<<std::endl;
    }
    
}
int whatType(char *str)
{
    if (is_char(str))
    {
        char_Tothers(str);
        return (0);
    }
    if (is_interger(str))
    {
        int_Tothers(str);
        return (1);
    }
    if (is_float(str))
    {
        float_Tothers(str);
        return (2);
    }
    if (is_double(str))
    {
        double_Tothers(str);
        return (3);
    }
    return (-1);
}

int main(int ac, char **av)
{
    int type = -1;
    if (ac != 2)
    {
        std::cout<<"too many argement"<<std::endl;
        return (1);
    }
    if ((type = whatType(av[1])) == -1)
    {
        std::cout<<"not literal type"<<std::endl;
        return (1);
    }
    return (0);
}

