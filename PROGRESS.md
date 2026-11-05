Phase 0, Lesson 1 (Linux file system) — DONE.
Can: navigate the single / tree, read ls -l (type, perms, owner, size, link target), know /dev files are driver doors (found /dev/net/tun).
Next: Phase 0, Lesson 2 — man pages.
Phase 0, Lesson 2 (man pages) — DONE.
Can: use man sections (1 cmds, 2 syscalls, 3 libc, 7 overviews), search with /; know read() returns bytes read (short reads happen), 0 = EOF/peer closed (FIN), -1 + errno = error.
Next: Phase 0, Lesson 3 — compiling with g++ and what each flag means.
Phase 0, Lesson 3 (g++ stages and flags) — DONE.
Can: explain preprocess/compile/assemble/link, "not declared" (stage 2) vs "undefined reference" (stage 4, linker/ld), -l and .so (like .dll); always use -Wall -Wextra; know signed/unsigned wraparound and to validate lengths BEFORE subtracting.
Next: Phase 0, Lesson 4 — what a build system is, Make vs CMake.
Phase 0, Lesson 4 (build systems, Make) — DONE.
Can: explain dependencies + timestamps, headers as ingredients, write a Makefile with app/.o rules (TAB!), know Make works backwards from the first rule (goal), predicted an incremental rebuild correctly.
Next: Phase 0, Lesson 5 — CMake and CMakeLists.txt.
Phase 0, Lesson 5 (CMake) — DONE.
Can: write CMakeLists.txt (project, C++17, add_executable, target_compile_options), out-of-source build with cmake -S . -B build, know CMake generates the Makefile, keep build/ and binaries out of git (.gitignore, git rm --cached).
Next: Phase 0, Lesson 6 — gdb basics.
Phase 0, Lesson 6 (gdb) — DONE. Phase 0 "done when" met (2-file CMake program stepped through in gdb).
Can: break/run/next/step/print/bt/continue, read the call stack (#0 = running, below = callers), check "where am I" before print, debug a broken build from evidence (-DCMAKE_BUILD_TYPE typo, CMakeCache.txt, `file`).
Next: Phase 0, Lesson 7 — AddressSanitizer.
Phase 0, Lesson 7 (AddressSanitizer) — DONE. PHASE 0 COMPLETE.
Can: enable ASan in CMake (compile + link options), read an ASan report (error type, READ/WRITE size, file:line, redzone map), know UB can silently "work"; always develop with -g + ASan + -Wall -Wextra.
Next: Phase 1, Lesson 1 — "everything is a file" and file descriptors.
Phase 1, Lesson 1 (everything is a file, fds) — DONE.
Can: explain an fd (int index into kernel's per-process table), 0/1/2 = stdin/stdout/stderr inherited from shell, see fds in /proc/$$/fd, trace syscalls with strace, know short writes happen like short reads.
Next: Phase 1, Lesson 2 — open/read/write/close and errno/perror.
Phase 1, Lesson 2 (open/read/write/close, errno/perror) — DONE.
Can: write mini-cat with raw syscalls (argc/argv, read loop until 0, write n bytes, close), check every -1 with perror, look up E-names in man ERRORS (ENOENT, EBADF, EMFILE), know fd = lowest free number, close what you open.
Next: Phase 1, Lesson 3 — blocking vs non-blocking.
Phase 1, Lesson 3 (blocking, poll) — DONE. PHASE 1 COMPLETE.
Can: explain blocking (process sleeps in kernel, STAT S / wait_woken), write a poll() loop with timeout, check revents with & not == (POLLIN|POLLHUP can arrive together), errors to fd 2, never perror unless the call returned -1; know poll([fds], N) watches many fds at once (plan: tun + stdin).
Next: Phase 2, Lesson 1 — layers and encapsulation.