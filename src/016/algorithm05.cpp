int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5} ;

    auto twice = [](auto & value){ value = 2 * value ; } ;
    std::for_each( std::begin(v), std::end(v), twice ) ;

    auto print = [](auto value){ std::cout << value << ", "s ; } ;
    std::for_each( std::begin(v), std::end(v), print ) ;
}