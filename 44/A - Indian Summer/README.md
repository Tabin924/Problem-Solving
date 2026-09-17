<h2><a href="https://codeforces.com/contest/44/problem/A" target="_blank" rel="noopener noreferrer">44A — Indian Summer</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 44A](https://codeforces.com/contest/44/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Indian Summer</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>Indian summer is such a beautiful time of the year! A girl named Alyona is walking in the forest and picking a bouquet from fallen leaves. Alyona is very choosy — she doesn't take a leaf if it matches the color and the species of the tree of one of the leaves she already has. Find out how many leaves Alyona has picked.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer <span class="tex-span"><i>n</i></span> (<span class="tex-span">1 ≤ <i>n</i> ≤ 100</span>) — the number of leaves Alyona has found. The next <span class="tex-span"><i>n</i></span> lines contain the leaves' descriptions. Each leaf is characterized by the species of the tree it has fallen from and by the color. The species of the trees and colors are given in names, consisting of no more than <span class="tex-span">10</span> lowercase Latin letters. A name can not be an empty string. The species of a tree and the color are given in each line separated by a space.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output the single number — the number of Alyona's leaves.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0039230483642800473" id="id008812266720271771" class="input-output-copier">Copy</div></div><pre id="id0039230483642800473">5<br>birch yellow<br>maple red<br>birch yellow<br>maple yellow<br>maple green<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009918036065302691" id="id0003397536898133591" class="input-output-copier">Copy</div></div><pre id="id009918036065302691">4<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003354087024758665" id="id003534584961022441" class="input-output-copier">Copy</div></div><pre id="id003354087024758665">3<br>oak yellow<br>oak yellow<br>oak yellow<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006449095667424004" id="id00054636682004465364" class="input-output-copier">Copy</div></div><pre id="id006449095667424004">1<br></pre></div></div></div>