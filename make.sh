#!/bin/zsh
dir=$1

if [ "xxxxx$dir" = "xxxxx" ] ; then
    echo "Type the contest number of which you are participating."
elif [ -e $dir ] ; then
    echo "Directory named \"$dir\" exists."
else
    mkdir $dir
    cp tmp.cpp "${dir}/a.cpp"
    cp tmp.cpp "${dir}/b.cpp"
    cp tmp.cpp "${dir}/c.cpp"
    cp tmp.cpp "${dir}/d.cpp"

    zsh ./addurl.sh
fi