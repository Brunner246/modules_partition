//
// Created by MichaelBrunner on 15/12/2024.
//
module;

#include <modules_partition_export.h>

export module app.geometry:point3d;
import std;

export namespace geometry {

    class MODULES_PARTITION_EXPORT Point3D {
        double x;
        double y;
        double z;

    public:
        static constexpr auto EPSILON = 1e-6;

        Point3D() = default;

        Point3D(double x, double y, double z);

        Point3D(const Point3D &other) = default;

        Point3D(Point3D &&other) noexcept;

        [[nodiscard]] double X() const;

        [[nodiscard]] double Y() const;

        [[nodiscard]] double Z() const;

        Point3D &operator=(const Point3D &other) = default;

        Point3D &operator=(Point3D &&other) noexcept;

    };

}
