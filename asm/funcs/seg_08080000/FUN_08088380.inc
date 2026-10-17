@ FUN_08088380  entry 0x08088380  size 20
.thumb
.org 0x88380
FUN_08088380:
	push {lr}	@ 00088380 00b5
.org 0x88382
	ldr r2, [pc, #16]	@ 00088382 044a
.org 0x88384
	ldrb r1, [r0, #14]	@ 00088384 817b
.org 0x88386
	lsls r1, r1, #2	@ 00088386 8900
.org 0x88388
	adds r1, r1, r2	@ 00088388 8918
.org 0x8838a
	ldr r1, [r1, #0]	@ 0008838a 0968
.org 0x8838c
	bl 0x128f80	@ 0008838c a0f0f8fd
.org 0x88390
	pop {r0}	@ 00088390 01bc
.org 0x88392
	bx r0	@ 00088392 0047
