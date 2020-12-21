#!/bin/zsh

for file in `\find . -maxdepth 2 -type f -name "*.cpp"` ; do
    # ファイルへのパスは ./001/a.cpp のような形で得られる

    key='Link to the Problem'
    base="$(basename $file)"
    dir="${$(dirname $file):2}"

    editted="$(grep -c $key $file)"
    LF=$'\n'

    lk='void'

    # ABC19までは問題へのリンクの様式が異なる
    orgstyle=19

    # 問題へのリンクを生成
    if [ $dir -le $orgstyle ] ; then
        case $base in
            "a.cpp" ) lk="https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_1" ;;
            "b.cpp" ) lk="https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_2" ;;
            "c.cpp" ) lk="https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_3" ;;
            "d.cpp" ) lk="https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_4" ;;
        esac
    else
        case $base in
            "a.cpp" ) lk="https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_a" ;;
            "b.cpp" ) lk="https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_b" ;;
            "c.cpp" ) lk="https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_c" ;;
            "d.cpp" ) lk="https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_d" ;;
            "e.cpp" ) lk="https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_e" ;;
            "f.cpp" ) lk="https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_f" ;;
        esac
    fi

    # 問題へのリンクが生成されたら、ソースコードに生成されたリンクを貼り付ける
    if [ $editted = '0' ] ; then
        if [ $lk != 'void' ] ; then
            gsed -i -e "1i // $key" $file
            gsed -i -e "2i // $lk" $file
            gsed -i -e "3i$LF" $file
        fi
    fi
done