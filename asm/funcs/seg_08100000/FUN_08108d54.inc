@ FUN_08108d54  entry 0x08108d54  size 44
.thumb
.org 0x108d54
FUN_08108d54:
	push {r4, r5, r6, lr}	@ 00108d54 70b5
.org 0x108d56
	adds r4, r0, #0	@ 00108d56 041c
.org 0x108d58
	adds r5, r1, #0	@ 00108d58 0d1c
.org 0x108d5a
	ldr r1, [pc, #36]	@ 00108d5a 0949
.org 0x108d5c
	adds r0, r4, r1	@ 00108d5c 6018
.org 0x108d5e
	adds r1, r5, #0	@ 00108d5e 291c
.org 0x108d60
	bl 0x8534	@ 00108d60 fff6e8fb
.org 0x108d64
	adds r6, r0, #0	@ 00108d64 061c
.org 0x108d66
	movs r0, #224	@ 00108d66 e020
.org 0x108d68
	lsls r0, r0, #3	@ 00108d68 c000
.org 0x108d6a
	adds r4, r4, r0	@ 00108d6a 2418
.org 0x108d6c
	adds r0, r4, #0	@ 00108d6c 201c
.org 0x108d6e
	adds r1, r5, #0	@ 00108d6e 291c
.org 0x108d70
	bl 0x8534	@ 00108d70 fff6e0fb
.org 0x108d74
	cmp r0, r6	@ 00108d74 b042
.org 0x108d76
	ble.n 0x108d7a	@ 00108d76 00dd
.org 0x108d78
	adds r0, r6, #0	@ 00108d78 301c
.org 0x108d7a
	pop {r4, r5, r6}	@ 00108d7a 70bc
.org 0x108d7c
	pop {r1}	@ 00108d7c 02bc
.org 0x108d7e
	bx r1	@ 00108d7e 0847
