#ifndef CosmicSeedGenerator_h
#define CosmicSeedGenerator_h

//
// Package:         RecoTracker/GlobalPixelSeedGenerator
// Class:           GlobalPixelSeedGenerator
// 
// Description:     Calls RoadSeachSeedFinderAlgorithm
//                  to find TrackingSeeds.


#include "FWCore/Framework/interface/EDProducer.h"
#include "FWCore/Framework/interface/Event.h"
#include "DataFormats/Common/interface/Handle.h"
#include "FWCore/Framework/interface/EventSetup.h"

#include "DataFormats/Common/interface/EDProduct.h"

#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "RecoTracker/TkSeedGenerator/interface/SeedGeneratorForCosmics.h"


class CosmicSeedGenerator : public edm::EDProducer
{
 public:

  explicit CosmicSeedGenerator(const edm::ParameterSet& conf);

  virtual ~CosmicSeedGenerator();

  virtual void produce(edm::Event& e, const edm::EventSetup& c);

 private:
  edm::ParameterSet conf_;
  SeedGeneratorForCosmics  cosmic_seed;


};

#endif
