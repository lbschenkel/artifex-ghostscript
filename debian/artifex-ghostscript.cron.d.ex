#
# Regular cron jobs for the artifex-ghostscript package
#
0 4	* * *	root	[ -x /usr/bin/artifex-ghostscript_maintenance ] && /usr/bin/artifex-ghostscript_maintenance
