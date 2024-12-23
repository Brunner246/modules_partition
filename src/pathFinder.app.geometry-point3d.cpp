//
// Created by brunn on 22/12/2024.
//

module app.geometry:point3d;
import :point3d;

geometry::Point3D::Point3D(const double x, const double y, const double z)
    : x(x), y(y), z(z) {
}

geometry::Point3D::Point3D(Point3D &&other) noexcept
    : x(other.x), y(other.y), z(other.z) {
}

double geometry::Point3D::X() const {
    return x;
}

double geometry::Point3D::Y() const {
    return y;
}

double geometry::Point3D::Z() const {
    return z;
}

geometry::Point3D &geometry::Point3D::operator=(Point3D &&other) noexcept {
    x = other.x;
    y = other.y;
    z = other.z;
    return *this;
}
