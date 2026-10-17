@ FUN_08044070  entry 0x08044070  size 42
.thumb
.org 0x44070
FUN_08044070:
	push {lr}	@ 00044070 00b5
.org 0x44072
	adds r2, r0, #0	@ 00044072 021c
.org 0x44074
	ldr r0, [r2, #20]	@ 00044074 5069
.org 0x44076
	movs r1, #1	@ 00044076 0121
.org 0x44078
	ands r0, r1	@ 00044078 0840
.org 0x4407a
	cmp r0, #0	@ 0004407a 0028
.org 0x4407c
	beq.n 0x44096	@ 0004407c 0bd0
.org 0x4407e
	ldr r0, [r2, #12]	@ 0004407e d068
.org 0x44080
	ldr r0, [r0, #44]	@ 00044080 c06a
.org 0x44082
	ldr r2, [r2, #44]	@ 00044082 d26a
.org 0x44084
	movs r3, #0	@ 00044084 0023
.org 0x44086
	ldr r1, [r0, #84]	@ 00044086 416d
.org 0x44088
	ldr r0, [r2, #84]	@ 00044088 506d
.org 0x4408a
	cmp r1, r0	@ 0004408a 8142
.org 0x4408c
	ble.n 0x44090	@ 0004408c 00dd
.org 0x4408e
	movs r3, #1	@ 0004408e 0123
.org 0x44090
	adds r0, r2, #0	@ 00044090 101c
.org 0x44092
	adds r0, #188	@ 00044092 bc30
.org 0x44094
	strb r3, [r0, #0]	@ 00044094 0370
.org 0x44096
	pop {r0}	@ 00044096 01bc
.org 0x44098
	bx r0	@ 00044098 0047
