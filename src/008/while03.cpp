void hello_n( int n ) ;

int main()
{
    int i = 1 ;
    while(i <= 9)
    {
        int j = 1 ;
        while(j <= 9)
        {
            std::cout << i * j << "\t" ;
            ++j;
        }
        std::cout << "\n"s ;
        ++i ;
    }
}