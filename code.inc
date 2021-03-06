# -*- mode: org; -*-

#+NAME: hello
#+BEGIN_SRC python :exports none
print('Welcome to SeaGL 2019!', end='')
#+END_SRC

#+NAME: first_word
#+BEGIN_SRC python :var line="foo bar" :exports none
print(line.split(' ', 1)[0], end='')
#+END_SRC

#+NAME: strlen
#+BEGIN_SRC python :var line="18 characters long" :exports none
print(len(line), end='')
#+END_SRC

#+NAME: short_hash
#+BEGIN_SRC python :var line="somehash" :exports none
print(line[:4], end='')
#+END_SRC

#+NAME: hash_to_dir
#+BEGIN_SRC python :var line="somehash\n\n" :exports none
print(f".git/objects/{line[:2]}/{line[2:]}".rstrip(), end='')
#+END_SRC

#+NAME: init
#+BEGIN_SRC shell :exports none
rm -rf .git
rm -f *.{html,org,md,txt}
#+END_SRC
