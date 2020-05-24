[![Build][build-badge]][build-link]
[![Docs][docs-badge]][docs-build-link]
[![codecov][codecov-badge]][codecov-link]
[![coveralls][coveralls-badge]][coveralls-link]
[![MIT License][license-badge]](LICENSE.md)

# Cmake - Googletest - CI

Minimal [template][template-link] CMake project with Googletest, and Continuous Integration with GitHub actions.

On each **commit push** or **pull request** the CI:
 - [builds](.github/workflows/build.yml) the code on a combination of OSes, compilers, and modes (debug, release)
 - runs tests
 - computes [code coverage](.github/workflows/code_coverage.yml) based on tests
 - uploads code coverage results to [codecov.io][codecov-link] and [coveralls.io][coveralls-link]
 - builds [documentation](.github/workflows/documentation.yml) with Doxygen 
 - uploads documentation to [GitHub pages][docs-link]

On each **pull request** the CI:
 - [checks](.github/workflows/lint.yml) code with [clang-tidy][clang-tidy-link]

[build-badge]:     https://img.shields.io/github/workflow/status/gmargari/cmake-gtest-ci/Build?label=build&style=plastic&logo=github
[build-link]:      https://github.com/gmargari/cmake-gtest-ci/actions?query=workflow%3ABuild
[docs-badge]:      https://img.shields.io/github/workflow/status/gmargari/cmake-gtest-ci/Documentation?label=docs&style=plastic&logo=github
[docs-build-link]: https://github.com/gmargari/cmake-gtest-ci/actions?query=workflow%3ADocumentation
[codecov-badge]:   https://img.shields.io/codecov/c/github/gmargari/cmake-gtest-ci?label=coverage&style=plastic&logo=codecov
[codecov-link]:    https://codecov.io/github/gmargari/cmake-gtest-ci
[coveralls-badge]: https://img.shields.io/coveralls/github/gmargari/cmake-gtest-ci?label=coverage&style=plastic&logo=coveralls
[coveralls-link]:  https://coveralls.io/github/gmargari/cmake-gtest-ci
[license-badge]:   https://img.shields.io/github/license/gmargari/cmake-gtest-ci?label=license&style=plastic&color=blue
[template-link]:   https://help.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-from-a-template
[docs-link]:       https://gmargari.github.io/cmake-gtest-ci/
[clang-tidy-link]: https://clang.llvm.org/extra/clang-tidy/
