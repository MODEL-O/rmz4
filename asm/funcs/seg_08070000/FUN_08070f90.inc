@ FUN_08070f90  entry 0x08070f90  size 30
.thumb
.org 0x70f90
FUN_08070f90:
	push {r4, lr}	@ 00070f90 10b5
.org 0x70f92
	adds r4, r0, #0	@ 00070f92 041c
.org 0x70f94
	bl 0x73bcc	@ 00070f94 02f01afe
.org 0x70f98
	ldr r1, [pc, #20]	@ 00070f98 0549
.org 0x70f9a
	ldrb r0, [r4, #13]	@ 00070f9a 607b
.org 0x70f9c
	lsls r0, r0, #2	@ 00070f9c 8000
.org 0x70f9e
	adds r0, r0, r1	@ 00070f9e 4018
.org 0x70fa0
	ldr r1, [r0, #0]	@ 00070fa0 0168
.org 0x70fa2
	adds r0, r4, #0	@ 00070fa2 201c
.org 0x70fa4
	bl 0x128f80	@ 00070fa4 b7f0ecff
.org 0x70fa8
	pop {r4}	@ 00070fa8 10bc
.org 0x70faa
	pop {r0}	@ 00070faa 01bc
.org 0x70fac
	bx r0	@ 00070fac 0047
