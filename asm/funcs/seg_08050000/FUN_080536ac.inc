@ FUN_080536ac  entry 0x080536ac  size 20
.thumb
.org 0x536ac
FUN_080536ac:
	push {lr}	@ 000536ac 00b5
.org 0x536ae
	ldr r2, [pc, #16]	@ 000536ae 044a
.org 0x536b0
	ldrb r1, [r0, #14]	@ 000536b0 817b
.org 0x536b2
	lsls r1, r1, #2	@ 000536b2 8900
.org 0x536b4
	adds r1, r1, r2	@ 000536b4 8918
.org 0x536b6
	ldr r1, [r1, #0]	@ 000536b6 0968
.org 0x536b8
	bl 0x128f80	@ 000536b8 d5f062fc
.org 0x536bc
	pop {r0}	@ 000536bc 01bc
.org 0x536be
	bx r0	@ 000536be 0047
