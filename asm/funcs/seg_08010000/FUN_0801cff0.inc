@ FUN_0801cff0  entry 0x0801cff0  size 292
.thumb
.org 0x1cff0
FUN_0801cff0:
	push {r4, r5, r6, r7, lr}	@ 0001cff0 f0b5
.org 0x1cff2
	mov r7, r8	@ 0001cff2 4746
.org 0x1cff4
	push {r7}	@ 0001cff4 80b4
.org 0x1cff6
	adds r5, r0, #0	@ 0001cff6 051c
.org 0x1cff8
	adds r6, r5, #0	@ 0001cff8 2e1c
.org 0x1cffa
	adds r6, #52	@ 0001cffa 3436
.org 0x1cffc
	adds r0, #108	@ 0001cffc 6c30
.org 0x1cffe
	bl 0x3518	@ 0001cffe e6f78bfa
.org 0x1d002
	adds r0, r5, #0	@ 0001d002 281c
.org 0x1d004
	adds r0, #112	@ 0001d004 7030
.org 0x1d006
	ldrb r1, [r0, #0]	@ 0001d006 0178
.org 0x1d008
	ldr r0, [r5, #108]	@ 0001d008 e86e
.org 0x1d00a
	lsls r1, r1, #2	@ 0001d00a 8900
.org 0x1d00c
	adds r1, r1, r0	@ 0001d00c 0918
.org 0x1d00e
	adds r0, r5, #0	@ 0001d00e 281c
.org 0x1d010
	adds r0, #113	@ 0001d010 7130
.org 0x1d012
	ldrb r0, [r0, #0]	@ 0001d012 0078
.org 0x1d014
	lsls r0, r0, #24	@ 0001d014 0006
.org 0x1d016
	asrs r0, r0, #24	@ 0001d016 0016
.org 0x1d018
	ldr r1, [r1, #0]	@ 0001d018 0968
.org 0x1d01a
	lsls r0, r0, #1	@ 0001d01a 4000
.org 0x1d01c
	adds r0, r0, r1	@ 0001d01c 4018
.org 0x1d01e
	ldrb r0, [r0, #0]	@ 0001d01e 0078
.org 0x1d020
	adds r3, r0, #0	@ 0001d020 031c
.org 0x1d022
	strb r3, [r6, #26]	@ 0001d022 b376
.org 0x1d024
	ldrb r1, [r5, #11]	@ 0001d024 e97a
.org 0x1d026
	movs r0, #4	@ 0001d026 0420
.org 0x1d028
	ands r0, r1	@ 0001d028 0840
.org 0x1d02a
	cmp r0, #0	@ 0001d02a 0028
.org 0x1d02c
	beq.n 0x1d11c	@ 0001d02c 76d0
.org 0x1d02e
	ldrb r0, [r5, #30]	@ 0001d02e a87f
.org 0x1d030
	lsls r4, r0, #2	@ 0001d030 8400
.org 0x1d032
	ldr r1, [pc, #112]	@ 0001d032 1c49
.org 0x1d034
	adds r1, r4, r1	@ 0001d034 6118
.org 0x1d036
	ldr r2, [r1, #0]	@ 0001d036 0a68
.org 0x1d038
	ldr r1, [r6, #8]	@ 0001d038 b168
.org 0x1d03a
	mov ip, r0	@ 0001d03a 8446
.org 0x1d03c
	cmp r1, r2	@ 0001d03c 9142
.org 0x1d03e
	beq.n 0x1d042	@ 0001d03e 00d0
.org 0x1d040
	str r2, [r5, #60]	@ 0001d040 ea63
.org 0x1d042
	lsls r0, r3, #2	@ 0001d042 9800
.org 0x1d044
	adds r0, r0, r2	@ 0001d044 8018
.org 0x1d046
	ldrb r3, [r0, #3]	@ 0001d046 c378
.org 0x1d048
	ldrb r0, [r5, #31]	@ 0001d048 e87f
.org 0x1d04a
	cmp r3, r0	@ 0001d04a 8342
.org 0x1d04c
	beq.n 0x1d11c	@ 0001d04c 66d0
.org 0x1d04e
	strb r3, [r5, #31]	@ 0001d04e eb77
.org 0x1d050
	ldr r0, [pc, #84]	@ 0001d050 1548
.org 0x1d052
	mov r2, ip	@ 0001d052 6246
.org 0x1d054
	lsls r1, r2, #1	@ 0001d054 5100
.org 0x1d056
	adds r0, r1, r0	@ 0001d056 0818
.org 0x1d058
	ldrh r0, [r0, #0]	@ 0001d058 0088
.org 0x1d05a
	ldrh r2, [r5, #32]	@ 0001d05a 2a8c
.org 0x1d05c
	adds r0, r0, r2	@ 0001d05c 8018
.org 0x1d05e
	lsls r0, r0, #16	@ 0001d05e 0004
.org 0x1d060
	lsrs r7, r0, #16	@ 0001d060 070c
.org 0x1d062
	adds r2, r5, #0	@ 0001d062 2a1c
.org 0x1d064
	adds r2, #34	@ 0001d064 2232
.org 0x1d066
	ldr r0, [pc, #68]	@ 0001d066 1148
.org 0x1d068
	adds r1, r1, r0	@ 0001d068 0918
.org 0x1d06a
	ldrh r0, [r1, #0]	@ 0001d06a 0888
.org 0x1d06c
	ldrb r2, [r2, #0]	@ 0001d06c 1278
.org 0x1d06e
	adds r0, r0, r2	@ 0001d06e 8018
.org 0x1d070
	lsls r0, r0, #16	@ 0001d070 0004
.org 0x1d072
	lsrs r0, r0, #16	@ 0001d072 000c
.org 0x1d074
	mov r8, r0	@ 0001d074 8046
.org 0x1d076
	mov r1, ip	@ 0001d076 6146
.org 0x1d078
	lsls r0, r1, #24	@ 0001d078 0806
.org 0x1d07a
	cmp r0, #0	@ 0001d07a 0028
.org 0x1d07c
	blt.n 0x1d0b4	@ 0001d07c 1adb
.org 0x1d07e
	ldr r1, [pc, #48]	@ 0001d07e 0c49
.org 0x1d080
	adds r1, r4, r1	@ 0001d080 6118
.org 0x1d082
	ldr r0, [r1, #0]	@ 0001d082 0868
.org 0x1d084
	adds r0, r0, r1	@ 0001d084 4018
.org 0x1d086
	lsls r1, r3, #1	@ 0001d086 5900
.org 0x1d088
	adds r1, r1, r3	@ 0001d088 c918
.org 0x1d08a
	lsls r1, r1, #2	@ 0001d08a 8900
.org 0x1d08c
	adds r0, r0, r1	@ 0001d08c 4018
.org 0x1d08e
	ldrh r1, [r0, #6]	@ 0001d08e c188
.org 0x1d090
	lsrs r1, r1, #6	@ 0001d090 8909
.org 0x1d092
	subs r1, r7, r1	@ 0001d092 791a
.org 0x1d094
	lsls r1, r1, #5	@ 0001d094 4901
.org 0x1d096
	movs r2, #128	@ 0001d096 8022
.org 0x1d098
	lsls r2, r2, #9	@ 0001d098 5202
.org 0x1d09a
	adds r1, r1, r2	@ 0001d09a 8918
.org 0x1d09c
	bl 0x1ea4	@ 0001d09c e4f702ff
.org 0x1d0a0
	b.n 0x1d0ee	@ 0001d0a0 25e0
.org 0x1d0a2
	.byte 0x00	@ 0001d0a2 data
.org 0x1d0a3
	.byte 0x00	@ 0001d0a3 data
.org 0x1d0a4
	.byte 0x00,0x70,0x8a,0x08	@ 0001d0a4 data
.org 0x1d0a8
	.byte 0x40,0xe2,0x02,0x02	@ 0001d0a8 data
.org 0x1d0ac
	.byte 0x40,0xdc,0x02,0x02	@ 0001d0ac data
.org 0x1d0b0
	.byte 0x00,0xc0,0x8c,0x08	@ 0001d0b0 data
.org 0x1d0b4
	ldr r0, [pc, #112]	@ 0001d0b4 1c48
.org 0x1d0b6
	adds r0, r4, r0	@ 0001d0b6 2018
.org 0x1d0b8
	ldr r4, [r0, #0]	@ 0001d0b8 0468
.org 0x1d0ba
	adds r4, r4, r0	@ 0001d0ba 2418
.org 0x1d0bc
	lsls r0, r3, #2	@ 0001d0bc 9800
.org 0x1d0be
	adds r0, r0, r3	@ 0001d0be c018
.org 0x1d0c0
	lsls r0, r0, #2	@ 0001d0c0 8000
.org 0x1d0c2
	adds r4, r4, r0	@ 0001d0c2 2418
.org 0x1d0c4
	ldrh r1, [r4, #6]	@ 0001d0c4 e188
.org 0x1d0c6
	lsrs r1, r1, #6	@ 0001d0c6 8909
.org 0x1d0c8
	subs r1, r7, r1	@ 0001d0c8 791a
.org 0x1d0ca
	lsls r1, r1, #5	@ 0001d0ca 4901
.org 0x1d0cc
	movs r2, #128	@ 0001d0cc 8022
.org 0x1d0ce
	lsls r2, r2, #9	@ 0001d0ce 5202
.org 0x1d0d0
	adds r1, r1, r2	@ 0001d0d0 8918
.org 0x1d0d2
	adds r0, r4, #0	@ 0001d0d2 201c
.org 0x1d0d4
	bl 0x1ea4	@ 0001d0d4 e4f7e6fe
.org 0x1d0d8
	adds r0, r4, #0	@ 0001d0d8 201c
.org 0x1d0da
	adds r0, #12	@ 0001d0da 0c30
.org 0x1d0dc
	ldrb r1, [r4, #19]	@ 0001d0dc e17c
.org 0x1d0de
	mov r2, r8	@ 0001d0de 4246
.org 0x1d0e0
	subs r1, r2, r1	@ 0001d0e0 511a
.org 0x1d0e2
	lsls r1, r1, #5	@ 0001d0e2 4901
.org 0x1d0e4
	movs r2, #128	@ 0001d0e4 8022
.org 0x1d0e6
	lsls r2, r2, #2	@ 0001d0e6 9200
.org 0x1d0e8
	adds r1, r1, r2	@ 0001d0e8 8918
.org 0x1d0ea
	bl 0x2208	@ 0001d0ea e5f78df8
.org 0x1d0ee
	ldr r1, [pc, #60]	@ 0001d0ee 0f49
.org 0x1d0f0
	ands r1, r7	@ 0001d0f0 3940
.org 0x1d0f2
	ldrh r2, [r6, #20]	@ 0001d0f2 b28a
.org 0x1d0f4
	ldr r0, [pc, #56]	@ 0001d0f4 0e48
.org 0x1d0f6
	ands r0, r2	@ 0001d0f6 1040
.org 0x1d0f8
	orrs r0, r1	@ 0001d0f8 0843
.org 0x1d0fa
	strh r0, [r6, #20]	@ 0001d0fa b082
.org 0x1d0fc
	ldrb r1, [r5, #11]	@ 0001d0fc e97a
.org 0x1d0fe
	movs r0, #32	@ 0001d0fe 2020
.org 0x1d100
	ands r0, r1	@ 0001d100 0840
.org 0x1d102
	cmp r0, #0	@ 0001d102 0028
.org 0x1d104
	bne.n 0x1d11c	@ 0001d104 0ad1
.org 0x1d106
	mov r0, r8	@ 0001d106 4046
.org 0x1d108
	lsls r2, r0, #4	@ 0001d108 0201
.org 0x1d10a
	ldrb r1, [r6, #21]	@ 0001d10a 717d
.org 0x1d10c
	movs r0, #15	@ 0001d10c 0f20
.org 0x1d10e
	ands r0, r1	@ 0001d10e 0840
.org 0x1d110
	orrs r0, r2	@ 0001d110 1043
.org 0x1d112
	strb r0, [r6, #21]	@ 0001d112 7075
