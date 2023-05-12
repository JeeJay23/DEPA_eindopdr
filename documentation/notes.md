# approaches voor nodes uitrekenen

* bereken eerst volgorde van alle nodes en voer ze daarna stapsgewijs uit
* laat alle nodes tegelijkertijd draaien en wachten tot hun inputs klaar zijn

## heel mooi

alt manier om nodes te bewaren 

```uml
    'store nodes by id, id is in in lookup table'
    '¯\_(ツ)_/¯'
    - lookupTable : map<char*, int>
    - nodes : map<int, node*>
```