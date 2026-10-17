@ FUN_08113fa4  entry 0x08113fa4  size 32
.thumb
.org 0x113fa4
FUN_08113fa4:
	push {r4, r5, r6, lr}	@ 00113fa4 70b5
.org 0x113fa6
	adds r6, r0, #0	@ 00113fa6 061c
.org 0x113fa8
	ldrb r0, [r6, #2]	@ 00113fa8 b078
.org 0x113faa
	cmp r0, #9	@ 00113faa 0928
.org 0x113fac
	bls.n 0x113fb0	@ 00113fac 00d9
.org 0x113fae
	b.n 0x1142fc	@ 00113fae a5e1
.org 0x113fb0
	lsls r0, r0, #2	@ 00113fb0 8000
.org 0x113fb2
	ldr r1, [pc, #8]	@ 00113fb2 0249
.org 0x113fb4
	adds r0, r0, r1	@ 00113fb4 4018
.org 0x113fb6
	ldr r0, [r0, #0]	@ 00113fb6 0068
.org 0x113fb8
	mov pc, r0	@ 00113fb8 8746
.org 0x113fba
	.byte 0x00	@ 00113fba data
.org 0x113fbb
	.byte 0x00	@ 00113fbb data
.org 0x113fbc
	.byte 0xc0,0x3f,0x11,0x08	@ 00113fbc data
.org 0x113fc0
	.byte 0xe8,0x3f,0x11,0x08	@ 00113fc0 data
