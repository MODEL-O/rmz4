@ FUN_080acdb8  entry 0x080acdb8  size 172
.thumb
.org 0xacdb8
FUN_080acdb8:
	push {r4, r5, r6, lr}	@ 000acdb8 70b5
.org 0xacdba
	sub sp, #8	@ 000acdba 82b0
.org 0xacdbc
	adds r4, r0, #0	@ 000acdbc 041c
.org 0xacdbe
	ldr r1, [pc, #44]	@ 000acdbe 0b49
.org 0xacdc0
	mov r0, sp	@ 000acdc0 6846
.org 0xacdc2
	movs r2, #5	@ 000acdc2 0522
.org 0xacdc4
	bl 0x129258	@ 000acdc4 7cf048fa
.org 0xacdc8
	ldr r0, [r4, #40]	@ 000acdc8 a06a
.org 0xacdca
	ldrb r0, [r0, #12]	@ 000acdca 007b
.org 0xacdcc
	cmp r0, #1	@ 000acdcc 0128
.org 0xacdce
	bls.n 0xacdf4	@ 000acdce 11d9
.org 0xacdd0
	ldr r1, [pc, #28]	@ 000acdd0 0749
.org 0xacdd2
	ldrb r0, [r4, #9]	@ 000acdd2 607a
.org 0xacdd4
	lsls r0, r0, #2	@ 000acdd4 8000
.org 0xacdd6
	adds r0, r0, r1	@ 000acdd6 4018
.org 0xacdd8
	movs r1, #2	@ 000acdd8 0221
.org 0xacdda
	str r1, [r4, #12]	@ 000acdda e160
.org 0xacddc
	ldr r0, [r0, #0]	@ 000acddc 0068
.org 0xacdde
	ldr r0, [r0, #8]	@ 000acdde 8068
.org 0xacde0
	str r0, [r4, #20]	@ 000acde0 6061
.org 0xacde2
	adds r0, r4, #0	@ 000acde2 201c
.org 0xacde4
	bl 0xad364	@ 000acde4 00f0befa
.org 0xacde8
	b.n 0xace66	@ 000acde8 3de0
.org 0xacdea
	.byte 0x00	@ 000acdea data
.org 0xacdeb
	.byte 0x00	@ 000acdeb data
.org 0xacdec
	.byte 0x9c,0x9d,0x12,0x08	@ 000acdec data
.org 0xacdf0
	.byte 0x40,0xdb,0x85,0x08	@ 000acdf0 data
.org 0xacdf4
	adds r3, r4, #0	@ 000acdf4 231c
.org 0xacdf6
	adds r3, #184	@ 000acdf6 b833
.org 0xacdf8
	ldrb r0, [r3, #0]	@ 000acdf8 1878
.org 0xacdfa
	cmp r0, #0	@ 000acdfa 0028
.org 0xacdfc
	beq.n 0xace50	@ 000acdfc 28d0
.org 0xacdfe
	adds r5, r4, #0	@ 000acdfe 251c
.org 0xace00
	adds r5, #185	@ 000ace00 b935
.org 0xace02
	ldrb r0, [r5, #0]	@ 000ace02 2878
.org 0xace04
	cmp r0, #0	@ 000ace04 0028
.org 0xace06
	beq.n 0xace66	@ 000ace06 2ed0
.org 0xace08
	adds r2, r4, #0	@ 000ace08 221c
.org 0xace0a
	adds r2, #182	@ 000ace0a b632
.org 0xace0c
	ldrb r1, [r2, #0]	@ 000ace0c 1178
.org 0xace0e
	movs r0, #0	@ 000ace0e 0020
.org 0xace10
	strb r1, [r4, #13]	@ 000ace10 6173
.org 0xace12
	strb r0, [r4, #14]	@ 000ace12 a073
.org 0xace14
	strb r0, [r4, #15]	@ 000ace14 e073
.org 0xace16
	strb r0, [r3, #0]	@ 000ace16 1870
.org 0xace18
	strb r0, [r5, #0]	@ 000ace18 2870
.org 0xace1a
	ldrb r0, [r2, #0]	@ 000ace1a 1078
.org 0xace1c
	add r0, sp	@ 000ace1c 6844
.org 0xace1e
	ldrb r0, [r0, #0]	@ 000ace1e 0078
.org 0xace20
	adds r1, r4, #0	@ 000ace20 211c
.org 0xace22
	adds r1, #183	@ 000ace22 b731
.org 0xace24
	strb r0, [r1, #0]	@ 000ace24 0870
.org 0xace26
	ldrb r0, [r2, #0]	@ 000ace26 1078
.org 0xace28
	cmp r0, #1	@ 000ace28 0128
.org 0xace2a
	bne.n 0xace66	@ 000ace2a 1cd1
.org 0xace2c
	movs r5, #0	@ 000ace2c 0025
.org 0xace2e
	adds r6, r4, #0	@ 000ace2e 261c
.org 0xace30
	adds r6, #180	@ 000ace30 b436
.org 0xace32
	ldrb r0, [r6, #0]	@ 000ace32 3078
.org 0xace34
	asrs r0, r5	@ 000ace34 2841
.org 0xace36
	movs r1, #1	@ 000ace36 0121
.org 0xace38
	ands r0, r1	@ 000ace38 0840
.org 0xace3a
	cmp r0, #0	@ 000ace3a 0028
.org 0xace3c
	bne.n 0xace48	@ 000ace3c 04d1
.org 0xace3e
	lsls r1, r5, #24	@ 000ace3e 2906
.org 0xace40
	lsrs r1, r1, #24	@ 000ace40 090e
.org 0xace42
	adds r0, r4, #0	@ 000ace42 201c
.org 0xace44
	bl 0xacc04	@ 000ace44 fff7defe
.org 0xace48
	adds r5, #1	@ 000ace48 0135
.org 0xace4a
	cmp r5, #3	@ 000ace4a 032d
.org 0xace4c
	ble.n 0xace32	@ 000ace4c f1dd
.org 0xace4e
	b.n 0xace66	@ 000ace4e 0ae0
.org 0xace50
	adds r0, r4, #0	@ 000ace50 201c
.org 0xace52
	adds r0, #180	@ 000ace52 b430
.org 0xace54
	adds r1, r4, #0	@ 000ace54 211c
.org 0xace56
	adds r1, #181	@ 000ace56 b531
.org 0xace58
	ldrb r2, [r0, #0]	@ 000ace58 0278
.org 0xace5a
	ldrb r0, [r1, #0]	@ 000ace5a 0878
.org 0xace5c
	ands r0, r2	@ 000ace5c 1040
.org 0xace5e
	cmp r0, #0	@ 000ace5e 0028
.org 0xace60
	bne.n 0xace66	@ 000ace60 01d1
.org 0xace62
	movs r0, #1	@ 000ace62 0120
