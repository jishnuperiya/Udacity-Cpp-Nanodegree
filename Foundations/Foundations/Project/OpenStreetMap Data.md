comes in different format
the data that we use, comes in OSM XML file (.osm file)

Data types in open street map data
1) Node
A [_node_](https://wiki.openstreetmap.org/wiki/Node) is one of the most basic elements in the OpenStreetMap data model. Each node indicates a single point with an identifier `id`, latitude `lat`, and longitude `lon`. There are other XML attributes in a node element that won't be relevant to this project,

2) Way
A [_way_](https://wiki.openstreetmap.org/wiki/Way) is an ordered list of nodes that represents a feature in the map. This feature could be a road, or a boundary of a park, or some other feature in the map. Each way has at least one `tag` which denotes some information about the way

3) Relation
A [_relation_](https://wiki.openstreetmap.org/wiki/Relation) is a data structure which documents a relationship between other data elements. Examples from the [OpenStreetMap wiki](https://wiki.openstreetmap.org/wiki/Relation) include:

> -   A route relation which lists the ways that form a major highway, cycle route, or bus route.
> -   A multipolygon that describes an area with holes, where the outer and inner boundaries of the area are given by two ways.

mapping a large river with distinct banks on either side of the river. In the image below, nodes are used to provide the coordinates of points along the banks of the river. Multiple nodes are then connected using ways; there are ways which form closed sections of the river, labeled as "Areas" in the image below. Another way is used to represent the island in the middle of the river. These ways are then grouped together using a relation, which represents the entire river.

![](https://video.udacity-data.com/topher/2019/August/5d51adfa_osm-river/osm-river.png)
