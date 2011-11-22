; This is the make file used by rebuild.sh to build the whole distribution.
; You may directly use this make file using drush make, or just use rebuild.sh with option 3.

api=2
core=7.x

; Use drupal.org drupal via Git.
projects[drupal][type] = core 
projects[drupal][download][type] = git 
projects[drupal][download][url] = git://git.drupalcode.org/project/drupal.git
projects[drupal][download][revision] = 7.7

; Recursion will build the recruiter.make file found there for us.
projects[recruiter][type] = profile
projects[recruiter][download][type] = git
projects[recruiter][download][url] = git://git.drupalcode.org/project/recruiter.git
projects[recruiter][download][branch] = 7.x-1.x
