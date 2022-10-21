<h1 align="center">
STL
</h1>
<h3 align="center">
(Standard Template Library)
</h3>

* Containers
* Iterators
* Algorithms
* Functions

<h1 align="center">
Containers
</h1>

### Sequential

* vectors
* stacks
* queues
* priority-queue
* pairs (not a container)

### Ordered

* sets
* multiset
* map
* multimap

### Unordered

* unordered - set
* unordered - map

<h1 align="center">
Nested Containers
</h1>

<h3 align="center">
containers inside of containers
</h3>

* `vector<pair <int, int>>`
* `vector<vector<int>>`
* `map<int, vector<int>>`
* `set<pair<int, char>>`
* `vector<map<int, set<int>>`

<h1 align="center">
Iterators
</h1>

They point to memory address of containers.

* begin(), end()
* vector<int>::iterator it;
* continuity for containers