
all:space-1d.pdf \
	introduction.pdf \
	lagrangianfem.pdf \
	linear_elasticity.pdf \
	opt.pdf \
	solver.pdf \
	mesh.pdf \
	surfacefem.pdf \
	prismfem.pdf

space-1d.pdf: space-1d.tex
	xelatex -shell-escape space-1d.tex
	bibtex space-1d.aux
	xelatex -shell-escape space-1d.tex
	xelatex -shell-escape space-1d.tex
	evince space-1d.pdf&

introduction.pdf: introduction.tex 
	xelatex -shell-escape introduction.tex
	bibtex introduction.aux
	xelatex -shell-escape introduction.tex
	xelatex -shell-escape introduction.tex
	evince introduction.pdf&

lagrangianfem.pdf: lagrangianfem.tex
	xelatex -shell-escape lagrangianfem.tex
	bibtex lagrangianfem.aux
	xelatex -shell-escape lagrangianfem.tex
	xelatex -shell-escape lagrangianfem.tex
	evince lagrangianfem.pdf&

linear_elasticity.pdf: linear_elasticity.tex
	xelatex -shell-escape linear_elasticity.tex
	bibtex linear_elasticity.aux
	xelatex -shell-escape linear_elasticity.tex
	xelatex -shell-escape linear_elasticity.tex
	evince linear_elasticity.pdf&

opt.pdf: opt.tex
	xelatex -shell-escape opt.tex
	bibtex opt.aux
	xelatex -shell-escape opt.tex
	xelatex -shell-escape opt.tex
	evince opt.pdf&

solver.pdf: solver.tex
	xelatex -shell-escape solver.tex
	bibtex solver.aux
	xelatex -shell-escape solver.tex
	xelatex -shell-escape solver.tex
	evince solver.pdf&

mesh.pdf: mesh.tex
	xelatex -shell-escape mesh.tex
	bibtex mesh.aux
	xelatex -shell-escape mesh.tex
	xelatex -shell-escape mesh.tex
	evince mesh.pdf&

surfacefem.pdf: surfacefem.tex
	xelatex -shell-escape surfacefem.tex
	bibtex surfacefem.aux
	xelatex -shell-escape surfacefem.tex
	xelatex -shell-escape surfacefem.tex
	evince surfacefem.pdf&

prismfem.pdf: prismfem.tex
	xelatex -shell-escape prismfem.tex
	bibtex prismfem.aux
	xelatex -shell-escape prismfem.tex
	xelatex -shell-escape prismfem.tex
	evince prismfem.pdf&

.PHONY:clean  
clean:
	-rm -f *.ps *.dvi *.aux *.toc *.idx *.ind *.ilg *.log *.out *~ *.tid *.tms *.pdf *.bak *.blg *.bbl *.gz *.snm *.nav

