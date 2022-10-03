## Comparison of statistics functionality

* eigen does not include inbuilt statistics

| Feature subset                                                           | armadillo         | eigen | numpy |
|--------------------------------------------------------------------------|-------------------|-------|-------|
| mean, median, standard deviation, variance                               |                   |       |       |
| covariance                                                               | cov               |       |       |
| correlation                                                              | cor               |       |       |
| histogram of counts                                                      | hist              |       |       |
| histogram of counts with user specified edges                            | histc             |       |       |
| quantiles of a dataset                                                   | quantile          |       |       |
| principal component analysis (PCA)                                       | princomp          |       |       |
| probability density function of normal distribution                      | normpdf           |       |       |
| logarithm version of probability density function of normal distribution | log_normpdf       |       |       |
| cumulative distribution function of normal distribution                  | normcdf           |       |       |
| random vectors from multivariate normal distribution                     | mvnrnd            |       |       |
| random numbers from chi-squared distribution                             | chi2rnd           |       |       |
| random matrix from Wishart distribution                                  | wishrnd           |       |       |
| random matrix from inverse Wishart distribution                          | iwishrnd          |       |       |
| running statistics of scalars (one dimensional process/signal)           | running_stat      |       |       |
| running statistics of vectors (multi-dimensional process/signal)         | running_stat_vec  |       |       |
| cluster data into disjoint sets                                          | kmeans            |       |       |
| model and evaluate data using Gaussian Mixture Models (GMMs)             | gmm_diag/gmm_full |       |       |