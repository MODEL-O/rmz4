@ FUN_080503cc  entry 0x080503cc  size 56
.thumb
.org 0x503cc
FUN_080503cc:
	push {r4, r5, r6, lr}	@ 000503cc 70b5
.org 0x503ce
	mov r6, r8	@ 000503ce 4646
.org 0x503d0
	push {r6}	@ 000503d0 40b4
.org 0x503d2
	adds r5, r0, #0	@ 000503d2 051c
.org 0x503d4
	ldrb r3, [r5, #10]	@ 000503d4 ab7a
.org 0x503d6
	movs r0, #4	@ 000503d6 0420
.org 0x503d8
	movs r4, #0	@ 000503d8 0024
.org 0x503da
	mov r8, r4	@ 000503da a046
.org 0x503dc
	orrs r0, r3	@ 000503dc 1843
.org 0x503de
	strb r0, [r5, #10]	@ 000503de a872
.org 0x503e0
	adds r4, r5, #0	@ 000503e0 2c1c
.org 0x503e2
	adds r4, #116	@ 000503e2 7434
.org 0x503e4
	adds r6, r5, #0	@ 000503e4 2e1c
.org 0x503e6
	adds r6, #84	@ 000503e6 5436
.org 0x503e8
	lsls r3, r2, #16	@ 000503e8 1304
.org 0x503ea
	asrs r3, r3, #16	@ 000503ea 1b14
.org 0x503ec
	adds r0, r4, #0	@ 000503ec 201c
.org 0x503ee
	adds r2, r6, #0	@ 000503ee 321c
.org 0x503f0
	bl 0x5760	@ 000503f0 b5f7b6f9
.org 0x503f4
	str r5, [r4, #44]	@ 000503f4 e562
.org 0x503f6
	mov r0, r8	@ 000503f6 4046
.org 0x503f8
	str r0, [r4, #36]	@ 000503f8 6062
.org 0x503fa
	pop {r3}	@ 000503fa 08bc
.org 0x503fc
	mov r8, r3	@ 000503fc 9846
.org 0x503fe
	pop {r4, r5, r6}	@ 000503fe 70bc
.org 0x50400
	pop {r0}	@ 00050400 01bc
.org 0x50402
	bx r0	@ 00050402 0047
