### 3.32

| 指令 |          |           | 状态值 |      |      |        |          |                  |
| ---- | -------- | --------- | ------ | ---- | ---- | ------ | -------- | ---------------- |
| 标号 | PC       | 指令      | %rdi   | %rsi | %rax | %rsp   | * %rsp   | 描述             |
| M1   | 0x400560 | callq     | 10     | -    | -    | 0xe820 | -        | 调用 first(10)   |
| F1   | 0x400548 | lea       | 10     | 11   | -    | 0xe818 | 0x400565 | x + 1            |
| F2   | 0x40054c | sub       | 10     | 11   | -    | 0xe828 | 0x400565 | x - 1            |
| F3   | 0x400550 | callq     | 9      | 11   | -    | 0xe828 | 0x400565 | 调用 last(9, 10) |
| L1   | 0x400540 | mov       | 9      | 11   | 9    | 0xe831 | 0x400555 | u                |
| L2   | 0x400543 | imul      | 9      | 11   | 99   | 0xe831 | 0x400555 | u * v            |
| L3   | 0x400547 | retq      | 9      | 11   | 99   | 0xe831 | 0x400555 | 返回 99          |
| F4   | 0x400555 | repz retq | -      | -    | 99   | 0xe828 | 0x400565 | 返回             |
| M2   | 0x400565 | mov       | -      | -    | 99   | 0xe820 | -        | 返回             |