@ FUN_0803aa4c  entry 0x0803aa4c  size 110
.thumb
.org 0x3aa4c
FUN_0803aa4c:
	push {lr}	@ 0003aa4c 00b5
.org 0x3aa4e
	mov ip, r0	@ 0003aa4e 8446
.org 0x3aa50
	mov r2, ip	@ 0003aa50 6246
.org 0x3aa52
	adds r2, #180	@ 0003aa52 b432
.org 0x3aa54
	mov r3, ip	@ 0003aa54 6346
.org 0x3aa56
	adds r3, #230	@ 0003aa56 e633
.org 0x3aa58
	ldrb r0, [r3, #0]	@ 0003aa58 1878
.org 0x3aa5a
	adds r1, r0, #0	@ 0003aa5a 011c
.org 0x3aa5c
	cmp r1, #255	@ 0003aa5c ff29
.org 0x3aa5e
	beq.n 0x3aab4	@ 0003aa5e 29d0
.org 0x3aa60
	cmp r1, #0	@ 0003aa60 0029
.org 0x3aa62
	beq.n 0x3aa6e	@ 0003aa62 04d0
.org 0x3aa64
	subs r0, #1	@ 0003aa64 0138
.org 0x3aa66
	strb r0, [r3, #0]	@ 0003aa66 1870
.org 0x3aa68
	lsls r0, r0, #24	@ 0003aa68 0006
.org 0x3aa6a
	cmp r0, #0	@ 0003aa6a 0028
.org 0x3aa6c
	bne.n 0x3aab4	@ 0003aa6c 22d1
.org 0x3aa6e
	mov r0, ip	@ 0003aa6e 6046
.org 0x3aa70
	adds r0, #248	@ 0003aa70 f830
.org 0x3aa72
	ldrb r1, [r0, #0]	@ 0003aa72 0178
.org 0x3aa74
	cmp r1, #2	@ 0003aa74 0229
.org 0x3aa76
	bne.n 0x3aa82	@ 0003aa76 04d1
.org 0x3aa78
	strb r1, [r0, #0]	@ 0003aa78 0170
.org 0x3aa7a
	ldrb r0, [r2, #12]	@ 0003aa7a 107b
.org 0x3aa7c
	cmp r0, #2	@ 0003aa7c 0228
.org 0x3aa7e
	bhi.n 0x3aa94	@ 0003aa7e 09d8
.org 0x3aa80
	b.n 0x3aa98	@ 0003aa80 0ae0
.org 0x3aa82
	mov r0, ip	@ 0003aa82 6046
.org 0x3aa84
	adds r0, #249	@ 0003aa84 f930
.org 0x3aa86
	ldrb r1, [r0, #0]	@ 0003aa86 0178
.org 0x3aa88
	cmp r1, #2	@ 0003aa88 0229
.org 0x3aa8a
	bne.n 0x3aaa0	@ 0003aa8a 09d1
.org 0x3aa8c
	strb r1, [r0, #0]	@ 0003aa8c 0170
.org 0x3aa8e
	ldrb r0, [r2, #12]	@ 0003aa8e 107b
.org 0x3aa90
	cmp r0, #2	@ 0003aa90 0228
.org 0x3aa92
	bls.n 0x3aa98	@ 0003aa92 01d9
.org 0x3aa94
	strb r1, [r2, #12]	@ 0003aa94 1173
.org 0x3aa96
	b.n 0x3aaa0	@ 0003aa96 03e0
.org 0x3aa98
	ldrb r0, [r2, #13]	@ 0003aa98 507b
.org 0x3aa9a
	cmp r0, #2	@ 0003aa9a 0228
.org 0x3aa9c
	bls.n 0x3aaa0	@ 0003aa9c 00d9
.org 0x3aa9e
	strb r1, [r2, #13]	@ 0003aa9e 5173
.org 0x3aaa0
	mov r3, ip	@ 0003aaa0 6346
.org 0x3aaa2
	adds r3, #180	@ 0003aaa2 b433
.org 0x3aaa4
	mov r1, ip	@ 0003aaa4 6146
.org 0x3aaa6
	adds r1, #250	@ 0003aaa6 fa31
.org 0x3aaa8
	movs r2, #0	@ 0003aaa8 0022
.org 0x3aaaa
	movs r0, #2	@ 0003aaaa 0220
.org 0x3aaac
	strb r0, [r1, #0]	@ 0003aaac 0870
.org 0x3aaae
	strb r2, [r3, #15]	@ 0003aaae da73
.org 0x3aab0
	movs r0, #1	@ 0003aab0 0120
.org 0x3aab2
	b.n 0x3aab6	@ 0003aab2 00e0
.org 0x3aab4
	movs r0, #0	@ 0003aab4 0020
.org 0x3aab6
	pop {r1}	@ 0003aab6 02bc
.org 0x3aab8
	bx r1	@ 0003aab8 0847
