Poetry/pybind11 Template
========================

[![pre-commit](https://img.shields.io/badge/pre--commit-enabled-brightgreen?logo=pre-commit)](https://github.com/pre-commit/pre-commit)
[![License: BSD 3-Clause-Clear](https://img.shields.io/badge/License-BSD%203--Clause--Clear-green.svg)](https://spdx.org/licenses/BSD-3-Clause-Clear.html)

This is a Poetry/pybind11 template, it uses [PEP
518's](https://peps.python.org/pep-0518/) `pyproject.toml`, so it can
be installed by others using `Poetry` directly.

Prerequisites
-------------

* Poetry

Install pre-commit
------------------

```bash
poetry run pre-commit install
```

Build and run test
------------------

```bash
poetry install
poetry run pytest tests
```

Others to install
-----------------

```bash
poetry add git+https://github.com/mlouielu/poetry-pybind11-template.git#main
```

Links
-----

* License: [BSD 3-Clause Clear License](https://github.com/mlouielu/poetry-pybind11-template/blob/main/LICENSE)

LICENSE
-------

```text
The Clear BSD License

Copyright (c) 2023 Louie Lu <louielu@cs.unc.edu>
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted (subject to the limitations in the disclaimer
below) provided that the following conditions are met:

     * Redistributions of source code must retain the above copyright notice,
     this list of conditions and the following disclaimer.

     * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in the
     documentation and/or other materials provided with the distribution.

     * Neither the name of the copyright holder nor the names of its
     contributors may be used to endorse or promote products derived from this
     software without specific prior written permission.

NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED BY
THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.
```
