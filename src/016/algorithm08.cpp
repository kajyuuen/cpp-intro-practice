auto find = [](auto first, auto last, auto const & value)
{
    for (auto iter = first; iter != last; ++iter)
    {
        if(*iter == value)
            return iter ;
    }
    return last ;
}

int main()
{
    std::vector<int> v = {1,2,3,4,5} ;

    auto pos = std::find( std::begin(v), std::end(v), 3) ;

    if( pos != std::end(v) )
    {
        std::cout << "Found."s ;
    }
    else
    {
        std::cout << "Not found."s ;
    }
}