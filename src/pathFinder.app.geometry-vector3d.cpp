//
// Created by brunn on 22/12/2024.
//

module app.geometry:vector3d;
import :vector3d;

geometry::Vector3D::Vector3D(const double x, const double y, const double z)
    : x(x), y(y), z(z) {
}

geometry::Vector3D::Vector3D(Vector3D &&other) noexcept
    : x(other.x), y(other.y), z(other.z) {
}

geometry::Vector3D &geometry::Vector3D::operator=(Vector3D &&other) noexcept {
    x = other.x;
    y = other.y;
    z = other.z;
    return *this;
}
