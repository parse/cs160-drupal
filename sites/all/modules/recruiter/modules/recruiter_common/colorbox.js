// $Id$
(function ($) {

Drupal.behaviors.initRecruiterColorbox = {
  attach: function (context, settings) {
	// Modify settings as suiting for the recruiter.
	settings.colorbox.innerHeight = "70%";
	settings.colorbox.innerWidth = 950;
	settings.colorbox.iframe = true;
	  
    $('a, area, input', context)
      .filter('.recruiter-colorbox')
      .once('init-recruitercolorbox-processed')
      .colorbox(settings.colorbox);
  }
};

})(jQuery);
