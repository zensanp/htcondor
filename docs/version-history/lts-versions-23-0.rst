Version 23.0 LTS Releases
=========================

These are Long Term Support (LTS) versions of HTCondor. As usual, only bug fixes
(and potentially, ports to new platforms) will be provided in future
23.0.y versions. New features will be added in the 23.x.y feature versions.

The details of each version are described below.

.. _lts-version-history-2300:

Version 23.0.0
--------------

Release Notes:

.. HTCondor version 23.0.0 released on Month Date, 2023.

- HTCondor version 23.0.0 not yet released.

New Features:

- The ``TargetType`` attribute is no longer a required attribute in most Classads.  It is still used for
  queries to the *condor_collector* and it remains in the Job ClassAd and the Machine ClassAd because
  of older versions of HTCondor.require it to be present.
  jira:`1997`

Bugs Fixed:

- Fixed a bug where the *blahpd* would incorrectly believe that an LSF
  batch scheduler was not working.
  :jira:`2003`

