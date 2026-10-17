@ FUN_080d94b0  entry 0x080d94b0  size 90
.thumb
.org 0xd94b0
FUN_080d94b0:
	push {lr}	@ 000d94b0 00b5
.org 0xd94b2
	adds r2, r0, #0	@ 000d94b2 021c
.org 0xd94b4
	ldr r0, [pc, #64]	@ 000d94b4 1048
.org 0xd94b6
	ldr r1, [r0, #0]	@ 000d94b6 0168
.org 0xd94b8
	adds r0, r1, #0	@ 000d94b8 081c
.org 0xd94ba
	adds r0, #250	@ 000d94ba fa30
.org 0xd94bc
	ldrb r0, [r0, #0]	@ 000d94bc 0078
.org 0xd94be
	cmp r0, #2	@ 000d94be 0228
.org 0xd94c0
	beq.n 0xd94d6	@ 000d94c0 09d0
.org 0xd94c2
	adds r0, r1, #0	@ 000d94c2 081c
.org 0xd94c4
	adds r0, #248	@ 000d94c4 f830
.org 0xd94c6
	ldrb r0, [r0, #0]	@ 000d94c6 0078
.org 0xd94c8
	cmp r0, #2	@ 000d94c8 0228
.org 0xd94ca
	beq.n 0xd9500	@ 000d94ca 19d0
.org 0xd94cc
	adds r0, r1, #0	@ 000d94cc 081c
.org 0xd94ce
	adds r0, #249	@ 000d94ce f930
.org 0xd94d0
	ldrb r0, [r0, #0]	@ 000d94d0 0078
.org 0xd94d2
	cmp r0, #2	@ 000d94d2 0228
.org 0xd94d4
	beq.n 0xd9500	@ 000d94d4 14d0
.org 0xd94d6
	ldrb r1, [r2, #10]	@ 000d94d6 917a
.org 0xd94d8
	movs r0, #254	@ 000d94d8 fe20
.org 0xd94da
	ands r0, r1	@ 000d94da 0840
.org 0xd94dc
	movs r1, #253	@ 000d94dc fd21
.org 0xd94de
	ands r0, r1	@ 000d94de 0840
.org 0xd94e0
	strb r0, [r2, #10]	@ 000d94e0 9072
.org 0xd94e2
	ldr r1, [pc, #24]	@ 000d94e2 0649
.org 0xd94e4
	ldrb r0, [r2, #9]	@ 000d94e4 507a
.org 0xd94e6
	lsls r0, r0, #2	@ 000d94e6 8000
.org 0xd94e8
	adds r0, r0, r1	@ 000d94e8 4018
.org 0xd94ea
	movs r1, #3	@ 000d94ea 0321
.org 0xd94ec
	str r1, [r2, #12]	@ 000d94ec d160
.org 0xd94ee
	ldr r0, [r0, #0]	@ 000d94ee 0068
.org 0xd94f0
	ldr r0, [r0, #12]	@ 000d94f0 c068
.org 0xd94f2
	str r0, [r2, #20]	@ 000d94f2 5061
.org 0xd94f4
	b.n 0xd9510	@ 000d94f4 0ce0
.org 0xd94f6
	.byte 0x00	@ 000d94f6 data
.org 0xd94f7
	.byte 0x00	@ 000d94f7 data
.org 0xd94f8
	.byte 0xf0,0xdb,0x02,0x02	@ 000d94f8 data
.org 0xd94fc
	.byte 0x64,0x6f,0x86,0x08	@ 000d94fc data
.org 0xd9500
	ldr r0, [pc, #16]	@ 000d9500 0448
.org 0xd9502
	ldrb r1, [r2, #16]	@ 000d9502 117c
.org 0xd9504
	lsls r1, r1, #2	@ 000d9504 8900
.org 0xd9506
	adds r1, r1, r0	@ 000d9506 0918
.org 0xd9508
	ldr r1, [r1, #0]	@ 000d9508 0968
