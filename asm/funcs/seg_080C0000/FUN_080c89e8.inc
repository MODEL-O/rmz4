@ FUN_080c89e8  entry 0x080c89e8  size 70
.thumb
.org 0xc89e8
FUN_080c89e8:
	push {r4, r5, r6, lr}	@ 000c89e8 70b5
.org 0xc89ea
	adds r4, r0, #0	@ 000c89ea 041c
.org 0xc89ec
	ldrb r1, [r4, #10]	@ 000c89ec a17a
.org 0xc89ee
	movs r0, #2	@ 000c89ee 0220
.org 0xc89f0
	movs r6, #0	@ 000c89f0 0026
.org 0xc89f2
	orrs r0, r1	@ 000c89f2 0843
.org 0xc89f4
	movs r1, #4	@ 000c89f4 0421
.org 0xc89f6
	orrs r0, r1	@ 000c89f6 0843
.org 0xc89f8
	strb r0, [r4, #10]	@ 000c89f8 a072
.org 0xc89fa
	adds r5, r4, #0	@ 000c89fa 251c
.org 0xc89fc
	adds r5, #116	@ 000c89fc 7435
.org 0xc89fe
	ldr r1, [pc, #48]	@ 000c89fe 0c49
.org 0xc8a00
	adds r2, r4, #0	@ 000c8a00 221c
.org 0xc8a02
	adds r2, #84	@ 000c8a02 5432
.org 0xc8a04
	adds r0, r5, #0	@ 000c8a04 281c
.org 0xc8a06
	movs r3, #8	@ 000c8a06 0823
.org 0xc8a08
	bl 0x5760	@ 000c8a08 3cf7aafe
.org 0xc8a0c
	str r4, [r5, #44]	@ 000c8a0c ec62
.org 0xc8a0e
	str r6, [r5, #36]	@ 000c8a0e 6e62
.org 0xc8a10
	ldr r1, [pc, #32]	@ 000c8a10 0849
.org 0xc8a12
	ldrb r0, [r4, #9]	@ 000c8a12 607a
.org 0xc8a14
	lsls r0, r0, #2	@ 000c8a14 8000
.org 0xc8a16
	adds r0, r0, r1	@ 000c8a16 4018
.org 0xc8a18
	movs r1, #1	@ 000c8a18 0121
.org 0xc8a1a
	str r1, [r4, #12]	@ 000c8a1a e160
.org 0xc8a1c
	ldr r0, [r0, #0]	@ 000c8a1c 0068
.org 0xc8a1e
	ldr r0, [r0, #4]	@ 000c8a1e 4068
.org 0xc8a20
	str r0, [r4, #20]	@ 000c8a20 6061
.org 0xc8a22
	adds r0, r4, #0	@ 000c8a22 201c
.org 0xc8a24
	bl 0xc88a4	@ 000c8a24 fff73eff
.org 0xc8a28
	pop {r4, r5, r6}	@ 000c8a28 70bc
.org 0xc8a2a
	pop {r0}	@ 000c8a2a 01bc
.org 0xc8a2c
	bx r0	@ 000c8a2c 0047
