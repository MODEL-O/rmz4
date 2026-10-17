@ FUN_080a32fc  entry 0x080a32fc  size 20
.thumb
.org 0xa32fc
FUN_080a32fc:
	push {lr}	@ 000a32fc 00b5
.org 0xa32fe
	ldr r2, [pc, #16]	@ 000a32fe 044a
.org 0xa3300
	ldrb r1, [r0, #16]	@ 000a3300 017c
.org 0xa3302
	lsls r1, r1, #2	@ 000a3302 8900
.org 0xa3304
	adds r1, r1, r2	@ 000a3304 8918
.org 0xa3306
	ldr r1, [r1, #0]	@ 000a3306 0968
.org 0xa3308
	bl 0x128f80	@ 000a3308 85f03afe
.org 0xa330c
	pop {r0}	@ 000a330c 01bc
.org 0xa330e
	bx r0	@ 000a330e 0047
