@ FUN_08043b94  entry 0x08043b94  size 202
.thumb
.org 0x43b94
FUN_08043b94:
	push {r4, r5, lr}	@ 00043b94 30b5
.org 0x43b96
	adds r4, r0, #0	@ 00043b96 041c
.org 0x43b98
	lsls r1, r1, #24	@ 00043b98 0906
.org 0x43b9a
	lsrs r5, r1, #24	@ 00043b9a 0d0e
.org 0x43b9c
	ldrb r1, [r4, #10]	@ 00043b9c a17a
.org 0x43b9e
	movs r0, #16	@ 00043b9e 1020
.org 0x43ba0
	ands r0, r1	@ 00043ba0 0840
.org 0x43ba2
	cmp r0, #0	@ 00043ba2 0028
.org 0x43ba4
	beq.n 0x43bb2	@ 00043ba4 05d0
.org 0x43ba6
	ldr r0, [r4, #84]	@ 00043ba6 606d
.org 0x43ba8
	movs r2, #128	@ 00043ba8 8022
.org 0x43baa
	lsls r2, r2, #3	@ 00043baa d200
.org 0x43bac
	adds r0, r0, r2	@ 00043bac 8018
.org 0x43bae
	ldr r1, [r4, #88]	@ 00043bae a16d
.org 0x43bb0
	b.n 0x43bbe	@ 00043bb0 05e0
.org 0x43bb2
	ldr r0, [r4, #84]	@ 00043bb2 606d
.org 0x43bb4
	ldr r1, [pc, #76]	@ 00043bb4 1349
.org 0x43bb6
	adds r0, r0, r1	@ 00043bb6 4018
.org 0x43bb8
	ldr r1, [r4, #88]	@ 00043bb8 a16d
.org 0x43bba
	movs r2, #128	@ 00043bba 8022
.org 0x43bbc
	lsls r2, r2, #3	@ 00043bbc d200
.org 0x43bbe
	adds r1, r1, r2	@ 00043bbe 8918
.org 0x43bc0
	bl 0x7c7c	@ 00043bc0 c4f75cf8
.org 0x43bc4
	lsls r0, r0, #16	@ 00043bc4 0004
.org 0x43bc6
	lsrs r1, r0, #16	@ 00043bc6 010c
.org 0x43bc8
	movs r2, #15	@ 00043bc8 0f22
.org 0x43bca
	adds r0, r1, #0	@ 00043bca 081c
.org 0x43bcc
	ands r0, r2	@ 00043bcc 1040
.org 0x43bce
	cmp r0, #15	@ 00043bce 0f28
.org 0x43bd0
	bne.n 0x43bd4	@ 00043bd0 00d1
.org 0x43bd2
	movs r1, #0	@ 00043bd2 0021
.org 0x43bd4
	movs r0, #128	@ 00043bd4 8020
.org 0x43bd6
	lsls r0, r0, #8	@ 00043bd6 0002
.org 0x43bd8
	ands r0, r1	@ 00043bd8 0840
.org 0x43bda
	cmp r0, #0	@ 00043bda 0028
.org 0x43bdc
	beq.n 0x43be0	@ 00043bdc 00d0
.org 0x43bde
	movs r1, #0	@ 00043bde 0021
.org 0x43be0
	ands r1, r2	@ 00043be0 1140
.org 0x43be2
	cmp r1, #0	@ 00043be2 0029
.org 0x43be4
	beq.n 0x43c08	@ 00043be4 10d0
.org 0x43be6
	movs r0, #4	@ 00043be6 0420
.org 0x43be8
	ands r0, r5	@ 00043be8 2840
.org 0x43bea
	cmp r0, #0	@ 00043bea 0028
.org 0x43bec
	beq.n 0x43c00	@ 00043bec 08d0
.org 0x43bee
	adds r0, r4, #0	@ 00043bee 201c
.org 0x43bf0
	adds r0, #84	@ 00043bf0 5430
.org 0x43bf2
	ldrb r2, [r4, #10]	@ 00043bf2 a27a
.org 0x43bf4
	lsrs r2, r2, #4	@ 00043bf4 1209
.org 0x43bf6
	movs r1, #1	@ 00043bf6 0121
.org 0x43bf8
	ands r2, r1	@ 00043bf8 0a40
.org 0x43bfa
	movs r1, #7	@ 00043bfa 0721
.org 0x43bfc
	bl 0xd1bcc	@ 00043bfc 8df0e6ff
.org 0x43c00
	movs r0, #1	@ 00043c00 0120
.org 0x43c02
	b.n 0x43c62	@ 00043c02 2ee0
.org 0x43c04
	.byte 0x00,0xfc,0xff,0xff	@ 00043c04 data
.org 0x43c08
	movs r3, #1	@ 00043c08 0123
.org 0x43c0a
	adds r0, r5, #0	@ 00043c0a 281c
.org 0x43c0c
	ands r0, r3	@ 00043c0c 1840
.org 0x43c0e
	cmp r0, #0	@ 00043c0e 0028
.org 0x43c10
	beq.n 0x43c44	@ 00043c10 18d0
.org 0x43c12
	adds r0, r4, #0	@ 00043c12 201c
.org 0x43c14
	adds r0, #140	@ 00043c14 8c30
.org 0x43c16
	ldr r0, [r0, #0]	@ 00043c16 0068
.org 0x43c18
	movs r1, #128	@ 00043c18 8021
.org 0x43c1a
	lsls r1, r1, #5	@ 00043c1a 4901
.org 0x43c1c
	ands r0, r1	@ 00043c1c 0840
.org 0x43c1e
	cmp r0, #0	@ 00043c1e 0028
.org 0x43c20
	beq.n 0x43c44	@ 00043c20 10d0
.org 0x43c22
	movs r0, #3	@ 00043c22 0320
.org 0x43c24
	ands r0, r5	@ 00043c24 2840
.org 0x43c26
	cmp r0, #0	@ 00043c26 0028
.org 0x43c28
	beq.n 0x43c3a	@ 00043c28 07d0
.org 0x43c2a
	adds r0, r4, #0	@ 00043c2a 201c
.org 0x43c2c
	adds r0, #84	@ 00043c2c 5430
.org 0x43c2e
	ldrb r2, [r4, #10]	@ 00043c2e a27a
.org 0x43c30
	lsrs r2, r2, #4	@ 00043c30 1209
.org 0x43c32
	ands r2, r3	@ 00043c32 1a40
.org 0x43c34
	movs r1, #6	@ 00043c34 0621
.org 0x43c36
	bl 0xd1bcc	@ 00043c36 8df0c9ff
.org 0x43c3a
	movs r0, #43	@ 00043c3a 2b20
.org 0x43c3c
	bl 0x2b10	@ 00043c3c bef768ff
.org 0x43c40
	movs r0, #2	@ 00043c40 0220
.org 0x43c42
	b.n 0x43c62	@ 00043c42 0ee0
.org 0x43c44
	ldr r0, [pc, #20]	@ 00043c44 0548
.org 0x43c46
	adds r1, r4, #0	@ 00043c46 211c
.org 0x43c48
	adds r1, #84	@ 00043c48 5431
.org 0x43c4a
	bl 0x1fb14	@ 00043c4a dbf763ff
.org 0x43c4e
	movs r1, #128	@ 00043c4e 8021
.org 0x43c50
	lsls r1, r1, #7	@ 00043c50 c901
.org 0x43c52
	cmp r0, r1	@ 00043c52 8842
.org 0x43c54
	bhi.n 0x43c60	@ 00043c54 04d8
.org 0x43c56
	movs r0, #0	@ 00043c56 0020
.org 0x43c58
	b.n 0x43c62	@ 00043c58 03e0
.org 0x43c5a
	.byte 0x00	@ 00043c5a data
.org 0x43c5b
	.byte 0x00	@ 00043c5b data
.org 0x43c5c
	.byte 0xf8,0xe9,0x02,0x02	@ 00043c5c data
