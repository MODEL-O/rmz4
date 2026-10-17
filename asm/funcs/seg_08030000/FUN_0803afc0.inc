@ FUN_0803afc0  entry 0x0803afc0  size 28
.thumb
.org 0x3afc0
FUN_0803afc0:
	push {lr}	@ 0003afc0 00b5
.org 0x3afc2
	adds r2, r0, #0	@ 0003afc2 021c
.org 0x3afc4
	ldrb r0, [r2, #17]	@ 0003afc4 507c
.org 0x3afc6
	cmp r0, #0	@ 0003afc6 0028
.org 0x3afc8
	bne.n 0x3afd6	@ 0003afc8 05d1
.org 0x3afca
	ldr r0, [r2, #84]	@ 0003afca 506d
.org 0x3afcc
	str r0, [r1, #0]	@ 0003afcc 0860
.org 0x3afce
	ldr r0, [r2, #88]	@ 0003afce 906d
.org 0x3afd0
	str r0, [r1, #4]	@ 0003afd0 4860
.org 0x3afd2
	movs r0, #1	@ 0003afd2 0120
.org 0x3afd4
	b.n 0x3afd8	@ 0003afd4 00e0
.org 0x3afd6
	movs r0, #0	@ 0003afd6 0020
.org 0x3afd8
	pop {r1}	@ 0003afd8 02bc
.org 0x3afda
	bx r1	@ 0003afda 0847
