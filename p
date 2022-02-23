#!/usr/bin/env bash


if [[ "$OSTYPE" == "linux-gnu"* ]]; then
  xclip -o -selection clipboard
elif [[ "$OSTYPE" == "darwin"* ]]; then
  # Mac OSX
  pbcopy
fi

