@ FUN_080ea2fc  entry 0x080ea2fc  size 20
.thumb
.org 0xea2fc
FUN_080ea2fc:
	push {lr}	@ 000ea2fc 00b5
.org 0xea2fe
	ldr r2, [pc, #16]	@ 000ea2fe 044a
.org 0xea300
	ldrb r1, [r0, #13]	@ 000ea300 417b
.org 0xea302
	lsls r1, r1, #2	@ 000ea302 8900
.org 0xea304
	adds r1, r1, r2	@ 000ea304 8918
.org 0xea306
	ldr r1, [r1, #0]	@ 000ea306 0968
.org 0xea308
	bl 0x128f80	@ 000ea308 3ef03afe
.org 0xea30c
	pop {r0}	@ 000ea30c 01bc
.org 0xea30e
	bx r0	@ 000ea30e 0047
