# AtCoder

## Links

- [AtCoder](https://atcoder.jp/?lang=ja)
- [Docs of cargo-compete](https://github.com/qryxip/cargo-compete/blob/master/README-ja.md)
- [RustCoder - AtCoder と Rust で始める競技プログラミング入門](https://zenn.dev/toga/books/rust-atcoder)

## Start a contest

```sh
cd atcoder
cargo compete new <contest-id>
```

Example:

```sh
cargo compete new abc123
cargo compete new tessoku-book
```

## Test a problem

```sh
cd <contest-id>
cargo compete test <problem-id>
```

Example:

```sh
cd tessoku-book
cargo compete test a01
```

## Submit a problem

自動テストが走り、全て AC だった場合、AtCoder 上に自動で提出される。

```sh
cd <contest-id>
cargo compete submit <problem-id>
```

Example:

```sh
cd tessoku-book
cargo compete submit a01
```
