#!/bin/zsh

for file in `\find . -maxdepth 2 -type f -name "*.cpp"` ; do
    base="$(basename ${file})"
    dir="${$(dirname ${file}):2}"

    case "$base" in
        "a.cpp" ) gsed -i -e "1i # https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_a" ${file} ;;
        "b.cpp" ) gsed -i -e "1i # https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_b" ${file} ;;
        "c.cpp" ) gsed -i -e "1i # https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_c" ${file} ;;
        "d.cpp" ) gsed -i -e "1i # https://atcoder.jp/contests/abc${dir}/tasks/abc${dir}_d" ${file} ;;
    esac
done