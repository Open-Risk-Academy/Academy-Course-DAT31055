# Comparison of the different n-dimensional array types supported by each library


## Fundamental n-dim array classes

| Feature subset            | armadillo 9.600 | eigen 3.3.7         | numpy 1.16.4      |
|---------------------------|-----------------|---------------------|-------------------|
| dense column vector class | Col<type>       | VectorNd            | numpy.array()     |
| dense row vector class    | Row<type>       | MatrixXd            | numpy.array()     |
| dense matrix class        | Mat<type>       | MatrixXd            | numpy.matrix()(1) |
| dense cube class          | Cube<type>      |                     | numpy.array()     |
| sparse matrix class       | SpMat<type>     | SparseMatrix        |                   |
| dense tensor class        |                 | Tensor<float, Rank> | numpy.array()     |


### Notes

* TODO: When multiple variations exist, only one array form is depicted (ignoring variations between static / dynamic arrays etc)
* armadillo features the _field_ class to store arbitrary objects in matrix-like or cube-like layout
* Tensors are part of [Eigen/unsupported](https://bitbucket.org/eigen/eigen/src/default/unsupported/Eigen/CXX11/src/Tensor/README.md)
* The numpy matrix class is [deprecated](https://docs.scipy.org/doc/numpy/reference/generated/numpy.matrix.html) in favor of regular n-dim arrays
* Numpy does not support sparse arrays. Those are provided by [Scipy.sparse](https://docs.scipy.org/doc/scipy/reference/sparse.html)


## Element-wise Array Operators (for arrays of identical shapes)


| Feature subset   | armadillo 9.600 | eigen 3.3.7 | numpy 1.16.4 |
|------------------|-----------------|-------------|--------------|
| addition         | +               | +           | +            |
| subtraction      | -               | -           | -            |
| scalar multiply  | *               | *           | *            |
| elementwise div  | /               |             | /            |
| Schur product(1) | %               |             | *            |
| modulo div       |                 |             | %            |
| equality         | ==              |             | ==           |
| inequality       | !=              |             | !=           |
| greater or equal | >=              |             | >=           |
| less or equal    | <=              |             | <=           |
| greater          | >               |             | >            |
| less             | <               |             | <            |

* (1) Elementwise multiplication

## Element Initialization / Array Generation 

| Feature subset         | armadillo 9.600      | eigen 3.3.7 | numpy 1.16.4 |
|------------------------|----------------------|-------------|--------------|
| initialiser list       | vec v = { 1, 2, 3 }; |             |              |
| return identity matrix | eye                  |             |              |

## Element Access and Views

| Feature subset       | armadillo 9.600       | eigen 3.3.7 | numpy 1.16.4 |
|----------------------|-----------------------|-------------|--------------|
| Access               | .at(i, j), (i,j), [i] |             |              |
| Contiguous views     | .col, .cols, .submat  |             |              |
| Non-Contiguous views | .elem, .cols, .submat |             |              |
| Read/write diagonal  | .diag()               |             |              |
| Raw Pointer to elem  | .memptr()             |             |              |
| Raw Pointer to col   | .colptr()             |             |              |

### Notes
* Some forms of access imply bounds checking while others not. Check the documentation