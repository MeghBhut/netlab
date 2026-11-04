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