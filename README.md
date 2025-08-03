# Build scripts and source code for the AROS website(s) and documentation.

The documentation repository holds the AROS documentation and website source code.


_NB: Changes do not go live until they are pulled into the azure-pipelines branch, however
this is automatically handled for the aros-development-team repository using GitHub actions._

## Build instructions

To generate the documentation, or website you must download the AROS sources, and place the
documentation tree inside it, then change to it to generate the files. E.g..

Prepare a build environment -:

    mkdir -p ~/build/aros/www
	git clone https://github.com/aros-development-team/AROS.git ~/build/aros
	git clone https://github.com/aros-development-team/documentation.git ~/build/aros/www
	cd ~/build/aros/www

Now you must build the autodocs,

	./build alldocs

And once that has completed, build your desired target..

    ./build www <site>

..where site must be one of aros, dev, locale

