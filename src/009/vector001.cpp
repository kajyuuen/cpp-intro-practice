int main()
{
    std::vector<int> v {};

    for( int iota = 0; iota != 10; ++iota )
    {
        v.push_back(iota) ;
    }

    for( std::size_t index = 0; index != v.size(); ++index )
    {
        std::cout << v.at(index) << " "s ;
    }
}