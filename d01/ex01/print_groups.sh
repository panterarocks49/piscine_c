#!/bin/bash

export FT_USER=$USER
id -Gn $FT_USER | sed  's/ /,/g'  | cat -e
