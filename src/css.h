#ifndef __INCLUDE_GUARD_CCS_H
#define __INCLUDE_GUARD_CCS_H

const char css[] = 
	"<!DOCTYPE html PUBLIC \"-//W3C/DTD HTML 4.01//EN\">\n"
	"<html>\n"
	"<script type=\"text/javascript\" src=\"http://ajax.googleapis.com/ajax/libs/jquery/1.7.2/jquery.min.js\"></script>\n"
	"<script>\n"
	"$(document).ready(function(){ \n"
	"     \n"
	"        $('#system h2').addClass('hide');  \n"
	"	$('#system table').addClass('hide');\n"
	"        $('#cpuidle h2').addClass('hide');  \n"
	"	$('#cpuidle table').addClass('hide'); \n"
	"        $('#cpufreq h2').addClass('hide');  \n"
	"	$('#cpufreq table').addClass('hide'); \n"
	"        $('#software h2').addClass('hide');  \n"
	"	$('#software table').addClass('hide'); \n"
	"        $('#device h2').addClass('hide');  \n"
	"	$('#device table').addClass('hide'); \n"
	"	$('#device p').addClass('hide');		\n"
	"        $('#tuning h2').addClass('hide');  \n"
	"	$('#tuning table').addClass('hide'); \n"
	"		\n"
	"        $('#top').append('<div class=\"SystemButton\"   onclick=\"toggleSystem()\">System Info</div>'); \n"
	"        $('#top').append('<div class=\"SummaryButton\"  onclick=\"toggleSummary()\">Summary</div>'); \n"
	"        $('#top').append('<div class=\"CpuidleButton\"  onclick=\"toggleCpuidle()\">CPU Idle</div>'); \n"
	"        $('#top').append('<div class=\"CpufreqButton\"  onclick=\"toggleCpufreq()\">CPU Frequency</div>'); \n"
	"        $('#top').append('<div class=\"SoftwareButton\" onclick=\"toggleSoftware()\">Software info</div>'); \n"
	"        $('#top').append('<div class=\"DeviceButton\"   onclick=\"toggleDevice()\">Device Info</div>'); \n"
	"        $('#top').append('<div class=\"TuningButton\"   onclick=\"toggleTuning()\">Tuning</div>'); \n"
	"	$('#top').append('<div class=\"AllButton\"      onclick=\"toggleAll()\">All</div>'); \n"
	"	$('#top .SummaryButton').toggleClass('pressed');\n"
	"\n"
	"    }\n"
	"	);\n"
	"function toggleDummy() { \n"
	"	        $('#system table').toggleClass('hide', true); \n"
	"		$('#system h2').toggleClass('hide', true); \n"
	"	        $('#summary table').toggleClass('hide', true); \n"
	"		$('#summary h2').toggleClass('hide', true); \n"
	"		$('#summary p').toggleClass('hide', true); \n"
	"	        $('#cpuidle table').toggleClass('hide', true); \n"
	"		$('#cpuidle h2').toggleClass('hide', true); \n"
	"	        $('#cpufreq table').toggleClass('hide', true); \n"
	"		$('#cpufreq h2').toggleClass('hide', true); \n"
	"	        $('#software table').toggleClass('hide', true); \n"
	"		$('#software h2').toggleClass('hide', true); \n"
	"	        $('#device table').toggleClass('hide', true); \n"
	"		$('#device h2').toggleClass('hide', true);   \n"
	"		$('#device p').toggleClass('hide', true); \n"
	"		$('#tuning table').toggleClass('hide', true); \n"
	"		$('#tuning h2').toggleClass('hide', true);      \n"
	"		$('#top .SystemButton').toggleClass('pressed', false);\n"
	"		$('#top .SummaryButton').toggleClass('pressed', false);\n"
	"		$('#top .CpuidleButton').toggleClass('pressed', false);\n"
	"		$('#top .CpufreqButton').toggleClass('pressed', false);\n"
	"		$('#top .SoftwareButton').toggleClass('pressed', false);\n"
	"		$('#top .DeviceButton').toggleClass('pressed', false);\n"
	"		$('#top .TuningButton').toggleClass('pressed', false);\n"
	"		$('#top .AllButton').toggleClass('pressed', false);\n"
	"}\n"
	"function toggleSystem() { \n"
	"	        $('#system table').toggleClass('hide', false); \n"
	"		$('#system h2').toggleClass('hide', false); \n"
	"	        $('#summary table').toggleClass('hide', true); \n"
	"		$('#summary h2').toggleClass('hide', true); \n"
	"		$('#summary p').toggleClass('hide', true); 		\n"
	"	        $('#cpuidle table').toggleClass('hide', true); \n"
	"		$('#cpuidle h2').toggleClass('hide', true); \n"
	"	        $('#cpufreq table').toggleClass('hide', true); \n"
	"		$('#cpufreq h2').toggleClass('hide', true); \n"
	"        	$('#software table').toggleClass('hide', true); \n"
	"		$('#software h2').toggleClass('hide', true); \n"
	"	        $('#device table').toggleClass('hide', true); \n"
	"		$('#device h2').toggleClass('hide', true);   \n"
	"		$('#device p').toggleClass('hide', true); \n"
	"		$('#tuning table').toggleClass('hide', true); \n"
	"		$('#tuning h2').toggleClass('hide', true);   \n"
	"		$('#top .SystemButton').toggleClass('pressed', true);\n"
	"		$('#top .SummaryButton').toggleClass('pressed', false);\n"
	"		$('#top .CpuidleButton').toggleClass('pressed', false);\n"
	"		$('#top .CpufreqButton').toggleClass('pressed', false);\n"
	"		$('#top .SoftwareButton').toggleClass('pressed', false);\n"
	"		$('#top .DeviceButton').toggleClass('pressed', false);\n"
	"		$('#top .TuningButton').toggleClass('pressed', false);\n"
	"		$('#top .AllButton').toggleClass('pressed', false);\n"
	"}\n"
	"function toggleSummary() { \n"
	"	        $('#system table').toggleClass('hide', true); \n"
	"		$('#system h2').toggleClass('hide', true); \n"
	"	        $('#summary table').toggleClass('hide', false); \n"
	"		$('#summary h2').toggleClass('hide', false); \n"
	"		$('#summary p').toggleClass('hide', false); 				\n"
	"		$('#cpuidle table').toggleClass('hide', true); \n"
	"		$('#cpuidle h2').toggleClass('hide', true); \n"
	"	        $('#cpufreq table').toggleClass('hide', true); \n"
	"		$('#cpufreq h2').toggleClass('hide', true); \n"
	"	        $('#software table').toggleClass('hide', true); \n"
	"		$('#software h2').toggleClass('hide', true); \n"
	"	        $('#device table').toggleClass('hide', true); \n"
	"		$('#device h2').toggleClass('hide', true);   \n"
	"		$('#device p').toggleClass('hide', true); \n"
	"		$('#tuning table').toggleClass('hide', true); \n"
	"		$('#tuning h2').toggleClass('hide', true);         \n"
	"		$('#top .SystemButton').toggleClass('pressed', false);\n"
	"		$('#top .SummaryButton').toggleClass('pressed', true);\n"
	"		$('#top .CpuidleButton').toggleClass('pressed', false);\n"
	"		$('#top .CpufreqButton').toggleClass('pressed', false);\n"
	"		$('#top .SoftwareButton').toggleClass('pressed', false);\n"
	"		$('#top .DeviceButton').toggleClass('pressed', false);\n"
	"		$('#top .TuningButton').toggleClass('pressed', false);\n"
	"		$('#top .AllButton').toggleClass('pressed', false);\n"
	"}\n"
	"function toggleCpuidle() { \n"
	"	        $('#system table').toggleClass('hide', true); \n"
	"		$('#system h2').toggleClass('hide', true); \n"
	"	        $('#summary table').toggleClass('hide', true); \n"
	"		$('#summary h2').toggleClass('hide', true); \n"
	"	        $('#summary p').toggleClass('hide', true); 		\n"
	"		$('#cpuidle table').toggleClass('hide', false); \n"
	"		$('#cpuidle h2').toggleClass('hide', false); \n"
	"	        $('#cpufreq table').toggleClass('hide', true); \n"
	"		$('#cpufreq h2').toggleClass('hide', true); \n"
	"	        $('#software table').toggleClass('hide', true); \n"
	"		$('#software h2').toggleClass('hide', true); \n"
	"	        $('#device table').toggleClass('hide', true); \n"
	"		$('#device h2').toggleClass('hide', true);   \n"
	"		$('#device p').toggleClass('hide', true); \n"
	"		$('#tuning table').toggleClass('hide', true); \n"
	"		$('#tuning h2').toggleClass('hide', true);         \n"
	"		$('#top .SystemButton').toggleClass('pressed', false);\n"
	"		$('#top .SummaryButton').toggleClass('pressed', false);\n"
	"		$('#top .CpuidleButton').toggleClass('pressed', true);\n"
	"		$('#top .CpufreqButton').toggleClass('pressed', false);\n"
	"		$('#top .SoftwareButton').toggleClass('pressed', false);\n"
	"		$('#top .DeviceButton').toggleClass('pressed', false);\n"
	"		$('#top .TuningButton').toggleClass('pressed', false);\n"
	"		$('#top .AllButton').toggleClass('pressed', false);\n"
	"        \n"
	"}\n"
	"function toggleCpufreq() { \n"
	"	        $('#system table').toggleClass('hide', true); \n"
	"		$('#system h2').toggleClass('hide', true); \n"
	"	        $('#summary table').toggleClass('hide', true); \n"
	"		$('#summary h2').toggleClass('hide', true); \n"
	"		$('#summary p').toggleClass('hide', true); 		\n"
	"	        $('#cpuidle table').toggleClass('hide', true); \n"
	"		$('#cpuidle h2').toggleClass('hide', true); \n"
	"	        $('#cpufreq table').toggleClass('hide', false); \n"
	"		$('#cpufreq h2').toggleClass('hide', false); \n"
	"	        $('#software table').toggleClass('hide', true); \n"
	"		$('#software h2').toggleClass('hide', true); \n"
	"	        $('#device table').toggleClass('hide', true); \n"
	"		$('#device h2').toggleClass('hide', true);   \n"
	"		$('#device p').toggleClass('hide', true); \n"
	"		$('#tuning table').toggleClass('hide', true); \n"
	"		$('#tuning h2').toggleClass('hide', true);                 \n"
	"		$('#top .SystemButton').toggleClass('pressed', false);\n"
	"		$('#top .SummaryButton').toggleClass('pressed', false);\n"
	"		$('#top .CpuidleButton').toggleClass('pressed', false);\n"
	"		$('#top .CpufreqButton').toggleClass('pressed', true);\n"
	"		$('#top .SoftwareButton').toggleClass('pressed', false);\n"
	"		$('#top .DeviceButton').toggleClass('pressed', false);\n"
	"		$('#top .TuningButton').toggleClass('pressed', false);\n"
	"		$('#top .AllButton').toggleClass('pressed', false);\n"
	"}\n"
	"\n"
	"function toggleSoftware() { \n"
	"	        $('#system table').toggleClass('hide', true); \n"
	"		$('#system h2').toggleClass('hide', true); \n"
	"	        $('#summary table').toggleClass('hide', true); \n"
	"		$('#summary h2').toggleClass('hide', true); \n"
	"		$('#summary p').toggleClass('hide', true); 				\n"
	"	        $('#cpuidle table').toggleClass('hide', true); \n"
	"		$('#cpuidle h2').toggleClass('hide', true); \n"
	"	        $('#cpufreq table').toggleClass('hide', true); \n"
	"		$('#cpufreq h2').toggleClass('hide', true); \n"
	"	        $('#software table').toggleClass('hide', false); \n"
	"		$('#software h2').toggleClass('hide', false); \n"
	"	        $('#device table').toggleClass('hide', true); \n"
	"		$('#device h2').toggleClass('hide', true);   \n"
	"		$('#device p').toggleClass('hide', true); \n"
	"		$('#tuning table').toggleClass('hide', true); \n"
	"		$('#tuning h2').toggleClass('hide', true);         \n"
	"		$('#top .SystemButton').toggleClass('pressed', false);\n"
	"		$('#top .SummaryButton').toggleClass('pressed', false);\n"
	"		$('#top .CpuidleButton').toggleClass('pressed', false);\n"
	"		$('#top .CpufreqButton').toggleClass('pressed', false);\n"
	"		$('#top .SoftwareButton').toggleClass('pressed', true);\n"
	"		$('#top .DeviceButton').toggleClass('pressed', false);\n"
	"		$('#top .TuningButton').toggleClass('pressed', false);\n"
	"		$('#top .AllButton').toggleClass('pressed', false);\n"
	"}\n"
	"\n"
	"function toggleDevice() { \n"
	"	        $('#system table').toggleClass('hide', true); \n"
	"		$('#system h2').toggleClass('hide', true); \n"
	"	        $('#summary table').toggleClass('hide', true); \n"
	"		$('#summary h2').toggleClass('hide', true); \n"
	"		$('#summary p').toggleClass('hide', true); 				\n"
	"	        $('#cpuidle table').toggleClass('hide', true); \n"
	"		$('#cpuidle h2').toggleClass('hide', true); \n"
	"	        $('#cpufreq table').toggleClass('hide', true); \n"
	"		$('#cpufreq h2').toggleClass('hide', true); \n"
	"	        $('#software table').toggleClass('hide', true); \n"
	"		$('#software h2').toggleClass('hide', true); \n"
	"	        $('#device table').toggleClass('hide', false); \n"
	"		$('#device h2').toggleClass('hide', false);   \n"
	"		$('#device p').toggleClass('hide', false); \n"
	"		$('#tuning table').toggleClass('hide', true); \n"
	"		$('#tuning h2').toggleClass('hide', true);         \n"
	"		$('#top .SystemButton').toggleClass('pressed', false);\n"
	"		$('#top .SummaryButton').toggleClass('pressed', false);\n"
	"		$('#top .CpuidleButton').toggleClass('pressed', false);\n"
	"		$('#top .CpufreqButton').toggleClass('pressed', false);\n"
	"		$('#top .SoftwareButton').toggleClass('pressed', false);\n"
	"		$('#top .DeviceButton').toggleClass('pressed', true);\n"
	"		$('#top .TuningButton').toggleClass('pressed', false);\n"
	"		$('#top .AllButton').toggleClass('pressed', false);\n"
	"}\n"
	"\n"
	"function toggleTuning() { \n"
	"        	$('#system table').toggleClass('hide', true); \n"
	"		$('#system h2').toggleClass('hide', true); \n"
	"	        $('#summary table').toggleClass('hide', true); \n"
	"		$('#summary h2').toggleClass('hide', true); \n"
	"		$('#summary p').toggleClass('hide', true); 				\n"
	"	        $('#cpuidle table').toggleClass('hide', true); \n"
	"		$('#cpuidle h2').toggleClass('hide', true); \n"
	"	        $('#cpufreq table').toggleClass('hide', true); \n"
	"		$('#cpufreq h2').toggleClass('hide', true); \n"
	"	        $('#software table').toggleClass('hide', true); \n"
	"		$('#software h2').toggleClass('hide', true); \n"
	"	        $('#device table').toggleClass('hide', true); \n"
	"		$('#device h2').toggleClass('hide', true);   \n"
	"		$('#device p').toggleClass('hide', true); \n"
	"		$('#tuning table').toggleClass('hide', false); \n"
	"		$('#tuning h2').toggleClass('hide', false);         \n"
	"		$('#top .SystemButton').toggleClass('pressed', false);\n"
	"		$('#top .SummaryButton').toggleClass('pressed', false);\n"
	"		$('#top .CpuidleButton').toggleClass('pressed', false);\n"
	"		$('#top .CpufreqButton').toggleClass('pressed', false);\n"
	"		$('#top .SoftwareButton').toggleClass('pressed', false);\n"
	"		$('#top .DeviceButton').toggleClass('pressed', false);\n"
	"		$('#top .TuningButton').toggleClass('pressed', true);\n"
	"		$('#top .AllButton').toggleClass('pressed', false);\n"
	"}\n"
	"function toggleAll() { \n"
	"	        $('#system table').toggleClass('hide', false); \n"
	"		$('#system h2').toggleClass('hide', false); \n"
	"	        $('#summary table').toggleClass('hide', false); \n"
	"		$('#summary h2').toggleClass('hide', false); \n"
	"		$('#summary p').toggleClass('hide', false); \n"
	"	        $('#cpuidle table').toggleClass('hide', false); \n"
	"		$('#cpuidle h2').toggleClass('hide', false); \n"
	"	        $('#cpufreq table').toggleClass('hide', false); \n"
	"		$('#cpufreq h2').toggleClass('hide', false); \n"
	"	        $('#software table').toggleClass('hide', false); \n"
	"		$('#software h2').toggleClass('hide', false); \n"
	"	        $('#device table').toggleClass('hide', false); \n"
	"		$('#device h2').toggleClass('hide', false);   \n"
	"		$('#device p').toggleClass('hide', false); \n"
	"		$('#tuning table').toggleClass('hide', false); \n"
	"		$('#tuning h2').toggleClass('hide', false);      \n"
	"		$('#top .SystemButton').toggleClass('pressed', false);\n"
	"		$('#top .SummaryButton').toggleClass('pressed', false);\n"
	"		$('#top .CpuidleButton').toggleClass('pressed', false);\n"
	"		$('#top .CpufreqButton').toggleClass('pressed', false);\n"
	"		$('#top .SoftwareButton').toggleClass('pressed', false);\n"
	"		$('#top .DeviceButton').toggleClass('pressed', false);\n"
	"		$('#top .TuningButton').toggleClass('pressed', false);\n"
	"		$('#top .AllButton').toggleClass('pressed', true);\n"
	"}\n"
	"</script>\n"
	" <head>\n"
	"<style type=\"text/css\">\n"
	"\n"
	"table\n"
	"{\n"
	"	background-color: #F8F8F8;\n"
	"	color: black;\n"
	"}\n"
	"\n"
	"th\n"
	"{\n"
	"	text-align: right;\n"
	"}\n"
	"th.device\n"
	"{\n"
	"	text-align: left;\n"
	"}\n"
	"th.process\n"
	"{\n"
	"	text-align: left;\n"
	"}\n"
	"\n"
	"td.package_odd\n"
	"{\n"
	"	background-color: #E0ffE0;\n"
	"	color: black;\n"
	"	text-align: right;\n"
	"}\n"
	"td.package_even\n"
	"{\n"
	"	background-color: #F0ffF0;\n"
	"	color: black;\n"
	"	text-align: right;\n"
	"}\n"
	"\n"
	"td.core_even\n"
	"{\n"
	"	background-color: #F0ffF0;\n"
	"	color: black;\n"
	"	text-align: right;\n"
	"}\n"
	"\n"
	"td.core_odd\n"
	"{\n"
	"	background-color: #E0E0ff;\n"
	"	color: black;\n"
	"	text-align: right;\n"
	"}\n"
	"\n"
	"td.cpu_even_freq\n"
	"{\n"
	"	background-color: #E2E2E2;\n"
	"	color: black;\n"
	"}\n"
	"\n"
	"td.cpu_odd_freq\n"
	"{\n"
	"	background-color: #F4f4F4;\n"
	"	color: black;\n"
	"}\n"
	"\n"
	"td.cpu_even_even\n"
	"{\n"
	"	background-color: #E0E0f0;\n"
	"	color: black;\n"
	"	text-align: right;\n"
	"}\n"
	"\n"
	"td.cpu_even_odd\n"
	"{\n"
	"	background-color: #F0f0F0;\n"
	"	color: black;\n"
	"	text-align: right;\n"
	"}\n"
	"td.cpu_odd_even\n"
	"{\n"
	"	background-color: #E0E0ff;\n"
	"	color: black;\n"
	"	text-align: right;\n"
	"}\n"
	"\n"
	"td.cpu_odd_odd\n"
	"{\n"
	"	background-color: #F0ffF0;\n"
	"	color: black;\n"
	"	text-align: right;\n"
	"}\n"
	"\n"
	"tr.device_odd\n"
	"{\n"
	"	background-color: #E0E0E0;\n"
	"	color: black;\n"
	"}\n"
	"tr.device_even\n"
	"{\n"
	"	background-color: #F0f0F0;\n"
	"	color: black;\n"
	"}\n"
	"\n"
	"tr.process_odd\n"
	"{\n"
	"	background-color: #E0E0E0;\n"
	"	color: black;\n"
	"}\n"
	"tr.process_even\n"
	"{\n"
	"	background-color: #F0f0F0;\n"
	"	color: black;\n"
	"}\n"
	"\n"
	"td.device_power\n"
	"{\n"
	"	text-align: right;\n"
	"}\n"
	"\n"
	"td.process_power\n"
	"{\n"
	"	text-align: right;\n"
	"}\n"
	"\n"
	"td.device_util\n"
	"{\n"
	"	text-align: right;\n"
	"}\n"
	"\n"
	"tr.tunable_odd\n"
	"{\n"
	"	background-color: #E0E0E0;\n"
	"	color: black;\n"
	"}\n"
	"tr.tunable_even\n"
	"{\n"
	"	background-color: #F0f0F0;\n"
	"	color: black;\n"
	"}\n"
	"\n"
	"tr.tunable_odd_bad\n"
	"{\n"
	"	background-color: #FFE0E0;\n"
	"	color: black;\n"
	"}\n"
	"tr.tunable_even_bad\n"
	"{\n"
	"	background-color: #FFf0F0;\n"
	"	color: black;\n"
	"}\n"
	"\n"
	"tr.system_odd\n"
	"{\n"
	"	background-color: #E0E0E0;\n"
	"	color: black;\n"
	"}\n"
	"tr.system_even\n"
	"{\n"
	"	background-color: #F0f0F0;\n"
	"	color: black;\n"
	"}\n"
	"\n"
	"tr.device_odd\n"
	"{\n"
	"	background-color: #E0E0E0;\n"
	"	color: black;\n"
	"}\n"
	"tr.device_even\n"
	"{\n"
	"	background-color: #F0f0F0;\n"
	"	color: black;\n"
	"}\n"
	"\n"
	"body {\n"
	"    background-color: #eee; /* Background color */\n"
	"    color: #222;            /* Foreground color used for text */\n"
	"    font-family: Helvetica; \n"
	"    font-size: 14px;\n"
	"    margin: 0;              /* Amount of negative space around the \n"
	"                               outside of the body */\n"
	"    padding: 0;             /* Amount of negative space around the \n"
	"                               inside of the body */\n"
	"}\n"
	"#top h1 {\n"
	"    margin: 0;\n"
	"    padding: 0;\n"
	"}\n"
	"#top h1 a {\n"
	"    background-color: #ccc;\n"
	"    border-bottom: 1px solid #666;\n"
	"    color: #222;\n"
	"    display: block;\n"
	"    font-size: 20px;\n"
	"    font-weight: bold;\n"
	"    padding: 10px 0;\n"
	"    text-align: center;\n"
	"    text-decoration: none;\n"
	"	text-shadow: 0px 1px 1px #fff;\n"
	"    background-image: -webkit-gradient(linear, left top, left bottom, \n"
	"                                       from(#ccc), to(#999));\n"
	"}\n"
	"\n"
	"\n"
	"#top div {\n"
	"    height: 30px;\n"
	"    font-weight: bold;\n"
	"    text-align: center;\n"
	"    color: white;\n"
	"    text-shadow: rgba(0,0,0,0.6) 0px -1px 1px;\n"
	"    line-height: 28px;\n"
	"    border-width:0px 8px 0px 8px;\n"
	"}\n"
	"#top div.SystemButton {\n"
	"    position: absolute;\n"
	"    top: 7px;\n"
	"    left: 6px;\n"
	"}\n"
	"#top div.SummaryButton {\n"
	"    position: absolute;\n"
	"    top: 7px;\n"
	"    left: 160px;\n"
	"}\n"
	"#top div.CpuidleButton {\n"
	"    position: absolute;\n"
	"    top: 7px;\n"
	"    left: 320px;\n"
	"}\n"
	"#top div.CpufreqButton {\n"
	"    position: absolute;\n"
	"    top: 7px;\n"
	"    left: 480px;\n"
	"}\n"
	"#top div.SoftwareButton {\n"
	"    position: absolute;\n"
	"    top: 7px;\n"
	"    left: 640px;\n"
	"}\n"
	"#top div.DeviceButton {\n"
	"    position: absolute;\n"
	"    top: 7px;\n"
	"    left: 800px;\n"
	"}\n"
	"#top div.TuningButton {\n"
	"    position: absolute;\n"
	"    top: 7px;\n"
	"    left: 960px;\n"
	"}\n"
	"#top div.AllButton {\n"
	"    position: absolute;\n"
	"    top: 7px;\n"
	"    left: 1120px;\n"
	"}\n"
	"div.pressed {\n"
	"	background-color: #000000;\n"
	"    border: 1px solid #000000;\n"
	"    color: #000000;\n"
	"    display: block;\n"
	"	border-width:0px 8px 0px 8px;\n"
	"    -webkit-border-top-left-radius: 8px;\n"
	"    -webkit-border-top-right-radius: 8px;\n"
	"	-webkit-border-bottom-left-radius: 8px;\n"
	"    -webkit-border-bottom-right-radius: 8px; \n"
	"}\n"
	"table.hide {\n"
	"	display: none;\n"
	"}\n"
	"h2.hide {\n"
	"	display: none;\n"
	"}\n"
	"p.hide {\n"
	"	display: none\n"
	"}\n"
	"</style>\n"
	"</head>\n"
	"\n"
	"<body>\n"
;
#endif
