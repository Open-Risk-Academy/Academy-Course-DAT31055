///
/// File:   eigen.cpp
/// Author: Open Risk
///

#include <iostream>
#include <Eigen/Dense>
#include <eigen3/unsupported/Eigen/CXX11/Tensor>

using namespace std;
using namespace Eigen;

int main(int argc, const char **argv) {

//    Matrix<double, 3, 3> A;               // Fixed rows and cols. Same as Matrix3d.
//    Matrix<double, 3, Dynamic> B;         // Fixed rows, dynamic cols.
//    // Matrix<double, Dynamic, Dynamic> C;   // Full dynamic. Same as MatrixXd.
//    Matrix<double, 3, 3, RowMajor> E;     // Row major; default is column-major.
//    Matrix3f P, Q, R;                     // 3x3 float matrix.
//    Vector3f x, y, z;                     // 3x1 float matrix.
//    RowVector3f a, b, c;                  // 1x3 float matrix.

    double s;

    // Get eigen library version
    stringstream ss;
    ss.str("");
    ss << EIGEN_MAJOR_VERSION;
    ss << ".";
    ss << EIGEN_MINOR_VERSION;
    string eigen_version = ss.str();
    cout << eigen_version << endl;
    cout << "---------------------" << endl;

    // Dynamic column vector of doubles with initialization
    VectorXd A(3, 1);
    A << 1.5f, 2.5f, 3.5f;
    cout << "A: " << endl << A << endl;
    cout << "---------------------" << endl;

    // Type conversions

    cout << "A integer: " << endl << A.cast<int>() << endl;
    cout << "A real: " << endl << A.real() << endl;
    cout << "---------------------" << endl;

    // Static 3x3 matrix with comma initialization
    Matrix3d a;
    a << 1, 2, 3,
         4, 5, 6,
         7, 8, 9;
    cout << "a: " << endl << a << endl;
    cout << "---------------------" << endl;

    // Identity Matrix
    MatrixXd B;
    B = MatrixXd::Identity(4,4);
    cout << "B: " << endl << B << endl;
    cout << "---------------------" << endl;
    // alternative form  B.setIdentity(rows,cols)

    // Zero Matrix
    MatrixXd C;
    C = MatrixXd::Zero(3,3);
    cout << "C: " << endl << C << endl;
    cout << "---------------------" << endl;
    // alternative form  C.setZero(rows,cols)

    // Matrix of Ones
    MatrixXd D;
    D.setOnes(3,3);
    cout << "D: " << endl << D << endl;
    D.fill(2.0);
    cout << "new D: " << endl << D << endl;
    cout << "---------------------" << endl;
    // alternative form  MatrixXD::Zero(rows,cols)
    // .fill is not available for tensors

    // Tensor of arbitrary constant value
    Tensor<double, 3> E(3,3,3);
    E.setConstant(999);
    // Note: Generic print does not particularly annotate tensor dimensions
    cout << "E: " << endl << E << endl;
    cout << "---------------------" << endl;

    // Tensor of set values
    // If the tensor has rank N, the initializer list must be nested N times.
    // The most deeply nested lists must contain P scalars of the Tensor type where P is the size of the last dimension of the Tensor.
    Tensor<double, 3> e(2,2,2);
    e.setValues( {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}});
    cout << "e: " << endl << e << endl;
    cout << "---------------------" << endl;

    // Vector of random values
    VectorXd F;
    F.setRandom(10);
    cout << "F: " << endl << F << endl;
    cout << "---------------------" << endl;
    // alternative form  MatrixXD::Random(rows,cols)

    // Linearly spaced vector values
    VectorXd G;
    G = VectorXd::LinSpaced(10,0,1);
    cout << "G: " << endl << G << endl;
    cout << "---------------------" << endl;
    // alternative form  G.dsetLinSpaced(size,low,high)


    // Basic access to array data for vectors / matrices
    MatrixXd H;
    H.setOnes(10,5);
    cout << "H size: " << H.size() << endl;
    cout << "H rows: " << H.rows() << endl;
    cout << "H cols: " << H.cols() << endl;
    cout << "H element: " << H(2,3) << endl;
    cout << "---------------------" << endl;

    // Basic access to array data for tensors
    Tensor<double, 4> I(10,3,20,15);
    I.setRandom();
    cout << "I size: " << I.size() << endl;
    cout << "I dimension 1: " << I.dimension(0) << endl;
    cout << "I dimension 2: " << I.dimension(1) << endl;
    cout << "I dimension 3: " << I.dimension(2) << endl;
    cout << "I dimension 4: " << I.dimension(3) << endl;
    cout << "I element: " << I(2,3, 3, 1) << endl;
    cout << "---------------------" << endl;

    // Resizing
    Tensor<double, 3> J(2,2,2);
    cout << "J size: " << J.size() << endl;
    J.resize(3,3,3);
    cout << "J new size: " << J.size() << endl;
    cout << "---------------------" << endl;

    // Slicing Vectors
    VectorXi K;
    K = VectorXi::LinSpaced(10,0,10);
    cout << "Full K: " << endl << K << endl;
    cout << "K 3 head values: " << endl << K.head(3) << endl;
    cout << "K alt head values: " << endl << K.head<3>() << endl;
    cout << "K 5 tail values: " << endl << K.tail(5) << endl;
    cout << "K segment: " << endl << K.segment(3,5) << endl;
    cout << "K alt segment: " << endl << K.segment<5>(3) << endl;
    cout << "---------------------" << endl;

    // Slicing Dense Matrices
    MatrixXi L(4, 4);
    L.setRandom();
    int i = 1;
    int j = 2;
    int rows = 2;
    int cols = 2;
    L.block(i, j, rows, cols);
    L.row(i);
    L.col(j)   ;
    L.leftCols(cols) ;
    L.middleCols(j, cols);
    L.rightCols(cols) ;
    cout << "L top rows " << endl << L.topRows(rows) << endl;
    cout << "L middle rows " << endl << L.middleRows(i, rows) << endl ;
    L.bottomRows(rows)  ;
    L.topLeftCorner(rows, cols) ;
    L.topRightCorner(rows, cols)  ;
    L.bottomLeftCorner(rows, cols) ;
    L.bottomRightCorner(rows, cols);
    cout << "---------------------" << endl;

    // Slicing Tensors using Offset and Extend
    Tensor<int, 2> M(4, 3);
    M.setValues({{0, 100, 200}, {300, 400, 500},
                 {600, 700, 800}, {900, 1000, 1100}});
    cout << "M " << endl << M << endl;
    Eigen::array<Eigen::Index, 2> offsets = {1, 0};
    Eigen::array<Eigen::Index, 2> extents = {2, 2};
    Tensor<int, 2> slice = M.slice(offsets, extents);
    cout << "M Slice" << endl << slice << endl;
    cout << "---------------------" << endl;


    // Matrix operations (transpose, etc)
    Matrix3d N;
    N << 1, 2, 3,
            4, 5, 6,
            7, 8, 9;
    cout << "N " << endl << N << endl;
    cout << "N adjoint " << endl << N.adjoint() << endl;
    cout << "N transpose " << endl << N.transpose()  << endl;
    cout << "N reverse " << endl << N.reverse()  << endl;
    cout << "N diagonal " << endl << N.diagonal()  << endl;
    cout << "Chaining transpose and reverse" << endl <<  N.transpose().colwise().reverse() << endl;
    cout << "N conjugate " << endl <<  N.conjugate()   << endl;
    cout << "---------------------" << endl;

    // Matrix algebra with vectors
    Matrix3d O;
    O << 1, 2, 3,
            4, 5, 6,
            7, 8, 9;
    Vector3d x(1, 2, 3);
    RowVector3d y(1, 2, 3);
    cout << "a :" << endl << O << endl;
    cout << "x :" << endl << x << endl;
    cout << "y :" << endl << y << endl;
    cout << "a * x :" << endl << O * x << endl;
    cout << "y * a :" << endl << y * O << endl;
    cout << "---------------------" << endl;

    // Matrix-Matrix algebra
    // Pauli Matrices example
    Matrix2cf P;
    P << 0, 1, 1, 0;
    Matrix2cf Q;
    Q << 0, - 1.0if, 1.0if, 0;
    Matrix2cf R;
    P << 1, 0, 0, -1;
    cout << "P * P :" << endl << P * P << endl;
    cout << "P * Q + Q * P:" << endl << P * Q + Q * P << endl;
    cout << "---------------------" << endl;

    // Element-wise operations on single matrix using array

    R.array().inverse();
    R.array().sin();
    R.array().cos();
    R.array().pow(s);
    R.array().square();
    R.array().cube();
    R.array().sqrt();
    R.array().exp();
    R.array().log();
    R.array().max(P.array());
    R.array().min(P.array());
    R.array().abs();
    R.array().abs2();

    // Element-wise operations using cwise

    R.cwiseInverse();
    R.cwiseSqrt();
    R.cwiseMax(P);
    R.cwiseMin(P);
    R.cwiseAbs();
    R.cwiseAbs2();

    // Element-wise binary operations

    R = P.array() / Q.array();
    R.array() < Q.array();
    R.array() <= Q.array();

// Reductions (summations, traces etc)

    A.minCoeff();
    A.maxCoeff();
    A.sum();
    A.colwise().sum();
    A.rowwise().sum();
    A.prod();
    A.colwise().prod();
    A.rowwise().prod();
    A.trace();
    A.all();
    A.colwise().all();
    A.rowwise().all();
    A.any();
    A.colwise().any();
    A.rowwise().any();

    // Dot products, norms, and cross products

    x.norm();
    x.squaredNorm();
    x.dot(y);
    x.cross(y);

    // Eigenvalues (it is not named Eigen for nothing!)

    N.eigenvalues();
    EigenSolver<Matrix3d> eig(N);
    eig.eigenvalues();
    eig.eigenvectors();

    // Solving Linear systems of equations usign different solvers
    Matrix3f S;
    Vector3f b;
    S << 1,2,3,  4,5,6,  7,8,10;
    b << 3, 3, 4;
    std::cout << "Here is the matrix S:\n" << S << std::endl;
    std::cout << "Here is the vector b:\n" << b << std::endl;
    Eigen::Vector3f z = S.colPivHouseholderQr().solve(b);
    std::cout << "The solution is:\n" << z << std::endl;
    // Other solvers
    z = S.lu()  .solve(b);
    std::cout << "The solution is:\n" << z << std::endl;
    z = S.llt() .solve(b);
    z = S.ldlt().solve(b);
    z = S.jacobiSvd() .solve(b);

    return 0;
}