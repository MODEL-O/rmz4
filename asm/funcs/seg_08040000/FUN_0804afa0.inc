@ FUN_0804afa0  entry 0x0804afa0  size 344
.thumb
.org 0x4afa0
FUN_0804afa0:
	push {r4, r5, r6, r7, lr}	@ 0004afa0 f0b5
.org 0x4afa2
	mov r7, r8	@ 0004afa2 4746
.org 0x4afa4
	push {r7}	@ 0004afa4 80b4
.org 0x4afa6
	sub sp, #8	@ 0004afa6 82b0
.org 0x4afa8
	adds r6, r0, #0	@ 0004afa8 061c
.org 0x4afaa
	adds r0, #180	@ 0004afaa b430
.org 0x4afac
	ldr r4, [r0, #0]	@ 0004afac 0468
.org 0x4afae
	ldr r0, [r0, #4]	@ 0004afae 4068
.org 0x4afb0
	mov r8, r0	@ 0004afb0 8046
.org 0x4afb2
	ldrb r0, [r4, #12]	@ 0004afb2 207b
.org 0x4afb4
	cmp r0, #1	@ 0004afb4 0128
.org 0x4afb6
	bls.n 0x4aff4	@ 0004afb6 1dd9
.org 0x4afb8
	ldrb r1, [r6, #10]	@ 0004afb8 b17a
.org 0x4afba
	movs r0, #254	@ 0004afba fe20
.org 0x4afbc
	ands r0, r1	@ 0004afbc 0840
.org 0x4afbe
	movs r2, #0	@ 0004afbe 0022
.org 0x4afc0
	movs r1, #253	@ 0004afc0 fd21
.org 0x4afc2
	ands r0, r1	@ 0004afc2 0840
.org 0x4afc4
	strb r0, [r6, #10]	@ 0004afc4 b072
.org 0x4afc6
	adds r0, r6, #0	@ 0004afc6 301c
.org 0x4afc8
	adds r0, #140	@ 0004afc8 8c30
.org 0x4afca
	str r2, [r0, #0]	@ 0004afca 0260
.org 0x4afcc
	adds r0, #4	@ 0004afcc 0430
.org 0x4afce
	str r2, [r0, #0]	@ 0004afce 0260
.org 0x4afd0
	adds r0, #4	@ 0004afd0 0430
.org 0x4afd2
	strb r2, [r0, #0]	@ 0004afd2 0270
.org 0x4afd4
	ldrb r1, [r6, #10]	@ 0004afd4 b17a
.org 0x4afd6
	movs r0, #251	@ 0004afd6 fb20
.org 0x4afd8
	ands r0, r1	@ 0004afd8 0840
.org 0x4afda
	strb r0, [r6, #10]	@ 0004afda b072
.org 0x4afdc
	ldr r1, [pc, #16]	@ 0004afdc 0449
.org 0x4afde
	ldrb r0, [r6, #9]	@ 0004afde 707a
.org 0x4afe0
	lsls r0, r0, #2	@ 0004afe0 8000
.org 0x4afe2
	adds r0, r0, r1	@ 0004afe2 4018
.org 0x4afe4
	movs r1, #3	@ 0004afe4 0321
.org 0x4afe6
	str r1, [r6, #12]	@ 0004afe6 f160
.org 0x4afe8
	ldr r0, [r0, #0]	@ 0004afe8 0068
.org 0x4afea
	ldr r0, [r0, #12]	@ 0004afea c068
.org 0x4afec
	str r0, [r6, #20]	@ 0004afec 7061
.org 0x4afee
	b.n 0x4b0f4	@ 0004afee 81e0
.org 0x4aff0
	.byte 0xf8,0x39,0x85,0x08	@ 0004aff0 data
.org 0x4aff4
	adds r0, r6, #0	@ 0004aff4 301c
.org 0x4aff6
	bl 0x1cff0	@ 0004aff6 d1f7fbff
.org 0x4affa
	ldrb r0, [r6, #16]	@ 0004affa 307c
.org 0x4affc
	cmp r0, #0	@ 0004affc 0028
.org 0x4affe
	bne.n 0x4b0b4	@ 0004affe 59d1
.org 0x4b000
	adds r0, r6, #0	@ 0004b000 301c
.org 0x4b002
	adds r0, #140	@ 0004b002 8c30
.org 0x4b004
	ldr r0, [r0, #0]	@ 0004b004 0068
.org 0x4b006
	movs r1, #128	@ 0004b006 8021
.org 0x4b008
	lsls r1, r1, #5	@ 0004b008 4901
.org 0x4b00a
	ands r0, r1	@ 0004b00a 0840
.org 0x4b00c
	cmp r0, #0	@ 0004b00c 0028
.org 0x4b00e
	beq.n 0x4b016	@ 0004b00e 02d0
.org 0x4b010
	movs r0, #43	@ 0004b010 2b20
.org 0x4b012
	bl 0x2b10	@ 0004b012 b7f77dfd
.org 0x4b016
	ldrb r0, [r6, #18]	@ 0004b016 b07c
.org 0x4b018
	subs r0, #1	@ 0004b018 0138
.org 0x4b01a
	strb r0, [r6, #18]	@ 0004b01a b074
.org 0x4b01c
	lsls r0, r0, #24	@ 0004b01c 0006
.org 0x4b01e
	lsrs r2, r0, #24	@ 0004b01e 020e
.org 0x4b020
	cmp r2, #0	@ 0004b020 002a
.org 0x4b022
	beq.n 0x4b0dc	@ 0004b022 5bd0
.org 0x4b024
	ldr r0, [r6, #84]	@ 0004b024 706d
.org 0x4b026
	ldr r1, [r6, #92]	@ 0004b026 f16d
.org 0x4b028
	adds r0, r0, r1	@ 0004b028 4018
.org 0x4b02a
	str r0, [r6, #84]	@ 0004b02a 7065
.org 0x4b02c
	cmp r2, #11	@ 0004b02c 0b2a
.org 0x4b02e
	bhi.n 0x4b060	@ 0004b02e 17d8
.org 0x4b030
	ldr r0, [r6, #100]	@ 0004b030 706e
.org 0x4b032
	adds r0, r1, r0	@ 0004b032 0818
.org 0x4b034
	str r0, [r6, #92]	@ 0004b034 f065
.org 0x4b036
	ldrb r1, [r6, #18]	@ 0004b036 b17c
.org 0x4b038
	movs r0, #12	@ 0004b038 0c20
.org 0x4b03a
	subs r0, r0, r1	@ 0004b03a 401a
.org 0x4b03c
	lsls r7, r0, #8	@ 0004b03c 0702
.org 0x4b03e
	adds r4, r7, #0	@ 0004b03e 3c1c
.org 0x4b040
	adds r0, r4, #0	@ 0004b040 201c
.org 0x4b042
	movs r1, #12	@ 0004b042 0c21
.org 0x4b044
	bl 0x128fb8	@ 0004b044 ddf0b8ff
.org 0x4b048
	adds r7, r0, #0	@ 0004b048 071c
.org 0x4b04a
	movs r5, #128	@ 0004b04a 8025
.org 0x4b04c
	lsls r5, r5, #1	@ 0004b04c 6d00
.org 0x4b04e
	adds r7, r7, r5	@ 0004b04e 7f19
.org 0x4b050
	negs r4, r4	@ 0004b050 6442
.org 0x4b052
	adds r0, r4, #0	@ 0004b052 201c
.org 0x4b054
	movs r1, #12	@ 0004b054 0c21
.org 0x4b056
	bl 0x128fb8	@ 0004b056 ddf0afff
.org 0x4b05a
	adds r4, r0, #0	@ 0004b05a 041c
.org 0x4b05c
	adds r4, r4, r5	@ 0004b05c 6419
.org 0x4b05e
	b.n 0x4b066	@ 0004b05e 02e0
.org 0x4b060
	movs r4, #128	@ 0004b060 8024
.org 0x4b062
	lsls r4, r4, #1	@ 0004b062 6400
.org 0x4b064
	adds r7, r4, #0	@ 0004b064 271c
.org 0x4b066
	adds r0, r6, #0	@ 0004b066 301c
.org 0x4b068
	adds r0, #80	@ 0004b068 5030
.org 0x4b06a
	strh r7, [r0, #0]	@ 0004b06a 0780
.org 0x4b06c
	adds r0, #2	@ 0004b06c 0230
.org 0x4b06e
	strh r4, [r0, #0]	@ 0004b06e 0480
.org 0x4b070
	adds r4, #16	@ 0004b070 1034
.org 0x4b072
	adds r0, r4, #0	@ 0004b072 201c
.org 0x4b074
	cmp r4, #0	@ 0004b074 002c
.org 0x4b076
	bge.n 0x4b07a	@ 0004b076 00da
.org 0x4b078
	adds r0, #31	@ 0004b078 1f30
.org 0x4b07a
	asrs r4, r0, #5	@ 0004b07a 4411
.org 0x4b07c
	cmp r4, #0	@ 0004b07c 002c
.org 0x4b07e
	beq.n 0x4b0f4	@ 0004b07e 39d0
.org 0x4b080
	mov r0, r8	@ 0004b080 4046
.org 0x4b082
	bl 0x3a4e8	@ 0004b082 eff731fa
.org 0x4b086
	adds r0, #8	@ 0004b086 0830
.org 0x4b088
	lsls r0, r0, #24	@ 0004b088 0006
.org 0x4b08a
	lsrs r5, r0, #24	@ 0004b08a 050e
.org 0x4b08c
	cmp r4, #7	@ 0004b08c 072c
.org 0x4b08e
	ble.n 0x4b092	@ 0004b08e 00dd
.org 0x4b090
	movs r4, #7	@ 0004b090 0724
.org 0x4b092
	adds r0, r6, #0	@ 0004b092 301c
.org 0x4b094
	adds r0, #116	@ 0004b094 7430
.org 0x4b096
	lsls r1, r4, #1	@ 0004b096 6100
.org 0x4b098
	adds r1, r1, r4	@ 0004b098 0919
.org 0x4b09a
	lsls r1, r1, #4	@ 0004b09a 0901
.org 0x4b09c
	ldr r2, [pc, #16]	@ 0004b09c 044a
.org 0x4b09e
	adds r1, r1, r2	@ 0004b09e 8918
.org 0x4b0a0
	movs r3, #1	@ 0004b0a0 0123
.org 0x4b0a2
	negs r3, r3	@ 0004b0a2 5b42
.org 0x4b0a4
	str r3, [sp, #0]	@ 0004b0a4 0093
.org 0x4b0a6
	str r3, [sp, #4]	@ 0004b0a6 0193
.org 0x4b0a8
	adds r2, r5, #0	@ 0004b0a8 2a1c
.org 0x4b0aa
	bl 0x5794	@ 0004b0aa baf773fb
.org 0x4b0ae
	b.n 0x4b0f4	@ 0004b0ae 21e0
.org 0x4b0b0
	.byte 0x24,0x74,0x85,0x08	@ 0004b0b0 data
.org 0x4b0b4
	ldrb r0, [r4, #12]	@ 0004b0b4 207b
.org 0x4b0b6
	cmp r0, #1	@ 0004b0b6 0128
.org 0x4b0b8
	bhi.n 0x4b0dc	@ 0004b0b8 10d8
.org 0x4b0ba
	ldr r0, [r4, #84]	@ 0004b0ba 606d
.org 0x4b0bc
	str r0, [r6, #84]	@ 0004b0bc 7065
.org 0x4b0be
	ldr r0, [r4, #88]	@ 0004b0be a06d
.org 0x4b0c0
	str r0, [r6, #88]	@ 0004b0c0 b065
.org 0x4b0c2
	adds r0, r4, #0	@ 0004b0c2 201c
.org 0x4b0c4
	adds r0, #80	@ 0004b0c4 5030
.org 0x4b0c6
	ldrh r1, [r0, #0]	@ 0004b0c6 0188
.org 0x4b0c8
	adds r0, r6, #0	@ 0004b0c8 301c
.org 0x4b0ca
	adds r0, #80	@ 0004b0ca 5030
.org 0x4b0cc
	strh r1, [r0, #0]	@ 0004b0cc 0180
.org 0x4b0ce
	adds r0, r4, #0	@ 0004b0ce 201c
.org 0x4b0d0
	adds r0, #82	@ 0004b0d0 5230
.org 0x4b0d2
	ldrh r1, [r0, #0]	@ 0004b0d2 0188
.org 0x4b0d4
	adds r0, r6, #0	@ 0004b0d4 301c
.org 0x4b0d6
	adds r0, #82	@ 0004b0d6 5230
.org 0x4b0d8
	strh r1, [r0, #0]	@ 0004b0d8 0180
.org 0x4b0da
	b.n 0x4b0f4	@ 0004b0da 0be0
.org 0x4b0dc
	ldr r1, [pc, #32]	@ 0004b0dc 0849
.org 0x4b0de
	ldrb r0, [r6, #9]	@ 0004b0de 707a
.org 0x4b0e0
	lsls r0, r0, #2	@ 0004b0e0 8000
.org 0x4b0e2
	adds r0, r0, r1	@ 0004b0e2 4018
.org 0x4b0e4
	movs r1, #2	@ 0004b0e4 0221
.org 0x4b0e6
	str r1, [r6, #12]	@ 0004b0e6 f160
.org 0x4b0e8
	ldr r0, [r0, #0]	@ 0004b0e8 0068
.org 0x4b0ea
	ldr r0, [r0, #8]	@ 0004b0ea 8068
.org 0x4b0ec
	str r0, [r6, #20]	@ 0004b0ec 7061
.org 0x4b0ee
	adds r0, r6, #0	@ 0004b0ee 301c
.org 0x4b0f0
	bl 0x4b104	@ 0004b0f0 00f008f8
.org 0x4b0f4
	add sp, #8	@ 0004b0f4 02b0
.org 0x4b0f6
	pop {r3}	@ 0004b0f6 08bc
