#!/bin/bash
#
# Summary: 
# Options: [<pkg-name>]
#
set -e

subcommand=${0##*/poac-}
if [[ "$1" == '--help' || "$1" == '-h' ]]; then
	exec "${POAC_ROOT}/lib/poac---help" $subcommand
elif [[ "$@" =~ '-' ]]; then
	echo "poac ${subcommand}: illegal option -- $@"
	exec "${POAC_ROOT}/lib/poac---help" $subcommand
else
	echo 'done.'
fi