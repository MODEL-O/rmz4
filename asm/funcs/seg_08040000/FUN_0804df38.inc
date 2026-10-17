@ FUN_0804df38  entry 0x0804df38  size 42
.thumb
.org 0x4df38
FUN_0804df38:
	push {lr}	@ 0004df38 00b5
.org 0x4df3a
	adds r2, r0, #0	@ 0004df3a 021c
.org 0x4df3c
	ldr r0, [r2, #20]	@ 0004df3c 5069
.org 0x4df3e
	movs r1, #1	@ 0004df3e 0121
.org 0x4df40
	ands r0, r1	@ 0004df40 0840
.org 0x4df42
	cmp r0, #0	@ 0004df42 0028
.org 0x4df44
	beq.n 0x4df5e	@ 0004df44 0bd0
.org 0x4df46
	ldr r0, [r2, #12]	@ 0004df46 d068
.org 0x4df48
	ldr r0, [r0, #44]	@ 0004df48 c06a
.org 0x4df4a
	ldr r2, [r2, #44]	@ 0004df4a d26a
.org 0x4df4c
	movs r3, #0	@ 0004df4c 0023
.org 0x4df4e
	ldr r1, [r0, #84]	@ 0004df4e 416d
.org 0x4df50
	ldr r0, [r2, #84]	@ 0004df50 506d
.org 0x4df52
	cmp r1, r0	@ 0004df52 8142
.org 0x4df54
	ble.n 0x4df58	@ 0004df54 00dd
.org 0x4df56
	movs r3, #1	@ 0004df56 0123
.org 0x4df58
	adds r0, r2, #0	@ 0004df58 101c
.org 0x4df5a
	adds r0, #188	@ 0004df5a bc30
.org 0x4df5c
	strb r3, [r0, #0]	@ 0004df5c 0370
.org 0x4df5e
	pop {r0}	@ 0004df5e 01bc
.org 0x4df60
	bx r0	@ 0004df60 0047
