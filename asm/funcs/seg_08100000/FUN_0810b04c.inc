@ FUN_0810b04c  entry 0x0810b04c  size 130
.thumb
.org 0x10b04c
FUN_0810b04c:
	push {r4, lr}	@ 0010b04c 10b5
.org 0x10b04e
	adds r4, r0, #0	@ 0010b04e 041c
.org 0x10b050
	ldr r1, [r4, #40]	@ 0010b050 a16a
.org 0x10b052
	ldrb r0, [r1, #1]	@ 0010b052 4878
.org 0x10b054
	cmp r0, #1	@ 0010b054 0128
.org 0x10b056
	bls.n 0x10b072	@ 0010b056 0cd9
.org 0x10b058
	ldrb r0, [r1, #2]	@ 0010b058 8878
.org 0x10b05a
	cmp r0, #0	@ 0010b05a 0028
.org 0x10b05c
	beq.n 0x10b072	@ 0010b05c 09d0
.org 0x10b05e
	ldrb r0, [r1, #3]	@ 0010b05e c878
.org 0x10b060
	cmp r0, #0	@ 0010b060 0028
.org 0x10b062
	beq.n 0x10b072	@ 0010b062 06d0
.org 0x10b064
	ldr r2, [pc, #20]	@ 0010b064 054a
.org 0x10b066
	adds r0, r1, r2	@ 0010b066 8818
.org 0x10b068
	ldrb r1, [r4, #17]	@ 0010b068 617c
.org 0x10b06a
	adds r0, r0, r1	@ 0010b06a 4018
.org 0x10b06c
	ldrb r2, [r0, #0]	@ 0010b06c 0278
.org 0x10b06e
	cmp r2, #255	@ 0010b06e ff2a
.org 0x10b070
	bne.n 0x10b080	@ 0010b070 06d1
.org 0x10b072
	ldrb r1, [r4, #10]	@ 0010b072 a17a
.org 0x10b074
	movs r0, #254	@ 0010b074 fe20
.org 0x10b076
	ands r0, r1	@ 0010b076 0840
.org 0x10b078
	strb r0, [r4, #10]	@ 0010b078 a072
.org 0x10b07a
	b.n 0x10b0d6	@ 0010b07a 2ce0
.org 0x10b07c
	.byte 0xd2,0x0d,0x00,0x00	@ 0010b07c data
.org 0x10b080
	ldrb r1, [r4, #10]	@ 0010b080 a17a
.org 0x10b082
	movs r0, #1	@ 0010b082 0120
.org 0x10b084
	orrs r0, r1	@ 0010b084 0843
.org 0x10b086
	strb r0, [r4, #10]	@ 0010b086 a072
.org 0x10b088
	ldr r0, [pc, #28]	@ 0010b088 0748
.org 0x10b08a
	ldr r0, [r0, #0]	@ 0010b08a 0068
.org 0x10b08c
	lsrs r1, r2, #2	@ 0010b08c 9108
.org 0x10b08e
	adds r0, r0, r1	@ 0010b08e 4018
.org 0x10b090
	ldrb r1, [r0, #0]	@ 0010b090 0178
.org 0x10b092
	movs r0, #3	@ 0010b092 0320
.org 0x10b094
	ands r0, r2	@ 0010b094 1040
.org 0x10b096
	adds r0, #4	@ 0010b096 0430
.org 0x10b098
	asrs r1, r0	@ 0010b098 0141
.org 0x10b09a
	movs r0, #1	@ 0010b09a 0120
.org 0x10b09c
	ands r1, r0	@ 0010b09c 0140
.org 0x10b09e
	cmp r1, #0	@ 0010b09e 0029
.org 0x10b0a0
	beq.n 0x10b0ac	@ 0010b0a0 04d0
.org 0x10b0a2
	movs r1, #134	@ 0010b0a2 8621
.org 0x10b0a4
	lsls r1, r1, #7	@ 0010b0a4 c901
.org 0x10b0a6
	b.n 0x10b0ba	@ 0010b0a6 08e0
.org 0x10b0a8
	.byte 0xac,0xed,0x02,0x02	@ 0010b0a8 data
.org 0x10b0ac
	adds r0, r2, #0	@ 0010b0ac 101c
.org 0x10b0ae
	bl 0x11d8f4	@ 0010b0ae 12f021fc
.org 0x10b0b2
	lsls r0, r0, #24	@ 0010b0b2 0006
.org 0x10b0b4
	cmp r0, #0	@ 0010b0b4 0028
.org 0x10b0b6
	beq.n 0x10b0c8	@ 0010b0b6 07d0
.org 0x10b0b8
	ldr r1, [pc, #8]	@ 0010b0b8 0249
.org 0x10b0ba
	adds r0, r4, #0	@ 0010b0ba 201c
.org 0x10b0bc
	bl 0x1cf00	@ 0010b0bc 11f720ff
.org 0x10b0c0
	b.n 0x10b0d0	@ 0010b0c0 06e0
.org 0x10b0c2
	.byte 0x00	@ 0010b0c2 data
.org 0x10b0c3
	.byte 0x00	@ 0010b0c3 data
.org 0x10b0c4
	.byte 0x01,0x43,0x00,0x00	@ 0010b0c4 data
.org 0x10b0c8
	ldr r1, [pc, #16]	@ 0010b0c8 0449
.org 0x10b0ca
	adds r0, r4, #0	@ 0010b0ca 201c
.org 0x10b0cc
	bl 0x1cf00	@ 0010b0cc 11f718ff
