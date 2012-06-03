////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

using System.Runtime.InteropServices;

namespace System.Runtime.CompilerServices
{
    [Serializable, AttributeUsage(AttributeTargets.Field | AttributeTargets.Parameter, Inherited=false)]
    public sealed class IDispatchConstantAttribute : CustomConstantAttribute
    {
        public IDispatchConstantAttribute()
        {
        }

        public override Object Value
        {
            get
            {
                return new DispatchWrapper(null);
            }
        }

    }
}


