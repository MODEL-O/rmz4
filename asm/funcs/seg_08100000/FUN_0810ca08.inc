@ FUN_0810ca08  entry 0x0810ca08  size 68
.thumb
.org 0x10ca08
FUN_0810ca08:
	push {r4, r5, lr}	@ 0010ca08 30b5
.org 0x10ca0a
	adds r5, r0, #0	@ 0010ca0a 051c
.org 0x10ca0c
	lsls r1, r1, #24	@ 0010ca0c 0906
.org 0x10ca0e
	lsrs r4, r1, #24	@ 0010ca0e 0c0e
.org 0x10ca10
	ldr r0, [pc, #56]	@ 0010ca10 0e48
.org 0x10ca12
	ldr r0, [r0, #0]	@ 0010ca12 0068
.org 0x10ca14
	bl 0x5500	@ 0010ca14 f8f674fd
.org 0x10ca18
	adds r3, r0, #0	@ 0010ca18 031c
.org 0x10ca1a
	cmp r3, #0	@ 0010ca1a 002b
.org 0x10ca1c
	beq.n 0x10ca44	@ 0010ca1c 12d0
.org 0x10ca1e
	adds r1, r3, #0	@ 0010ca1e 191c
.org 0x10ca20
	adds r1, #37	@ 0010ca20 2531
.org 0x10ca22
	movs r2, #0	@ 0010ca22 0022
.org 0x10ca24
	movs r0, #16	@ 0010ca24 1020
.org 0x10ca26
	strb r0, [r1, #0]	@ 0010ca26 0870
.org 0x10ca28
	ldr r1, [pc, #36]	@ 0010ca28 0949
.org 0x10ca2a
	movs r0, #12	@ 0010ca2a 0c20
.org 0x10ca2c
	strb r0, [r3, #9]	@ 0010ca2c 5872
.org 0x10ca2e
	ldr r0, [r1, #48]	@ 0010ca2e 086b
.org 0x10ca30
	ldr r0, [r0, #0]	@ 0010ca30 0068
.org 0x10ca32
	str r0, [r3, #20]	@ 0010ca32 5861
.org 0x10ca34
	movs r0, #0	@ 0010ca34 0020
.org 0x10ca36
	strh r2, [r3, #32]	@ 0010ca36 1a84
.org 0x10ca38
	adds r1, r3, #0	@ 0010ca38 191c
.org 0x10ca3a
	adds r1, #34	@ 0010ca3a 2231
.org 0x10ca3c
	strb r0, [r1, #0]	@ 0010ca3c 0870
.org 0x10ca3e
	str r5, [r3, #40]	@ 0010ca3e 9d62
.org 0x10ca40
	strb r4, [r3, #16]	@ 0010ca40 1c74
.org 0x10ca42
	strb r0, [r3, #17]	@ 0010ca42 5874
.org 0x10ca44
	adds r0, r3, #0	@ 0010ca44 181c
.org 0x10ca46
	pop {r4, r5}	@ 0010ca46 30bc
.org 0x10ca48
	pop {r1}	@ 0010ca48 02bc
.org 0x10ca4a
	bx r1	@ 0010ca4a 0847
