#!/usr/bin/env bash

data=""

if [ $# -eq 0 ]; then
  data=$(cat)
else
  data="$1"
fi


echo "$data"

if [[ "$OSTYPE" == "linux-gnu"* ]]; then
  # ...
  echo "$data" | xclip -selection clipboard
elif [[ "$OSTYPE" == "darwin"* ]]; then
  # Mac OSX
  echo "$data" | pbcopy
fi

