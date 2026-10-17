@ FUN_080a2380  entry 0x080a2380  size 52
.thumb
.org 0xa2380
FUN_080a2380:
	push {lr}	@ 000a2380 00b5
.org 0xa2382
	ldr r1, [r0, #20]	@ 000a2382 4169
.org 0xa2384
	movs r0, #1	@ 000a2384 0120
.org 0xa2386
	ands r0, r1	@ 000a2386 0840
.org 0xa2388
	cmp r0, #0	@ 000a2388 0028
.org 0xa238a
	beq.n 0xa23b0	@ 000a238a 11d0
.org 0xa238c
	movs r0, #128	@ 000a238c 8020
.org 0xa238e
	lsls r0, r0, #2	@ 000a238e 8000
.org 0xa2390
	ands r0, r1	@ 000a2390 0840
.org 0xa2392
	cmp r0, #0	@ 000a2392 0028
.org 0xa2394
	beq.n 0xa23b0	@ 000a2394 0cd0
.org 0xa2396
	movs r0, #128	@ 000a2396 8020
.org 0xa2398
	lsls r0, r0, #10	@ 000a2398 8002
.org 0xa239a
	ands r1, r0	@ 000a239a 0140
.org 0xa239c
	cmp r1, #0	@ 000a239c 0029
.org 0xa239e
	beq.n 0xa23b0	@ 000a239e 07d0
.org 0xa23a0
	ldr r0, [pc, #16]	@ 000a23a0 0448
.org 0xa23a2
	ldr r0, [r0, #0]	@ 000a23a2 0068
.org 0xa23a4
	cmp r0, #0	@ 000a23a4 0028
.org 0xa23a6
	beq.n 0xa23b0	@ 000a23a6 03d0
.org 0xa23a8
	movs r1, #5	@ 000a23a8 0521
.org 0xa23aa
	movs r2, #0	@ 000a23aa 0022
.org 0xa23ac
	bl 0x3a578	@ 000a23ac 98f7e4f8
.org 0xa23b0
	pop {r0}	@ 000a23b0 01bc
.org 0xa23b2
	bx r0	@ 000a23b2 0047
