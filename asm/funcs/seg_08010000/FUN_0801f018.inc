@ FUN_0801f018  entry 0x0801f018  size 232
.thumb
.org 0x1f018
FUN_0801f018:
	push {r4, r5, r6, r7, lr}	@ 0001f018 f0b5
.org 0x1f01a
	mov r7, r9	@ 0001f01a 4f46
.org 0x1f01c
	mov r6, r8	@ 0001f01c 4646
.org 0x1f01e
	push {r6, r7}	@ 0001f01e c0b4
.org 0x1f020
	mov r8, r0	@ 0001f020 8046
.org 0x1f022
	movs r6, #0	@ 0001f022 0026
.org 0x1f024
	ldr r0, [pc, #20]	@ 0001f024 0548
.org 0x1f026
	movs r1, #232	@ 0001f026 e821
.org 0x1f028
	lsls r1, r1, #1	@ 0001f028 4900
.org 0x1f02a
	adds r0, r0, r1	@ 0001f02a 4018
.org 0x1f02c
	ldrh r0, [r0, #0]	@ 0001f02c 0088
.org 0x1f02e
	movs r1, #127	@ 0001f02e 7f21
.org 0x1f030
	ands r1, r0	@ 0001f030 0140
.org 0x1f032
	cmp r1, #7	@ 0001f032 0729
.org 0x1f034
	bne.n 0x1f040	@ 0001f034 04d1
.org 0x1f036
	movs r6, #13	@ 0001f036 0d26
.org 0x1f038
	b.n 0x1f05e	@ 0001f038 11e0
.org 0x1f03a
	.byte 0x00	@ 0001f03a data
.org 0x1f03b
	.byte 0x00	@ 0001f03b data
.org 0x1f03c
	.byte 0xb0,0x0a,0x00,0x02	@ 0001f03c data
.org 0x1f040
	cmp r1, #6	@ 0001f040 0629
.org 0x1f042
	bne.n 0x1f048	@ 0001f042 01d1
.org 0x1f044
	movs r6, #22	@ 0001f044 1626
.org 0x1f046
	b.n 0x1f05e	@ 0001f046 0ae0
.org 0x1f048
	cmp r1, #4	@ 0001f048 0429
.org 0x1f04a
	bne.n 0x1f050	@ 0001f04a 01d1
.org 0x1f04c
	movs r6, #23	@ 0001f04c 1726
.org 0x1f04e
	b.n 0x1f05e	@ 0001f04e 06e0
.org 0x1f050
	cmp r1, #8	@ 0001f050 0829
.org 0x1f052
	bne.n 0x1f058	@ 0001f052 01d1
.org 0x1f054
	movs r6, #25	@ 0001f054 1926
.org 0x1f056
	b.n 0x1f05e	@ 0001f056 02e0
.org 0x1f058
	cmp r1, #16	@ 0001f058 1029
.org 0x1f05a
	bne.n 0x1f05e	@ 0001f05a 00d1
.org 0x1f05c
	movs r6, #26	@ 0001f05c 1a26
.org 0x1f05e
	cmp r6, #33	@ 0001f05e 212e
.org 0x1f060
	bgt.n 0x1f0f8	@ 0001f060 4adc
.org 0x1f062
	ldr r0, [pc, #80]	@ 0001f062 1448
.org 0x1f064
	ldrh r0, [r0, #0]	@ 0001f064 0088
.org 0x1f066
	mov r9, r0	@ 0001f066 8146
.org 0x1f068
	lsls r5, r6, #3	@ 0001f068 f500
.org 0x1f06a
	movs r0, #127	@ 0001f06a 7f20
.org 0x1f06c
	mov r2, r9	@ 0001f06c 4a46
.org 0x1f06e
	ands r0, r2	@ 0001f06e 1040
.org 0x1f070
	cmp r0, #4	@ 0001f070 0428
.org 0x1f072
	bne.n 0x1f0c0	@ 0001f072 25d1
.org 0x1f074
	ldr r7, [pc, #64]	@ 0001f074 104f
.org 0x1f076
	adds r0, r5, r7	@ 0001f076 e819
.org 0x1f078
	ldr r4, [r0, #0]	@ 0001f078 0468
.org 0x1f07a
	ldr r1, [pc, #64]	@ 0001f07a 1049
.org 0x1f07c
	adds r4, r4, r1	@ 0001f07c 6418
.org 0x1f07e
	mov r3, r8	@ 0001f07e 4346
.org 0x1f080
	ldr r0, [r3, #0]	@ 0001f080 1868
.org 0x1f082
	adds r0, r0, r1	@ 0001f082 4018
.org 0x1f084
	movs r1, #240	@ 0001f084 f021
.org 0x1f086
	lsls r1, r1, #10	@ 0001f086 8902
.org 0x1f088
	bl 0x129050	@ 0001f088 09f1e2ff
.org 0x1f08c
	subs r4, r4, r0	@ 0001f08c 241a
.org 0x1f08e
	movs r0, #128	@ 0001f08e 8020
.org 0x1f090
	lsls r0, r0, #6	@ 0001f090 8001
.org 0x1f092
	adds r4, r4, r0	@ 0001f092 2418
.org 0x1f094
	movs r2, #128	@ 0001f094 8022
.org 0x1f096
	lsls r2, r2, #7	@ 0001f096 d201
.org 0x1f098
	cmp r4, r2	@ 0001f098 9442
.org 0x1f09a
	bhi.n 0x1f0f0	@ 0001f09a 29d8
.org 0x1f09c
	adds r0, r7, #4	@ 0001f09c 381d
.org 0x1f09e
	adds r0, r5, r0	@ 0001f09e 2818
.org 0x1f0a0
	ldr r0, [r0, #0]	@ 0001f0a0 0068
.org 0x1f0a2
	mov r3, r8	@ 0001f0a2 4346
.org 0x1f0a4
	ldr r1, [r3, #4]	@ 0001f0a4 5968
.org 0x1f0a6
	subs r0, r0, r1	@ 0001f0a6 401a
.org 0x1f0a8
	movs r1, #128	@ 0001f0a8 8021
.org 0x1f0aa
	lsls r1, r1, #6	@ 0001f0aa 8901
.org 0x1f0ac
	adds r0, r0, r1	@ 0001f0ac 4018
.org 0x1f0ae
	cmp r0, r2	@ 0001f0ae 9042
.org 0x1f0b0
	bls.n 0x1f0f8	@ 0001f0b0 22d9
.org 0x1f0b2
	b.n 0x1f0f0	@ 0001f0b2 1de0
.org 0x1f0b4
	.byte 0x80,0x0c,0x00,0x02	@ 0001f0b4 data
.org 0x1f0b8
	.byte 0xd4,0x29,0x84,0x08	@ 0001f0b8 data
.org 0x1f0bc
	.byte 0x00,0x10,0xff,0xff	@ 0001f0bc data
.org 0x1f0c0
	ldr r2, [pc, #64]	@ 0001f0c0 104a
.org 0x1f0c2
	adds r0, r5, r2	@ 0001f0c2 a818
.org 0x1f0c4
	ldr r1, [r0, #0]	@ 0001f0c4 0168
.org 0x1f0c6
	mov r3, r8	@ 0001f0c6 4346
.org 0x1f0c8
	ldr r0, [r3, #0]	@ 0001f0c8 1868
.org 0x1f0ca
	subs r1, r1, r0	@ 0001f0ca 091a
.org 0x1f0cc
	movs r0, #128	@ 0001f0cc 8020
.org 0x1f0ce
	lsls r0, r0, #6	@ 0001f0ce 8001
.org 0x1f0d0
	adds r1, r1, r0	@ 0001f0d0 0918
.org 0x1f0d2
	movs r3, #128	@ 0001f0d2 8023
.org 0x1f0d4
	lsls r3, r3, #7	@ 0001f0d4 db01
.org 0x1f0d6
	cmp r1, r3	@ 0001f0d6 9942
.org 0x1f0d8
	bhi.n 0x1f0f0	@ 0001f0d8 0ad8
.org 0x1f0da
	adds r0, r2, #4	@ 0001f0da 101d
.org 0x1f0dc
	adds r0, r5, r0	@ 0001f0dc 2818
.org 0x1f0de
	ldr r0, [r0, #0]	@ 0001f0de 0068
.org 0x1f0e0
	mov r2, r8	@ 0001f0e0 4246
.org 0x1f0e2
	ldr r1, [r2, #4]	@ 0001f0e2 5168
.org 0x1f0e4
	subs r0, r0, r1	@ 0001f0e4 401a
.org 0x1f0e6
	movs r1, #128	@ 0001f0e6 8021
.org 0x1f0e8
	lsls r1, r1, #6	@ 0001f0e8 8901
.org 0x1f0ea
	adds r0, r0, r1	@ 0001f0ea 4018
.org 0x1f0ec
	cmp r0, r3	@ 0001f0ec 9842
.org 0x1f0ee
	bls.n 0x1f0f8	@ 0001f0ee 03d9
.org 0x1f0f0
	adds r5, #8	@ 0001f0f0 0835
.org 0x1f0f2
	adds r6, #1	@ 0001f0f2 0136
.org 0x1f0f4
	cmp r6, #33	@ 0001f0f4 212e
.org 0x1f0f6
	ble.n 0x1f06a	@ 0001f0f6 b8dd
.org 0x1f0f8
	cmp r6, #34	@ 0001f0f8 222e
.org 0x1f0fa
	beq.n 0x1f10c	@ 0001f0fa 07d0
.org 0x1f0fc
	lsls r0, r6, #3	@ 0001f0fc f000
.org 0x1f0fe
	ldr r1, [pc, #8]	@ 0001f0fe 0249
