@ FUN_08053de8  entry 0x08053de8  size 78
.thumb
.org 0x53de8
FUN_08053de8:
	push {r4, lr}	@ 00053de8 10b5
.org 0x53dea
	adds r4, r0, #0	@ 00053dea 041c
.org 0x53dec
	ldrb r0, [r4, #15]	@ 00053dec e07b
.org 0x53dee
	cmp r0, #0	@ 00053dee 0028
.org 0x53df0
	bne.n 0x53e14	@ 00053df0 10d1
.org 0x53df2
	movs r1, #176	@ 00053df2 b021
.org 0x53df4
	lsls r1, r1, #6	@ 00053df4 8901
.org 0x53df6
	adds r0, r4, #0	@ 00053df6 201c
.org 0x53df8
	bl 0x1cf00	@ 00053df8 c9f782f8
.org 0x53dfc
	movs r0, #128	@ 00053dfc 8020
.org 0x53dfe
	lsls r0, r0, #4	@ 00053dfe 0001
.org 0x53e00
	str r0, [r4, #96]	@ 00053e00 2066
.org 0x53e02
	adds r0, r4, #0	@ 00053e02 201c
.org 0x53e04
	adds r0, #184	@ 00053e04 b830
.org 0x53e06
	ldr r0, [r0, #0]	@ 00053e06 0068
.org 0x53e08
	ldr r1, [pc, #44]	@ 00053e08 0b49
.org 0x53e0a
	adds r0, r0, r1	@ 00053e0a 4018
.org 0x53e0c
	str r0, [r4, #104]	@ 00053e0c a066
.org 0x53e0e
	ldrb r0, [r4, #15]	@ 00053e0e e07b
.org 0x53e10
	adds r0, #1	@ 00053e10 0130
.org 0x53e12
	strb r0, [r4, #15]	@ 00053e12 e073
.org 0x53e14
	adds r0, r4, #0	@ 00053e14 201c
.org 0x53e16
	bl 0x1cff0	@ 00053e16 c9f7ebf8
.org 0x53e1a
	ldr r0, [r4, #88]	@ 00053e1a a06d
.org 0x53e1c
	ldr r1, [r4, #96]	@ 00053e1c 216e
.org 0x53e1e
	adds r0, r0, r1	@ 00053e1e 4018
.org 0x53e20
	str r0, [r4, #88]	@ 00053e20 a065
.org 0x53e22
	ldr r1, [r4, #104]	@ 00053e22 a16e
.org 0x53e24
	cmp r0, r1	@ 00053e24 8842
.org 0x53e26
	blt.n 0x53e30	@ 00053e26 03db
.org 0x53e28
	movs r1, #0	@ 00053e28 0021
.org 0x53e2a
	movs r0, #2	@ 00053e2a 0220
.org 0x53e2c
	strb r0, [r4, #14]	@ 00053e2c a073
.org 0x53e2e
	strb r1, [r4, #15]	@ 00053e2e e173
.org 0x53e30
	pop {r4}	@ 00053e30 10bc
.org 0x53e32
	pop {r0}	@ 00053e32 01bc
.org 0x53e34
	bx r0	@ 00053e34 0047
