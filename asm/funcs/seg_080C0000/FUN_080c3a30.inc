@ FUN_080c3a30  entry 0x080c3a30  size 20
.thumb
.org 0xc3a30
FUN_080c3a30:
	push {lr}	@ 000c3a30 00b5
.org 0xc3a32
	ldr r2, [pc, #16]	@ 000c3a32 044a
.org 0xc3a34
	ldrb r1, [r0, #16]	@ 000c3a34 017c
.org 0xc3a36
	lsls r1, r1, #2	@ 000c3a36 8900
.org 0xc3a38
	adds r1, r1, r2	@ 000c3a38 8918
.org 0xc3a3a
	ldr r1, [r1, #0]	@ 000c3a3a 0968
.org 0xc3a3c
	bl 0x128f80	@ 000c3a3c 65f0a0fa
.org 0xc3a40
	pop {r0}	@ 000c3a40 01bc
.org 0xc3a42
	bx r0	@ 000c3a42 0047
