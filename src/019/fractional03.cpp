struct fractional
{
    // データメンバ
    int num ;
    int denom ;

    // コンストラクタ
    fractional( int num, int denom = 1 )
        : num(num), denom(denom)
    { }
} ;


int main()
{
    // fractional(int)が呼ばれる
    fractional a = 1 ;

    // fractional(int,int)が呼ばれる
    fractional b(1, 2) ;
    fractional c{1, 2} ;
}