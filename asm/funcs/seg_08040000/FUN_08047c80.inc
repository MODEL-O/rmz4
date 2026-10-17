@ FUN_08047c80  entry 0x08047c80  size 42
.thumb
.org 0x47c80
FUN_08047c80:
	push {lr}	@ 00047c80 00b5
.org 0x47c82
	adds r2, r0, #0	@ 00047c82 021c
.org 0x47c84
	ldr r0, [r2, #20]	@ 00047c84 5069
.org 0x47c86
	movs r1, #1	@ 00047c86 0121
.org 0x47c88
	ands r0, r1	@ 00047c88 0840
.org 0x47c8a
	cmp r0, #0	@ 00047c8a 0028
.org 0x47c8c
	beq.n 0x47ca6	@ 00047c8c 0bd0
.org 0x47c8e
	ldr r0, [r2, #12]	@ 00047c8e d068
.org 0x47c90
	ldr r0, [r0, #44]	@ 00047c90 c06a
.org 0x47c92
	ldr r2, [r2, #44]	@ 00047c92 d26a
.org 0x47c94
	movs r3, #0	@ 00047c94 0023
.org 0x47c96
	ldr r1, [r0, #84]	@ 00047c96 416d
.org 0x47c98
	ldr r0, [r2, #84]	@ 00047c98 506d
.org 0x47c9a
	cmp r1, r0	@ 00047c9a 8142
.org 0x47c9c
	ble.n 0x47ca0	@ 00047c9c 00dd
.org 0x47c9e
	movs r3, #1	@ 00047c9e 0123
.org 0x47ca0
	adds r0, r2, #0	@ 00047ca0 101c
.org 0x47ca2
	adds r0, #188	@ 00047ca2 bc30
.org 0x47ca4
	strb r3, [r0, #0]	@ 00047ca4 0370
.org 0x47ca6
	pop {r0}	@ 00047ca6 01bc
.org 0x47ca8
	bx r0	@ 00047ca8 0047
