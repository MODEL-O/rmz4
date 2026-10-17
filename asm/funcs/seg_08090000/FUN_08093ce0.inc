@ FUN_08093ce0  entry 0x08093ce0  size 76
.thumb
.org 0x93ce0
FUN_08093ce0:
	push {r4, lr}	@ 00093ce0 10b5
.org 0x93ce2
	adds r4, r0, #0	@ 00093ce2 041c
.org 0x93ce4
	ldrb r0, [r4, #15]	@ 00093ce4 e07b
.org 0x93ce6
	cmp r0, #0	@ 00093ce6 0028
.org 0x93ce8
	bne.n 0x93d02	@ 00093ce8 0bd1
.org 0x93cea
	adds r0, r4, #0	@ 00093cea 201c
.org 0x93cec
	adds r0, #116	@ 00093cec 7430
.org 0x93cee
	ldr r1, [pc, #60]	@ 00093cee 0f49
.org 0x93cf0
	bl 0x5784	@ 00093cf0 71f748fd
.org 0x93cf4
	ldr r1, [pc, #56]	@ 00093cf4 0e49
.org 0x93cf6
	adds r0, r4, #0	@ 00093cf6 201c
.org 0x93cf8
	bl 0x1cf00	@ 00093cf8 89f702f9
.org 0x93cfc
	ldrb r0, [r4, #15]	@ 00093cfc e07b
.org 0x93cfe
	adds r0, #1	@ 00093cfe 0130
.org 0x93d00
	strb r0, [r4, #15]	@ 00093d00 e073
.org 0x93d02
	adds r0, r4, #0	@ 00093d02 201c
.org 0x93d04
	bl 0x1cff0	@ 00093d04 89f774f9
.org 0x93d08
	ldr r0, [pc, #40]	@ 00093d08 0a48
.org 0x93d0a
	ldr r0, [r0, #56]	@ 00093d0a 806b
.org 0x93d0c
	ldr r1, [r4, #84]	@ 00093d0c 616d
.org 0x93d0e
	subs r0, r0, r1	@ 00093d0e 401a
.org 0x93d10
	movs r1, #152	@ 00093d10 9821
.org 0x93d12
	lsls r1, r1, #8	@ 00093d12 0902
.org 0x93d14
	adds r0, r0, r1	@ 00093d14 4018
.org 0x93d16
	movs r1, #152	@ 00093d16 9821
.org 0x93d18
	lsls r1, r1, #9	@ 00093d18 4902
.org 0x93d1a
	cmp r0, r1	@ 00093d1a 8842
.org 0x93d1c
	bhi.n 0x93d26	@ 00093d1c 03d8
.org 0x93d1e
	movs r1, #0	@ 00093d1e 0021
.org 0x93d20
	movs r0, #1	@ 00093d20 0120
.org 0x93d22
	strb r0, [r4, #14]	@ 00093d22 a073
.org 0x93d24
	strb r1, [r4, #15]	@ 00093d24 e173
.org 0x93d26
	pop {r4}	@ 00093d26 10bc
.org 0x93d28
	pop {r0}	@ 00093d28 01bc
.org 0x93d2a
	bx r0	@ 00093d2a 0047
