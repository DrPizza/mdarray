#pragma once

#include "targetver.h"

#define STRICT
#define NOMINMAX

#pragma warning(disable: 4668) // warning C4668: '%s' is not defined as a preprocessor macro, replacing with '0' for '#if/#elif'
#pragma warning(disable: 4710) // warning C4710: '%s': function not inlined
#pragma warning(disable: 4711) // warning C4711: function '%s' selected for automatic inline expansion
#pragma warning(disable: 4820) // warning C4820: '%s': '%d' bytes padding added after data member '%s'

#pragma warning(push)
#pragma warning(disable: 5039) // warning C5039: '%s': pointer or reference to potentially throwing function passed to extern C function under -EHc. Undefined behavior may occur if this function throws an exception.
#pragma warning(disable: 26440) // warning C26440: Function '%s' can be declared 'noexcept' (f.6: http://go.microsoft.com/fwlink/?linkid=853927).

#include <Windows.h>

#pragma warning(pop)

#if !defined(_STL_EXTRA_DISABLED_WARNINGS)
#define _STL_EXTRA_DISABLED_WARNINGS 4061 4324 4365 4514 4571 4582 4583 4623 4625 4626 4710 4774 4820 4987 5026 5027 5039
#endif

#if !defined(_SCL_SECURE_NO_WARNINGS)
#define _SCL_SECURE_NO_WARNINGS 1
#endif

#if !defined(_SILENCE_CXX17_ITERATOR_BASE_CLASS_DEPRECATION_WARNING)
#define _SILENCE_CXX17_ITERATOR_BASE_CLASS_DEPRECATION_WARNING 1
#endif

// disable for everything
#pragma warning(disable: 4324) // warning C4234: structure was padded due to alignment specifier
#pragma warning(disable: 4514) // warning C4514: '%s': unreferenced inline function has been removed
#pragma warning(disable: 4625) // warning C4625: '%s': copy constructor was implicitly defined as deleted
#pragma warning(disable: 4626) // warning C4626: '%s': assignment operator was implicitly defined as deleted
#pragma warning(disable: 4710) // warning C4710: '%s': function not inlined
#pragma warning(disable: 4820) // warning C4820: '%s': '%d' bytes padding added after data member '%s'
#pragma warning(disable: 5026) // warning C5026: '%s': move constructor was implicitly defined as deleted
#pragma warning(disable: 5027) // warning C5027: '%s': move assignment operator was implicitly defined as deleted

#pragma warning(disable: 26412) // warning C26412: Do not dereference an invalid pointer (lifetimes rule 1). 'return of %s' was invalidated at line %d by 'no initialization'.
#pragma warning(disable: 26481) // warning C26481: Don't use pointer arithmetic. Use span instead. (bounds.1: http://go.microsoft.com/fwlink/p/?LinkID=620413)
#pragma warning(disable: 26485) // warning C26485: Expression '%s::`vbtable'': No array to pointer decay. (bounds.3: http://go.microsoft.com/fwlink/p/?LinkID=620415)
#pragma warning(disable: 26490) // warning C26490: Don't use reinterpret_cast. (type.1: http://go.microsoft.com/fwlink/p/?LinkID=620417)
#pragma warning(disable: 26499) // warning C26499: Could not find any lifetime tracking information for '%s'

// disable for standard headers
#pragma warning(push)
#pragma warning(disable: 5039) // warning C5039: '%s': pointer or reference to potentially throwing function passed to extern C function under -EHc. Undefined behavior may occur if this function throws an exception.

#pragma warning(disable: 26400) // warning C26400: Do not assign the result of an allocation or a function call with an owner<T> return value to a raw pointer, use owner<T> instead. (i.11 http://go.microsoft.com/fwlink/?linkid=845474)
#pragma warning(disable: 26401) // warning C26401: Do not delete a raw pointer that is not an owner<T>. (i.11: http://go.microsoft.com/fwlink/?linkid=845474)
#pragma warning(disable: 26408) // warning C26408: Avoid malloc() and free(), prefer the nothrow version of new with delete. (r.10 http://go.microsoft.com/fwlink/?linkid=845483)
#pragma warning(disable: 26409) // warning C26409: Avoid calling new and delete explicitly, use std::make_unique<T> instead. (r.11 http://go.microsoft.com/fwlink/?linkid=845485)
#pragma warning(disable: 26411) // warning C26411: The parameter '%s' is a reference to unique pointer and it is never reassigned or reset, use T* or T& instead. (r.33 http://go.microsoft.com/fwlink/?linkid=845479)
#pragma warning(disable: 26412) // warning C26412: Do not dereference an invalid pointer (lifetimes rule 1). 'return of %s' was invalidated at line %d by 'end of function scope (local lifetimes end)'.
#pragma warning(disable: 26413) // warning C26413: Do not dereference nullptr (lifetimes rule 2). 'nullptr' was pointed to nullptr at line %d.
#pragma warning(disable: 26423) // warning C26423: The allocation was not directly assigned to an owner.
#pragma warning(disable: 26424) // warning C26424: Failing to delete or assign ownership of allocation at line %d.
#pragma warning(disable: 26425) // warning C26425: Assigning '%s' to a static variable.
#pragma warning(disable: 26429) // warning C26429: Symbol '%s' is never tested for nullness, it can be marked as not_null (f.23: http://go.microsoft.com/fwlink/?linkid=853921).
#pragma warning(disable: 26430) // warning C26430: Symbol '%s' is not tested for nullness on all paths (f.23: http://go.microsoft.com/fwlink/?linkid=853921).
#pragma warning(disable: 26432) // warning C26432: If you define or delete any default operation in the type '%s', define or delete them all (c.21: http://go.microsoft.com/fwlink/?linkid=853922).
#pragma warning(disable: 26434) // warning C26434: Function '%s' hides a non-virtual function '%s' (c.128: http://go.microsoft.com/fwlink/?linkid=853923).
#pragma warning(disable: 26436) // warning C26436: The type '%s' with a virtual function needs either public virtual or protected nonvirtual destructor (c.35: http://go.microsoft.com/fwlink/?linkid=853924).
#pragma warning(disable: 26437) // warning C26437: Do not slice (es.63: http://go.microsoft.com/fwlink/?linkid=853925).
#pragma warning(disable: 26439) // warning C26439: This kind of function may not throw. Declare it 'noexcept' (f.6: http://go.microsoft.com/fwlink/?linkid=853927).
#pragma warning(disable: 26440) // warning C26440: Function '%s' can be declared 'noexcept' (f.6: http://go.microsoft.com/fwlink/?linkid=853927).
#pragma warning(disable: 26460) // warning C26460: The reference argument '%s' for function '%s' can be marked as const (con.3: https://go.microsoft.com/fwlink/p/?LinkID=786684).
#pragma warning(disable: 26461) // warning C26461: The reference argument '%s' for function %s can be marked as const. (con.3: https://go.microsoft.com/fwlink/p/?LinkID=786684)
#pragma warning(disable: 26462) // warning C26462: The value pointed to by '%s' is assigned only once, mark it as a pointer to const (con.4: https://go.microsoft.com/fwlink/p/?LinkID=784969).
#pragma warning(disable: 26465) // warning C26465: Don't use const_cast to cast away const. const_cast is not required; constness or volatility is not being removed by this conversion (type.3: http://go.microsoft.com/fwlink/p/?LinkID=620419).
#pragma warning(disable: 26466) // warning C26466: Don't use static_cast downcasts. A cast from a polymorphic type should use dynamic_cast (type.2: http://go.microsoft.com/fwlink/p/?LinkID=620418).
#pragma warning(disable: 26471) // warning C26471: Don't use reinterpret_cast. A cast from void* can use static_cast. (type.1: http://go.microsoft.com/fwlink/p/?LinkID=620417).
#pragma warning(disable: 26472) // warning C26472: Don't use a static_cast for arithmetic conversions. Use brace initialization, gsl::narrow_cast or gsl::narow (type.1: http://go.microsoft.com/fwlink/p/?LinkID=620417).
#pragma warning(disable: 26473) // warning C26473: Don't cast between pointer types where the source type and the target type are the same (type.1: http://go.microsoft.com/fwlink/p/?LinkID=620417).
#pragma warning(disable: 26474) // warning C26474: Don't cast between pointer types when the conversion could be implicit (type.1: http://go.microsoft.com/fwlink/p/?LinkID=620417).
#pragma warning(disable: 26475) // warning C26475: Do not use function style C-casts (es.49: http://go.microsoft.com/fwlink/?linkid=853930).
#pragma warning(disable: 26481) // warning C26481: Don't use pointer arithmetic. Use span instead. (bounds.1: http://go.microsoft.com/fwlink/p/?LinkID=620413)
#pragma warning(disable: 26482) // warning C26482: Only index into arrays using constant expressions. (bounds.2: http://go.microsoft.com/fwlink/p/?LinkID=620414)
#pragma warning(disable: 26490) // warning C26490: Don't use reinterpret_cast. (type.1: http://go.microsoft.com/fwlink/p/?LinkID=620417)
#pragma warning(disable: 26491) // warning C26491: Don't use static_cast downcasts (type.2: http://go.microsoft.com/fwlink/p/?LinkID=620418).
#pragma warning(disable: 26492) // warning C26492: Don't use const_cast to cast away const (type.3: http://go.microsoft.com/fwlink/p/?LinkID=620419).
#pragma warning(disable: 26493) // warning C26493: Don't use C-style casts that would perform a static_cast downcast, const_cast, or reinterpret_cast. (type.4: http://go.microsoft.com/fwlink/p/?LinkID=620420)
#pragma warning(disable: 26494) // warning C26494: Variable '%s' is uninitialized. Always initialize an object. (type.5: http://go.microsoft.com/fwlink/p/?LinkID=620421)
#pragma warning(disable: 26495) // warning C26495: Variable '%s' is uninitialized. Always initialize a member variable. (type.6: http://go.microsoft.com/fwlink/p/?LinkID=620422)
#pragma warning(disable: 26496) // warning C26496: Variable '%s' is assigned only once, mark it as const. (con.4: https://go.microsoft.com/fwlink/p/?LinkID=784969)
#pragma warning(disable: 26497) // warning C26497: This function %s could be marked constexpr if compile-time evaluation is desired. (f.4: https://go.microsoft.com/fwlink/p/?LinkID=784970)

#pragma warning(pop)

#pragma pointers_to_members(full_generality, virtual_inheritance)
#pragma vtordisp(2)
