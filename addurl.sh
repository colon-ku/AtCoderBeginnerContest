#!/bin/zsh

for file in `\find . -maxdepth 2 -type f -name "*.cpp"` ; do
    base="$(basename $file)"
    dir="${$(dirname $file):2}"
    editted="$(grep -c "Link to the Problem" $file)"
    LF=$'\n'

    if [ $editted = '0' ] ; then
        case $base in
            "a.cpp" )   gsed -i -e "1i // Link to the Problem" $file
                        gsed -i -e "2i // https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_a" $file
                        gsed -i -e "3i$LF" $file ;;
            "b.cpp" )   gsed -i -e "1i // Link to the Problem" $file
                        gsed -i -e "2i // https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_b" $file
                        gsed -i -e "3i$LF" $file ;;
            "c.cpp" )   gsed -i -e "1i // Link to the Problem" $file
                        gsed -i -e "2i // https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_c" $file
                        gsed -i -e "3i$LF" $file ;;
            "d.cpp" )   gsed -i -e "1i // Link to the Problem" $file
                        gsed -i -e "2i // https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_d" $file
                        gsed -i -e "3i$LF" $file ;;
            "e.cpp" )   gsed -i -e "1i // Link to the Problem" $file
                        gsed -i -e "2i // https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_e" $file
                        gsed -i -e "3i$LF" $file ;;
            "f.cpp" )   gsed -i -e "1i // Link to the Problem" $file
                        gsed -i -e "2i // https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_f" $file
                        gsed -i -e "3i$LF" $file ;;
        esac
    fi
done