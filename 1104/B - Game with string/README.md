<h2><a href="https://codeforces.com/contest/1104/problem/B" target="_blank" rel="noopener noreferrer">1104B — Game with string</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1104B](https://codeforces.com/contest/1104/problem/B) |

## Topics
`data structures` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Game with string</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Two people are playing a game with a string $$$s$$$, consisting of lowercase latin letters. </p><p>On a player's turn, he should choose two consecutive equal letters in the string and delete them. </p><p>For example, if the string is equal to "<span class="tex-font-style-tt">xaax</span>" than there is only one possible turn: delete "<span class="tex-font-style-tt">aa</span>", so the string will become "<span class="tex-font-style-tt">xx</span>". A player not able to make a turn loses.</p><p>Your task is to determine which player will win if both play optimally.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains the string $$$s$$$, consisting of lowercase latin letters ($$$1 \leq |s| \leq 100\,000$$$), where $$$|s|$$$ means the length of a string $$$s$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>If the first player wins, print "<span class="tex-font-style-tt">Yes</span>". If the second player wins, print "<span class="tex-font-style-tt">No</span>".</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007807875361475826" id="id0042909179109551876" class="input-output-copier">Copy</div></div><pre id="id007807875361475826">abacaba
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0021591839677240432" id="id0045995680719346" class="input-output-copier">Copy</div></div><pre id="id0021591839677240432">No
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004086049271698067" id="id005328132931812611" class="input-output-copier">Copy</div></div><pre id="id004086049271698067">iiq
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006929503290563149" id="id007946016380601376" class="input-output-copier">Copy</div></div><pre id="id006929503290563149">Yes
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0040010936296196964" id="id0026457526648444085" class="input-output-copier">Copy</div></div><pre id="id0040010936296196964">abba
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003415219461672844" id="id0024264697772723065" class="input-output-copier">Copy</div></div><pre id="id003415219461672844">No
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example the first player is unable to make a turn, so he loses.</p><p>In the second example first player turns the string into "<span class="tex-font-style-tt">q</span>", then second player is unable to move, so he loses.</p></div>