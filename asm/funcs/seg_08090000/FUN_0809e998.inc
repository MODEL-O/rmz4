@ FUN_0809e998  entry 0x0809e998  size 120
.thumb
.org 0x9e998
FUN_0809e998:
	push {r4, lr}	@ 0009e998 10b5
.org 0x9e99a
	adds r4, r0, #0	@ 0009e99a 041c
.org 0x9e99c
	ldr r0, [r4, #88]	@ 0009e99c a06d
.org 0x9e99e
	ldr r1, [r4, #96]	@ 0009e99e 216e
.org 0x9e9a0
	adds r3, r0, r1	@ 0009e9a0 4318
.org 0x9e9a2
	str r3, [r4, #88]	@ 0009e9a2 a365
.org 0x9e9a4
	ldrb r0, [r4, #17]	@ 0009e9a4 607c
.org 0x9e9a6
	cmp r0, #1	@ 0009e9a6 0128
.org 0x9e9a8
	bhi.n 0x9e9c4	@ 0009e9a8 0cd8
.org 0x9e9aa
	adds r2, r4, #0	@ 0009e9aa 221c
.org 0x9e9ac
	adds r2, #184	@ 0009e9ac b832
.org 0x9e9ae
	ldr r1, [pc, #16]	@ 0009e9ae 0449
.org 0x9e9b0
	lsls r0, r0, #2	@ 0009e9b0 8000
.org 0x9e9b2
	adds r0, r0, r1	@ 0009e9b2 4018
.org 0x9e9b4
	ldr r1, [r2, #0]	@ 0009e9b4 1168
.org 0x9e9b6
	ldr r0, [r0, #0]	@ 0009e9b6 0068
.org 0x9e9b8
	adds r1, r1, r0	@ 0009e9b8 0918
.org 0x9e9ba
	cmp r3, r1	@ 0009e9ba 8b42
.org 0x9e9bc
	bge.n 0x9e9dc	@ 0009e9bc 0eda
.org 0x9e9be
	b.n 0x9e9da	@ 0009e9be 0ce0
.org 0x9e9c0
	.byte 0xe8,0x9c,0x12,0x08	@ 0009e9c0 data
.org 0x9e9c4
	adds r2, r4, #0	@ 0009e9c4 221c
.org 0x9e9c6
	adds r2, #184	@ 0009e9c6 b832
.org 0x9e9c8
	ldr r1, [pc, #60]	@ 0009e9c8 0f49
.org 0x9e9ca
	ldrb r0, [r4, #17]	@ 0009e9ca 607c
.org 0x9e9cc
	lsls r0, r0, #2	@ 0009e9cc 8000
.org 0x9e9ce
	adds r0, r0, r1	@ 0009e9ce 4018
.org 0x9e9d0
	ldr r1, [r2, #0]	@ 0009e9d0 1168
.org 0x9e9d2
	ldr r0, [r0, #0]	@ 0009e9d2 0068
.org 0x9e9d4
	adds r1, r1, r0	@ 0009e9d4 0918
.org 0x9e9d6
	cmp r3, r1	@ 0009e9d6 8b42
.org 0x9e9d8
	ble.n 0x9e9dc	@ 0009e9d8 00dd
.org 0x9e9da
	str r1, [r4, #88]	@ 0009e9da a165
.org 0x9e9dc
	adds r0, r4, #0	@ 0009e9dc 201c
.org 0x9e9de
	bl 0x1cff0	@ 0009e9de 7ef707fb
.org 0x9e9e2
	ldrb r0, [r4, #18]	@ 0009e9e2 a07c
.org 0x9e9e4
	adds r0, #1	@ 0009e9e4 0130
.org 0x9e9e6
	strb r0, [r4, #18]	@ 0009e9e6 a074
.org 0x9e9e8
	lsls r0, r0, #24	@ 0009e9e8 0006
.org 0x9e9ea
	lsrs r0, r0, #24	@ 0009e9ea 000e
.org 0x9e9ec
	cmp r0, #21	@ 0009e9ec 1528
.org 0x9e9ee
	bne.n 0x9ea12	@ 0009e9ee 10d1
.org 0x9e9f0
	movs r0, #1	@ 0009e9f0 0120
.org 0x9e9f2
	strb r0, [r4, #13]	@ 0009e9f2 6073
.org 0x9e9f4
	movs r0, #0	@ 0009e9f4 0020
.org 0x9e9f6
	str r0, [r4, #92]	@ 0009e9f6 e065
.org 0x9e9f8
	ldrb r1, [r4, #10]	@ 0009e9f8 a17a
.org 0x9e9fa
	movs r2, #16	@ 0009e9fa 1022
.org 0x9e9fc
	adds r0, r2, #0	@ 0009e9fc 101c
.org 0x9e9fe
	ands r0, r1	@ 0009e9fe 0840
.org 0x9ea00
	cmp r0, #0	@ 0009ea00 0028
.org 0x9ea02
	beq.n 0x9ea0c	@ 0009ea02 03d0
.org 0x9ea04
	str r2, [r4, #100]	@ 0009ea04 6266
.org 0x9ea06
	b.n 0x9ea12	@ 0009ea06 04e0
.org 0x9ea08
	.byte 0xe8,0x9c,0x12,0x08	@ 0009ea08 data
.org 0x9ea0c
	movs r0, #16	@ 0009ea0c 1020
.org 0x9ea0e
	negs r0, r0	@ 0009ea0e 4042
