// Redirects to the Codeberg Pages site

const SECONDS_UNTIL_REDIRECT = 15;

const OLD_SITE_DOMAIN = 'lukelawlor.github.io'
const NEW_SITE_DOMAIN = 'lukelawlor.codeberg.page'

// Find the index in window.location.href where the page path begins
var page_path_index = window.location.href.indexOf(OLD_SITE_DOMAIN) + OLD_SITE_DOMAIN.length + 1;

// Save the contents of the page path
var page_path = window.location.href.substring(page_path_index);

// URL to redirect to
var redirect_url;

switch (page_path)
{
// Handle old project page URLs
case 'projects/sortstudycli.html': redirect_url = 'https://lukelawlor.codeberg.page/software/sortstudycli.html'; break;
case 'projects/roguelike.html':    redirect_url = 'https://github.com/lukelawlor/roguelike'; break;
case 'projects/soupdl.html':       redirect_url = 'https://lukelawlor.codeberg.page/software/soupdl/index.html'; break;
case 'projects/asteroids.html':    redirect_url = 'https://lukelawlor.codeberg.page/software/asteroids/index.html'; break;
case 'projects/ccdemo.html':       redirect_url = 'https://github.com/lukelawlor/demos'; break;

// By default, redirect to the new site + page_path
default:
	redirect_url = 'https://' + NEW_SITE_DOMAIN + '/' + page_path;
	break;
}

// Show the page that the user will be redirected to
var redirect_elem = document.getElementById('redirect-elem');
redirect_elem.href = redirect_elem.innerHTML = redirect_url;

// Redirect after the set number of seconds
setTimeout(function(){
	window.location.href = redirect_url;
}, 1000 * SECONDS_UNTIL_REDIRECT);
