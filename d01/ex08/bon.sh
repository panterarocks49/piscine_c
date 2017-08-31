#!/bin/bash

ldapsearch -LLL -Q sn="*bon*" | grep sn: | wc -l | grep -Eo '\d'
