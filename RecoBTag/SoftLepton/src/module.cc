#include "FWCore/Framework/interface/ModuleFactory.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include "RecoBTag/SoftLepton/interface/SoftLepton.h"
#include "RecoBTag/SoftLepton/interface/SoftElectronProducer.h"

#include "RecoBTau/JetTagComputer/interface/JetTagComputerESProducer.h"
#include "RecoBTag/SoftLepton/interface/ElectronTagger.h"
#include "RecoBTag/SoftLepton/interface/MuonTagger.h"
#include "RecoBTag/SoftLepton/interface/MuonTaggerNoIP.h"
#include "RecoBTag/SoftLepton/interface/LeptonTaggerDistance.h"
#include "RecoBTag/SoftLepton/interface/LeptonTaggerByPt.h"

DEFINE_FWK_MODULE(SoftLepton);
DEFINE_FWK_MODULE(SoftElectronProducer);

typedef JetTagComputerESProducer<ElectronTagger>        ElectronTaggerESProducer;
DEFINE_FWK_EVENTSETUP_MODULE(ElectronTaggerESProducer);

typedef JetTagComputerESProducer<MuonTagger>            MuonTaggerESProducer;
DEFINE_FWK_EVENTSETUP_MODULE(MuonTaggerESProducer);

typedef JetTagComputerESProducer<MuonTaggerNoIP>        MuonTaggerNoIPESProducer;
DEFINE_FWK_EVENTSETUP_MODULE(MuonTaggerNoIPESProducer);

typedef JetTagComputerESProducer<LeptonTaggerDistance>  LeptonTaggerDistanceESProducer;
DEFINE_FWK_EVENTSETUP_MODULE(LeptonTaggerDistanceESProducer);

typedef JetTagComputerESProducer<LeptonTaggerByPt>      LeptonTaggerByPtESProducer;
DEFINE_FWK_EVENTSETUP_MODULE(LeptonTaggerByPtESProducer);
