@ FUN_0800d020  entry 0x0800d020  size 218
.thumb
.org 0xd020
FUN_0800d020:
	push {r4, r5, r6, r7, lr}	@ 0000d020 f0b5
.org 0xd022
	mov r7, r9	@ 0000d022 4f46
.org 0xd024
	mov r6, r8	@ 0000d024 4646
.org 0xd026
	push {r6, r7}	@ 0000d026 c0b4
.org 0xd028
	sub sp, #8	@ 0000d028 82b0
.org 0xd02a
	adds r7, r0, #0	@ 0000d02a 071c
.org 0xd02c
	ldr r0, [r7, #92]	@ 0000d02c f86d
.org 0xd02e
	lsls r0, r0, #16	@ 0000d02e 0004
.org 0xd030
	lsrs r3, r0, #16	@ 0000d030 030c
.org 0xd032
	ldr r0, [pc, #36]	@ 0000d032 0948
.org 0xd034
	ldrb r1, [r0, #4]	@ 0000d034 0179
.org 0xd036
	movs r0, #32	@ 0000d036 2020
.org 0xd038
	ands r0, r1	@ 0000d038 0840
.org 0xd03a
	cmp r0, #0	@ 0000d03a 0028
.org 0xd03c
	bne.n 0xd068	@ 0000d03c 14d1
.org 0xd03e
	ldr r0, [pc, #28]	@ 0000d03e 0748
.org 0xd040
	ldr r1, [pc, #28]	@ 0000d040 0749
.org 0xd042
	adds r0, r0, r1	@ 0000d042 4018
.org 0xd044
	ldrb r0, [r0, #0]	@ 0000d044 0078
.org 0xd046
	cmp r0, #1	@ 0000d046 0128
.org 0xd048
	beq.n 0xd068	@ 0000d048 0ed0
.org 0xd04a
	ldr r0, [pc, #24]	@ 0000d04a 0648
.org 0xd04c
	lsls r1, r3, #8	@ 0000d04c 1902
.org 0xd04e
	ldrh r2, [r0, #0]	@ 0000d04e 0288
.org 0xd050
	orrs r1, r2	@ 0000d050 1143
.org 0xd052
	strh r1, [r0, #0]	@ 0000d052 0180
.org 0xd054
	b.n 0xd072	@ 0000d054 0de0
.org 0xd056
	.byte 0x00	@ 0000d056 data
.org 0xd057
	.byte 0x00	@ 0000d057 data
.org 0xd058
	.byte 0xb0,0xe8,0x02,0x02	@ 0000d058 data
.org 0xd05c
	.byte 0xb0,0x0a,0x00,0x02	@ 0000d05c data
.org 0xd060
	.byte 0x24,0xd0,0x02,0x00	@ 0000d060 data
.org 0xd064
	.byte 0x00,0x0a,0x00,0x02	@ 0000d064 data
.org 0xd068
	ldr r2, [pc, #160]	@ 0000d068 284a
.org 0xd06a
	lsls r1, r3, #8	@ 0000d06a 1902
.org 0xd06c
	ldrh r0, [r2, #0]	@ 0000d06c 1088
.org 0xd06e
	bics r0, r1	@ 0000d06e 8843
.org 0xd070
	strh r0, [r2, #0]	@ 0000d070 1080
.org 0xd072
	ldr r0, [pc, #156]	@ 0000d072 2748
.org 0xd074
	mov r9, r0	@ 0000d074 8146
.org 0xd076
	ldr r0, [pc, #156]	@ 0000d076 2748
.org 0xd078
	add r0, r9	@ 0000d078 4844
.org 0xd07a
	ldrh r0, [r0, #0]	@ 0000d07a 0088
.org 0xd07c
	lsrs r3, r3, #4	@ 0000d07c 1b09
.org 0xd07e
	mov r8, r3	@ 0000d07e 9846
.org 0xd080
	cmp r0, #0	@ 0000d080 0028
.org 0xd082
	beq.n 0xd0c6	@ 0000d082 20d0
.org 0xd084
	movs r2, #0	@ 0000d084 0022
.org 0xd086
	lsls r5, r3, #1	@ 0000d086 5d00
.org 0xd088
	ldr r0, [pc, #140]	@ 0000d088 2348
.org 0xd08a
	adds r5, r5, r0	@ 0000d08a 2d18
.org 0xd08c
	ldrh r0, [r5, #0]	@ 0000d08c 2888
.org 0xd08e
	movs r4, #248	@ 0000d08e f824
.org 0xd090
	lsls r4, r4, #5	@ 0000d090 6401
.org 0xd092
	adds r1, r4, #0	@ 0000d092 211c
.org 0xd094
	ands r1, r0	@ 0000d094 0140
.org 0xd096
	lsls r1, r1, #3	@ 0000d096 c900
.org 0xd098
	movs r0, #192	@ 0000d098 c020
.org 0xd09a
	lsls r0, r0, #19	@ 0000d09a c004
.org 0xd09c
	adds r1, r1, r0	@ 0000d09c 0918
.org 0xd09e
	str r2, [sp, #0]	@ 0000d09e 0092
.org 0xd0a0
	movs r6, #128	@ 0000d0a0 8026
.org 0xd0a2
	lsls r6, r6, #2	@ 0000d0a2 b600
.org 0xd0a4
	ldr r2, [pc, #116]	@ 0000d0a4 1d4a
.org 0xd0a6
	mov r0, sp	@ 0000d0a6 6846
.org 0xd0a8
	bl 0x128be0	@ 0000d0a8 1bf19afd
.org 0xd0ac
	ldr r0, [pc, #112]	@ 0000d0ac 1c48
.org 0xd0ae
	ldr r0, [r0, #0]	@ 0000d0ae 0068
.org 0xd0b0
	ldr r1, [pc, #112]	@ 0000d0b0 1c49
.org 0xd0b2
	adds r0, r0, r1	@ 0000d0b2 4018
.org 0xd0b4
	ldrh r1, [r5, #0]	@ 0000d0b4 2988
.org 0xd0b6
	ands r4, r1	@ 0000d0b6 0c40
.org 0xd0b8
	lsls r4, r4, #3	@ 0000d0b8 e400
.org 0xd0ba
	ldr r1, [pc, #108]	@ 0000d0ba 1b49
.org 0xd0bc
	adds r4, r4, r1	@ 0000d0bc 6418
.org 0xd0be
	adds r1, r4, #0	@ 0000d0be 211c
.org 0xd0c0
	adds r2, r6, #0	@ 0000d0c0 321c
.org 0xd0c2
	bl 0x128be0	@ 0000d0c2 1bf18dfd
.org 0xd0c6
	mov r0, r8	@ 0000d0c6 4046
.org 0xd0c8
	lsls r3, r0, #2	@ 0000d0c8 8300
.org 0xd0ca
	ldr r2, [pc, #96]	@ 0000d0ca 184a
.org 0xd0cc
	adds r4, r3, r2	@ 0000d0cc 9c18
.org 0xd0ce
	ldr r1, [r7, #52]	@ 0000d0ce 796b
.org 0xd0d0
	ldr r0, [pc, #92]	@ 0000d0d0 1748
.org 0xd0d2
	add r0, r9	@ 0000d0d2 4844
.org 0xd0d4
	ldr r0, [r0, #0]	@ 0000d0d4 0068
.org 0xd0d6
	asrs r0, r0, #8	@ 0000d0d6 0012
.org 0xd0d8
	subs r1, r1, r0	@ 0000d0d8 091a
.org 0xd0da
	adds r1, #80	@ 0000d0da 5031
.org 0xd0dc
	ldr r0, [r7, #44]	@ 0000d0dc f86a
.org 0xd0de
	asrs r0, r0, #8	@ 0000d0de 0012
.org 0xd0e0
	adds r1, r1, r0	@ 0000d0e0 0918
.org 0xd0e2
	strh r1, [r4, #0]	@ 0000d0e2 2180
.org 0xd0e4
	adds r2, #2	@ 0000d0e4 0232
.org 0xd0e6
	adds r3, r3, r2	@ 0000d0e6 9b18
.org 0xd0e8
	ldr r1, [r7, #56]	@ 0000d0e8 b96b
.org 0xd0ea
	ldr r0, [pc, #72]	@ 0000d0ea 1248
.org 0xd0ec
	add r0, r9	@ 0000d0ec 4844
.org 0xd0ee
	ldr r0, [r0, #0]	@ 0000d0ee 0068
.org 0xd0f0
	asrs r0, r0, #8	@ 0000d0f0 0012
.org 0xd0f2
	subs r1, r1, r0	@ 0000d0f2 091a
.org 0xd0f4
	adds r1, #184	@ 0000d0f4 b831
.org 0xd0f6
	ldr r0, [r7, #48]	@ 0000d0f6 386b
.org 0xd0f8
	asrs r0, r0, #8	@ 0000d0f8 0012
