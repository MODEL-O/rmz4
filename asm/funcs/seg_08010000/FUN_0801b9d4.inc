@ FUN_0801b9d4  entry 0x0801b9d4  size 116
.thumb
.org 0x1b9d4
FUN_0801b9d4:
	push {r4, lr}	@ 0001b9d4 10b5
.org 0x1b9d6
	adds r4, r0, #0	@ 0001b9d6 041c
.org 0x1b9d8
	ldrb r3, [r4, #14]	@ 0001b9d8 a37b
.org 0x1b9da
	cmp r3, #0	@ 0001b9da 002b
.org 0x1b9dc
	bne.n 0x1ba18	@ 0001b9dc 1cd1
.org 0x1b9de
	ldr r1, [r4, #92]	@ 0001b9de e16d
.org 0x1b9e0
	lsrs r1, r1, #4	@ 0001b9e0 0909
.org 0x1b9e2
	lsls r1, r1, #1	@ 0001b9e2 4900
.org 0x1b9e4
	ldr r0, [pc, #96]	@ 0001b9e4 1848
.org 0x1b9e6
	adds r1, r1, r0	@ 0001b9e6 0918
.org 0x1b9e8
	ldrh r2, [r1, #0]	@ 0001b9e8 0a88
.org 0x1b9ea
	ldr r0, [pc, #96]	@ 0001b9ea 1848
.org 0x1b9ec
	ands r0, r2	@ 0001b9ec 1040
.org 0x1b9ee
	movs r2, #2	@ 0001b9ee 0222
.org 0x1b9f0
	orrs r0, r2	@ 0001b9f0 1043
.org 0x1b9f2
	strh r0, [r1, #0]	@ 0001b9f2 0880
.org 0x1b9f4
	str r3, [r4, #76]	@ 0001b9f4 e364
.org 0x1b9f6
	str r3, [r4, #80]	@ 0001b9f6 2365
.org 0x1b9f8
	strh r3, [r4, #16]	@ 0001b9f8 2382
.org 0x1b9fa
	movs r0, #229	@ 0001b9fa e520
.org 0x1b9fc
	lsls r0, r0, #1	@ 0001b9fc 4000
.org 0x1b9fe
	bl 0x2b10	@ 0001b9fe e7f787f8
.org 0x1ba02
	movs r0, #0	@ 0001ba02 0020
.org 0x1ba04
	movs r1, #0	@ 0001ba04 0021
.org 0x1ba06
	movs r2, #0	@ 0001ba06 0022
.org 0x1ba08
	bl 0x1040c0	@ 0001ba08 e8f05afb
.org 0x1ba0c
	str r0, [r4, #104]	@ 0001ba0c a066
.org 0x1ba0e
	movs r0, #64	@ 0001ba0e 4020
.org 0x1ba10
	strh r0, [r4, #18]	@ 0001ba10 6082
.org 0x1ba12
	ldrb r0, [r4, #14]	@ 0001ba12 a07b
.org 0x1ba14
	adds r0, #1	@ 0001ba14 0130
.org 0x1ba16
	strb r0, [r4, #14]	@ 0001ba16 a073
.org 0x1ba18
	ldrh r0, [r4, #18]	@ 0001ba18 608a
.org 0x1ba1a
	ldrh r1, [r4, #16]	@ 0001ba1a 218a
.org 0x1ba1c
	adds r0, r0, r1	@ 0001ba1c 4018
.org 0x1ba1e
	movs r1, #0	@ 0001ba1e 0021
.org 0x1ba20
	strh r0, [r4, #16]	@ 0001ba20 2082
.org 0x1ba22
	lsls r0, r0, #16	@ 0001ba22 0004
.org 0x1ba24
	lsrs r0, r0, #16	@ 0001ba24 000c
.org 0x1ba26
	cmp r0, #255	@ 0001ba26 ff28
.org 0x1ba28
	bls.n 0x1ba2e	@ 0001ba28 01d9
.org 0x1ba2a
	strh r1, [r4, #16]	@ 0001ba2a 2182
.org 0x1ba2c
	str r1, [r4, #80]	@ 0001ba2c 2165
.org 0x1ba2e
	ldr r1, [pc, #32]	@ 0001ba2e 0849
.org 0x1ba30
	ldrb r0, [r4, #16]	@ 0001ba30 207c
.org 0x1ba32
	lsls r0, r0, #1	@ 0001ba32 4000
.org 0x1ba34
	adds r0, r0, r1	@ 0001ba34 4018
.org 0x1ba36
	ldrh r1, [r0, #0]	@ 0001ba36 0188
.org 0x1ba38
	lsls r1, r1, #16	@ 0001ba38 0904
.org 0x1ba3a
	asrs r1, r1, #23	@ 0001ba3a c915
.org 0x1ba3c
	ldr r0, [r4, #80]	@ 0001ba3c 206d
.org 0x1ba3e
	adds r0, r0, r1	@ 0001ba3e 4018
.org 0x1ba40
	str r0, [r4, #80]	@ 0001ba40 2065
.org 0x1ba42
	pop {r4}	@ 0001ba42 10bc
.org 0x1ba44
	pop {r0}	@ 0001ba44 01bc
.org 0x1ba46
	bx r0	@ 0001ba46 0047
