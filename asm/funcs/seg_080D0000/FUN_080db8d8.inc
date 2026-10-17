@ FUN_080db8d8  entry 0x080db8d8  size 20
.thumb
.org 0xdb8d8
FUN_080db8d8:
	push {lr}	@ 000db8d8 00b5
.org 0xdb8da
	ldr r2, [pc, #16]	@ 000db8da 044a
.org 0xdb8dc
	ldrb r1, [r0, #16]	@ 000db8dc 017c
.org 0xdb8de
	lsls r1, r1, #2	@ 000db8de 8900
.org 0xdb8e0
	adds r1, r1, r2	@ 000db8e0 8918
.org 0xdb8e2
	ldr r1, [r1, #0]	@ 000db8e2 0968
.org 0xdb8e4
	bl 0x128f80	@ 000db8e4 4df04cfb
.org 0xdb8e8
	pop {r0}	@ 000db8e8 01bc
.org 0xdb8ea
	bx r0	@ 000db8ea 0047
