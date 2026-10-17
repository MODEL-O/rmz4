@ FUN_0810adec  entry 0x0810adec  size 20
.thumb
.org 0x10adec
FUN_0810adec:
	ldr r2, [pc, #16]	@ 0010adec 044a
.org 0x10adee
	ldrb r1, [r0, #9]	@ 0010adee 417a
.org 0x10adf0
	lsls r1, r1, #2	@ 0010adf0 8900
.org 0x10adf2
	adds r1, r1, r2	@ 0010adf2 8918
.org 0x10adf4
	movs r2, #4	@ 0010adf4 0422
.org 0x10adf6
	str r2, [r0, #12]	@ 0010adf6 c260
.org 0x10adf8
	ldr r1, [r1, #0]	@ 0010adf8 0968
.org 0x10adfa
	ldr r1, [r1, #16]	@ 0010adfa 0969
.org 0x10adfc
	str r1, [r0, #20]	@ 0010adfc 4161
.org 0x10adfe
	bx lr	@ 0010adfe 7047
