@ FUN_080d0ff4  entry 0x080d0ff4  size 66
.thumb
.org 0xd0ff4
FUN_080d0ff4:
	push {r4, r5, r6, lr}	@ 000d0ff4 70b5
.org 0xd0ff6
	adds r5, r0, #0	@ 000d0ff6 051c
.org 0xd0ff8
	adds r6, r1, #0	@ 000d0ff8 0e1c
.org 0xd0ffa
	lsls r2, r2, #24	@ 000d0ffa 1206
.org 0xd0ffc
	lsrs r4, r2, #24	@ 000d0ffc 140e
.org 0xd0ffe
	ldr r0, [pc, #56]	@ 000d0ffe 0e48
.org 0xd1000
	ldr r0, [r0, #0]	@ 000d1000 0068
.org 0xd1002
	bl 0x5500	@ 000d1002 34f77dfa
.org 0xd1006
	adds r3, r0, #0	@ 000d1006 031c
.org 0xd1008
	cmp r3, #0	@ 000d1008 002b
.org 0xd100a
	beq.n 0xd1030	@ 000d100a 11d0
.org 0xd100c
	adds r1, r3, #0	@ 000d100c 191c
.org 0xd100e
	adds r1, #37	@ 000d100e 2531
.org 0xd1010
	movs r2, #0	@ 000d1010 0022
.org 0xd1012
	movs r0, #1	@ 000d1012 0120
.org 0xd1014
	strb r0, [r1, #0]	@ 000d1014 0870
.org 0xd1016
	ldr r1, [pc, #36]	@ 000d1016 0949
.org 0xd1018
	strb r0, [r3, #9]	@ 000d1018 5872
.org 0xd101a
	ldr r0, [r1, #4]	@ 000d101a 4868
.org 0xd101c
	ldr r0, [r0, #0]	@ 000d101c 0068
.org 0xd101e
	str r0, [r3, #20]	@ 000d101e 5861
.org 0xd1020
	movs r0, #0	@ 000d1020 0020
.org 0xd1022
	strh r2, [r3, #32]	@ 000d1022 1a84
.org 0xd1024
	adds r1, r3, #0	@ 000d1024 191c
.org 0xd1026
	adds r1, #34	@ 000d1026 2231
.org 0xd1028
	strb r0, [r1, #0]	@ 000d1028 0870
.org 0xd102a
	strb r4, [r3, #16]	@ 000d102a 1c74
.org 0xd102c
	str r5, [r3, #84]	@ 000d102c 5d65
.org 0xd102e
	str r6, [r3, #88]	@ 000d102e 9e65
.org 0xd1030
	pop {r4, r5, r6}	@ 000d1030 70bc
.org 0xd1032
	pop {r0}	@ 000d1032 01bc
.org 0xd1034
	bx r0	@ 000d1034 0047
