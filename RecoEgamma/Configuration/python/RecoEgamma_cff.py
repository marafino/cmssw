import FWCore.ParameterSet.Config as cms

from RecoEgamma.EgammaElectronProducers.electronSequence_cff import *
from RecoEgamma.EgammaPhotonProducers.photonSequence_cff import *
from RecoEgamma.EgammaPhotonProducers.conversionSequence_cff import *
from RecoEgamma.EgammaIsolationAlgos.egammaIsolationSequence_cff import *
from RecoEgamma.PhotonIdentification.photonId_cff import *
from RecoEgamma.ElectronIdentification.electronIdSequence_cff import *
from RecoEgamma.EgammaIsolationAlgos.gamIsolationSequence_cff import *
from RecoEgamma.EgammaIsolationAlgos.eleIsolationSequence_cff import *


egammareco = cms.Sequence(electronSequence*conversionSequence*photonSequence)
egammarecoFull = cms.Sequence(egammareco*egammaIsolationSequence*photonIDSequence*eIdSequence)
egammarecoFullSmall = cms.Sequence(egammareco*eleIsolationSequence*photonIDSequence*eIdSequence)

egammareco_woConvPhotons = cms.Sequence(electronSequence*photonSequence)
egammareco_withIsolation = cms.Sequence(egammareco*egammaIsolationSequence)
egammareco_withIsolation_woConvPhotons = cms.Sequence(egammareco_woConvPhotons*egammaIsolationSequence)
egammareco_withPhotonID = cms.Sequence(egammareco*photonIDSequence)
egammareco_withElectronID = cms.Sequence(egammareco*eIdSequence)
