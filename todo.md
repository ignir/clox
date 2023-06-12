- Баг. Интерпретатор не считает `true` валидным выражением.
- Баг? 0 не считается ложным значением. В выражении `0 and 5` 5 попадает на стек.
- ./clox samples/stack_trace.lox
  [line 1] Error at '(': Expect ';' after expression.
  [line 2] Error at '(': Expect ';' after expression.
  [line 4] Error at '(': Expect ';' after expression.
  [line 7] Error at '(': Expect ';' after expression.
