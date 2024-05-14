# 3DGeometryObjects

**Description:**

This C++ project provides classes for representing and manipulating 3D geometric objects like points, line segments, and spheres. It showcases object-oriented programming principles and demonstrates how to calculate distances, areas, and volumes in 3D space.

**Classes:**

* **`point3D`:**
   - Represents a point in 3D space with x, y, and z coordinates.
   - Provides constructors (default, parameterized, and copy), destructor, setters (`setX`, `setY`, `setZ`), and a print method.
   - Calculates the distance between two points using `calculateDistance`.
   - Includes a static `pointCount` to track the number of `point3D` objects created.
* **`lineSegment3D`:**
   - Represents a line segment in 3D space defined by two points (`startPoint` and `endPoint`).
   - Provides constructors, destructor, and a print method.
   - Calculates the length of the line segment using `calculateLength`.
   - Includes a static `lineSegmentCount` to track the number of `lineSegment3D` objects created.
* **`sphere`:**
   - Represents a sphere in 3D space with a center point and a radius.
   - Provides constructors, destructor, and a print method.
   - Calculates the surface area and volume of the sphere.
   - Includes a static `sphereCount` to track the number of `sphere` objects created.

**Key Concepts:**

* **Constructors and Destructors:** Demonstrate object initialization and memory management.
* **Encapsulation:** Private member variables accessed via public methods.
* **Static Members:** Track the number of instances of each class.
* **Copy Constructors:** Create new objects as copies of existing ones.
* **Composition:**  `lineSegment3D` is composed of two `point3D` objects.
* **Templates (Not Implemented):** The code includes unused `dieV1` and `dieV2` classes, suggesting a potential plan for using templates to make the code more generic.

**How to Use:**

1. **Compile:** Compile the code (e.g., `g++ *.cpp -o 3DGeometryObjects`).
2. **Run:** Execute the compiled program (`./3DGeometryObjects`).
3. **Output:** Observe the constructor/destructor messages as objects are created and destroyed.

Let me know if you have any other questions!
