Observations:

1. verify1.lus (“Either the light is off, or x is positive”):
   - The property is expressed as (mode = off) or (x > 0).
   - A counterexample is found: when a press (1) occurs in the off state, the automaton switches to (on, 0). Since the light is on and x equals 0, the property is violated.
   - Conclusion: verify1 is disproved.

2. verify2.lus (“Either the light is on, or x is zero”):
   - The property is expressed as (mode = on) or (x = 0).
   - In the off state, x is always 0, and in the on state, the condition “mode = on” holds regardless of x.
   - Conclusion: verify2 is proven (i.e. it holds).

3. verify3.lus (“x does not exceed the value 9”):
   - The property is expressed as (x <= 9).
   - The automaton allows x to increment from 9 to 10 (e.g., (on,9) with a 0 input yields (on,10)) before resetting.
   - Conclusion: verify3 is disproved.

Tool Limitations:

- **Integer Domain:** The Luke model checker uses bounded integers. The option “--int 4” limits the integer width, which may affect the verification of properties involving arithmetic.
- **Visualization:** While Luke can generate counterexample traces and export them as HTML, understanding these traces may require manual inspection.
- **Scalability:** For larger or more complex Lustre models, state-space explosion can limit the effectiveness of bounded model checking.

Overall, Luke correctly identifies the counterexamples for verify1 and verify3, and confirms verify2 as valid.
