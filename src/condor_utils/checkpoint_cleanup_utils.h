#ifndef   CHECKPOINT_CLEANUP_UTILS_H
#define   CHECKPOINT_CLEANUP_UTILS_H

bool spawnCheckpointCleanupProcess(
    // Input parameters.
    int cluster, int proc, ClassAd * jobAd, int cleanup_reaper_id,
    // Output parameters.
    int & spawned_id, std::string & error
);

#endif /* CHECKPOINT_CLEANUP_UTILS_H */
