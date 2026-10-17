@ FUN_081270e4  entry 0x081270e4  size 52
.thumb
.org 0x1270e4
FUN_081270e4:
	ldr r0, [pc, #664]	@ 001270e4 a648
.org 0x1270e6
	ldr r0, [r0, #0]	@ 001270e6 0068
.org 0x1270e8
	ldr r2, [pc, #664]	@ 001270e8 a64a
.org 0x1270ea
	ldr r3, [r0, #0]	@ 001270ea 0368
.org 0x1270ec
	subs r3, r3, r2	@ 001270ec 9b1a
.org 0x1270ee
	cmp r3, #1	@ 001270ee 012b
.org 0x1270f0
	bhi.n 0x127116	@ 001270f0 11d8
.org 0x1270f2
	ldrb r1, [r0, #4]	@ 001270f2 0179
.org 0x1270f4
	subs r1, #1	@ 001270f4 0139
.org 0x1270f6
	strb r1, [r0, #4]	@ 001270f6 0171
.org 0x1270f8
	bgt.n 0x127116	@ 001270f8 0ddc
.org 0x1270fa
	ldrb r1, [r0, #11]	@ 001270fa c17a
.org 0x1270fc
	strb r1, [r0, #4]	@ 001270fc 0171
.org 0x1270fe
	ldr r2, [pc, #24]	@ 001270fe 064a
.org 0x127100
	ldr r1, [r2, #8]	@ 00127100 9168
.org 0x127102
	lsls r1, r1, #7	@ 00127102 c901
.org 0x127104
	bcc.n 0x12710a	@ 00127104 01d3
.org 0x127106
	ldr r1, [pc, #20]	@ 00127106 0549
.org 0x127108
	str r1, [r2, #8]	@ 00127108 9160
.org 0x12710a
	movs r1, #4	@ 0012710a 0421
.org 0x12710c
	lsls r1, r1, #8	@ 0012710c 0902
.org 0x12710e
	strh r1, [r2, #10]	@ 0012710e 5181
.org 0x127110
	movs r1, #182	@ 00127110 b621
.org 0x127112
	lsls r1, r1, #8	@ 00127112 0902
.org 0x127114
	strh r1, [r2, #10]	@ 00127114 5181
.org 0x127116
	bx lr	@ 00127116 7047
