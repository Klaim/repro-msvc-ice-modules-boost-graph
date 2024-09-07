# mymodule - A C++ library

The `mymodule` C++ library provides <SUMMARY-OF-FUNCTIONALITY>.


## Usage

To start using `mymodule` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: mymodule ^<VERSION>
```

Then import the library in your `buildfile`:

```
import libs = mymodule%lib{<TARGET>}
```


## Importable targets

This package provides the following importable targets:

```
lib{<TARGET>}
```

<DESCRIPTION-OF-IMPORTABLE-TARGETS>


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.mymodule.<VARIABLE> ?= false
```

<DESCRIPTION-OF-CONFIG-VARIABLES>
