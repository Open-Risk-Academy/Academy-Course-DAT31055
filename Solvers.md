# Comparison of algorithms for matrix decomposition, eigenvalues and linear solvers

## Decompositions (Dense Matrices)

| Feature subset            | armadillo                    | eigen                             | numpy   |
|---------------------------|------------------------------|-----------------------------------|---------|
| LU with Partial Pivot     | lu( L, U, P, X )             | partialPivLu()                    |         |
| LU with Full Pivot        | lu( L, U, X )                | fullPivLu()                       |         |
| Hessenberg                | hess( H, X )                 |                                   |         |
| Householder QR            | qr(), qr_econ()              | householderQr()                   |         |
| Householder QR with pivot |                              |                                   |         |
| Generalized Schur         | qz()                         |                                   |         |
| Standard Cholesky         | chol(X)                      | llt()                             |         |
| Robust Cholesky           |                              | ldlt()                            |         |
| Complete Orthogonal       |                              | completeOrthogonalDecomposition() |         |
| Bidiagonal SVD            |                              |                                   |         |
| Jacobi SVD                |                              | jacobiSvd()                       |         |
| Eigen Decomposition       | eig_sym( eigval, eigvec, X ) |                                   |         |

## Eigenvalues and Principal Components (Dense Matrices)

| Feature subset       | armadillo   | eigen          | numpy   |
|----------------------|-------------|----------------|---------|
| Eigen values         |             | .eigenvalues() |         |
| Eigen vectors        |             | .eigenvalues() |         |
| Principal Components | princomp    |                |         |

## Matrix Inversion and Solvers (Dense Matrices)

| Feature subset                              | armadillo  | eigen       |  numpy                   |
|---------------------------------------------|------------|-------------|--------------------------|
| linear matrix equation                      |            |             | linalg.solve(a, b)       |
| tensor equation a x = b for x               |            |             | linalg.tensorsolve(a, b) |
| least-squares solution to a matrix equation |            |             | linalg.lstsq(a, b)       |
| multiplicative inverse of a matrix          | inv(X)     | X.inverse() | linalg.inv(a)            |
| (Moore-Penrose) pseudo-inverse of a matrix  | pinv(X)    |             | linalg.pinv(a)           |
| inverse of an N-dimensional array           |            |             | linalg.tensorinv(a)      |

## Decompositions (Sparse Matrices)