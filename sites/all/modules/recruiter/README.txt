
--------------------------------------------------------------------------------
                     Recruiter Drupal distribution
--------------------------------------------------------------------------------

This is an installation profile for building a Drupal based e-recruitment
platform. Users can register either as recruiter and post job classifieds or
they can register as applicants and fill out their resume. A faceted search
helps users to find jobs and possible job candidates.

More details at 

 *  http://drupal.org/project/recruiter or
 *  http://epiqo.com/recruiter

Maintained by epiqo, see http://epiqo.com.


Requirements
------------

Recruiter depends on Apache Solr (http://lucene.apache.org/solr/), for
installation instructions please consult their respective documentation.


Building the distribution
-------------------------

Follow this instructions to build the distribution from scratch, e.g. using the
latest development version from the Git repository. If you have downloaded an
already packaged tarball, you can skip these steps and jump directly to the
installation instructions.

Recruiter is distributed with a .make file and one .profile file. The .make file
defines what packages must be downloaded and the .profile file is responsible
for configuring all those modules.

Before building the recruiter distribution you need two things:

 * Drush (http://drupal.org/project/drush)
 * Drush Make (http://drupal.org/project/drush_make)

For instructions on how to install those packages, please consult their
respective documentation. Then continue with the following steps:

1. Clone the Recruiter installation profile from drupal.org:

   git clone --branch 7.x-1.x http://git.drupal.org/project/recruiter.git

2. Change to the new folder and run the build script with parameter "3" to build
   the stable distribution.

   cd recruiter
   ./rebuild.sh 3

   If you want to use the latest development version, you have to build it with
   "3" first, then execute rebuild.sh again with option "1" from within the
   already built Drupal installation (under "profiles/recruiter").

3. Move the newly created "recruiter" subfolder to your webroot. It contains a
   full Drupal installation with all required modules and the installation
   profile.


Installation
------------

1. Make sure your recruiter download is placed in the webroot and configure
   your webserver accordingly.

1. Install Recruiter as a usual Drupal site by visiting it with your
   web browser. Select the "recruiter" installation profile and follow the usual
   Drupal installation instructions (i.e. Drupal's INSTALL.txt in the webroot
   subfolder).

2. Apache Solr is required for the job and resume searches. The Search API provides
   already some documentation for setting up a Solr server. See the "Setting up Solr"
   paragraph at its documentation:

     http://drupalcode.org/project/search_api_solr.git/blob_plain/refs/heads/7.x-1.x:/INSTALL.txt

   Once the Solr server is running, tell the Search API about it by going to:
 
          "admin/config/search/search_api/server/solr_server/edit"

3. Configure your private file system path as usual at

          "admin/config/media/file-system"


That's it.



Features
--------

The distribution makes use of the following feature modules:

* recruiter_common: Foundational components for the Recruiter distribution.
* recruiter_register: Allow users to register as recruiter or applicant.
* recruiter_job: Allows recruiters to create and manage jobs.
* recruiter_job_search: Provides a job search.
* recruiter_resume: Allow applicants to create a resume.
* recruiter_resume_search: Provides a resume search.
* recruiter_search: Common components for searching.

