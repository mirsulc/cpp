/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:19:16 by msulc             #+#    #+#             */
/*   Updated: 2024/02/14 13:32:32 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#define NUM 50

int main(void)
{
    std::srand(std::time(0));
    std::vector<int> viktor;
    std::list<int> lisa;
    std::deque<int> quin;
    for (int i = 0; i < NUM; i++)
    {
        int ran = std::rand() % 6;
        viktor.push_back(ran);
        lisa.push_front(ran);
        quin.push_back(ran);

    }
    print(viktor);
    print(lisa);
    print(quin);
    try
    {
        easyfind(viktor, 5);
        easyfind(lisa, 5); 
        easyfind(quin, 5);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    SP
    std::string numbers[5] = {"one", "two", "three", "four", "five"};
    std::vector<std::string> viktor2;
    std::list<std::string> lisa2;
    std::deque<std::string> quin2;
    for (size_t i = 0; i < 5; i++)
    {
        viktor2.push_back(numbers[i]);
        lisa2.push_front(numbers[i]);
        quin2.push_back(numbers[i]);
    }
    print(viktor2);
    print(lisa2);
    print(quin2);
    try
    {
        easyfind(viktor2, "three");
        easyfind(lisa2, "two");
        easyfind(quin2, "one");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    


   

}