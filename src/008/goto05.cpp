void hello_n( int n ) ;

int main()
{
    int n {} ;
    std::cin >> n ;
    hello_n(n) ;
}

void hello_n(int n)
{
    int cnt = 0 ;
loop :
    if(cnt < n)
    {
        std::cout << "hello\n"s;
        cnt++;
        goto loop ;
    }
}