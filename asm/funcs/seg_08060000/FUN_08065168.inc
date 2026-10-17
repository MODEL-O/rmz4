@ FUN_08065168  entry 0x08065168  size 20
.thumb
.org 0x65168
FUN_08065168:
	push {lr}	@ 00065168 00b5
.org 0x6516a
	ldr r2, [pc, #16]	@ 0006516a 044a
.org 0x6516c
	ldrb r1, [r0, #14]	@ 0006516c 817b
.org 0x6516e
	lsls r1, r1, #2	@ 0006516e 8900
.org 0x65170
	adds r1, r1, r2	@ 00065170 8918
.org 0x65172
	ldr r1, [r1, #0]	@ 00065172 0968
.org 0x65174
	bl 0x128f80	@ 00065174 c3f004ff
.org 0x65178
	pop {r0}	@ 00065178 01bc
.org 0x6517a
	bx r0	@ 0006517a 0047
