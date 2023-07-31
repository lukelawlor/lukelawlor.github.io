// This script runs on every page

// If a footer exists, save its initial contents
// "initial" here means before this script edits any HTML
var initialFooter = document.getElementById('footer');
var initialFooterHTML = '';
if (initialFooter != null)
{
	initialFooterHTML = initialFooter.innerHTML;
	
	// Remove the footer from the DOM to stop it from being saved a second time in the body
	initialFooter.remove();
}

// Save initial contents of the body
var initialBodyHTML = document.body.innerHTML;

// Assemble the HTML skeleton
document.body.innerHTML = `
	<div id="wrapper">
		<div id="header">
			<div id="title">
				Luke Lawlor's Site
			</div>
			<div id="subtitle">
				since Nov 11, 2022
				<img src="/img/misc/favicon.png">
			</div>
		</div>
		<div id="directory"></div>
		<div id="body-flexbox">
		</div>
		<table>
		<tr>
			<td id="td-navmenu-small">
				<div id="navmenu-small" class="box">
				</div>
			</td>
		</tr>
		<tr>
			<td id="td-navmenu">
				<div id="navmenu" class="box">
				</div>
			</td>
			<td id="td-content">
				<div id="content" class="box">
				</div>
			</td>
		</tr>
		</table>
		<div id="footer"></div>
	</div>
`;

// Reset the HTML of the content
document.getElementById('content').innerHTML = initialBodyHTML;

// Reset the HTML of the footer
if (initialFooter == null)
{
	// If no footer was created in the initial HTML, use the default footer
	document.getElementById('footer').innerHTML = `
		<img src="/img/misc/stick.gif">
	`;
}
else
{
	// If a footer was created in the initial HTML, make it the final footer
	document.getElementById('footer').innerHTML = initialFooterHTML;
}

// Set the HTML of the navigation menu
var navHTML = `
<ul>
	<li><a href='/'>Home</a></li>
	<br>
	<li><a href='/projects/index.html'>Projects</a></li>
	<ul>
		<li><a href='/projects/sortstudycli.html'>sortstudycli</a></li>
		<li><a href='/projects/roguelike.html'>roguelike</a></li>
		<li><a href='/projects/soupdl.html'>soupdl</a></li>
		<li><a href='/projects/asteroids.html'>asteroids-js</a></li>
		<li><a href='/projects/ccdemo.html'>ccdemo</a></li>
	</ul>
	<br>
	<li><a href='/cgd/index.html'>C/C++ Game Dev</a></li>
	<ul>
		<li><a href='/cgd/topics.html'>Topics</a></li>
		<li><a href='/cgd/notes.html'>Notes</a></li>
		<li><a href='/cgd/exercises/index.html'>Exercises</a></li>
	</ul>
</ul>
`;
document.getElementById('navmenu').innerHTML = navHTML;
document.getElementById('navmenu-small').innerHTML = navHTML;

// Initialize the directory bar HTML
var dir;
(dir = document.getElementById('directory')).innerHTML = "/<a href='/'>site</a>/";

// Add text to the directory bar
var url = window.location.href;
var siteUrl = 'lukelawlor.github.io'

// List of directories in the URL leading up to the file
var dirList = [];

// Add all directories to dirList
var dirStart = url.indexOf(siteUrl) + siteUrl.length + 1;
var dirEnd = url.indexOf('/', dirStart);
while (dirEnd != -1)
{
	dirList.push(url.substring(dirStart, dirEnd));
	dirStart = dirEnd + 1;
	dirEnd = url.indexOf('/', dirStart);
}

// Add directories to the directory bar as links to (DIRECTORY_NAME)/index.html
for (var i = 0; i < dirList.length; i++)
{
	var href = '';
	for (var j = 0; j < dirList.length - i - 1; j++)
		href += '../';
	href += 'index.html';
	dir.innerHTML += '<a href="' + href + '">' + dirList[i] + '</a>/';
}

// Add a link to the page name if it isn't blank or index.html
var pageName = url.substring(url.lastIndexOf('/') + 1, url.length);
if (pageName != '' && pageName != 'index.html')
	dir.innerHTML += '<a href="./' + pageName + '">' + pageName.substring(0, pageName.indexOf('.')) + '</a>/';
