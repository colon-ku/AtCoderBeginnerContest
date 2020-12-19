#!/bin/zsh

for file in `\find . -maxdepth 2 -type f -name "*.cpp"` ; do
    base="$(basename $file)"
    dir="${$(dirname $file):2}"
    editted="$(grep -c "Link to the Problem" $file)"

    if [ $base = "tmp.cpp" ] ; then
    elif [ $editted = '0' ] ; then
        gsed -i -e "1i // Link to the Problem" $file

        case $base in
            "a.cpp" ) gsed -i -e "2i // https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_a" $file ;;
            "b.cpp" ) gsed -i -e "2i // https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_b" $file ;;
            "c.cpp" ) gsed -i -e "2i // https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_c" $file ;;
            "d.cpp" ) gsed -i -e "2i // https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_d" $file ;;
            "e.cpp" ) gsed -i -e "2i // https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_e" $file ;;
            "f.cpp" ) gsed -i -e "2i // https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_f" $file ;;
        esac
    fi
done