@ FUN_080b6ae0  entry 0x080b6ae0  size 106
.thumb
.org 0xb6ae0
FUN_080b6ae0:
	push {r4, r5, r6, r7, lr}	@ 000b6ae0 f0b5
.org 0xb6ae2
	adds r5, r0, #0	@ 000b6ae2 051c
.org 0xb6ae4
	adds r6, r1, #0	@ 000b6ae4 0e1c
.org 0xb6ae6
	lsls r2, r2, #24	@ 000b6ae6 1206
.org 0xb6ae8
	lsrs r7, r2, #24	@ 000b6ae8 170e
.org 0xb6aea
	ldr r0, [pc, #96]	@ 000b6aea 1848
.org 0xb6aec
	ldr r0, [r0, #0]	@ 000b6aec 0068
.org 0xb6aee
	bl 0x5500	@ 000b6aee 4ef707fd
.org 0xb6af2
	adds r4, r0, #0	@ 000b6af2 041c
.org 0xb6af4
	cmp r4, #0	@ 000b6af4 002c
.org 0xb6af6
	beq.n 0xb6b42	@ 000b6af6 24d0
.org 0xb6af8
	adds r1, r4, #0	@ 000b6af8 211c
.org 0xb6afa
	adds r1, #37	@ 000b6afa 2531
.org 0xb6afc
	movs r3, #0	@ 000b6afc 0023
.org 0xb6afe
	movs r0, #24	@ 000b6afe 1820
.org 0xb6b00
	strb r0, [r1, #0]	@ 000b6b00 0870
.org 0xb6b02
	ldr r0, [pc, #76]	@ 000b6b02 1348
.org 0xb6b04
	movs r1, #100	@ 000b6b04 6421
.org 0xb6b06
	strb r1, [r4, #9]	@ 000b6b06 6172
.org 0xb6b08
	movs r1, #200	@ 000b6b08 c821
.org 0xb6b0a
	lsls r1, r1, #1	@ 000b6b0a 4900
.org 0xb6b0c
	adds r0, r0, r1	@ 000b6b0c 4018
.org 0xb6b0e
	ldr r0, [r0, #0]	@ 000b6b0e 0068
.org 0xb6b10
	ldr r0, [r0, #0]	@ 000b6b10 0068
.org 0xb6b12
	str r0, [r4, #20]	@ 000b6b12 6061
.org 0xb6b14
	movs r2, #0	@ 000b6b14 0022
.org 0xb6b16
	strh r3, [r4, #32]	@ 000b6b16 2384
.org 0xb6b18
	adds r0, r4, #0	@ 000b6b18 201c
.org 0xb6b1a
	adds r0, #34	@ 000b6b1a 2230
.org 0xb6b1c
	strb r2, [r0, #0]	@ 000b6b1c 0270
.org 0xb6b1e
	ldrb r1, [r4, #11]	@ 000b6b1e e17a
.org 0xb6b20
	movs r0, #16	@ 000b6b20 1020
.org 0xb6b22
	orrs r0, r1	@ 000b6b22 0843
.org 0xb6b24
	strb r0, [r4, #11]	@ 000b6b24 e072
.org 0xb6b26
	ldrb r0, [r4, #28]	@ 000b6b26 207f
.org 0xb6b28
	strb r0, [r4, #29]	@ 000b6b28 6077
.org 0xb6b2a
	str r5, [r4, #40]	@ 000b6b2a a562
.org 0xb6b2c
	ldr r0, [r6, #0]	@ 000b6b2c 3068
.org 0xb6b2e
	ldr r1, [r6, #4]	@ 000b6b2e 7168
.org 0xb6b30
	str r0, [r4, #84]	@ 000b6b30 6065
.org 0xb6b32
	str r1, [r4, #88]	@ 000b6b32 a165
.org 0xb6b34
	strb r2, [r4, #16]	@ 000b6b34 2274
.org 0xb6b36
	strb r7, [r4, #17]	@ 000b6b36 6774
.org 0xb6b38
	adds r1, r5, #0	@ 000b6b38 291c
.org 0xb6b3a
	adds r1, #204	@ 000b6b3a cc31
.org 0xb6b3c
	ldrh r0, [r1, #0]	@ 000b6b3c 0888
.org 0xb6b3e
	adds r0, #1	@ 000b6b3e 0130
.org 0xb6b40
	strh r0, [r1, #0]	@ 000b6b40 0880
.org 0xb6b42
	adds r0, r4, #0	@ 000b6b42 201c
.org 0xb6b44
	pop {r4, r5, r6, r7}	@ 000b6b44 f0bc
.org 0xb6b46
	pop {r1}	@ 000b6b46 02bc
.org 0xb6b48
	bx r1	@ 000b6b48 0847
