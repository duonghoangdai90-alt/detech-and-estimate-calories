# detech-and-estimate-calories
This project builds a modular AI system linking a Python detection model with a C++ computation core. YOLO is used as a baseline to study integration, and the design supports user correction and custom models.
This project focuses on designing a modular AI system that integrates computer vision with a high-performance C++ computation core. The primary goal is not only to achieve accurate object detection, but to build a scalable and extensible architecture similar to real-world production systems.

The system uses a YOLO-based model implemented in Python as an initial baseline to perform food detection from images. The AI component is responsible solely for perception, producing structured detection outputs such as class labels, confidence scores, and bounding boxes. These outputs are then transferred to a separate C++ module through a well-defined data interface. The C++ side handles all core logic and domain-specific computations, ensuring performance, clarity, and long-term maintainability.

A key design principle of the project is the separation between AI predictions and final system decisions. The architecture supports human-in-the-loop interaction, allowing users to correct incorrect AI predictions or add missing contextual information. These user corrections are treated as first-class inputs rather than exceptions, enabling the system to produce reliable final results and collect valuable feedback for future model improvement.

While YOLO is currently used to understand system integration, the architecture is intentionally designed to allow custom detection models to be implemented and trained later, facilitating experimentation, optimization, and deeper control over the AI pipeline.
