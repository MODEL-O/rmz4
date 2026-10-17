@ FUN_0801c040  entry 0x0801c040  size 32
.thumb
.org 0x1c040
FUN_0801c040:
	push {lr}	@ 0001c040 00b5
.org 0x1c042
	adds r0, #104	@ 0001c042 6830
.org 0x1c044
	ldrh r1, [r0, #0]	@ 0001c044 0188
.org 0x1c046
	subs r1, #1	@ 0001c046 0139
.org 0x1c048
	strh r1, [r0, #0]	@ 0001c048 0180
.org 0x1c04a
	lsls r1, r1, #16	@ 0001c04a 0904
.org 0x1c04c
	cmp r1, #0	@ 0001c04c 0029
.org 0x1c04e
	bne.n 0x1c05c	@ 0001c04e 05d1
.org 0x1c050
	ldr r1, [pc, #12]	@ 0001c050 0349
.org 0x1c052
	ldr r0, [pc, #16]	@ 0001c052 0448
.org 0x1c054
	adds r1, r1, r0	@ 0001c054 0918
.org 0x1c056
	ldrb r0, [r1, #0]	@ 0001c056 0878
.org 0x1c058
	adds r0, #1	@ 0001c058 0130
.org 0x1c05a
	strb r0, [r1, #0]	@ 0001c05a 0870
.org 0x1c05c
	pop {r0}	@ 0001c05c 01bc
.org 0x1c05e
	bx r0	@ 0001c05e 0047
