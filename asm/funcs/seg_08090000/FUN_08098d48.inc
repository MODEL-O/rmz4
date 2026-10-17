@ FUN_08098d48  entry 0x08098d48  size 128
.thumb
.org 0x98d48
FUN_08098d48:
	push {r4, r5, r6, r7, lr}	@ 00098d48 f0b5
.org 0x98d4a
	adds r6, r0, #0	@ 00098d4a 061c
.org 0x98d4c
	bl 0x1cff0	@ 00098d4c 84f750f9
.org 0x98d50
	adds r7, r6, #0	@ 00098d50 371c
.org 0x98d52
	adds r7, #84	@ 00098d52 5437
.org 0x98d54
	ldr r5, [pc, #112]	@ 00098d54 1c4d
.org 0x98d56
	ldrb r0, [r6, #10]	@ 00098d56 b07a
.org 0x98d58
	movs r4, #16	@ 00098d58 1024
.org 0x98d5a
	adds r3, r4, #0	@ 00098d5a 231c
.org 0x98d5c
	ands r3, r0	@ 00098d5c 0340
.org 0x98d5e
	lsls r3, r3, #24	@ 00098d5e 1b06
.org 0x98d60
	lsrs r3, r3, #24	@ 00098d60 1b0e
.org 0x98d62
	adds r0, r7, #0	@ 00098d62 381c
.org 0x98d64
	adds r1, r5, #0	@ 00098d64 291c
.org 0x98d66
	movs r2, #0	@ 00098d66 0022
.org 0x98d68
	bl 0xd4c8c	@ 00098d68 3bf090ff
.org 0x98d6c
	adds r5, #28	@ 00098d6c 1c35
.org 0x98d6e
	ldrb r0, [r6, #10]	@ 00098d6e b07a
.org 0x98d70
	ands r4, r0	@ 00098d70 0440
.org 0x98d72
	lsls r4, r4, #24	@ 00098d72 2406
.org 0x98d74
	lsrs r4, r4, #24	@ 00098d74 240e
.org 0x98d76
	adds r0, r7, #0	@ 00098d76 381c
.org 0x98d78
	adds r1, r5, #0	@ 00098d78 291c
.org 0x98d7a
	movs r2, #0	@ 00098d7a 0022
.org 0x98d7c
	adds r3, r4, #0	@ 00098d7c 231c
.org 0x98d7e
	bl 0xd4c8c	@ 00098d7e 3bf085ff
.org 0x98d82
	movs r0, #1	@ 00098d82 0120
.org 0x98d84
	adds r1, r7, #0	@ 00098d84 391c
.org 0x98d86
	bl 0xd0c88	@ 00098d86 37f07fff
.org 0x98d8a
	movs r0, #42	@ 00098d8a 2a20
.org 0x98d8c
	bl 0x2b10	@ 00098d8c 69f7c0fe
.org 0x98d90
	movs r0, #3	@ 00098d90 0320
.org 0x98d92
	movs r1, #36	@ 00098d92 2421
.org 0x98d94
	adds r2, r7, #0	@ 00098d94 3a1c
.org 0x98d96
	bl 0x2ab88	@ 00098d96 91f7f7fe
.org 0x98d9a
	ldr r2, [pc, #48]	@ 00098d9a 0c4a
.org 0x98d9c
	ldrh r1, [r2, #12]	@ 00098d9c 9189
.org 0x98d9e
	ldr r0, [pc, #48]	@ 00098d9e 0c48
.org 0x98da0
	cmp r1, r0	@ 00098da0 8142
.org 0x98da2
	bhi.n 0x98da8	@ 00098da2 01d8
.org 0x98da4
	adds r0, r1, #1	@ 00098da4 481c
.org 0x98da6
	strh r0, [r2, #12]	@ 00098da6 9081
.org 0x98da8
	adds r0, r6, #0	@ 00098da8 301c
.org 0x98daa
	adds r1, r7, #0	@ 00098daa 391c
.org 0x98dac
	bl 0x2abe0	@ 00098dac 91f718ff
.org 0x98db0
	ldr r1, [pc, #32]	@ 00098db0 0849
.org 0x98db2
	ldrb r0, [r6, #9]	@ 00098db2 707a
.org 0x98db4
	lsls r0, r0, #2	@ 00098db4 8000
.org 0x98db6
	adds r0, r0, r1	@ 00098db6 4018
.org 0x98db8
	movs r1, #4	@ 00098db8 0421
.org 0x98dba
	str r1, [r6, #12]	@ 00098dba f160
.org 0x98dbc
	ldr r0, [r0, #0]	@ 00098dbc 0068
.org 0x98dbe
	ldr r0, [r0, #16]	@ 00098dbe 0069
.org 0x98dc0
	str r0, [r6, #20]	@ 00098dc0 7061
.org 0x98dc2
	pop {r4, r5, r6, r7}	@ 00098dc2 f0bc
.org 0x98dc4
	pop {r0}	@ 00098dc4 01bc
.org 0x98dc6
	bx r0	@ 00098dc6 0047
