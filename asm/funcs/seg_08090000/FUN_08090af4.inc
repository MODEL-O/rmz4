@ FUN_08090af4  entry 0x08090af4  size 82
.thumb
.org 0x90af4
FUN_08090af4:
	push {r4, r5, lr}	@ 00090af4 30b5
.org 0x90af6
	adds r4, r0, #0	@ 00090af6 041c
.org 0x90af8
	lsls r1, r1, #24	@ 00090af8 0906
.org 0x90afa
	lsrs r5, r1, #24	@ 00090afa 0d0e
.org 0x90afc
	ldr r0, [pc, #72]	@ 00090afc 1248
.org 0x90afe
	ldr r0, [r0, #0]	@ 00090afe 0068
.org 0x90b00
	bl 0x5500	@ 00090b00 74f7fefc
.org 0x90b04
	adds r3, r0, #0	@ 00090b04 031c
.org 0x90b06
	cmp r3, #0	@ 00090b06 002b
.org 0x90b08
	beq.n 0x90b3e	@ 00090b08 19d0
.org 0x90b0a
	adds r1, r3, #0	@ 00090b0a 191c
.org 0x90b0c
	adds r1, #37	@ 00090b0c 2531
.org 0x90b0e
	movs r2, #0	@ 00090b0e 0022
.org 0x90b10
	movs r0, #24	@ 00090b10 1820
.org 0x90b12
	strb r0, [r1, #0]	@ 00090b12 0870
.org 0x90b14
	ldr r1, [pc, #52]	@ 00090b14 0d49
.org 0x90b16
	movs r0, #21	@ 00090b16 1520
.org 0x90b18
	strb r0, [r3, #9]	@ 00090b18 5872
.org 0x90b1a
	ldr r0, [r1, #84]	@ 00090b1a 486d
.org 0x90b1c
	ldr r0, [r0, #0]	@ 00090b1c 0068
.org 0x90b1e
	str r0, [r3, #20]	@ 00090b1e 5861
.org 0x90b20
	movs r0, #0	@ 00090b20 0020
.org 0x90b22
	strh r2, [r3, #32]	@ 00090b22 1a84
.org 0x90b24
	adds r1, r3, #0	@ 00090b24 191c
.org 0x90b26
	adds r1, #34	@ 00090b26 2231
.org 0x90b28
	strb r0, [r1, #0]	@ 00090b28 0870
.org 0x90b2a
	ldrb r1, [r3, #11]	@ 00090b2a d97a
.org 0x90b2c
	movs r0, #16	@ 00090b2c 1020
.org 0x90b2e
	orrs r0, r1	@ 00090b2e 0843
.org 0x90b30
	strb r0, [r3, #11]	@ 00090b30 d872
.org 0x90b32
	ldrb r0, [r3, #28]	@ 00090b32 187f
.org 0x90b34
	strb r0, [r3, #29]	@ 00090b34 5877
.org 0x90b36
	str r4, [r3, #40]	@ 00090b36 9c62
.org 0x90b38
	movs r0, #1	@ 00090b38 0120
.org 0x90b3a
	strb r0, [r3, #16]	@ 00090b3a 1874
.org 0x90b3c
	strb r5, [r3, #17]	@ 00090b3c 5d74
.org 0x90b3e
	adds r0, r3, #0	@ 00090b3e 181c
.org 0x90b40
	pop {r4, r5}	@ 00090b40 30bc
.org 0x90b42
	pop {r1}	@ 00090b42 02bc
.org 0x90b44
	bx r1	@ 00090b44 0847
