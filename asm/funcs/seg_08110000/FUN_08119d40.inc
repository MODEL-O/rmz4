@ FUN_08119d40  entry 0x08119d40  size 26
.thumb
.org 0x119d40
FUN_08119d40:
	push {lr}	@ 00119d40 00b5
.org 0x119d42
	ldr r2, [pc, #24]	@ 00119d42 064a
.org 0x119d44
	ldrb r1, [r0, #3]	@ 00119d44 c178
.org 0x119d46
	lsls r1, r1, #2	@ 00119d46 8900
.org 0x119d48
	adds r1, r1, r2	@ 00119d48 8918
.org 0x119d4a
	ldr r1, [r1, #0]	@ 00119d4a 0968
.org 0x119d4c
	bl 0x128f80	@ 00119d4c 0ff018f9
.org 0x119d50
	movs r0, #67	@ 00119d50 4320
.org 0x119d52
	bl 0x25d8	@ 00119d52 e8f641fc
.org 0x119d56
	pop {r0}	@ 00119d56 01bc
.org 0x119d58
	bx r0	@ 00119d58 0047
