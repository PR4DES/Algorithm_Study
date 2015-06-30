main:
	@for source in  $(wildcard *.cpp); do \
		rm -f `echo $$source | tr .cpp \ `; \
		g++ $$source -o `echo $$source | tr .cpp \ `; \
	done
