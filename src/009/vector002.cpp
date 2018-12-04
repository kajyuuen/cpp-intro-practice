int main()
{
    std::vector<int> v = { 8, 3, 7, 4, 2, 9, 3 } ;

    std::size_t size = v.size() ;

    std::size_t min = 0 ;

    for( std::size_t index = 1; index != size; ++index )
    {
        if( v.at(index) < v.at(min) )
            min = index ;
    }
    std::cout << v.at(min) ;
}