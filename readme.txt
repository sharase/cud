A table of short-period Tausworthe generators for Markov chain quasi-Monte Carlo

Preprint:
S. Harase, "A table of short-period Tausworthe generators for Markov chain quasi-Monte Carlo", submitted.

Abstract:
We consider the problem of estimating expectations by using Markov chain Monte Carlo methods and improving the accuracy by replacing IID uniform random points with quasi-Monte Carlo (QMC) points. Recently, it has been shown that Markov chain QMC remains consistent when the driving sequences are completely uniformly distributed (CUD). However, the definition of CUD sequences is not constructive, so an implementation method using short-period Tausworthe generators (i.e., linear feedback shift register generators over the two-element field) that approximate CUD sequences has been proposed. In this paper, we conduct an exhaustive search of short-period Tausworthe generators for Markov chain QMC in terms of the $t$-value, which is a criterion of uniformity widely used in the study of QMC methods. We provide a parameter table of Tausworthe generators and show the effectiveness in a numerical example using Gibbs sampling. 


Code in C:

cud_new.c   <- Our proposed Tausworthe generators using fast state transition

gcc cud_new.c -o cud_new -O3
./cud_new 12 >> output_m12.txt

