@ FUN_081103b8  entry 0x081103b8  size 20
.thumb
.org 0x1103b8
FUN_081103b8:
	push {lr}	@ 001103b8 00b5
.org 0x1103ba
	ldr r2, [pc, #16]	@ 001103ba 044a
.org 0x1103bc
	ldrb r1, [r0, #6]	@ 001103bc 8179
.org 0x1103be
	lsls r1, r1, #2	@ 001103be 8900
.org 0x1103c0
	adds r1, r1, r2	@ 001103c0 8918
.org 0x1103c2
	ldr r1, [r1, #0]	@ 001103c2 0968
.org 0x1103c4
	bl 0x128f80	@ 001103c4 18f0dcfd
.org 0x1103c8
	pop {r0}	@ 001103c8 01bc
.org 0x1103ca
	bx r0	@ 001103ca 0047
