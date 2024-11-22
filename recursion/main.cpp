// 1,0のみを使った10進数から
// 2進数へ変換する関数
int solve( int n )
{
    if ( n <= 1 )
        return n ;
    else
        return n%10 + 2 * solve( n/10 ) ;
}


int convert( int n )
{
    // 引数が正数の場合
    if ( n > 0 )
        // そのまま関数solveに渡してreturn
        return solve( n ) ;
    else // 引数が負数の場合
        // 絶対値を関数solveに渡して負数にしてreturn
        return - solve( -n ) ;
}


// 入力
int input()
{
    std::cout << "> " ;
    int x{} ;
    std::cin >> x ;
    return x ;
}

// 出力
void output( int binary )
{
    std::cout << binary << "\n"s ;
}

int main()
{
    // 入力、変換、出力のループ
    while( true )
    {
        auto decimal = input() ;
        auto binary = convert( decimal ) ;
        output( binary ) ;
    } 
}
