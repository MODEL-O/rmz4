@ FUN_081009e0  entry 0x081009e0  size 20
.thumb
.org 0x1009e0
FUN_081009e0:
	ldr r2, [pc, #16]	@ 001009e0 044a
.org 0x1009e2
	ldrb r1, [r0, #9]	@ 001009e2 417a
.org 0x1009e4
	lsls r1, r1, #2	@ 001009e4 8900
.org 0x1009e6
	adds r1, r1, r2	@ 001009e6 8918
.org 0x1009e8
	movs r2, #4	@ 001009e8 0422
.org 0x1009ea
	str r2, [r0, #12]	@ 001009ea c260
.org 0x1009ec
	ldr r1, [r1, #0]	@ 001009ec 0968
.org 0x1009ee
	ldr r1, [r1, #16]	@ 001009ee 0969
.org 0x1009f0
	str r1, [r0, #20]	@ 001009f0 4161
.org 0x1009f2
	bx lr	@ 001009f2 7047
