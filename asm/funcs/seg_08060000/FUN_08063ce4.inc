@ FUN_08063ce4  entry 0x08063ce4  size 20
.thumb
.org 0x63ce4
FUN_08063ce4:
	push {lr}	@ 00063ce4 00b5
.org 0x63ce6
	ldr r2, [pc, #16]	@ 00063ce6 044a
.org 0x63ce8
	ldrb r1, [r0, #14]	@ 00063ce8 817b
.org 0x63cea
	lsls r1, r1, #2	@ 00063cea 8900
.org 0x63cec
	adds r1, r1, r2	@ 00063cec 8918
.org 0x63cee
	ldr r1, [r1, #0]	@ 00063cee 0968
.org 0x63cf0
	bl 0x128f80	@ 00063cf0 c5f046f9
.org 0x63cf4
	pop {r0}	@ 00063cf4 01bc
.org 0x63cf6
	bx r0	@ 00063cf6 0047
