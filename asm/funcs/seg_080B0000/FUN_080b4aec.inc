@ FUN_080b4aec  entry 0x080b4aec  size 96
.thumb
.org 0xb4aec
FUN_080b4aec:
	push {r4, r5, r6, lr}	@ 000b4aec 70b5
.org 0xb4aee
	adds r4, r0, #0	@ 000b4aee 041c
.org 0xb4af0
	lsls r1, r1, #24	@ 000b4af0 0906
.org 0xb4af2
	lsrs r6, r1, #24	@ 000b4af2 0e0e
.org 0xb4af4
	lsls r2, r2, #24	@ 000b4af4 1206
.org 0xb4af6
	lsrs r5, r2, #24	@ 000b4af6 150e
.org 0xb4af8
	ldr r0, [pc, #80]	@ 000b4af8 1448
.org 0xb4afa
	ldr r0, [r0, #0]	@ 000b4afa 0068
.org 0xb4afc
	bl 0x5500	@ 000b4afc 50f700fd
.org 0xb4b00
	adds r3, r0, #0	@ 000b4b00 031c
.org 0xb4b02
	cmp r3, #0	@ 000b4b02 002b
.org 0xb4b04
	beq.n 0xb4b46	@ 000b4b04 1fd0
.org 0xb4b06
	adds r1, r3, #0	@ 000b4b06 191c
.org 0xb4b08
	adds r1, #37	@ 000b4b08 2531
.org 0xb4b0a
	movs r2, #0	@ 000b4b0a 0022
.org 0xb4b0c
	movs r0, #24	@ 000b4b0c 1820
.org 0xb4b0e
	strb r0, [r1, #0]	@ 000b4b0e 0870
.org 0xb4b10
	ldr r0, [pc, #60]	@ 000b4b10 0f48
.org 0xb4b12
	movs r1, #94	@ 000b4b12 5e21
.org 0xb4b14
	strb r1, [r3, #9]	@ 000b4b14 5972
.org 0xb4b16
	movs r1, #188	@ 000b4b16 bc21
.org 0xb4b18
	lsls r1, r1, #1	@ 000b4b18 4900
.org 0xb4b1a
	adds r0, r0, r1	@ 000b4b1a 4018
.org 0xb4b1c
	ldr r0, [r0, #0]	@ 000b4b1c 0068
.org 0xb4b1e
	ldr r0, [r0, #0]	@ 000b4b1e 0068
.org 0xb4b20
	str r0, [r3, #20]	@ 000b4b20 5861
.org 0xb4b22
	movs r0, #0	@ 000b4b22 0020
.org 0xb4b24
	strh r2, [r3, #32]	@ 000b4b24 1a84
.org 0xb4b26
	adds r1, r3, #0	@ 000b4b26 191c
.org 0xb4b28
	adds r1, #34	@ 000b4b28 2231
.org 0xb4b2a
	strb r0, [r1, #0]	@ 000b4b2a 0870
.org 0xb4b2c
	ldrb r1, [r3, #11]	@ 000b4b2c d97a
.org 0xb4b2e
	movs r0, #16	@ 000b4b2e 1020
.org 0xb4b30
	orrs r0, r1	@ 000b4b30 0843
.org 0xb4b32
	strb r0, [r3, #11]	@ 000b4b32 d872
.org 0xb4b34
	ldrb r0, [r3, #28]	@ 000b4b34 187f
.org 0xb4b36
	strb r0, [r3, #29]	@ 000b4b36 5877
.org 0xb4b38
	str r4, [r3, #40]	@ 000b4b38 9c62
.org 0xb4b3a
	ldr r0, [r4, #84]	@ 000b4b3a 606d
.org 0xb4b3c
	ldr r1, [r4, #88]	@ 000b4b3c a16d
.org 0xb4b3e
	str r0, [r3, #84]	@ 000b4b3e 5865
.org 0xb4b40
	str r1, [r3, #88]	@ 000b4b40 9965
.org 0xb4b42
	strb r6, [r3, #16]	@ 000b4b42 1e74
.org 0xb4b44
	strb r5, [r3, #17]	@ 000b4b44 5d74
.org 0xb4b46
	pop {r4, r5, r6}	@ 000b4b46 70bc
.org 0xb4b48
	pop {r0}	@ 000b4b48 01bc
.org 0xb4b4a
	bx r0	@ 000b4b4a 0047
