Drupal.behaviors.initThickboxSearch = function(context) {

	var settings = Drupal.settings.thickbox_search;
	
  $("a[href*='/search/node']").addClass('thickbox').each(function() { this.href = this.href.replace(/search\/node(%3F|\?)?/,"search/thickbox?height="+settings.height+"&width="+settings.width) });
  $("a[href*='?q=search/node']").addClass('thickbox').each(function() { this.href = this.href.replace(/search\/node/,"search/thickbox&height="+settings.height+"&width="+settings.width) });
  
}