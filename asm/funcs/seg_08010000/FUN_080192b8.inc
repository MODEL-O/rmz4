@ FUN_080192b8  entry 0x080192b8  size 52
.thumb
.org 0x192b8
FUN_080192b8:
	push {r4, r5, lr}	@ 000192b8 30b5
.org 0x192ba
	ldr r3, [r0, #92]	@ 000192ba c36d
.org 0x192bc
	lsls r3, r3, #16	@ 000192bc 1b04
.org 0x192be
	lsrs r3, r3, #20	@ 000192be 1b0d
.org 0x192c0
	lsls r3, r3, #2	@ 000192c0 9b00
.org 0x192c2
	ldr r4, [pc, #40]	@ 000192c2 0a4c
.org 0x192c4
	adds r5, r3, r4	@ 000192c4 1d19
.org 0x192c6
	ldr r2, [r0, #52]	@ 000192c6 426b
.org 0x192c8
	ldr r1, [r0, #68]	@ 000192c8 416c
.org 0x192ca
	muls r2, r1	@ 000192ca 4a43
.org 0x192cc
	asrs r2, r2, #8	@ 000192cc 1212
.org 0x192ce
	ldr r1, [r0, #76]	@ 000192ce c16c
.org 0x192d0
	adds r1, r1, r2	@ 000192d0 8918
.org 0x192d2
	strh r1, [r5, #0]	@ 000192d2 2980
.org 0x192d4
	adds r4, #2	@ 000192d4 0234
.org 0x192d6
	adds r3, r3, r4	@ 000192d6 1b19
.org 0x192d8
	ldr r2, [r0, #56]	@ 000192d8 826b
.org 0x192da
	ldr r1, [r0, #72]	@ 000192da 816c
.org 0x192dc
	muls r1, r2	@ 000192dc 5143
.org 0x192de
	asrs r1, r1, #8	@ 000192de 0912
.org 0x192e0
	ldr r0, [r0, #80]	@ 000192e0 006d
.org 0x192e2
	adds r0, r0, r1	@ 000192e2 4018
.org 0x192e4
	strh r0, [r3, #0]	@ 000192e4 1880
.org 0x192e6
	pop {r4, r5}	@ 000192e6 30bc
.org 0x192e8
	pop {r0}	@ 000192e8 01bc
.org 0x192ea
	bx r0	@ 000192ea 0047
