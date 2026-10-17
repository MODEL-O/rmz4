@ FUN_080da6ac  entry 0x080da6ac  size 20
.thumb
.org 0xda6ac
FUN_080da6ac:
	push {lr}	@ 000da6ac 00b5
.org 0xda6ae
	ldr r2, [pc, #16]	@ 000da6ae 044a
.org 0xda6b0
	ldrb r1, [r0, #16]	@ 000da6b0 017c
.org 0xda6b2
	lsls r1, r1, #2	@ 000da6b2 8900
.org 0xda6b4
	adds r1, r1, r2	@ 000da6b4 8918
.org 0xda6b6
	ldr r1, [r1, #0]	@ 000da6b6 0968
.org 0xda6b8
	bl 0x128f80	@ 000da6b8 4ef062fc
.org 0xda6bc
	pop {r0}	@ 000da6bc 01bc
.org 0xda6be
	bx r0	@ 000da6be 0047
