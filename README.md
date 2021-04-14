![made-with-python](https://img.shields.io/badge/Made%20with-Python-1f425f.svg)
[![GitHub license](https://img.shields.io/github/license/Naereen/StrapDown.js.svg)](https://github.com/Naereen/StrapDown.js/blob/master/LICENSE)
[![Percentage of issues still open](http://isitmaintained.com/badge/open/Naereen/badges.svg)](http://isitmaintained.com/project/Naereen/badges "Percentage of issues still open")

# Project Description

## Objectives

The main objective of numpymatrix to compare and contrast the functionality and performance of select popular linear
algebra libraries using numpy as the baseline.

In the current version three libraries are compared: Two C++ libraries (armadillo, eigen), a python library (
numpy/linalg):

* [Numpy](https://www.numpy.org) NumPy is the fundamental package for scientific computing with Python. It contains
  among other things a powerful N-dimensional array object and sophisticated (broadcasting) functions, tools for
  integrating C/C++ and Fortran code and Fourier transform, and random number capabilities
* [Armadillo](http://arma.sourceforge.net) C++ library for linear algebra & scientif+\ic computing. Aiming towards a
  good balance between speed and ease of use. Provides high-level syntax and functionality deliberately similar to
  Matlab
* [Eigen](http://eigen.tuxfamily.org) Eigen is a C++ template library for linear algebra: matrices, vectors, numerical
  solvers, and related algorithms

This comparison can be used to:

* identify missing / desirable features in libraries still under development
* as a learning tool for those new to numerical linear algebra
* as a refresher tool when migrating between languages / frameworks
* as a test suite comparing implementations ([TODO](TODO.md))

A secondary objective is to preserve the old numpy.matrix API which has *
some* [advantages](https://numpy.org/doc/stable/user/numpy-for-matlab-users.html) of the numpy.ndarray API.

## Structure

The structure of the numpy project is as follows:

* Documentation in the form of markdown files including tables with the reported feature comparisons. For convenience
  each markdown file includes one table
* A source code directory with a collection of simple scripts written in the respective languages that illustrates a *
  sample* of the functionality.

## Project Notes

### Completeness

There are several other high quality libraries for numerical linear algebra. Non-inclusion in this list is not a quality
judgement. Contributions to complete the library/features comparison are very welcome!

### Apples with Oranges

The different numerical linear algebra libraries compared here do not have identical development stage, scope and/or
domain targets. Numpy, for example, bills itself as a broad scientific computing framework and occupies a unique
position in the python ecosystem (compared. e.g., to multiple linear algebra projects in the C++ universe).

### Focus

The comparison is currently exclusively focused on implemented _mathematical features_. It does not address:

* numerical robustness
* memory efficiency
* computational performance,
* concurrency and CPU/GPU optimizations
* extensibility
* code quality
* licensing
* community aspects

or any other project attributes that may be very important when deciding which library to adopt for a given task. Some
of the above might make sense to include in this project

## How to use

The primary use of numpymatrix is envisaged to be as online documentation / training.

At present limited code samples are provided to demonstrate select features. Each code sample reproduces the same
sequence of calculations. These samples are not meant to exhaustively illustrate all functionality, merely to showcase
the look and feel of each library. Only features available in all libraries are included.

NB: To run the examples you need working installations of C++ and python respectively.

## Library Versions

The initial comparison is based on the documentation of the latest available versions as of July 2019:

* armadillo 9.600
* eigen 3.3.7
* numpy.linalg 1.16.4

# The Comparison Tables

For better usability, features are grouped in common subsets. This is irrespective of how they are grouped within the
libraries themselves.

## Overview

This is a high level overview. The links to individual documents have the more detailed comparison tables.

| Feature subset                                      | armadillo 9.600    | eigen 3.3.7            | numpy 1.16.4 |
| --------------------------------------------------- | ------------------ | ---------------------- | ------------ |
| [Array Classes](Arrays.md)                          | 1D, 2D, 3D **(1)** | 1D, 2D, Tensor **(2)** | ND           |
| [Array Classs Member Functions](MemberFunctions.md) | ~100               | ~100                   | ~100         |
| [Functions of Arrays](Functions.md)                 | ~100               | ~100                   | ~100         |
| [Solvers](Solvers.md)                               | ~100               | ~100                   | ~100         |
| ---                                                 | ---                | ---                    | ---          |
| [Geometry](Geometry.md)                             | V                  | na                     |              |
| [Signal / Image Processing and FFT](FFT.md)         | V                  | na                     | V            |
| [Random numbers](Random.md)                         | V                  | na                     | V            |
| [Statistics](Statistics.md)                         | V                  | na                     | V            |

* **(1)** 1D means Column or Row arrays, 2D means Matrices, 3D means Cubes, Tensors means nd-arrays
* **(2)** Tensor support in eigen is [experimental](http://eigen.tuxfamily.org/index.php?title=Tensor_support)
* The count of features is meant to indicate (roughly) the level of completeness. It is not meant to be precise science.
  Check the more detailed subset comparisons for a clearer picture

## Specific domains of scientific computing

Subsets such as Geometry, Random Numbers etc. that are not "core" linear algebra concepts are compared separately as
their availability or not might be to some extent depend on the domain focus of each project. Such domain specific
functionality maybe relatively easy to integrate using other libraries (at the expense of less consistent API,
introducing dependencies etc).

Only domains that are covered by at least two libraries are included. A list of other areas that are conceptually
related and occasionally included in numerical algebra libraries:

* Special Functions
* Interpolation / Extrapolation methods
* Root finding / optimisation