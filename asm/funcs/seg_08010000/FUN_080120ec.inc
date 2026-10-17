@ FUN_080120ec  entry 0x080120ec  size 42
.thumb
.org 0x120ec
FUN_080120ec:
	push {lr}	@ 000120ec 00b5
.org 0x120ee
	adds r3, r0, #0	@ 000120ee 031c
.org 0x120f0
	ldrb r0, [r3, #14]	@ 000120f0 987b
.org 0x120f2
	cmp r0, #0	@ 000120f2 0028
.org 0x120f4
	bne.n 0x12112	@ 000120f4 0dd1
.org 0x120f6
	ldr r1, [r3, #92]	@ 000120f6 d96d
.org 0x120f8
	lsrs r1, r1, #4	@ 000120f8 0909
.org 0x120fa
	lsls r1, r1, #1	@ 000120fa 4900
.org 0x120fc
	ldr r0, [pc, #24]	@ 000120fc 0648
.org 0x120fe
	adds r1, r1, r0	@ 000120fe 0918
.org 0x12100
	ldrh r2, [r1, #0]	@ 00012100 0a88
.org 0x12102
	ldr r0, [pc, #24]	@ 00012102 0648
.org 0x12104
	ands r0, r2	@ 00012104 1040
.org 0x12106
	movs r2, #3	@ 00012106 0322
.org 0x12108
	orrs r0, r2	@ 00012108 1043
.org 0x1210a
	strh r0, [r1, #0]	@ 0001210a 0880
.org 0x1210c
	ldrb r0, [r3, #14]	@ 0001210c 987b
.org 0x1210e
	adds r0, #1	@ 0001210e 0130
.org 0x12110
	strb r0, [r3, #14]	@ 00012110 9873
.org 0x12112
	pop {r0}	@ 00012112 01bc
.org 0x12114
	bx r0	@ 00012114 0047
