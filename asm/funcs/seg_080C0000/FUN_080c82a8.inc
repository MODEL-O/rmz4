@ FUN_080c82a8  entry 0x080c82a8  size 20
.thumb
.org 0xc82a8
FUN_080c82a8:
	push {lr}	@ 000c82a8 00b5
.org 0xc82aa
	ldr r2, [pc, #16]	@ 000c82aa 044a
.org 0xc82ac
	ldrb r1, [r0, #16]	@ 000c82ac 017c
.org 0xc82ae
	lsls r1, r1, #2	@ 000c82ae 8900
.org 0xc82b0
	adds r1, r1, r2	@ 000c82b0 8918
.org 0xc82b2
	ldr r1, [r1, #0]	@ 000c82b2 0968
.org 0xc82b4
	bl 0x128f80	@ 000c82b4 60f064fe
.org 0xc82b8
	pop {r0}	@ 000c82b8 01bc
.org 0xc82ba
	bx r0	@ 000c82ba 0047
