int main()
{
    std::vector<int> v = {1,2,3,4,5} ;

    for( auto iter = std::begin(v), last = std::end(v); iter != last; ++iter )
    {
        std::cout << *iter << "\n"s ;
    }
}
