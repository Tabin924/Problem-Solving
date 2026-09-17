<h2><a href="https://codeforces.com/contest/25/problem/A" target="_blank" rel="noopener noreferrer">25A — IQ test</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 25A](https://codeforces.com/contest/25/problem/A) |

## Topics
`brute force`

---

## Problem Statement

<div class="header"><div class="title">A. IQ test</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given <span class="tex-span"><i>n</i></span> numbers differs from the others. Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers, he needs a program that among the given <span class="tex-span"><i>n</i></span> numbers finds one that is different in evenness.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains integer <span class="tex-span"><i>n</i></span> (<span class="tex-span">3 ≤ <i>n</i> ≤ 100</span>) — amount of numbers in the task. The second line contains <span class="tex-span"><i>n</i></span> space-separated natural numbers, not exceeding 100. It is guaranteed, that exactly one of these numbers differs from the others in evenness.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output index of number that differs from the others in evenness. Numbers are numbered from 1 in the input order.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0015874149443290209" id="id0035037322997325204" class="input-output-copier">Copy</div></div><pre id="id0015874149443290209">5<br>2 4 7 8 10<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00299388869986308" id="id006284870699896634" class="input-output-copier">Copy</div></div><pre id="id00299388869986308">3<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0020043391515100384" id="id004087334255445545" class="input-output-copier">Copy</div></div><pre id="id0020043391515100384">4<br>1 2 1 1<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007289825071126068" id="id0036811163045218276" class="input-output-copier">Copy</div></div><pre id="id007289825071126068">2<br></pre></div></div></div>