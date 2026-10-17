@ FUN_080013b0  entry 0x080013b0  size 40
.thumb
.org 0x13b0
FUN_080013b0:
	push {lr}	@ 000013b0 00b5
.org 0x13b2
	ldr r3, [pc, #36]	@ 000013b2 094b
.org 0x13b4
	ldr r2, [pc, #36]	@ 000013b4 094a
.org 0x13b6
	adds r1, r3, r2	@ 000013b6 9918
.org 0x13b8
	ldr r2, [r1, #0]	@ 000013b8 0a68
.org 0x13ba
	lsls r1, r2, #1	@ 000013ba 5100
.org 0x13bc
	adds r1, r1, r2	@ 000013bc 8918
.org 0x13be
	lsls r1, r1, #3	@ 000013be c900
.org 0x13c0
	ldr r2, [pc, #28]	@ 000013c0 074a
.org 0x13c2
	adds r3, r3, r2	@ 000013c2 9b18
.org 0x13c4
	adds r1, r1, r3	@ 000013c4 c918
.org 0x13c6
	movs r2, #1	@ 000013c6 0122
.org 0x13c8
	strb r2, [r1, #1]	@ 000013c8 4a70
.org 0x13ca
	str r0, [r1, #4]	@ 000013ca 4860
.org 0x13cc
	ldr r0, [pc, #20]	@ 000013cc 0548
.org 0x13ce
	ldr r0, [r0, #0]	@ 000013ce 0068
.org 0x13d0
	bl 0x328	@ 000013d0 fef7aaff
.org 0x13d4
	pop {r0}	@ 000013d4 01bc
.org 0x13d6
	bx r0	@ 000013d6 0047
