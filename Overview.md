# Overview Table

This is a high level overview which links to individual documents that have more detailed comparison tables.

| Feature subset                                      | armadillo          | eigen                  | numpy |
|-----------------------------------------------------|--------------------|------------------------|-------|
| [Array Classes](Arrays.md)                          | 1D, 2D, 3D **(1)** | 1D, 2D, Tensor **(2)** | ND    |
| [Array Classs Member Functions](MemberFunctions.md) | ~100               | ~100                   | ~100  |
| [Functions of Arrays](Functions.md)                 | ~100               | ~100                   | ~100  |
| [Solvers](Solvers.md)                               | ~100               | ~100                   | ~100  |
| ---                                                 | ---                | ---                    | ---   |
| [Geometry](Geometry.md)                             | V                  | na                     |       |
| [Signal / Image Processing and FFT](FFT.md)         | V                  | na                     | V     |
| [Random numbers](Random.md)                         | V                  | na                     | V     |
| [Statistics](Statistics.md)                         | V                  | na                     | V     |

* **(1)** 1D means Column or Row arrays, 2D means Matrices, 3D means Cube Arrays while Tensors means n-dim-arrays
* **(2)** Tensor support in eigen is [experimental](http://eigen.tuxfamily.org/index.php?title=Tensor_support)
* The count of features is meant to indicate (roughly) the level of completeness. It is not meant to be precise science.
  Check the more detailed subset comparisons for a clearer picture

## Specific domains of scientific computing

Subsets such as Geometry, Random Numbers etc. that are not "core" linear algebra concepts are compared separately as their availability or not might be to some extent depend on the domain focus of each project. Such domain specific functionality maybe relatively easy to integrate using other libraries (at the expense of less consistent API, introducing dependencies etc).

Only domains that are covered by at least two libraries are included. A list of other areas that are conceptually related and occasionally included in numerical algebra libraries:

* Special Functions
* Interpolation / Extrapolation methods
* Root finding / optimisation