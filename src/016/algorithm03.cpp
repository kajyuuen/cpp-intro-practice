auto for_each = []( auto first, auto last, auto f)
{
    for( auto iter = first; iter != last; iter++ )
    {
        f( *iter ) ;
    }
};

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5} ;

    for_each( std::begin(v), std::end(v), []( auto value ) { std::cout << value ;} );

    for_each( std::begin(v), std::end(v), []( auto value ) { std::cout << 2 * value ;} );

    for_each( std::begin(v), std::end(v), []( auto value ) { std::cout << value << "\n"s ;} );
}