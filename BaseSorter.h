
// COS30008, Tutorial 7, 2023

#pragma once

#include <iostream>
#include <functional>
#include <cassert>
#include <algorithm>
``
template<typename T>
class BaseSorter
{
private:
    T* fCollection;
    size_t fSize;
	size_t fSwapCount;
 	
public:
    
    BaseSorter( T* aCollection = nullptr, size_t aSize = 0 );
    virtual ~BaseSorter();
    
    size_t size() const noexcept;
	size_t getSwapCount() const noexcept;

    const T& operator[]( size_t aIndex ) const;
    void swap( size_t aLeftIndex, size_t aRightIndex );
    
    template<typename C = std::greater<T>>
    void operator()( bool aPrintStage = true, C aIsOutOfOrder = C{} ) noexcept
    {
        // intentionally empty
    }
    
    void printStage( size_t aIndent = 0 ) const noexcept;
};
