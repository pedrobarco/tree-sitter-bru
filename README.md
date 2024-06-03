# Bru tree-sitter parser

[Bru](https://docs.usebruno.com/bru-lang/overview) markup language grammar for
[tree-sitter](https://github.com/tree-sitter/tree-sitter)

## Developing

Install npm and run the following command to install:

```sh
npm install
```

### Building

Change the grammar in [./grammar.js](./grammar.js) and run the build command:

```sh
npm run generate
```

### Testing

Update/add tests in [./test/](./test/) and run the test command:

```sh
npm run test
```
