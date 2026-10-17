@ FUN_0811afe8  entry 0x0811afe8  size 182
.thumb
.org 0x11afe8
FUN_0811afe8:
	push {r4, r5, r6, r7, lr}	@ 0011afe8 f0b5
.org 0x11afea
	mov r7, r8	@ 0011afea 4746
.org 0x11afec
	push {r7}	@ 0011afec 80b4
.org 0x11afee
	adds r4, r0, #0	@ 0011afee 041c
.org 0x11aff0
	movs r2, #0	@ 0011aff0 0022
.org 0x11aff2
	ldr r0, [pc, #60]	@ 0011aff2 0f48
.org 0x11aff4
	adds r3, r4, r0	@ 0011aff4 2318
.org 0x11aff6
	movs r5, #255	@ 0011aff6 ff25
.org 0x11aff8
	mov r8, r3	@ 0011aff8 9846
.org 0x11affa
	adds r0, r3, r2	@ 0011affa 9818
.org 0x11affc
	ldrb r1, [r0, #0]	@ 0011affc 0178
.org 0x11affe
	orrs r1, r5	@ 0011affe 2943
.org 0x11b000
	strb r1, [r0, #0]	@ 0011b000 0170
.org 0x11b002
	adds r0, r2, #1	@ 0011b002 501c
.org 0x11b004
	lsls r0, r0, #24	@ 0011b004 0006
.org 0x11b006
	lsrs r2, r0, #24	@ 0011b006 020e
.org 0x11b008
	cmp r2, #5	@ 0011b008 052a
.org 0x11b00a
	bls.n 0x11affa	@ 0011b00a f6d9
.org 0x11b00c
	movs r0, #221	@ 0011b00c dd20
.org 0x11b00e
	lsls r0, r0, #4	@ 0011b00e 0001
.org 0x11b010
	adds r1, r4, r0	@ 0011b010 2118
.org 0x11b012
	movs r0, #0	@ 0011b012 0020
.org 0x11b014
	strb r0, [r1, #12]	@ 0011b014 0873
.org 0x11b016
	strb r0, [r1, #13]	@ 0011b016 4873
.org 0x11b018
	strb r0, [r1, #10]	@ 0011b018 8872
.org 0x11b01a
	movs r3, #0	@ 0011b01a 0023
.org 0x11b01c
	ldrb r0, [r1, #11]	@ 0011b01c c87a
.org 0x11b01e
	cmp r0, #0	@ 0011b01e 0028
.org 0x11b020
	bne.n 0x11b034	@ 0011b020 08d1
.org 0x11b022
	movs r0, #255	@ 0011b022 ff20
.org 0x11b024
	strb r0, [r1, #4]	@ 0011b024 0871
.org 0x11b026
	movs r0, #1	@ 0011b026 0120
.org 0x11b028
	strb r0, [r1, #10]	@ 0011b028 8872
.org 0x11b02a
	ldrb r6, [r1, #11]	@ 0011b02a ce7a
.org 0x11b02c
	movs r3, #1	@ 0011b02c 0123
.org 0x11b02e
	b.n 0x11b03e	@ 0011b02e 06e0
.org 0x11b030
	.byte 0xd4,0x0d,0x00,0x00	@ 0011b030 data
.org 0x11b034
	subs r0, #1	@ 0011b034 0138
.org 0x11b036
	lsls r0, r0, #24	@ 0011b036 0006
.org 0x11b038
	lsrs r6, r0, #24	@ 0011b038 060e
.org 0x11b03a
	movs r0, #1	@ 0011b03a 0120
.org 0x11b03c
	strb r0, [r1, #12]	@ 0011b03c 0873
.org 0x11b03e
	movs r2, #20	@ 0011b03e 1422
.org 0x11b040
	adds r5, r3, #0	@ 0011b040 1d1c
.org 0x11b042
	ldr r0, [pc, #48]	@ 0011b042 0c48
.org 0x11b044
	ldr r0, [r0, #0]	@ 0011b044 0068
.org 0x11b046
	mov ip, r0	@ 0011b046 8446
.org 0x11b048
	movs r7, #1	@ 0011b048 0127
.org 0x11b04a
	movs r1, #221	@ 0011b04a dd21
.org 0x11b04c
	lsls r1, r1, #4	@ 0011b04c 0901
.org 0x11b04e
	adds r4, r4, r1	@ 0011b04e 6418
.org 0x11b050
	lsrs r0, r2, #2	@ 0011b050 9008
.org 0x11b052
	add r0, ip	@ 0011b052 6044
.org 0x11b054
	ldrb r1, [r0, #0]	@ 0011b054 0178
.org 0x11b056
	movs r0, #3	@ 0011b056 0320
.org 0x11b058
	ands r0, r2	@ 0011b058 1040
.org 0x11b05a
	adds r0, #4	@ 0011b05a 0430
.org 0x11b05c
	asrs r1, r0	@ 0011b05c 0141
.org 0x11b05e
	ands r1, r7	@ 0011b05e 3940
.org 0x11b060
	cmp r1, #0	@ 0011b060 0029
.org 0x11b062
	beq.n 0x11b094	@ 0011b062 17d0
.org 0x11b064
	adds r0, r6, r3	@ 0011b064 f018
.org 0x11b066
	cmp r5, r0	@ 0011b066 8542
.org 0x11b068
	beq.n 0x11b078	@ 0011b068 06d0
.org 0x11b06a
	cmp r3, #5	@ 0011b06a 052b
.org 0x11b06c
	bne.n 0x11b08e	@ 0011b06c 0fd1
.org 0x11b06e
	strb r7, [r4, #13]	@ 0011b06e 6773
.org 0x11b070
	b.n 0x11b09e	@ 0011b070 15e0
.org 0x11b072
	.byte 0x00	@ 0011b072 data
.org 0x11b073
	.byte 0x00	@ 0011b073 data
.org 0x11b074
	.byte 0xac,0xed,0x02,0x02	@ 0011b074 data
.org 0x11b078
	mov r1, r8	@ 0011b078 4146
.org 0x11b07a
	adds r0, r1, r3	@ 0011b07a c818
.org 0x11b07c
	strb r2, [r0, #0]	@ 0011b07c 0270
.org 0x11b07e
	ldrb r0, [r4, #10]	@ 0011b07e a07a
.org 0x11b080
	adds r0, #1	@ 0011b080 0130
.org 0x11b082
	strb r0, [r4, #10]	@ 0011b082 a072
.org 0x11b084
	cmp r3, #4	@ 0011b084 042b
.org 0x11b086
	bhi.n 0x11b08e	@ 0011b086 02d8
.org 0x11b088
	adds r0, r3, #1	@ 0011b088 581c
.org 0x11b08a
	lsls r0, r0, #24	@ 0011b08a 0006
.org 0x11b08c
	lsrs r3, r0, #24	@ 0011b08c 030e
.org 0x11b08e
	adds r0, r5, #1	@ 0011b08e 681c
.org 0x11b090
	lsls r0, r0, #24	@ 0011b090 0006
.org 0x11b092
	lsrs r5, r0, #24	@ 0011b092 050e
.org 0x11b094
	adds r0, r2, #1	@ 0011b094 501c
.org 0x11b096
	lsls r0, r0, #24	@ 0011b096 0006
.org 0x11b098
	lsrs r2, r0, #24	@ 0011b098 020e
.org 0x11b09a
	cmp r2, #26	@ 0011b09a 1a2a
.org 0x11b09c
	bls.n 0x11b050	@ 0011b09c d8d9
