/**
 *  @file   PandoraPFANew/include/Pandora/PandoraSettings.h
 * 
 *  @brief  Header file for the pandora settings class.
 * 
 *  $Log: $
 */
#ifndef PANDORA_SETTINGS_H
#define PANDORA_SETTINGS_H 1

#include "StatusCodes.h"

class TiXmlHandle;

//------------------------------------------------------------------------------------------------------------------------------------------

namespace pandora
{

/**
 *  @brief  PandoraSettings class
 */
class PandoraSettings
{
public:
    /**
     *  @brief  Get the pandora settings singleton
     */
    static PandoraSettings *GetInstance();

    /**
     *  @brief  Whether monitoring is enabled
     * 
     *  @return boolean
     */
    bool IsMonitoringEnabled() const;

    /**
     *  @brief  Get the hadronic energy resolution as a fraction, X, such that sigmaE = ( X * E / sqrt(E) )
     * 
     *  @return The hadronic energy resolution
     */
    float GetHadronicEnergyResolution() const;

    /**
     *  @brief  Get the radius used to select the pfo target from a mc particle decay chain, units mm
     * 
     *  @return The pfo selection radius
     */
    float GetMCPfoSelectionRadius() const;

    /**
     *  @brief  Get the maximum separation for associations between hits to be considered, units mm
     * 
     *  @return The maximum separation
     */
    float GetCaloHitMaxSeparation() const;

    /**
     *  @brief  Get the density weighting power
     * 
     *  @return The density weighting power
     */
    unsigned int GetDensityWeightPower() const;

    /**
     *  @brief  Get the number of adjacent layers to use in density weight calculation
     * 
     *  @return The number of layers
     */
    unsigned int GetDensityWeightNLayers() const;

    /**
     *  @brief  Whether to use the simple (density weight cut) isolation scheme
     * 
     *  @return boolean
     */
    bool ShouldUseSimpleIsolationScheme() const;

    /**
     *  @brief  Get the ecal isolation density weight cut
     * 
     *  @return The ecal isolation density weight cut
     */
    float GetIsolationDensityWeightCutECal() const;

    /**
     *  @brief  Get the hcal isolation density weight cut
     * 
     *  @return The hcal isolation density weight cut
     */
    float GetIsolationDensityWeightCutHCal() const;

    /**
     *  @brief  Get the number of adjacent layers to use in isolation calculation
     * 
     *  @return The number of adjacent layers to use in isolation calculation
     */
    unsigned int GetIsolationNLayers() const;

    /**
     *  @brief  Get the ecal isolation cut distance, units mm
     * 
     *  @return The ecal isolation cut distance, units mm
     */
    float GetIsolationCutDistanceECal() const;

    /**
     *  @brief  Get the hcal isolation cut distance, units mm
     * 
     *  @return The hcal isolation cut distance, units mm
     */
    float GetIsolationCutDistanceHCal() const;

    /**
     *  @brief  Get the maximum number of "nearby" hits for a hit to be considered isolated
     * 
     *  @return The maximum number of "nearby" hits
     */
    unsigned int GetIsolationMaxNearbyHits() const;

    /**
     *  @brief  Get the mip equivalent energy cut for a hit to be flagged as a possible mip
     * 
     *  @return The mip equivalent energy cut
     */
    float GetMipLikeMipCut() const;

    /**
     *  @brief  Get the separation (in calorimeter cells) for hits to be declared "nearby"
     * 
     *  @return The number of calorimeter cells
     */
    unsigned int GetMipNCellsForNearbyHit() const;

    /**
     *  @brief  Get the maximum number of "nearby" hits for a hit to be flagged as a possible mip
     * 
     *  @return The maximum number of "nearby" hits
     */
    unsigned int GetMipMaxNearbyHits() const;

    /**
     *  @brief  Get the bin width used to construct shower profiles, units radiation lengths
     * 
     *  @return The bin width used to construct shower profiles
     */
    float GetShowerProfileBinWidth() const;

    /**
     *  @brief  Get the number of bins used to construct shower profiles
     * 
     *  @return The number of bins used to construct shower profiles
     */
    unsigned int GetShowerProfileNBins() const;

    /**
     *  @brief  Get the min angular correction used to adjust radiation length measures
     * 
     *  @return The min angular correction used to adjust radiation length measures
     */
    float GetShowerProfileMinCosAngle() const;

    /**
     *  @brief  Get critical energy, used to calculate argument for gamma function:
     *          a = (parameter0 + parameter1 * std::log(clusterEnergy / criticalEnergy)
     * 
     *  @return The critical energy
     */
    float GetShowerProfileCriticalEnergy() const;

    /**
     *  @brief  Get parameter0, used to calculate argument for gamma function:
     *          a = (parameter0 + parameter1 * std::log(clusterEnergy / criticalEnergy)
     * 
     *  @return The parameter0
     */
    float GetShowerProfileParameter0() const;

    /**
     *  @brief  Get parameter1, used to calculate argument for gamma function:
     *          a = (parameter0 + parameter1 * std::log(clusterEnergy / criticalEnergy)
     * 
     *  @return The parameter1
     */
    float GetShowerProfileParameter1() const;

    /**
     *  @brief  Get the max difference between current and best shower profile comparisons
     * 
     *  @return The max difference between current and best shower profile comparisons
     */
    float GetShowerProfileMaxDifference() const;

    /**
     *  @brief  Get the cosine half angle for first cone comparison in cluster contact object
     * 
     *  @return The cosine half angle
     */
    float GetContactConeCosineHalfAngle1() const;

    /**
     *  @brief  Get the cosine half angle for second cone comparison in cluster contact object
     * 
     *  @return The cosine half angle
     */
    float GetContactConeCosineHalfAngle2() const;

    /**
     *  @brief  Get the cosine half angle for third cone comparison in cluster contact object
     * 
     *  @return The cosine half angle
     */
    float GetContactConeCosineHalfAngle3() const;

    /**
     *  @brief  Get the first distance used to identify close hits in cluster contact object
     * 
     *  @return The close hit distance
     */
    float GetContactCloseHitDistance1() const;

    /**
     *  @brief  Get the second distance used to identify close hits in cluster contact object
     * 
     *  @return The close hit distance
     */
    float GetContactCloseHitDistance2() const;

    /**
     *  @brief  Get the number of calorimeter cell-widths used to identify cluster contact layers
     * 
     *  @return The number of calorimeter cell-widths
     */
    float GetContactDistanceThreshold() const;

    /**
     *  @brief  Get the mip fraction cut used in cluster contact helix comparison
     * 
     *  @return The mip fraction cut
     */
    float GetContactHelixComparisonMipFractionCut() const;

    /**
     *  @brief  Get the start layer offset used in cluster contact helix comparison
     * 
     *  @return The start layer offset
     */
    unsigned int GetContactHelixComparisonStartOffset() const;

    /**
     *  @brief  Get the start layer offset used for mip-like clusters in cluster contact helix comparison
     * 
     *  @return The start layer offset for mip-like clusters
     */
    unsigned int GetContactHelixComparisonStartOffsetMip() const;

    /**
     *  @brief  Get the max number of layers used in helix comparison for non mip-like clusters
     * 
     *  @return The number of comparison layers used for non mip-like clusters
     */
    unsigned int GetContactNHelixComparisonLayers() const;

    /**
     *  @brief  Get the max number of layers crossed by helix between track projection and cluster
     * 
     *  @return The max number of layers crossed by helix
     */
    unsigned int GetContactMaxLayersCrossedByHelix() const;

    /**
     *  @brief  Get the max z separation between track projection and cluster
     * 
     *  @return The max z separation
     */
    float GetContactMaxTrackClusterDeltaZ() const;

private:
    /**
     *  @brief  Constructor
     */
    PandoraSettings();

    /**
     *  @brief  Destructor
     */
    ~PandoraSettings();

    /**
     *  @brief  Initialize pandora settings
     * 
     *  @param  pXmlHandle address of the relevant xml handle
     */
    StatusCode Initialize(const TiXmlHandle *const pXmlHandle);

    bool                    m_isInitialized;                    ///< Whether the pandora settings have been initialized

    float                   m_mcPfoSelectionRadius;             ///< Radius used to select the pfo target from a mc decay chain, units mm

    static bool             m_instanceFlag;                     ///< The geometry helper instance flag
    static PandoraSettings *m_pPandoraSettings;                 ///< The geometry helper instance

    bool                    m_isMonitoringEnabled;              ///< Whether monitoring is enabled

    float                   m_hadronicEnergyResolution;         ///< Hadronic energy resolution, X, such that sigmaE = ( X * E / sqrt(E) )

    float                   m_caloHitMaxSeparation;             ///< Max separation for associations between hits to be considered, units mm

    unsigned int            m_densityWeightPower;               ///< The density weighting power
    unsigned int            m_densityWeightNLayers;             ///< Number of adjacent layers to use in density weight calculation

    bool                    m_shouldUseSimpleIsolationScheme;   ///< Whether to use the simple (density weight cut) isolation scheme
    float                   m_isolationDensityWeightCutECal;    ///< ECal isolation density weight cut
    float                   m_isolationDensityWeightCutHCal;    ///< HCal isolation density weight cut

    unsigned int            m_isolationNLayers;                 ///< Number of adjacent layers to use in isolation calculation
    float                   m_isolationCutDistanceECal;         ///< ECal isolation cut distance, units mm
    float                   m_isolationCutDistanceHCal;         ///< HCal isolation cut distance, units mm
    unsigned int            m_isolationMaxNearbyHits;           ///< Max number of "nearby" hits for a hit to be considered isolated

    float                   m_mipLikeMipCut;                    ///< Mip equivalent energy cut for a hit to be flagged as a possible mip
    unsigned int            m_mipNCellsForNearbyHit;            ///< Separation (in calorimeter cells) for hits to be declared "nearby"
    unsigned int            m_mipMaxNearbyHits;                 ///< Max number of "nearby" hits for a hit to be flagged as a possible mip

    float                   m_showerProfileBinWidth;            ///< Bin width used to construct shower profiles, units radiation lengths
    unsigned int            m_showerProfileNBins;               ///< Number of bins used to construct shower profiles
    float                   m_showerProfileMinCosAngle;         ///< Min angular correction used to adjust radiation length measures

    float                   m_showerProfileCriticalEnergy;      ///< Critical energy, used to calculate argument for gamma function
    float                   m_showerProfileParameter0;          ///< Parameter0, used to calculate argument for gamma function
    float                   m_showerProfileParameter1;          ///< Parameter1, used to calculate argument for gamma function

    float                   m_showerProfileMaxDifference;       ///< Max difference between current and best shower profile comparisons

    float                   m_contactConeCosineHalfAngle1;      ///< Cosine half angle for first cone comparison in cluster contact object
    float                   m_contactConeCosineHalfAngle2;      ///< Cosine half angle for second cone comparison in cluster contact object
    float                   m_contactConeCosineHalfAngle3;      ///< Cosine half angle for third cone comparison in cluster contact object
    float                   m_contactCloseHitDistance1;         ///< First distance used to identify close hits in cluster contact object
    float                   m_contactCloseHitDistance2;         ///< Second distance used to identify close hits in cluster contact object

    float                   m_contactDistanceThreshold;         ///< Number of calorimeter cell-widths used to identify cluster contact layers

    float                   m_contactHelixComparisonMipFractionCut; ///< Mip fraction cut used in cluster contact helix comparison
    unsigned int            m_contactHelixComparisonStartOffset;    ///< Start layer offset used in cluster contact helix comparison
    unsigned int            m_contactHelixComparisonStartOffsetMip; ///< Start layer offset used for mip-like clusters in helix comparison
    unsigned int            m_contactNHelixComparisonLayers;        ///< Max number of layers used in helix comparison for non mip-like clusters

    unsigned int            m_contactMaxLayersCrossedByHelix;   ///< Max no. of layers crossed by helix between track projection and cluster
    float                   m_contactMaxTrackClusterDeltaZ;     ///< Max z separation between track projection and cluster

    friend class Pandora;
};

//------------------------------------------------------------------------------------------------------------------------------------------

inline bool PandoraSettings::IsMonitoringEnabled() const
{
    return m_isMonitoringEnabled;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetHadronicEnergyResolution() const
{
    return m_hadronicEnergyResolution;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetMCPfoSelectionRadius() const
{
    return m_mcPfoSelectionRadius;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetCaloHitMaxSeparation() const
{
    return m_caloHitMaxSeparation;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline unsigned int PandoraSettings::GetDensityWeightPower() const
{
    return m_densityWeightPower;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline unsigned int PandoraSettings::GetDensityWeightNLayers() const
{
    return m_densityWeightNLayers;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline bool PandoraSettings::ShouldUseSimpleIsolationScheme() const
{
    return m_shouldUseSimpleIsolationScheme;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetIsolationDensityWeightCutECal() const
{
    return m_isolationDensityWeightCutECal;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetIsolationDensityWeightCutHCal() const
{
    return m_isolationDensityWeightCutHCal;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline unsigned int PandoraSettings::GetIsolationNLayers() const
{
    return m_isolationNLayers;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetIsolationCutDistanceECal() const
{
    return m_isolationCutDistanceECal;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetIsolationCutDistanceHCal() const
{
    return m_isolationCutDistanceHCal;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline unsigned int PandoraSettings::GetIsolationMaxNearbyHits() const
{
    return m_isolationMaxNearbyHits;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetMipLikeMipCut() const
{
    return m_mipLikeMipCut;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline unsigned int PandoraSettings::GetMipNCellsForNearbyHit() const
{
    return m_mipNCellsForNearbyHit;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline unsigned int PandoraSettings::GetMipMaxNearbyHits() const
{
    return m_mipMaxNearbyHits;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetShowerProfileBinWidth() const
{
    return m_showerProfileBinWidth;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline unsigned int PandoraSettings::GetShowerProfileNBins() const
{
    return m_showerProfileNBins;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetShowerProfileMinCosAngle() const
{
    return m_showerProfileMinCosAngle;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetShowerProfileCriticalEnergy() const
{
    return m_showerProfileCriticalEnergy;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetShowerProfileParameter0() const
{
    return m_showerProfileParameter0;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetShowerProfileParameter1() const
{
    return m_showerProfileParameter1;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetShowerProfileMaxDifference() const
{
    return m_showerProfileMaxDifference;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetContactConeCosineHalfAngle1() const
{
    return m_contactConeCosineHalfAngle1;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetContactConeCosineHalfAngle2() const
{
    return m_contactConeCosineHalfAngle2;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetContactConeCosineHalfAngle3() const
{
    return m_contactConeCosineHalfAngle3;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetContactCloseHitDistance1() const
{
    return m_contactCloseHitDistance1;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetContactCloseHitDistance2() const
{
    return m_contactCloseHitDistance2;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetContactDistanceThreshold() const
{
    return m_contactDistanceThreshold;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetContactHelixComparisonMipFractionCut() const
{
    return m_contactHelixComparisonMipFractionCut;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline unsigned int PandoraSettings::GetContactHelixComparisonStartOffset() const
{
    return m_contactHelixComparisonStartOffset;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline unsigned int PandoraSettings::GetContactHelixComparisonStartOffsetMip() const
{
    return m_contactHelixComparisonStartOffsetMip;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline unsigned int PandoraSettings::GetContactNHelixComparisonLayers() const
{
    return m_contactNHelixComparisonLayers;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline unsigned int PandoraSettings::GetContactMaxLayersCrossedByHelix() const
{
    return m_contactMaxLayersCrossedByHelix;
}

//------------------------------------------------------------------------------------------------------------------------------------------

inline float PandoraSettings::GetContactMaxTrackClusterDeltaZ() const
{
    return m_contactMaxTrackClusterDeltaZ;
}

} // namespace pandora

#endif // #ifndef PANDORA_SETTINGS_H
