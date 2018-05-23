#!/bin/sh
docker run --privileged -it -v $(pwd):/mnt ubuntu-deb-tools gbp buildpackage --git-ignore-new $@

