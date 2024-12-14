<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>

<header>
  <h1>Scrabble-Like Game Scorer 🎲</h1>
  <p>
    Marjorie enjoys Scrabble so much that she created her own scoring rules to make the game more challenging. This program computes scores based on her custom rules and determines the winner between Marjorie and John.
  </p>
</header>

<hr>

<details>
  <summary>Table of Contents 📖</summary>
  <ul>
    <li><a href="#task">Task</a></li>
    <li><a href="#input-and-output">Input and Output</a></li>
    <li><a href="#examples">Examples</a></li>
    <li><a href="#requirements">Requirements</a></li>
    <li><a href="#usage">Usage</a></li>
  </ul>
</details>

<hr>

<section id="task">
  <h2>Task 🛠️</h2>
  <p>
    This program calculates the scores of two sequences of letters created by Marjorie and John, following these rules:
  </p>
  <ul>
    <li>1 point for each vowel (<code>{'a', 'e', 'i', 'o', 'u'}</code>).</li>
    <li>2 points for each popular consonant (<code>{'t', 'n', 's', 'r', 'h'}</code>).</li>
    <li>3 points for every other letter.</li>
    <li>Whitespace characters are ignored.</li>
  </ul>
  <p>
    The program then compares the scores and determines the winner.
  </p>
</section>

<hr>

<section id="input-and-output">
  <h2>Input and Output 🖥️</h2>
  <h3>Input</h3>
  <ul>
    <li>Two lines of lowercase letter sequences separated by whitespace, ending with a newline character.</li>
    <li>Whitespace does not count toward scoring.</li>
    <li>Input is read using the <code>getchar</code> function.</li>
  </ul>

  <h3>Output</h3>
  <ul>
    <li>If Marjorie’s sequence has a higher score, print: <code>Marjorie wins!</code></li>
    <li>If John’s sequence has a higher score, print: <code>John wins!</code></li>
    <li>If scores are tied, print: <code>Play again!</code></li>
  </ul>
</section>

<hr>

<section id="examples">
  <h2>Examples 📋</h2>
  <h3>Example #1</h3>
  <div class="code-block">
    Enter the first sequence: not this time john<br>
    Enter the second sequence: hello world<br>
    Output: Marjorie wins!
  </div>

  <h3>Example #2</h3>
  <div class="code-block">
    Enter the first sequence: hello world<br>
    Enter the second sequence: not this time marjorie<br>
    Output: Marjorie wins!
  </div>

  <h3>Example #3</h3>
  <div class="code-block">
    Enter the first sequence: peach<br>
    Enter the second sequence: cheap<br>
    Output: Play again!
  </div>

  <h3>Example #4</h3>
  <div class="code-block">
    Enter the first sequence: no<br>
    Enter the second sequence: hi<br>
    Output: Play again!
  </div>
</section>

<hr>

<section id="requirements">
  <h2>Requirements ✔️</h2>
  <ol>
    <li>
      The program must:
      <ul>
        <li>Read the input sequences using <code>getchar</code>.</li>
        <li>Ignore whitespace characters when calculating scores.</li>
        <li>Compute scores correctly based on the given rules.</li>
        <li>Compare scores and print the appropriate message.</li>
      </ul>
    </li>
  </ol>
</section>

<hr>

<section id="usage">
  <h2>Usage 🚀</h2>
  <p><strong>1. Compile the Program:</strong></p>
  <div class="code-block">gcc -o scrabble_scoring scrabble_scoring.c</div>
  <p><strong>2. Run the Program:</strong></p>
  <div class="code-block">./scrabble_scoring</div>
  <p><strong>3. Input Required:</strong></p>
  <ul>
    <li>Two lines of letter sequences.</li>
  </ul>
</section>

</body>
</html>
