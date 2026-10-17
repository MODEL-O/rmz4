@ FUN_080b11ec  entry 0x080b11ec  size 38
.thumb
.org 0xb11ec
FUN_080b11ec:
	push {lr}	@ 000b11ec 00b5
.org 0xb11ee
	ldr r2, [pc, #36]	@ 000b11ee 094a
.org 0xb11f0
	ldrb r1, [r0, #9]	@ 000b11f0 417a
.org 0xb11f2
	lsls r1, r1, #2	@ 000b11f2 8900
.org 0xb11f4
	adds r1, r1, r2	@ 000b11f4 8918
.org 0xb11f6
	movs r2, #1	@ 000b11f6 0122
.org 0xb11f8
	str r2, [r0, #12]	@ 000b11f8 c260
.org 0xb11fa
	ldr r1, [r1, #0]	@ 000b11fa 0968
.org 0xb11fc
	ldr r1, [r1, #4]	@ 000b11fc 4968
.org 0xb11fe
	str r1, [r0, #20]	@ 000b11fe 4161
.org 0xb1200
	adds r2, r0, #0	@ 000b1200 021c
.org 0xb1202
	adds r2, #194	@ 000b1202 c232
.org 0xb1204
	movs r1, #0	@ 000b1204 0021
.org 0xb1206
	strb r1, [r2, #0]	@ 000b1206 1170
.org 0xb1208
	strb r1, [r0, #18]	@ 000b1208 8174
.org 0xb120a
	bl 0xb108c	@ 000b120a fff73fff
.org 0xb120e
	pop {r0}	@ 000b120e 01bc
.org 0xb1210
	bx r0	@ 000b1210 0047
