#!/bin/bash
#
# To use this command you must have `drush make` and `git` installed!
#

if [ ! $2 == "" ]; then
  DIR=$2
else
  DIR='recruiter'
fi

if [ -f recruiter.make ]; then
  SELECTION="$1"
  if [ "$SELECTION" == "" ]; then
    echo -e "\nThis command can be used to run recruiter.make in place, or to generate"
    echo -e "a complete recruiter distribution.\n\nWhich would you like?"
    echo "  [1] Rebuild in place (without drupal) - development version."
    echo "  [2] Rebuild in place (without drupal) - stable version."
    echo "  [3] Build a full distribution (stable version)."
    echo "  [4] Quick-update in place via Git (requires previous usage of [1])."
    echo -e "Selection: \c"
    read SELECTION
  fi

  if [ $SELECTION = "1" ]; then

    # Run make file only.
    echo "Building development install profile..."
    drush make --yes --working-copy --no-core --contrib-destination=. recruiter-dev.make
    
  elif [ $SELECTION = "2" ]; then

    # Run make file only.
    echo "Building stable install profile..."
    drush make --yes --working-copy --no-core --contrib-destination=. recruiter.make

  elif [ $SELECTION = "3" ]; then

    # Generate a complete tar.gz of Drupal + Recruiter
    echo "Building Recruiter distribution..."

    drush make --prepare-install --working-copy --yes build.make $DIR && echo "Done. Distribution can be found in the directory $DIR."
  elif [ $SELECTION = "4" ]; then

    basedir=`pwd`
    for dir in modules/*
    do
      cd $basedir/$dir  
      if [ -d ".git" ]; then
        echo $(pwd)
        git pull
      fi
    done
    # update the theme
    cd $basedir/themes/recruiter_bartik
    echo $PWD && git pull

    # update core. Before going down make sure we have absolute paths and
    # no links via readlink.
    basedir=`readlink -f $basedir`    
    cd $basedir/../..;
    if [ -d ".git" ]; then
      echo "Updating core"
      echo $PWD
      git pull
    fi
    echo "Running updates via drush"
    drush updatedb -y
    drush cc all
  else
   echo "Invalid selection."
  fi
else
  echo 'Could not locate file "recruiter.make"'
fi

