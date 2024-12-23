module;

#include <modules_partition_export.h>

export module app.geometry:vector3d;

export namespace geometry
{
class MODULES_PARTITION_EXPORT Vector3D
{
    double x{};
    double y{};
    double z{};

public:
    Vector3D() = default;

    explicit Vector3D(double x, double y, double z);

    Vector3D(const Vector3D &other) = default;
    Vector3D(Vector3D &&other) noexcept;

    Vector3D &operator=(const Vector3D &other) = default;
    Vector3D &operator=(Vector3D &&other) noexcept;

};
};
