#!/bin/sh

data=""

if [ $# -eq 0 ]; then
  data=$(cat)
else
  data="$1"
fi


echo "$data"
echo "$data" | xclip -selection clipboard
