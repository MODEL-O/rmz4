@ FUN_080d0f7c  entry 0x080d0f7c  size 36
.thumb
.org 0xd0f7c
FUN_080d0f7c:
	push {lr}	@ 000d0f7c 00b5
.org 0xd0f7e
	ldrb r2, [r0, #10]	@ 000d0f7e 827a
.org 0xd0f80
	movs r1, #1	@ 000d0f80 0121
.org 0xd0f82
	orrs r1, r2	@ 000d0f82 1143
.org 0xd0f84
	strb r1, [r0, #10]	@ 000d0f84 8172
.org 0xd0f86
	ldr r2, [pc, #24]	@ 000d0f86 064a
.org 0xd0f88
	ldrb r1, [r0, #9]	@ 000d0f88 417a
.org 0xd0f8a
	lsls r1, r1, #2	@ 000d0f8a 8900
.org 0xd0f8c
	adds r1, r1, r2	@ 000d0f8c 8918
.org 0xd0f8e
	movs r2, #1	@ 000d0f8e 0122
.org 0xd0f90
	str r2, [r0, #12]	@ 000d0f90 c260
.org 0xd0f92
	ldr r1, [r1, #0]	@ 000d0f92 0968
.org 0xd0f94
	ldr r1, [r1, #4]	@ 000d0f94 4968
.org 0xd0f96
	str r1, [r0, #20]	@ 000d0f96 4161
.org 0xd0f98
	bl 0xd0fa4	@ 000d0f98 00f004f8
.org 0xd0f9c
	pop {r0}	@ 000d0f9c 01bc
.org 0xd0f9e
	bx r0	@ 000d0f9e 0047
