//=================================================================
// Copyright 2017 Advanced Micro Devices, Inc. All rights reserved.
//=================================================================

#ifndef kcOpenGLStatisticsParser_h__
#define kcOpenGLStatisticsParser_h__

// Local.
#include <RadeonGPUAnalyzerCLI/src/kcIStatisticsParser.h>

class kcOpenGLStatisticsParser :
    public IStatisticsParser
{
public:
    kcOpenGLStatisticsParser();
    virtual ~kcOpenGLStatisticsParser();

    virtual bool ParseStatistics(const gtString& scStatistics, beKA::AnalysisData& statisticsAsCsv) override;

};

#endif // kcOpenGLStatisticsParser_h__
