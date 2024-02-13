#include <Array.hpp>

#define MAX_VAL 50



int main(int, char**)
{
    // std::string l = "sentence";
    // std::ostringstream p;
    // Array<std::string> sentence(10);
    // for (int i = 0; i < 10; i++)
    // {
    //     p << i;
    //     sentence[i] = l + p.str();
    // }
    // for (size_t i = 0; i < 10; i++)
    // {
    //     std::cout << sentence[i] << std::endl;
    // }
    
    // Array<int> numbers(MAX_VAL);
    // std::cout << numbers.size() << std::endl;
    // int* mirror = new int[MAX_VAL];
    // SP
   
    // std::cout << "address of mirror: " << BOLD << mirror << NRM << std::endl;
    // std::cout << "address of mirror[0]: " << BOLD << &mirror[0] << NRM << " they should be the same..." << std::endl;
    // SP
    // srand(time(NULL));
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     const int value = rand()%60;
    //     numbers[i] = value;
    //     mirror[i] = value;
    // }
    // for (size_t i = 0; i < MAX_VAL; i++)
    // {
    //     std::cout << numbers[i] << " ";
    //     std::cout << BOLD << mirror[i] << NRM << std::endl;
    // }
    
    // std::cout << "size of numbers: " << numbers.size() << std::endl; 
    // SP
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     if (mirror[i] != numbers[i])
    //     {
    //         std::cerr << "diday<int> numbers(MAX_VAL)n't save the same value!!" << std::endl;
    //         return 1;
    //     }
    // }
    // try
    // {
    //     numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     numbers[i] = rand();
    // }
    // delete [] mirror;
    SP
    Array<int> numbers(MAX_VAL);
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand()%(MAX_VAL + 1);
    }
    numbers.print();
    SP
    Array<std::string> lines(MAX_VAL);
    std::ostringstream ad;
    std::string st = "string";
    for (size_t i = 0; i < MAX_VAL; i++)
    {
        ad << i;
        lines[i] = st + ad.str();
        ad.str("");
    }
    lines.print();
    SP
    Array<float> fl;
    try
    {
        std::cout << fl[1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    SP
    Array<double> fl1(MAX_VAL);
    for (size_t i = 0; i < MAX_VAL; i++)
    {
        fl1[i] = static_cast<double>(numbers[i]);
    }
    fl1.print();
    SP
    Array<char> s(MAX_VAL);
    for (size_t i = 0; i < MAX_VAL; i++)
    {
        s[i] = 33 + i;
    }
    s.print();
    SP
    Array<long long> ll;
    ll.print();
    return 0;
}