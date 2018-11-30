# Lithium

This library was created to solve the difficulties of calculating precise percentage values of remaining battery capacity/energy.
The difficultie lies within the fact that the battery voltage doesn't correspont linearly to the remaining juice in the battery. This curve is non-linear and hard to describe in a mathematical function. This library tackels the problem with predefined (or user defined) tables of voltage-to-percentage indexi. If a voltage lays in between two defined entries, it gets approximated to the closest percent.
