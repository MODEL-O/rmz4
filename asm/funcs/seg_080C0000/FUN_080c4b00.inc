@ FUN_080c4b00  entry 0x080c4b00  size 76
.thumb
.org 0xc4b00
FUN_080c4b00:
	push {r4, r5, lr}	@ 000c4b00 30b5
.org 0xc4b02
	adds r4, r0, #0	@ 000c4b02 041c
.org 0xc4b04
	adds r5, r4, #0	@ 000c4b04 251c
.org 0xc4b06
	adds r5, #184	@ 000c4b06 b835
.org 0xc4b08
	ldrb r0, [r5, #0]	@ 000c4b08 2878
.org 0xc4b0a
	cmp r0, #0	@ 000c4b0a 0028
.org 0xc4b0c
	beq.n 0xc4b18	@ 000c4b0c 04d0
.org 0xc4b0e
	ldr r0, [pc, #60]	@ 000c4b0e 0f48
.org 0xc4b10
	bl 0x2b5c	@ 000c4b10 3ef724f8
.org 0xc4b14
	movs r0, #0	@ 000c4b14 0020
.org 0xc4b16
	strb r0, [r5, #0]	@ 000c4b16 2870
.org 0xc4b18
	adds r0, r4, #0	@ 000c4b18 201c
.org 0xc4b1a
	adds r0, #140	@ 000c4b1a 8c30
.org 0xc4b1c
	movs r1, #0	@ 000c4b1c 0021
.org 0xc4b1e
	str r1, [r0, #0]	@ 000c4b1e 0160
.org 0xc4b20
	adds r0, #4	@ 000c4b20 0430
.org 0xc4b22
	str r1, [r0, #0]	@ 000c4b22 0160
.org 0xc4b24
	adds r0, #4	@ 000c4b24 0430
.org 0xc4b26
	strb r1, [r0, #0]	@ 000c4b26 0170
.org 0xc4b28
	ldrb r1, [r4, #10]	@ 000c4b28 a17a
.org 0xc4b2a
	movs r0, #251	@ 000c4b2a fb20
.org 0xc4b2c
	ands r0, r1	@ 000c4b2c 0840
.org 0xc4b2e
	movs r1, #254	@ 000c4b2e fe21
.org 0xc4b30
	ands r0, r1	@ 000c4b30 0840
.org 0xc4b32
	strb r0, [r4, #10]	@ 000c4b32 a072
.org 0xc4b34
	ldr r1, [pc, #24]	@ 000c4b34 0649
.org 0xc4b36
	ldrb r0, [r4, #9]	@ 000c4b36 607a
.org 0xc4b38
	lsls r0, r0, #2	@ 000c4b38 8000
.org 0xc4b3a
	adds r0, r0, r1	@ 000c4b3a 4018
.org 0xc4b3c
	movs r1, #4	@ 000c4b3c 0421
.org 0xc4b3e
	str r1, [r4, #12]	@ 000c4b3e e160
.org 0xc4b40
	ldr r0, [r0, #0]	@ 000c4b40 0068
.org 0xc4b42
	ldr r0, [r0, #16]	@ 000c4b42 0069
.org 0xc4b44
	str r0, [r4, #20]	@ 000c4b44 6061
.org 0xc4b46
	pop {r4, r5}	@ 000c4b46 30bc
.org 0xc4b48
	pop {r0}	@ 000c4b48 01bc
.org 0xc4b4a
	bx r0	@ 000c4b4a 0047
