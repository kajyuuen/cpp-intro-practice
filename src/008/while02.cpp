void hello_n( int n ) ;

int main()
{
    int n {} ;
    std::cin >> n ;
    hello_n(n) ;
}

void hello_n(int n)
{
    if( n < 0 )
        return ;
    int i = 0 ;
    while(i != n )
    {
        std::cout << "Hello\n"s ;
        ++i ;
    }
}