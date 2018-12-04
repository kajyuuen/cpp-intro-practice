int main()
{
    std::vector<int> v = {1,2,3,4,5} ;
    auto iter = std::begin(v) ;

    for ( std::size_t i = 0 ; i != std::size(v) ; ++i, ++iter )
    {
        std::cout << *iter << "\n"s ;
    }
}
