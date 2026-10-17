@ FUN_0809cd78  entry 0x0809cd78  size 96
.thumb
.org 0x9cd78
FUN_0809cd78:
	push {r4, r5, r6, r7, lr}	@ 0009cd78 f0b5
.org 0x9cd7a
	adds r6, r0, #0	@ 0009cd7a 061c
.org 0x9cd7c
	adds r7, r1, #0	@ 0009cd7c 0f1c
.org 0x9cd7e
	lsls r2, r2, #24	@ 0009cd7e 1206
.org 0x9cd80
	lsrs r5, r2, #24	@ 0009cd80 150e
.org 0x9cd82
	lsls r3, r3, #24	@ 0009cd82 1b06
.org 0x9cd84
	lsrs r4, r3, #24	@ 0009cd84 1c0e
.org 0x9cd86
	ldr r0, [pc, #80]	@ 0009cd86 1448
.org 0x9cd88
	ldr r0, [r0, #0]	@ 0009cd88 0068
.org 0x9cd8a
	bl 0x5500	@ 0009cd8a 68f7b9fb
.org 0x9cd8e
	adds r3, r0, #0	@ 0009cd8e 031c
.org 0x9cd90
	cmp r3, #0	@ 0009cd90 002b
.org 0x9cd92
	beq.n 0x9cdd0	@ 0009cd92 1dd0
.org 0x9cd94
	adds r1, r3, #0	@ 0009cd94 191c
.org 0x9cd96
	adds r1, #37	@ 0009cd96 2531
.org 0x9cd98
	movs r2, #0	@ 0009cd98 0022
.org 0x9cd9a
	movs r0, #24	@ 0009cd9a 1820
.org 0x9cd9c
	strb r0, [r1, #0]	@ 0009cd9c 0870
.org 0x9cd9e
	ldr r0, [pc, #60]	@ 0009cd9e 0f48
.org 0x9cda0
	movs r1, #42	@ 0009cda0 2a21
.org 0x9cda2
	strb r1, [r3, #9]	@ 0009cda2 5972
.org 0x9cda4
	adds r0, #168	@ 0009cda4 a830
.org 0x9cda6
	ldr r0, [r0, #0]	@ 0009cda6 0068
.org 0x9cda8
	ldr r0, [r0, #0]	@ 0009cda8 0068
.org 0x9cdaa
	str r0, [r3, #20]	@ 0009cdaa 5861
.org 0x9cdac
	movs r0, #0	@ 0009cdac 0020
.org 0x9cdae
	strh r2, [r3, #32]	@ 0009cdae 1a84
.org 0x9cdb0
	adds r1, r3, #0	@ 0009cdb0 191c
.org 0x9cdb2
	adds r1, #34	@ 0009cdb2 2231
.org 0x9cdb4
	strb r0, [r1, #0]	@ 0009cdb4 0870
.org 0x9cdb6
	ldrb r1, [r3, #11]	@ 0009cdb6 d97a
.org 0x9cdb8
	movs r0, #16	@ 0009cdb8 1020
.org 0x9cdba
	orrs r0, r1	@ 0009cdba 0843
.org 0x9cdbc
	strb r0, [r3, #11]	@ 0009cdbc d872
.org 0x9cdbe
	ldrb r0, [r3, #28]	@ 0009cdbe 187f
.org 0x9cdc0
	strb r0, [r3, #29]	@ 0009cdc0 5877
.org 0x9cdc2
	str r6, [r3, #40]	@ 0009cdc2 9e62
.org 0x9cdc4
	ldr r0, [r7, #0]	@ 0009cdc4 3868
.org 0x9cdc6
	ldr r1, [r7, #4]	@ 0009cdc6 7968
.org 0x9cdc8
	str r0, [r3, #84]	@ 0009cdc8 5865
.org 0x9cdca
	str r1, [r3, #88]	@ 0009cdca 9965
.org 0x9cdcc
	strb r5, [r3, #16]	@ 0009cdcc 1d74
.org 0x9cdce
	strb r4, [r3, #17]	@ 0009cdce 5c74
.org 0x9cdd0
	adds r0, r3, #0	@ 0009cdd0 181c
.org 0x9cdd2
	pop {r4, r5, r6, r7}	@ 0009cdd2 f0bc
.org 0x9cdd4
	pop {r1}	@ 0009cdd4 02bc
.org 0x9cdd6
	bx r1	@ 0009cdd6 0847
