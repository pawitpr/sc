#!/bin/sh
while [ $# -gt 0 ]; do
	case "$1" in
	-fg | -bg | -fn)
		XFl="$XFl $1"
		shift
		XFl="$XFl \"$1\""
		;;
	-*)
		SFl="$SFl \\\"$1\\\""
		;;
	*)
		SArg="$SArg \\\"$1\\\""
		;;
	esac
	shift
done
Cmd="xterm $XFl -T \"pname $SArg\" -e \"pname -M $SFl $SArg\""
#echo $Cmd
eval $Cmd
