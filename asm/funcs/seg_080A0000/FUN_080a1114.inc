@ FUN_080a1114  entry 0x080a1114  size 20
.thumb
.org 0xa1114
FUN_080a1114:
	push {lr}	@ 000a1114 00b5
.org 0xa1116
	ldr r2, [pc, #16]	@ 000a1116 044a
.org 0xa1118
	ldrb r1, [r0, #16]	@ 000a1118 017c
.org 0xa111a
	lsls r1, r1, #2	@ 000a111a 8900
.org 0xa111c
	adds r1, r1, r2	@ 000a111c 8918
.org 0xa111e
	ldr r1, [r1, #0]	@ 000a111e 0968
.org 0xa1120
	bl 0x128f80	@ 000a1120 87f02eff
.org 0xa1124
	pop {r0}	@ 000a1124 01bc
.org 0xa1126
	bx r0	@ 000a1126 0047
