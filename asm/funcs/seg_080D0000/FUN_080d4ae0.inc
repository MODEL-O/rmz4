@ FUN_080d4ae0  entry 0x080d4ae0  size 92
.thumb
.org 0xd4ae0
FUN_080d4ae0:
	push {r4, r5, r6, lr}	@ 000d4ae0 70b5
.org 0xd4ae2
	adds r5, r1, #0	@ 000d4ae2 0d1c
.org 0xd4ae4
	lsls r0, r0, #24	@ 000d4ae4 0006
.org 0xd4ae6
	lsrs r6, r0, #24	@ 000d4ae6 060e
.org 0xd4ae8
	ldr r0, [pc, #80]	@ 000d4ae8 1448
.org 0xd4aea
	ldr r0, [r0, #0]	@ 000d4aea 0068
.org 0xd4aec
	bl 0x5500	@ 000d4aec 30f708fd
.org 0xd4af0
	adds r4, r0, #0	@ 000d4af0 041c
.org 0xd4af2
	cmp r4, #0	@ 000d4af2 002c
.org 0xd4af4
	beq.n 0xd4b34	@ 000d4af4 1ed0
.org 0xd4af6
	adds r1, r4, #0	@ 000d4af6 211c
.org 0xd4af8
	adds r1, #37	@ 000d4af8 2531
.org 0xd4afa
	movs r2, #0	@ 000d4afa 0022
.org 0xd4afc
	movs r0, #1	@ 000d4afc 0120
.org 0xd4afe
	strb r0, [r1, #0]	@ 000d4afe 0870
.org 0xd4b00
	ldr r1, [pc, #60]	@ 000d4b00 0f49
.org 0xd4b02
	movs r0, #15	@ 000d4b02 0f20
.org 0xd4b04
	strb r0, [r4, #9]	@ 000d4b04 6072
.org 0xd4b06
	ldr r0, [r1, #60]	@ 000d4b06 c86b
.org 0xd4b08
	ldr r0, [r0, #0]	@ 000d4b08 0068
.org 0xd4b0a
	str r0, [r4, #20]	@ 000d4b0a 6061
.org 0xd4b0c
	movs r1, #0	@ 000d4b0c 0021
.org 0xd4b0e
	strh r2, [r4, #32]	@ 000d4b0e 2284
.org 0xd4b10
	adds r0, r4, #0	@ 000d4b10 201c
.org 0xd4b12
	adds r0, #34	@ 000d4b12 2230
.org 0xd4b14
	strb r1, [r0, #0]	@ 000d4b14 0170
.org 0xd4b16
	ldr r0, [r5, #0]	@ 000d4b16 2868
.org 0xd4b18
	str r0, [r4, #84]	@ 000d4b18 6065
.org 0xd4b1a
	ldr r0, [r5, #4]	@ 000d4b1a 6868
.org 0xd4b1c
	str r0, [r4, #88]	@ 000d4b1c a065
.org 0xd4b1e
	strb r1, [r4, #16]	@ 000d4b1e 2174
.org 0xd4b20
	adds r0, r4, #0	@ 000d4b20 201c
.org 0xd4b22
	bl 0x1cc9c	@ 000d4b22 48f7bbf8
.org 0xd4b26
	ldr r1, [pc, #28]	@ 000d4b26 0749
.org 0xd4b28
	lsls r0, r6, #1	@ 000d4b28 7000
.org 0xd4b2a
	adds r0, r0, r1	@ 000d4b2a 4018
.org 0xd4b2c
	ldrh r1, [r0, #0]	@ 000d4b2c 0188
.org 0xd4b2e
	adds r0, r4, #0	@ 000d4b2e 201c
.org 0xd4b30
	bl 0x1cf00	@ 000d4b30 48f7e6f9
.org 0xd4b34
	adds r0, r4, #0	@ 000d4b34 201c
.org 0xd4b36
	pop {r4, r5, r6}	@ 000d4b36 70bc
.org 0xd4b38
	pop {r1}	@ 000d4b38 02bc
.org 0xd4b3a
	bx r1	@ 000d4b3a 0847
