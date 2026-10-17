@ FUN_080abe58  entry 0x080abe58  size 26
.thumb
.org 0xabe58
FUN_080abe58:
	.byte 0x00,0xb5	@ 000abe58 (raw)
.org 0xabe5a
	ldr r2, [pc, #24]	@ 000abe5a 064a
.org 0xabe5c
	movs r1, #0	@ 000abe5c 0021
.org 0xabe5e
	strh r1, [r2, #0]	@ 000abe5e 1180
.org 0xabe60
	ldr r3, [pc, #20]	@ 000abe60 054b
.org 0xabe62
	ldrh r2, [r3, #0]	@ 000abe62 1a88
.org 0xabe64
	ldr r1, [pc, #20]	@ 000abe64 0549
.org 0xabe66
	ands r1, r2	@ 000abe66 1140
.org 0xabe68
	strh r1, [r3, #0]	@ 000abe68 1980
.org 0xabe6a
	bl 0x7f8ec	@ 000abe6a d3f73ffd
.org 0xabe6e
	pop {r0}	@ 000abe6e 01bc
.org 0xabe70
	bx r0	@ 000abe70 0047
