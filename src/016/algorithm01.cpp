auto print_all = []( auto first, auto last)
{
    for( auto iter = first; iter != last; iter++ )
    {
        std::cout << *iter ;
    }
};

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5} ;

    print_all( std::begin(v), std::end(v) );
}