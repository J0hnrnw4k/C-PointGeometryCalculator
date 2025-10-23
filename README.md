# 📐 C Point Geometry Calculator

**Author:** John Rex  
**Language:** C  
**Topic:** Structs • Pointers • Functions • Modular Programming  

---

## 🧩 Overview
This program calculates the **midpoint** and **distance** between two points in 3D space.  
It demonstrates how to:
- Define and use a custom `struct` (`Point`)
- Pass structs by value and reference
- Use pointers for output parameters
- Separate logic into `.h` and `.c` files for clean modular design

---

## 🧱 File Structure
| File | Description |
|------|--------------|
| `main.c` | Handles user input/output and calls geometry functions |
| `point.c` | Implements midpoint and distance calculations |
| `point.h` | Defines the `Point` struct and function prototypes |

---

## 🧮 Geometry Formulas
- **Midpoint:**  
  \[
  M = \left( \frac{x_1 + x_2}{2}, \frac{y_1 + y_2}{2}, \frac{z_1 + z_2}{2} \right)
  \]
- **Distance:**  
  \[
  d = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2 + (z_2 - z_1)^2}
  \]

---

## ⚙️ Example Run
