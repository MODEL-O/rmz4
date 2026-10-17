@ FUN_08108d84  entry 0x08108d84  size 44
.thumb
.org 0x108d84
FUN_08108d84:
	push {r4, r5, r6, lr}	@ 00108d84 70b5
.org 0x108d86
	adds r4, r0, #0	@ 00108d86 041c
.org 0x108d88
	adds r5, r1, #0	@ 00108d88 0d1c
.org 0x108d8a
	ldr r1, [pc, #36]	@ 00108d8a 0949
.org 0x108d8c
	adds r0, r4, r1	@ 00108d8c 6018
.org 0x108d8e
	adds r1, r5, #0	@ 00108d8e 291c
.org 0x108d90
	bl 0x8748	@ 00108d90 fff6dafc
.org 0x108d94
	adds r6, r0, #0	@ 00108d94 061c
.org 0x108d96
	movs r0, #224	@ 00108d96 e020
.org 0x108d98
	lsls r0, r0, #3	@ 00108d98 c000
.org 0x108d9a
	adds r4, r4, r0	@ 00108d9a 2418
.org 0x108d9c
	adds r0, r4, #0	@ 00108d9c 201c
.org 0x108d9e
	adds r1, r5, #0	@ 00108d9e 291c
.org 0x108da0
	bl 0x8748	@ 00108da0 fff6d2fc
.org 0x108da4
	cmp r0, r6	@ 00108da4 b042
.org 0x108da6
	bge.n 0x108daa	@ 00108da6 00da
.org 0x108da8
	adds r0, r6, #0	@ 00108da8 301c
.org 0x108daa
	pop {r4, r5, r6}	@ 00108daa 70bc
.org 0x108dac
	pop {r1}	@ 00108dac 02bc
.org 0x108dae
	bx r1	@ 00108dae 0847
