@ FUN_080d9fbc  entry 0x080d9fbc  size 160
.thumb
.org 0xd9fbc
FUN_080d9fbc:
	push {r4, r5, r6, r7, lr}	@ 000d9fbc f0b5
.org 0xd9fbe
	mov r7, r9	@ 000d9fbe 4f46
.org 0xd9fc0
	mov r6, r8	@ 000d9fc0 4646
.org 0xd9fc2
	push {r6, r7}	@ 000d9fc2 c0b4
.org 0xd9fc4
	adds r5, r0, #0	@ 000d9fc4 051c
.org 0xd9fc6
	mov r8, r3	@ 000d9fc6 9846
.org 0xd9fc8
	ldr r0, [sp, #28]	@ 000d9fc8 0798
.org 0xd9fca
	lsls r1, r1, #24	@ 000d9fca 0906
.org 0xd9fcc
	lsrs r1, r1, #24	@ 000d9fcc 090e
.org 0xd9fce
	mov r9, r1	@ 000d9fce 8946
.org 0xd9fd0
	lsls r2, r2, #16	@ 000d9fd0 1204
.org 0xd9fd2
	lsrs r6, r2, #16	@ 000d9fd2 160c
.org 0xd9fd4
	lsls r0, r0, #24	@ 000d9fd4 0006
.org 0xd9fd6
	lsrs r4, r0, #24	@ 000d9fd6 040e
.org 0xd9fd8
	ldr r0, [pc, #76]	@ 000d9fd8 1348
.org 0xd9fda
	ldr r0, [r0, #0]	@ 000d9fda 0068
.org 0xd9fdc
	bl 0x5500	@ 000d9fdc 2bf790fa
.org 0xd9fe0
	mov ip, r0	@ 000d9fe0 8446
.org 0xd9fe2
	cmp r0, #0	@ 000d9fe2 0028
.org 0xd9fe4
	beq.n 0xda056	@ 000d9fe4 37d0
.org 0xd9fe6
	adds r0, #37	@ 000d9fe6 2530
.org 0xd9fe8
	movs r3, #0	@ 000d9fe8 0023
.org 0xd9fea
	movs r2, #1	@ 000d9fea 0122
.org 0xd9fec
	strb r2, [r0, #0]	@ 000d9fec 0270
.org 0xd9fee
	ldr r0, [pc, #60]	@ 000d9fee 0f48
.org 0xd9ff0
	movs r1, #33	@ 000d9ff0 2121
.org 0xd9ff2
	mov r7, ip	@ 000d9ff2 6746
.org 0xd9ff4
	strb r1, [r7, #9]	@ 000d9ff4 7972
.org 0xd9ff6
	adds r0, #132	@ 000d9ff6 8430
.org 0xd9ff8
	ldr r0, [r0, #0]	@ 000d9ff8 0068
.org 0xd9ffa
	ldr r0, [r0, #0]	@ 000d9ffa 0068
.org 0xd9ffc
	str r0, [r7, #20]	@ 000d9ffc 7861
.org 0xd9ffe
	movs r0, #0	@ 000d9ffe 0020
.org 0xda000
	strh r3, [r7, #32]	@ 000da000 3b84
.org 0xda002
	mov r1, ip	@ 000da002 6146
.org 0xda004
	adds r1, #34	@ 000da004 2231
.org 0xda006
	strb r0, [r1, #0]	@ 000da006 0870
.org 0xda008
	strb r4, [r7, #16]	@ 000da008 3c74
.org 0xda00a
	strb r2, [r7, #17]	@ 000da00a 7a74
.org 0xda00c
	ldr r0, [r5, #0]	@ 000da00c 2868
.org 0xda00e
	str r0, [r7, #84]	@ 000da00e 7865
.org 0xda010
	ldr r0, [r5, #4]	@ 000da010 6868
.org 0xda012
	str r0, [r7, #88]	@ 000da012 b865
.org 0xda014
	str r6, [r7, #116]	@ 000da014 7e67
.org 0xda016
	mov r0, r8	@ 000da016 4046
.org 0xda018
	str r0, [r7, #120]	@ 000da018 b867
.org 0xda01a
	mov r2, r9	@ 000da01a 4a46
.org 0xda01c
	cmp r2, #0	@ 000da01c 002a
.org 0xda01e
	beq.n 0xda030	@ 000da01e 07d0
.org 0xda020
	ldrb r0, [r7, #10]	@ 000da020 b87a
.org 0xda022
	movs r1, #16	@ 000da022 1021
.org 0xda024
	orrs r0, r1	@ 000da024 0843
.org 0xda026
	b.n 0xda038	@ 000da026 07e0
.org 0xda028
	.byte 0x9c,0xed,0x02,0x02	@ 000da028 data
.org 0xda02c
	.byte 0x64,0x6f,0x86,0x08	@ 000da02c data
.org 0xda030
	mov r7, ip	@ 000da030 6746
.org 0xda032
	ldrb r1, [r7, #10]	@ 000da032 b97a
.org 0xda034
	movs r0, #239	@ 000da034 ef20
.org 0xda036
	ands r0, r1	@ 000da036 0840
.org 0xda038
	strb r0, [r7, #10]	@ 000da038 b872
.org 0xda03a
	movs r1, #1	@ 000da03a 0121
.org 0xda03c
	ands r1, r2	@ 000da03c 1140
.org 0xda03e
	mov r0, ip	@ 000da03e 6046
.org 0xda040
	adds r0, #76	@ 000da040 4c30
.org 0xda042
	strb r1, [r0, #0]	@ 000da042 0170
.org 0xda044
	mov r3, ip	@ 000da044 6346
.org 0xda046
	adds r3, #74	@ 000da046 4a33
.org 0xda048
	lsls r1, r1, #4	@ 000da048 0901
.org 0xda04a
	ldrb r2, [r3, #0]	@ 000da04a 1a78
.org 0xda04c
	movs r0, #17	@ 000da04c 1120
.org 0xda04e
	negs r0, r0	@ 000da04e 4042
.org 0xda050
	ands r0, r2	@ 000da050 1040
.org 0xda052
	orrs r0, r1	@ 000da052 0843
.org 0xda054
	strb r0, [r3, #0]	@ 000da054 1870
.org 0xda056
	mov r0, ip	@ 000da056 6046
.org 0xda058
	pop {r3, r4}	@ 000da058 18bc
.org 0xda05a
	mov r8, r3	@ 000da05a 9846
