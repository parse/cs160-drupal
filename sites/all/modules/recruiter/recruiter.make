; recruiter profile make file
core = 7.x
api = 2

;  -  Modules  -

; Main modules
projects[ctools] = 1.0-rc1

projects[entity][download][type] = git
projects[entity][download][revision] = 01d1061e99f3349c63d1286341d6d6fc44239ef9

projects[field_collection] = 1.0-beta2
projects[profile2] = 1.0

projects[message][download][type] = git
projects[message][download][revision] = fad1db28aadbf4add8a87994abaa9a715694cef6

projects[rules] = 2.0-rc1

projects[views][download][type] = git
projects[views][download][revision] = de509319baa2c81d01a6418fd1adad2f7acc54a6

; Features
projects[features][download][type] = git
projects[features][download][revision] = ff5100c91bd3b70a681bf74fcc45d88800af3b13

projects[diff] = 2.0
projects[strongarm] = 2.0-beta2

;Search API
projects[search_api][download][type] = git
projects[search_api][download][revision] = 13d6a3ba9648fb67f1ecfacfee7f839f8658adce

; Fix errors during upgrade: http://drupal.org/node/1253320
projects[search_api][download][patch][] = "http://drupal.org/files/issues/search_api_fix_3.patch"

projects[search_api_solr][download][type] = git
projects[search_api_solr][download][revision] = dba2933986152f651b7278b78311ac03763aa946

projects[search_api_saved_searches][download][type] = git 
projects[search_api_saved_searches][download][revision] = cd9f35eb7e4afc212cfd80f0649e9f0c43c00e45

;Field types
projects[addressfield] = 1.0-beta1
projects[email] = 1.0
projects[date] = 2.0-alpha3
projects[references] = 2.0-beta3

projects[link][download][type] = git
projects[link][download][revision] = da9b09a2ed42f3dfb8e2d8c6556aeed72049a75b

projects[term_level] = 1.0

;Taxonomy utils
projects[taxonomy_csv] = 5.6
projects[taxonomy_manager] = 1.0-beta2

projects[autocomplete_deluxe] = 1.0-beta5
projects[content_taxonomy] = 1.0-beta1
projects[rules_autotag] = 1.0

projects[synonyms][download][type] = git
projects[synonyms][download][revision] = 949472be5d105f12d89350271e07e2c56e1a92f8

;Web services
projects[wsclient] = 1.0-alpha4

projects[http_client][download][type] = git
projects[http_client][download][revision] = 13a27e8352a995e97b96be32cb2c9584323bf6ec

projects[restws][download][type] = git
projects[restws][download][revision] = 5942a8d85e20727822e58cbadab1bdc0be5b7659

;Misc
projects[colorbox] = 1.1


;  -  Patches  -

; http://drupal.org/node/1079782
; Add support hook_entity_property_info().
projects[link][patch][] = "http://drupal.org/files/issues/1079782-link-entity_property-7.patch"

; http://drupal.org/node/722886
; Do not throw exception for 1XX and 2XX status code
projects[http_client][patch][] = "http://drupal.org/files/issues/722886-http_client-2xx.patch"

 
;  -  Libraries  -

;Library for accessing solr servers
libraries[SolrPhpClient][download][type] = "get"
libraries[SolrPhpClient][download][url] = "http://solr-php-client.googlecode.com/files/SolrPhpClient.r22.2009-11-09.tgz"
libraries[SolrPhpClient][directory_name] = "SolrPhpClient"
libraries[SolrPhpClient][destination] = "modules/search_api_solr/"

; Also add the colorbox library.
libraries[colorbox][download][type] = "get"
libraries[colorbox][download][url] = "http://colorpowered.com/colorbox/colorbox.zip"
libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][destination] = "libraries"

