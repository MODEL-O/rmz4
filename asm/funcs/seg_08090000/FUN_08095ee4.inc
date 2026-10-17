@ FUN_08095ee4  entry 0x08095ee4  size 40
.thumb
.org 0x95ee4
FUN_08095ee4:
	push {lr}	@ 00095ee4 00b5
.org 0x95ee6
	ldr r2, [pc, #36]	@ 00095ee6 094a
.org 0x95ee8
	ldrb r1, [r0, #9]	@ 00095ee8 417a
.org 0x95eea
	lsls r1, r1, #2	@ 00095eea 8900
.org 0x95eec
	adds r1, r1, r2	@ 00095eec 8918
.org 0x95eee
	movs r2, #1	@ 00095eee 0122
.org 0x95ef0
	str r2, [r0, #12]	@ 00095ef0 c260
.org 0x95ef2
	ldr r1, [r1, #0]	@ 00095ef2 0968
.org 0x95ef4
	ldr r1, [r1, #4]	@ 00095ef4 4968
.org 0x95ef6
	str r1, [r0, #20]	@ 00095ef6 4161
.org 0x95ef8
	ldrb r2, [r0, #10]	@ 00095ef8 827a
.org 0x95efa
	movs r1, #254	@ 00095efa fe21
.org 0x95efc
	ands r1, r2	@ 00095efc 1140
.org 0x95efe
	movs r2, #2	@ 00095efe 0222
.org 0x95f00
	orrs r1, r2	@ 00095f00 1143
.org 0x95f02
	strb r1, [r0, #10]	@ 00095f02 8172
.org 0x95f04
	bl 0x95fc4	@ 00095f04 00f05ef8
.org 0x95f08
	pop {r0}	@ 00095f08 01bc
.org 0x95f0a
	bx r0	@ 00095f0a 0047
