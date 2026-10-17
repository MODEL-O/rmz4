@ FUN_08084b10  entry 0x08084b10  size 66
.thumb
.org 0x84b10
FUN_08084b10:
	push {r4, r5, r6, lr}	@ 00084b10 70b5
.org 0x84b12
	adds r4, r0, #0	@ 00084b12 041c
.org 0x84b14
	ldrb r0, [r4, #16]	@ 00084b14 207c
.org 0x84b16
	cmp r0, #1	@ 00084b16 0128
.org 0x84b18
	bhi.n 0x84b4c	@ 00084b18 18d8
.org 0x84b1a
	ldrb r0, [r4, #13]	@ 00084b1a 607b
.org 0x84b1c
	cmp r0, #2	@ 00084b1c 0228
.org 0x84b1e
	bne.n 0x84b4c	@ 00084b1e 15d1
.org 0x84b20
	adds r6, r4, #0	@ 00084b20 261c
.org 0x84b22
	adds r6, #180	@ 00084b22 b436
.org 0x84b24
	ldr r5, [r6, #0]	@ 00084b24 3568
.org 0x84b26
	cmp r5, #0	@ 00084b26 002d
.org 0x84b28
	bne.n 0x84b4c	@ 00084b28 10d1
.org 0x84b2a
	adds r0, r4, #0	@ 00084b2a 201c
.org 0x84b2c
	adds r0, #140	@ 00084b2c 8c30
.org 0x84b2e
	ldr r0, [r0, #0]	@ 00084b2e 0068
.org 0x84b30
	movs r1, #1	@ 00084b30 0121
.org 0x84b32
	ands r0, r1	@ 00084b32 0840
.org 0x84b34
	cmp r0, #0	@ 00084b34 0028
.org 0x84b36
	beq.n 0x84b4c	@ 00084b36 09d0
.org 0x84b38
	ldr r2, [pc, #24]	@ 00084b38 064a
.org 0x84b3a
	movs r0, #0	@ 00084b3a 0020
.org 0x84b3c
	adds r1, r4, #0	@ 00084b3c 211c
.org 0x84b3e
	bl 0x2adac	@ 00084b3e a6f735f9
.org 0x84b42
	str r0, [r6, #0]	@ 00084b42 3060
.org 0x84b44
	cmp r0, #0	@ 00084b44 0028
.org 0x84b46
	beq.n 0x84b4c	@ 00084b46 01d0
.org 0x84b48
	strb r5, [r4, #13]	@ 00084b48 6573
.org 0x84b4a
	strb r5, [r4, #14]	@ 00084b4a a573
.org 0x84b4c
	pop {r4, r5, r6}	@ 00084b4c 70bc
.org 0x84b4e
	pop {r0}	@ 00084b4e 01bc
.org 0x84b50
	bx r0	@ 00084b50 0047
