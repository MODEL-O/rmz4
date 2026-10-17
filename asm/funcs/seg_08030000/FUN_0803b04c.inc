@ FUN_0803b04c  entry 0x0803b04c  size 48
.thumb
.org 0x3b04c
FUN_0803b04c:
	push {lr}	@ 0003b04c 00b5
.org 0x3b04e
	adds r2, r0, #0	@ 0003b04e 021c
.org 0x3b050
	adds r3, r1, #0	@ 0003b050 0b1c
.org 0x3b052
	ldrb r1, [r2, #10]	@ 0003b052 917a
.org 0x3b054
	movs r0, #16	@ 0003b054 1020
.org 0x3b056
	ands r0, r1	@ 0003b056 0840
.org 0x3b058
	cmp r0, #0	@ 0003b058 0028
.org 0x3b05a
	beq.n 0x3b064	@ 0003b05a 03d0
.org 0x3b05c
	ldr r0, [r2, #84]	@ 0003b05c 506d
.org 0x3b05e
	movs r1, #176	@ 0003b05e b021
.org 0x3b060
	lsls r1, r1, #4	@ 0003b060 0901
.org 0x3b062
	b.n 0x3b068	@ 0003b062 01e0
.org 0x3b064
	ldr r0, [r2, #84]	@ 0003b064 506d
.org 0x3b066
	ldr r1, [pc, #20]	@ 0003b066 0549
.org 0x3b068
	adds r0, r0, r1	@ 0003b068 4018
.org 0x3b06a
	str r0, [r3, #0]	@ 0003b06a 1860
.org 0x3b06c
	ldr r0, [r2, #88]	@ 0003b06c 906d
.org 0x3b06e
	movs r1, #128	@ 0003b06e 8021
.org 0x3b070
	lsls r1, r1, #3	@ 0003b070 c900
.org 0x3b072
	adds r0, r0, r1	@ 0003b072 4018
.org 0x3b074
	str r0, [r3, #4]	@ 0003b074 5860
.org 0x3b076
	movs r0, #1	@ 0003b076 0120
.org 0x3b078
	pop {r1}	@ 0003b078 02bc
.org 0x3b07a
	bx r1	@ 0003b07a 0847
