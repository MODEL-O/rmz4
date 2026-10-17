@ FUN_080c7468  entry 0x080c7468  size 20
.thumb
.org 0xc7468
FUN_080c7468:
	push {lr}	@ 000c7468 00b5
.org 0xc746a
	ldr r2, [pc, #16]	@ 000c746a 044a
.org 0xc746c
	ldrb r1, [r0, #16]	@ 000c746c 017c
.org 0xc746e
	lsls r1, r1, #2	@ 000c746e 8900
.org 0xc7470
	adds r1, r1, r2	@ 000c7470 8918
.org 0xc7472
	ldr r1, [r1, #0]	@ 000c7472 0968
.org 0xc7474
	bl 0x128f80	@ 000c7474 61f084fd
.org 0xc7478
	pop {r0}	@ 000c7478 01bc
.org 0xc747a
	bx r0	@ 000c747a 0047
