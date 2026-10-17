@ FUN_08087cb8  entry 0x08087cb8  size 70
.thumb
.org 0x87cb8
FUN_08087cb8:
	push {r4, lr}	@ 00087cb8 10b5
.org 0x87cba
	adds r4, r0, #0	@ 00087cba 041c
.org 0x87cbc
	ldrb r0, [r4, #15]	@ 00087cbc e07b
.org 0x87cbe
	cmp r0, #0	@ 00087cbe 0028
.org 0x87cc0
	bne.n 0x87cde	@ 00087cc0 0dd1
.org 0x87cc2
	adds r0, r4, #0	@ 00087cc2 201c
.org 0x87cc4
	adds r0, #116	@ 00087cc4 7430
.org 0x87cc6
	ldr r1, [pc, #56]	@ 00087cc6 0e49
.org 0x87cc8
	bl 0x5784	@ 00087cc8 7df75cfd
.org 0x87ccc
	ldr r1, [pc, #52]	@ 00087ccc 0d49
.org 0x87cce
	adds r0, r4, #0	@ 00087cce 201c
.org 0x87cd0
	bl 0x1cf00	@ 00087cd0 95f716f9
.org 0x87cd4
	movs r0, #8	@ 00087cd4 0820
.org 0x87cd6
	strb r0, [r4, #18]	@ 00087cd6 a074
.org 0x87cd8
	ldrb r0, [r4, #15]	@ 00087cd8 e07b
.org 0x87cda
	adds r0, #1	@ 00087cda 0130
.org 0x87cdc
	strb r0, [r4, #15]	@ 00087cdc e073
.org 0x87cde
	adds r0, r4, #0	@ 00087cde 201c
.org 0x87ce0
	bl 0x1cff0	@ 00087ce0 95f786f9
.org 0x87ce4
	ldrb r0, [r4, #18]	@ 00087ce4 a07c
.org 0x87ce6
	subs r0, #1	@ 00087ce6 0138
.org 0x87ce8
	strb r0, [r4, #18]	@ 00087ce8 a074
.org 0x87cea
	lsls r0, r0, #24	@ 00087cea 0006
.org 0x87cec
	lsrs r1, r0, #24	@ 00087cec 010e
.org 0x87cee
	cmp r1, #0	@ 00087cee 0029
.org 0x87cf0
	bne.n 0x87cf8	@ 00087cf0 02d1
.org 0x87cf2
	movs r0, #7	@ 00087cf2 0720
.org 0x87cf4
	strb r0, [r4, #14]	@ 00087cf4 a073
.org 0x87cf6
	strb r1, [r4, #15]	@ 00087cf6 e173
.org 0x87cf8
	pop {r4}	@ 00087cf8 10bc
.org 0x87cfa
	pop {r0}	@ 00087cfa 01bc
.org 0x87cfc
	bx r0	@ 00087cfc 0047
