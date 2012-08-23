/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 */

#include "mpidi_ch3_impl.h"
#include "mpidrma.h"

/* FUNCNAME macros are included for the MPIDI_FUNC_NOTIMPL macro to keep the
 * state checker from emitting warnings */
#undef FUNCNAME
#define FUNCNAME MPIDI_FUNC_NOTIMPL
#define MPIDI_FUNC_NOTIMPL(state_name)                          \
    int mpi_errno = MPI_SUCCESS;                                \
                                                                \
    MPIDI_STATE_DECL(MPID_STATE_MPIDI_##state_name);            \
    MPIDI_RMA_FUNC_ENTER(MPID_STATE_MPIDI_##state_name);        \
                                                                \
    MPIU_ERR_SETANDJUMP(mpi_errno, MPI_ERR_OTHER, "**notimpl"); \
                                                                \
 fn_exit:                                                       \
    MPIDI_RMA_FUNC_EXIT(MPID_STATE_MPIDI_##state_name);         \
    return mpi_errno;                                           \
    /* --BEGIN ERROR HANDLING-- */                              \
 fn_fail:                                                       \
    goto fn_exit;                                               \
    /* --END ERROR HANDLING-- */


#undef FUNCNAME
#define FUNCNAME MPIDI_Fetch_and_op
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPIDI_Fetch_and_op(const void *origin_addr, void *result_addr,
                       MPI_Datatype datatype, int target_rank, MPI_Aint target_disp,
                       MPI_Op op, MPID_Win *win)
{
    MPIDI_FUNC_NOTIMPL(FETCH_AND_OP)
}


#undef FUNCNAME
#define FUNCNAME MPIDI_Compare_and_swap
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPIDI_Compare_and_swap(const void *origin_addr, const void *compare_addr,
                          void *result_addr, MPI_Datatype datatype, int target_rank,
                          MPI_Aint target_disp, MPID_Win *win)
{
    MPIDI_FUNC_NOTIMPL(COMPARE_AND_SWAP)
}


#undef FUNCNAME
#define FUNCNAME MPIDI_Rput
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPIDI_Rput(const void *origin_addr, int origin_count,
               MPI_Datatype origin_datatype, int target_rank, MPI_Aint target_disp,
               int target_count, MPI_Datatype target_datatype, MPID_Win *win,
               MPID_Request **request)
{
    MPIDI_FUNC_NOTIMPL(RPUT)
}


#undef FUNCNAME
#define FUNCNAME MPIDI_Rget
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPIDI_Rget(void *origin_addr, int origin_count,
               MPI_Datatype origin_datatype, int target_rank, MPI_Aint target_disp,
               int target_count, MPI_Datatype target_datatype, MPID_Win *win,
               MPID_Request **request)
{
    MPIDI_FUNC_NOTIMPL(RGET)
}


#undef FUNCNAME
#define FUNCNAME MPIDI_Raccumulate
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPIDI_Raccumulate(const void *origin_addr, int origin_count,
                      MPI_Datatype origin_datatype, int target_rank, MPI_Aint target_disp,
                      int target_count, MPI_Datatype target_datatype, MPI_Op op, MPID_Win *win,
                      MPID_Request **request)
{
    MPIDI_FUNC_NOTIMPL(RACCUMULATE)
}


#undef FUNCNAME
#define FUNCNAME MPIDI_Rget_accumulate
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPIDI_Rget_accumulate(const void *origin_addr, int origin_count,
                          MPI_Datatype origin_datatype, void *result_addr, int result_count,
                          MPI_Datatype result_datatype, int target_rank, MPI_Aint target_disp,
                          int target_count, MPI_Datatype target_datatype, MPI_Op op, MPID_Win *win,
                          MPID_Request **request)
{
    MPIDI_FUNC_NOTIMPL(RGET_ACCUMULATE)
}


#undef FUNCNAME
#define FUNCNAME MPIDI_Win_flush
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPIDI_Win_flush(int rank, MPID_Win *win)
{
    MPIDI_FUNC_NOTIMPL(WIN_FLUSH)
}


#undef FUNCNAME
#define FUNCNAME MPIDI_Win_flush_all
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPIDI_Win_flush_all(MPID_Win *win)
{
    MPIDI_FUNC_NOTIMPL(WIN_FLUSH_ALL)
}


#undef FUNCNAME
#define FUNCNAME MPIDI_Win_flush_local
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPIDI_Win_flush_local(int rank, MPID_Win *win)
{
    MPIDI_FUNC_NOTIMPL(WIN_FLUSH_LOCAL)
}


#undef FUNCNAME
#define FUNCNAME MPIDI_Win_flush_local_all
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPIDI_Win_flush_local_all(MPID_Win *win)
{
    MPIDI_FUNC_NOTIMPL(WIN_FLUSH_LOCAL_ALL)
}


#undef FUNCNAME
#define FUNCNAME MPIDI_Win_shared_query
#undef FCNAME
#define FCNAME MPIDI_QUOTE(FUNCNAME)
int MPIDI_Win_shared_query(MPID_Win *win_ptr, int target_rank, MPI_Aint *size, int *disp_unit, void *baseptr)
{
    MPIDI_FUNC_NOTIMPL(WIN_FLUSH_LOCAL_ALL)
}
