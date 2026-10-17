@ FUN_0804f988  entry 0x0804f988  size 134
.thumb
.org 0x4f988
FUN_0804f988:
	push {r4, r5, lr}	@ 0004f988 30b5
.org 0x4f98a
	adds r4, r0, #0	@ 0004f98a 041c
.org 0x4f98c
	lsls r1, r1, #24	@ 0004f98c 0906
.org 0x4f98e
	lsrs r5, r1, #24	@ 0004f98e 0d0e
.org 0x4f990
	ldr r0, [pc, #64]	@ 0004f990 1048
.org 0x4f992
	ldr r0, [r0, #0]	@ 0004f992 0068
.org 0x4f994
	bl 0x5500	@ 0004f994 b5f7b4fd
.org 0x4f998
	adds r2, r0, #0	@ 0004f998 021c
.org 0x4f99a
	cmp r2, #0	@ 0004f99a 002a
.org 0x4f99c
	beq.n 0x4fa18	@ 0004f99c 3cd0
.org 0x4f99e
	adds r0, r4, #0	@ 0004f99e 201c
.org 0x4f9a0
	adds r0, #248	@ 0004f9a0 f830
.org 0x4f9a2
	ldrb r0, [r0, #0]	@ 0004f9a2 0078
.org 0x4f9a4
	cmp r0, #2	@ 0004f9a4 0228
.org 0x4f9a6
	bne.n 0x4f9e4	@ 0004f9a6 1dd1
.org 0x4f9a8
	ldr r0, [pc, #44]	@ 0004f9a8 0b48
.org 0x4f9aa
	movs r1, #58	@ 0004f9aa 3a21
.org 0x4f9ac
	strb r1, [r2, #9]	@ 0004f9ac 5172
.org 0x4f9ae
	adds r0, #232	@ 0004f9ae e830
.org 0x4f9b0
	ldr r0, [r0, #0]	@ 0004f9b0 0068
.org 0x4f9b2
	ldr r0, [r0, #0]	@ 0004f9b2 0068
.org 0x4f9b4
	str r0, [r2, #20]	@ 0004f9b4 5061
.org 0x4f9b6
	ldrb r1, [r2, #11]	@ 0004f9b6 d17a
.org 0x4f9b8
	movs r0, #191	@ 0004f9b8 bf20
.org 0x4f9ba
	ands r0, r1	@ 0004f9ba 0840
.org 0x4f9bc
	strb r0, [r2, #11]	@ 0004f9bc d072
.org 0x4f9be
	adds r1, r2, #0	@ 0004f9be 111c
.org 0x4f9c0
	adds r1, #37	@ 0004f9c0 2531
.org 0x4f9c2
	movs r0, #16	@ 0004f9c2 1020
.org 0x4f9c4
	strb r0, [r1, #0]	@ 0004f9c4 0870
.org 0x4f9c6
	ldr r0, [pc, #20]	@ 0004f9c6 0548
.org 0x4f9c8
	ldrh r0, [r0, #0]	@ 0004f9c8 0088
.org 0x4f9ca
	strh r0, [r2, #32]	@ 0004f9ca 1084
.org 0x4f9cc
	ldr r0, [pc, #16]	@ 0004f9cc 0448
.org 0x4f9ce
	ldrb r0, [r0, #0]	@ 0004f9ce 0078
.org 0x4f9d0
	b.n 0x4fa0c	@ 0004f9d0 1ce0
.org 0x4f9d2
	.byte 0x00	@ 0004f9d2 data
.org 0x4f9d3
	.byte 0x00	@ 0004f9d3 data
.org 0x4f9d4
	.byte 0x88,0xed,0x02,0x02	@ 0004f9d4 data
.org 0x4f9d8
	.byte 0xf8,0x39,0x85,0x08	@ 0004f9d8 data
.org 0x4f9dc
	.byte 0xfc,0x36,0x85,0x08	@ 0004f9dc data
.org 0x4f9e0
	.byte 0x04,0x37,0x85,0x08	@ 0004f9e0 data
.org 0x4f9e4
	ldr r0, [pc, #56]	@ 0004f9e4 0e48
.org 0x4f9e6
	movs r1, #58	@ 0004f9e6 3a21
.org 0x4f9e8
	strb r1, [r2, #9]	@ 0004f9e8 5172
.org 0x4f9ea
	adds r0, #232	@ 0004f9ea e830
.org 0x4f9ec
	ldr r0, [r0, #0]	@ 0004f9ec 0068
.org 0x4f9ee
	ldr r0, [r0, #0]	@ 0004f9ee 0068
.org 0x4f9f0
	str r0, [r2, #20]	@ 0004f9f0 5061
.org 0x4f9f2
	ldrb r1, [r2, #11]	@ 0004f9f2 d17a
.org 0x4f9f4
	movs r0, #191	@ 0004f9f4 bf20
.org 0x4f9f6
	ands r0, r1	@ 0004f9f6 0840
.org 0x4f9f8
	strb r0, [r2, #11]	@ 0004f9f8 d072
.org 0x4f9fa
	adds r1, r2, #0	@ 0004f9fa 111c
.org 0x4f9fc
	adds r1, #37	@ 0004f9fc 2531
.org 0x4f9fe
	movs r0, #16	@ 0004f9fe 1020
.org 0x4fa00
	strb r0, [r1, #0]	@ 0004fa00 0870
.org 0x4fa02
	ldr r0, [pc, #32]	@ 0004fa02 0848
.org 0x4fa04
	ldrh r0, [r0, #2]	@ 0004fa04 4088
.org 0x4fa06
	strh r0, [r2, #32]	@ 0004fa06 1084
.org 0x4fa08
	ldr r0, [pc, #28]	@ 0004fa08 0748
.org 0x4fa0a
	ldrb r0, [r0, #1]	@ 0004fa0a 4078
.org 0x4fa0c
	subs r1, #3	@ 0004fa0c 0339
