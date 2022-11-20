#!/bin/bash

SHORT=j:t:b:
LONG=just-build:target-dir:build-type:

OPTS=$(getopt --options $SHORT --long $LONG --name "$0" -- "$@")

if [ $? != 0 ] ; then printf "Failed to parse options...exiting." >&2 ; exit 1 ; fi

eval set -- "$OPTS"

buildType=Debug
targDir="../FM-Build"
justBuild=false

while true ; do
  case "$1" in
    -t | --target-dir )
      targDir="$2"
      shift
      shift
      ;;
    -b | --build-type )
      buildType="$2"
      shift
      shift
      ;;
    -j | --just-build )
      justBuild=true
      shift
      ;;
    -- )
      shift
      break
      ;;
    *)
      exit 1
      ;;
  esac

done

printf "\nSelected Target Directory: ${targDir}\n"
printf "Selected Build Type: ${buildType}\n"

printf "\n####-CMAKE-####\n\n"

#build process

cmake -S . -B ${targDir} -DCMAKE_BUILD_TYPE=${buildType}

#run

if [justBuild]; then
  printf "\n####\n\n"
else
  printf "\n####-MAKE-####\n\n"
  cd ${targDir}
  make
  printf "\n####\n\n"
fi

