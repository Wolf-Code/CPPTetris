#pragma once
#ifndef __POINT2_H__
#define __POINT2_H__


namespace CPPEngine
{
    /// <summary> A 2D point. </summary>
    struct Point2
    {
    public:
        Point2( int x = 0, int y = 0 ) : X( x ), Y( y ) {};

        /// <summary> Addition operator. </summary>
        /// <param name="point"> The point. </param>
        /// <returns> The result of the operation. </returns>
        Point2 operator+( Point2 point ) const
        {
            point.X += this->X;
            point.Y += this->Y;

            return point;
        }

        /// <summary> Subtraction operator. </summary>
        /// <param name="point"> The point. </param>
        /// <returns> The result of the operation. </returns>
        Point2 operator-( Point2 point ) const
        {
            point.X -= this->X;
            point.Y -= this->Y;

            return point;
        }

        /// <summary> Addition assignment operator. </summary>
        /// <param name="point"> The point. </param>
        /// <returns> The result of the operation. </returns>
        Point2& operator+=( const Point2& point )
        {
            this->X += point.X;
            this->Y += point.Y;

            return *this;
        }

        /// <summary> The X coordinate. </summary>
        int X;

        /// <summary> The Y coordinate. </summary>
        int Y;
    };
}
#endif