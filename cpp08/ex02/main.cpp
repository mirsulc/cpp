/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:16:12 by msulc             #+#    #+#             */
/*   Updated: 2024/02/19 13:48:38 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <algorithm>
#include <vector>

template <typename T>
void print(T &container)
{
    typename T::iterator it;
    it = container.begin();
    while(it != container.end())
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << std::endl;
}

bool mypredicate (int i, int j) {
  return (i==j);
}

int main()
{
    MutantStack<int> mstack;
    std::deque<int> deq;
    deq.push_back(5);
    deq.push_back(17);
    mstack.push(5);
    mstack.push(17);
    std::cout << "mstack top: " << mstack.top() << std::endl;
    std::cout << "deq back: " << deq.back() << std::endl;
    std::cout << "mstack size: " << mstack.size() << std::endl;
    std::cout << "deq size: " << deq.size() << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    mstack.pop();
    deq.pop_back();
   
    std::cout << "mstack size: " << mstack.size() << std::endl;
    std::cout << "deq size: " << deq.size() << std::endl;
    for(int i = 0; i < 10; i++)
    {
        mstack.push(i);
        deq.push_back(i);
    }
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "mstack size: " << mstack.size() << std::endl;
    std::cout << "deq size: " << deq.size() << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::deque<int>::iterator itd = deq.begin();
    std::deque<int>::iterator itde = deq.end();
   
    while (it != ite)
    {
    std::cout << "mstack: " << *it << std::endl;
    ++it;
    }
    while (itd != itde)
    {
    std::cout << "deq: " << *itd << std::endl;
    ++itd;
    }
    std::cout << "---------------------------------------" << std::endl;
    
    std::deque<int> myDeque(10, 200);
    std::stack<int> pokus(myDeque); // std::stack<int, std::deque<int> > pokus(myDeque);
    //  print(pokus);   //nelze, protoze sam stack nema iteratory
    std::cout << "size of pokus: " << pokus.size() << std::endl;
    int in;
    for(int i = 0; i < 10; i++)
    {
        in = pokus.top();
        std::cout << in << " ";
        pokus.pop();
    }
    // nebo:
    // while(!pokus.empty())
    // {
    //     in = pokus.top();
    //     std::cout << in << " ";
    //     pokus.pop();
    // }
    std::cout << std::endl;
    std::cout << "size of pokus: " << pokus.size() << std::endl;
    
    return 0;
}