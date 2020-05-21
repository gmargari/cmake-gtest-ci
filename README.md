[![Build][build-badge]][build-link]
[![codecov][codecov-badge]][codecov-link]
[![MIT License][license-badge]](LICENSE.md)

# Cmake - Googletest - CI

Minimal [template][template-link] CMake project with Googletest, and Continuous Integration with GitHub actions.

On each commit push or pull request the CI:
 - [builds](.github/workflows/build.yml) the code on a combination of OSes, compilers, and modes (debug, release)
 - runs tests
 - computes [code coverage](.github/workflows/code_coverage.yml) based on tests
 - uploads coverage results to codecov.io

[build-badge]:     https://github.com/gmargari/cmake-gtest-ci/workflows/Build/badge.svg
[build-link]:      https://github.com/gmargari/cmake-gtest-ci/actions?query=workflow%3ABuild
[codecov-badge]:   https://codecov.io/gh/gmargari/cmake-gtest-ci/branch/master/graph/badge.svg
[codecov-link]:    https://codecov.io/gh/gmargari/cmake-gtest-ci
[license-badge]:   https://img.shields.io/badge/license-MIT-007EC7.svg
[template-link]:   https://help.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-from-a-template
