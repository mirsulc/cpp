/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:26:48 by msulc             #+#    #+#             */
/*   Updated: 2024/02/09 14:11:23 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main()
{
    std::cout << std::fixed << std::setprecision(2); //Nastavime vystup na 2 desetinna mista
    
    const int arrLen = 5;
    int Arr[arrLen];        //Vytvarime pole o velikosti arrLen
    for (int i = 0; i < arrLen; i++)    //Naplnime pole hodnotami od '0' do arrLen
        Arr[i] = 48 + i;
    float Arr2[arrLen] = {1.11f, 2.22f, 3.333f, 4.44f, 5.55f};  //Vytvarime a plnime pole float hodnot od 1.11 do 5.55
  
    std::string Arr3[arrLen] = {"one", "two", "three", "four", "five"}; //Vytvarime a plnime pole string hodnot od "one" do "five"
    char Arr4[arrLen] = {'a', 'b', 'c', 'd', 'e'};              //Vytvarime a plnime pole char hodnot od 'a' do 'e'
    SP
    //---------------------------------------------------------------
    std::cout << " - Tests with iter function - " << std::endl; //v teto casti posilame do funkce iter ruzne pole a ruzne podfunkce
    ::iter<int>(Arr, arrLen, ::multiplyByTwo);
    SP
    ::iter(Arr2, arrLen, ::multiplyByTwo);
    SP
    ::iter(Arr3, arrLen, ::printItInUppercase);
    SP
    ::iter(Arr4, arrLen, ::printCharInUppercase);
    SP
    ::iter(Arr, arrLen, ::printCharInUppercase);
    SP
    //---------------------------------------------------------------
    std::cout << " - Now tests with BOLD function - " << std::endl; //v teto casti posilame do funkce iter ruzne pole a stejnou podfunkci
    ::iter(Arr, arrLen, ::printBold);
    SP
    ::iter(Arr2, arrLen, ::printBold);
    SP
    ::iter(Arr3, arrLen, ::printBold);
    SP
    ::iter(Arr4, arrLen, ::printBold);

    return 0;
}