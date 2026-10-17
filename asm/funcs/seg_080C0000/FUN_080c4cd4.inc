@ FUN_080c4cd4  entry 0x080c4cd4  size 20
.thumb
.org 0xc4cd4
FUN_080c4cd4:
	push {lr}	@ 000c4cd4 00b5
.org 0xc4cd6
	ldr r2, [pc, #16]	@ 000c4cd6 044a
.org 0xc4cd8
	ldrb r1, [r0, #16]	@ 000c4cd8 017c
.org 0xc4cda
	lsls r1, r1, #2	@ 000c4cda 8900
.org 0xc4cdc
	adds r1, r1, r2	@ 000c4cdc 8918
.org 0xc4cde
	ldr r1, [r1, #0]	@ 000c4cde 0968
.org 0xc4ce0
	bl 0x128f80	@ 000c4ce0 64f04ef9
.org 0xc4ce4
	pop {r0}	@ 000c4ce4 01bc
.org 0xc4ce6
	bx r0	@ 000c4ce6 0047
