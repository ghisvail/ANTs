
#ifndef COMPOSITETRANSFORMUTIL_H
#define COMPOSITETRANSFORMUTIL_H

namespace ants
{
extern int
CompositeTransformUtil(std::vector<std::string>, // equivalent to argv of command line parameters to main()
                       std::ostream * out_stream // [optional] output stream to write
);
} // namespace ants

#endif // COMPOSITETRANSFORMUTIL_H
