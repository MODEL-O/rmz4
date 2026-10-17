@ FUN_080a4a30  entry 0x080a4a30  size 20
.thumb
.org 0xa4a30
FUN_080a4a30:
	push {lr}	@ 000a4a30 00b5
.org 0xa4a32
	ldr r2, [pc, #16]	@ 000a4a32 044a
.org 0xa4a34
	ldrb r1, [r0, #13]	@ 000a4a34 417b
.org 0xa4a36
	lsls r1, r1, #2	@ 000a4a36 8900
.org 0xa4a38
	adds r1, r1, r2	@ 000a4a38 8918
.org 0xa4a3a
	ldr r1, [r1, #0]	@ 000a4a3a 0968
.org 0xa4a3c
	bl 0x128f80	@ 000a4a3c 84f0a0fa
.org 0xa4a40
	pop {r0}	@ 000a4a40 01bc
.org 0xa4a42
	bx r0	@ 000a4a42 0047
