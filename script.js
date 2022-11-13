// This script runs on every page

// Setting the HTML of the title
document.getElementById("title").innerHTML = "Luke L's Site";

// Setting the (initial) HTML of the directory bar
var dir;
(dir = document.getElementById("directory")).innerHTML = "/<a href='/'>site</a>/";

// Setting the HTML of the navigation menu
var navHTML = "<ul><li><a href='/'>Home</a></li><li><a href='/projects/index.html'>Projects</a></li><ul><li><a href='/projects/sortstudycli.html'>sortstudycli</a></li><li><a href='/projects/roguelike.html'>roguelike</a></li><li><a href='/projects/soupdl.html'>soupdl</a></li><li><a href='/projects/asteroids.html'>asteroids-js</a></li><li><a href='/projects/ccdemo.html'>ccdemo</a></li></ul><li><a href='/cgd/index.html'>C Game Dev</a></li><ul><li><a href='/cgd/topics.html'>topics</a></li><li><a href='/cgd/notes.html'>notes</a></li><li><a href='/cgd/exercises/index.html'>exercises</a></li></ul></ul>";
document.getElementById("navmenu").innerHTML = navHTML;
document.getElementById("navmenu-small").innerHTML = navHTML;

// Setting the directory text
var url = window.location.href;
var pageName = url.substring(url.lastIndexOf("/") + 1, url.lastIndexOf("."));

if (window.location.href.length - pathStart > 2)
	exit(0);

var siteUrl = "lukelawlor.github.io"
var pathStart = url.indexOf(siteUrl) + siteUrl.length + 1;

var dirStart = pathStart;
var dirEnd = url.indexOf("/", dirStart);

if (dirEnd != -1)
{
	var dirName = url.substring(dirStart, dirEnd);
	dir.innerHTML += "<a href=\"/" + dirName + "/index.html\">" + dirName + "</a>/";
}

if (pageName != "index")
	dir.innerHTML += "<a href=\"./" + pageName + ".html\">" + pageName + "</a>/";
