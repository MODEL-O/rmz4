@ FUN_080739cc  entry 0x080739cc  size 142
.thumb
.org 0x739cc
FUN_080739cc:
	push {r4, r5, r6, r7, lr}	@ 000739cc f0b5
.org 0x739ce
	mov r7, r9	@ 000739ce 4f46
.org 0x739d0
	mov r6, r8	@ 000739d0 4646
.org 0x739d2
	push {r6, r7}	@ 000739d2 c0b4
.org 0x739d4
	sub sp, #24	@ 000739d4 86b0
.org 0x739d6
	mov r8, r0	@ 000739d6 8046
.org 0x739d8
	movs r0, #224	@ 000739d8 e020
.org 0x739da
	lsls r0, r0, #4	@ 000739da 0001
.org 0x739dc
	mov r9, r0	@ 000739dc 8146
.org 0x739de
	mov r1, r8	@ 000739de 4146
.org 0x739e0
	ldr r0, [r1, #84]	@ 000739e0 486d
.org 0x739e2
	str r0, [sp, #0]	@ 000739e2 0090
.org 0x739e4
	ldr r1, [r1, #88]	@ 000739e4 896d
.org 0x739e6
	ldr r2, [pc, #116]	@ 000739e6 1d4a
.org 0x739e8
	adds r2, r1, r2	@ 000739e8 8a18
.org 0x739ea
	str r2, [sp, #4]	@ 000739ea 0192
.org 0x739ec
	adds r2, r0, #0	@ 000739ec 021c
.org 0x739ee
	subs r2, r0, r2	@ 000739ee 821a
.org 0x739f0
	str r2, [sp, #8]	@ 000739f0 0292
.org 0x739f2
	ldr r2, [sp, #4]	@ 000739f2 019a
.org 0x739f4
	subs r2, r1, r2	@ 000739f4 8a1a
.org 0x739f6
	str r2, [sp, #12]	@ 000739f6 0392
.org 0x739f8
	adds r4, r0, #0	@ 000739f8 041c
.org 0x739fa
	movs r5, #128	@ 000739fa 8025
.org 0x739fc
	lsls r5, r5, #24	@ 000739fc 2d06
.org 0x739fe
	ldr r0, [pc, #96]	@ 000739fe 1848
.org 0x73a00
	adds r7, r1, r0	@ 00073a00 0f18
.org 0x73a02
	adds r1, r4, #0	@ 00073a02 211c
.org 0x73a04
	ldr r0, [pc, #92]	@ 00073a04 1748
.org 0x73a06
	adds r2, r1, r0	@ 00073a06 0a18
.org 0x73a08
	movs r3, #1	@ 00073a08 0123
.org 0x73a0a
	adds r0, r2, #0	@ 00073a0a 101c
.org 0x73a0c
	adds r1, r7, #0	@ 00073a0c 391c
.org 0x73a0e
	str r2, [sp, #16]	@ 00073a0e 0492
.org 0x73a10
	str r3, [sp, #20]	@ 00073a10 0593
.org 0x73a12
	bl 0x8748	@ 00073a12 94f799fe
.org 0x73a16
	add r0, r9	@ 00073a16 4844
.org 0x73a18
	ldr r2, [sp, #16]	@ 00073a18 049a
.org 0x73a1a
	ldr r3, [sp, #20]	@ 00073a1a 059b
.org 0x73a1c
	cmp r0, r5	@ 00073a1c a842
.org 0x73a1e
	ble.n 0x73a22	@ 00073a1e 00dd
.org 0x73a20
	adds r5, r0, #0	@ 00073a20 051c
.org 0x73a22
	movs r1, #128	@ 00073a22 8021
.org 0x73a24
	lsls r1, r1, #5	@ 00073a24 4901
.org 0x73a26
	adds r2, r2, r1	@ 00073a26 5218
.org 0x73a28
	subs r3, #1	@ 00073a28 013b
.org 0x73a2a
	cmp r3, #0	@ 00073a2a 002b
.org 0x73a2c
	bge.n 0x73a0a	@ 00073a2c edda
.org 0x73a2e
	ldr r2, [sp, #0]	@ 00073a2e 009a
.org 0x73a30
	movs r1, #160	@ 00073a30 a021
.org 0x73a32
	lsls r1, r1, #4	@ 00073a32 0901
.org 0x73a34
	adds r0, r2, r1	@ 00073a34 5018
.org 0x73a36
	adds r1, r7, #0	@ 00073a36 391c
.org 0x73a38
	bl 0x8748	@ 00073a38 94f786fe
.org 0x73a3c
	add r0, r9	@ 00073a3c 4844
.org 0x73a3e
	cmp r0, r5	@ 00073a3e a842
.org 0x73a40
	ble.n 0x73a44	@ 00073a40 00dd
.org 0x73a42
	adds r5, r0, #0	@ 00073a42 051c
.org 0x73a44
	ldr r2, [sp, #12]	@ 00073a44 039a
.org 0x73a46
	adds r0, r5, r2	@ 00073a46 a818
.org 0x73a48
	mov r1, r8	@ 00073a48 4146
.org 0x73a4a
	str r0, [r1, #88]	@ 00073a4a 8865
.org 0x73a4c
	add sp, #24	@ 00073a4c 06b0
.org 0x73a4e
	pop {r3, r4}	@ 00073a4e 18bc
.org 0x73a50
	mov r8, r3	@ 00073a50 9846
.org 0x73a52
	mov r9, r4	@ 00073a52 a146
.org 0x73a54
	pop {r4, r5, r6, r7}	@ 00073a54 f0bc
.org 0x73a56
	pop {r0}	@ 00073a56 01bc
.org 0x73a58
	bx r0	@ 00073a58 0047
