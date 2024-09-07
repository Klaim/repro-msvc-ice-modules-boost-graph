module;
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/dijkstra_shortest_paths.hpp>

module mymodule;

import std;

namespace mymodule
{
  void boost_graph_example()
  {
    using namespace boost;
    // create a typedef for the Graph type
    using Graph = adjacency_list<vecS, vecS, bidirectionalS>;

    // Make convenient labels for the vertices
    enum { A, B, C, D, E, N };
    const int num_vertices = N;
    const char* name = "ABCDE";

    // writing out the edges in the graph
    using Edge = std::pair<int, int>;
    Edge edge_array[] =
    { Edge(A,B), Edge(A,D), Edge(C,A), Edge(D,C),
      Edge(C,E), Edge(B,D), Edge(D,E) };
    const int num_edges = sizeof(edge_array)/sizeof(edge_array[0]);

    // declare a graph object
    Graph g(num_vertices);

    // add the edges to the graph object
    for (int i = 0; i < num_edges; ++i)
      add_edge(edge_array[i].first, edge_array[i].second, g);
  }

  void say_hello (std::ostream& o, const std::string& n)
  {
    if (n.empty ())
      throw std::invalid_argument ("empty name");
    boost_graph_example();
    o << "Hello, " << n << '!' << std::endl;
  }

  MyGraph::MyGraph()
  {
    using namespace boost;

    const int num_edges = edge_array.size()/sizeof(edge_array[0]);

    // add the edges to the graph object
    for (int i = 0; i < num_edges; ++i)
      add_edge(edge_array[i].first, edge_array[i].second, graph);
  }
}

