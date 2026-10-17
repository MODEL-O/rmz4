@ FUN_08008c38  entry 0x08008c38  size 20
.thumb
.org 0x8c38
FUN_08008c38:
	push {lr}	@ 00008c38 00b5
.org 0x8c3a
	adds r3, r0, #0	@ 00008c3a 031c
.org 0x8c3c
	adds r2, r1, #0	@ 00008c3c 0a1c
.org 0x8c3e
	movs r0, #1	@ 00008c3e 0120
.org 0x8c40
	negs r0, r0	@ 00008c40 4042
.org 0x8c42
	adds r1, r3, #0	@ 00008c42 191c
.org 0x8c44
	bl 0x8c4c	@ 00008c44 00f002f8
.org 0x8c48
	pop {r1}	@ 00008c48 02bc
.org 0x8c4a
	bx r1	@ 00008c4a 0847
