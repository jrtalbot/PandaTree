#include "../interface/ArrayBase.h"

void
panda::ArrayBase::init()
{
  for (unsigned iP(0); iP != getData().nmax(); ++iP)
    elemAt(iP).init();
}

/*private*/
void
panda::ArrayBase::doSetStatus_(TTree& _tree, Bool_t _status, utils::BranchList const& _branches)
{
  getData().setStatus(_tree, name_, _status, _branches);
}

/*private*/
void
panda::ArrayBase::doSetAddress_(TTree& _tree, utils::BranchList const& _branches, Bool_t _setStatus)
{
  getData().setAddress(_tree, name_, _branches, _setStatus);
}

/*private*/
void
panda::ArrayBase::doBook_(TTree& _tree, utils::BranchList const& _branches)
{
  getData().book(_tree, name_, _branches, false);
}

/*private*/
void
panda::ArrayBase::doResetAddress_(TTree& _tree)
{
  getData().resetAddress(_tree, name_);
}