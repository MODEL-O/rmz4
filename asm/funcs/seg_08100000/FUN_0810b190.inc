@ FUN_0810b190  entry 0x0810b190  size 20
.thumb
.org 0x10b190
FUN_0810b190:
	ldr r2, [pc, #16]	@ 0010b190 044a
.org 0x10b192
	ldrb r1, [r0, #9]	@ 0010b192 417a
.org 0x10b194
	lsls r1, r1, #2	@ 0010b194 8900
.org 0x10b196
	adds r1, r1, r2	@ 0010b196 8918
.org 0x10b198
	movs r2, #4	@ 0010b198 0422
.org 0x10b19a
	str r2, [r0, #12]	@ 0010b19a c260
.org 0x10b19c
	ldr r1, [r1, #0]	@ 0010b19c 0968
.org 0x10b19e
	ldr r1, [r1, #16]	@ 0010b19e 0969
.org 0x10b1a0
	str r1, [r0, #20]	@ 0010b1a0 4161
.org 0x10b1a2
	bx lr	@ 0010b1a2 7047
