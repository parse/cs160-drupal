; recruiter profile make file
core = 7.x
api = 2

;  -  Modules  -

; Main modules
projects[] = ctools

projects[entity][download][type] = git
projects[entity][download][branch] = 7.x-1.x

projects[] =field_collection
projects[] = profile2

projects[message][download][type] = git
projects[message][download][branch] = 7.x-1.x

projects[] = rules

projects[views][download][type] = git
projects[views][download][branch] = 7.x-3.x

; Features
projects[features][download][type] = git
projects[features][download][branch] = 7.x-1.x

projects[] = diff
projects[strongarm] = 2.x-dev

;Search API
projects[search_api][download][type] = git
projects[search_api][download][branch] = 7.x-1.x

; Fix errors during upgrade: http://drupal.org/node/1253320
projects[search_api][download][patch][] = "http://drupal.org/files/issues/search_api_fix_3.patch"


projects[search_api_solr][download][type] = git
projects[search_api_solr][download][branch] = 7.x-1.x

projects[search_api_saved_searches][download][type] = git 
projects[search_api_saved_searches][download][branch] = 7.x-1.x

;Field types
projects[] = addressfield
projects[] = email
projects[] = date
projects[] = references

projects[link][download][type] = git
projects[link][download][branch] = 7.x-1.x

projects[] = term_level

;Taxonomy utils
projects[] = taxonomy_csv
projects[] = taxonomy_manager
projects[] = content_taxonomy
projects[] = autocomplete_deluxe
projects[] = rules_autotag

projects[synonyms][download][type] = git
projects[synonyms][download][branch] = 7.x-1.x

;Web services
projects[] = wsclient

projects[http_client][download][type] = git
projects[http_client][download][branch] = 7.x-2.x

projects[restws][download][type] = git
projects[restws][download][branch] = 7.x-1.x

;Misc
projects[colorbox][download][type] = git
projects[colorbox][download][branch] = 7.x-1.x

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

