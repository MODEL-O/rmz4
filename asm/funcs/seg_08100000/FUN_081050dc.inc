@ FUN_081050dc  entry 0x081050dc  size 108
.thumb
.org 0x1050dc
FUN_081050dc:
	push {r4, r5, r6, r7, lr}	@ 001050dc f0b5
.org 0x1050de
	adds r6, r0, #0	@ 001050de 061c
.org 0x1050e0
	adds r5, r2, #0	@ 001050e0 151c
.org 0x1050e2
	lsls r4, r1, #16	@ 001050e2 0c04
.org 0x1050e4
	lsrs r7, r4, #16	@ 001050e4 270c
.org 0x1050e6
	ldr r0, [pc, #96]	@ 001050e6 1848
.org 0x1050e8
	ldr r0, [r0, #0]	@ 001050e8 0068
.org 0x1050ea
	bl 0x5500	@ 001050ea 00f709fa
.org 0x1050ee
	adds r3, r0, #0	@ 001050ee 031c
.org 0x1050f0
	cmp r3, #0	@ 001050f0 002b
.org 0x1050f2
	beq.n 0x105142	@ 001050f2 26d0
.org 0x1050f4
	adds r1, r3, #0	@ 001050f4 191c
.org 0x1050f6
	adds r1, #37	@ 001050f6 2531
.org 0x1050f8
	movs r2, #0	@ 001050f8 0022
.org 0x1050fa
	movs r0, #30	@ 001050fa 1e20
.org 0x1050fc
	strb r0, [r1, #0]	@ 001050fc 0870
.org 0x1050fe
	ldr r0, [pc, #76]	@ 001050fe 1348
.org 0x105100
	movs r1, #78	@ 00105100 4e21
.org 0x105102
	strb r1, [r3, #9]	@ 00105102 5972
.org 0x105104
	adds r1, #234	@ 00105104 ea31
.org 0x105106
	adds r0, r0, r1	@ 00105106 4018
.org 0x105108
	ldr r0, [r0, #0]	@ 00105108 0068
.org 0x10510a
	ldr r0, [r0, #0]	@ 0010510a 0068
.org 0x10510c
	str r0, [r3, #20]	@ 0010510c 5861
.org 0x10510e
	movs r0, #0	@ 0010510e 0020
.org 0x105110
	strh r2, [r3, #32]	@ 00105110 1a84
.org 0x105112
	adds r1, r3, #0	@ 00105112 191c
.org 0x105114
	adds r1, #34	@ 00105114 2231
.org 0x105116
	strb r0, [r1, #0]	@ 00105116 0870
.org 0x105118
	ldrb r1, [r3, #11]	@ 00105118 d97a
.org 0x10511a
	movs r0, #16	@ 0010511a 1020
.org 0x10511c
	orrs r0, r1	@ 0010511c 0843
.org 0x10511e
	strb r0, [r3, #11]	@ 0010511e d872
.org 0x105120
	ldrb r0, [r3, #28]	@ 00105120 187f
.org 0x105122
	strb r0, [r3, #29]	@ 00105122 5877
.org 0x105124
	ldr r0, [r6, #0]	@ 00105124 3068
.org 0x105126
	ldr r1, [r6, #4]	@ 00105126 7168
.org 0x105128
	str r0, [r3, #84]	@ 00105128 5865
.org 0x10512a
	str r1, [r3, #88]	@ 0010512a 9965
.org 0x10512c
	lsrs r0, r4, #24	@ 0010512c 200e
.org 0x10512e
	strb r0, [r3, #16]	@ 0010512e 1874
.org 0x105130
	strb r7, [r3, #17]	@ 00105130 5f74
.org 0x105132
	str r5, [r3, #40]	@ 00105132 9d62
.org 0x105134
	ldr r1, [pc, #24]	@ 00105134 0649
.org 0x105136
	adds r0, r5, r1	@ 00105136 6818
.org 0x105138
	ldr r1, [r0, #40]	@ 00105138 816a
.org 0x10513a
	lsls r0, r1, #1	@ 0010513a 4800
.org 0x10513c
	adds r0, r0, r1	@ 0010513c 4018
.org 0x10513e
	lsls r0, r0, #2	@ 0010513e 8000
.org 0x105140
	strb r0, [r3, #18]	@ 00105140 9874
.org 0x105142
	pop {r4, r5, r6, r7}	@ 00105142 f0bc
.org 0x105144
	pop {r0}	@ 00105144 01bc
.org 0x105146
	bx r0	@ 00105146 0047
