@ FUN_0802e058  entry 0x0802e058  size 194
.thumb
.org 0x2e058
FUN_0802e058:
	push {r4, r5, r6, r7, lr}	@ 0002e058 f0b5
.org 0x2e05a
	mov r7, sl	@ 0002e05a 5746
.org 0x2e05c
	mov r6, r9	@ 0002e05c 4e46
.org 0x2e05e
	mov r5, r8	@ 0002e05e 4546
.org 0x2e060
	push {r5, r6, r7}	@ 0002e060 e0b4
.org 0x2e062
	adds r5, r0, #0	@ 0002e062 051c
.org 0x2e064
	mov r9, r1	@ 0002e064 8946
.org 0x2e066
	mov r8, r2	@ 0002e066 9046
.org 0x2e068
	movs r6, #0	@ 0002e068 0026
.org 0x2e06a
	movs r1, #220	@ 0002e06a dc21
.org 0x2e06c
	lsls r1, r1, #1	@ 0002e06c 4900
.org 0x2e06e
	adds r0, r5, r1	@ 0002e06e 6818
.org 0x2e070
	ldrb r0, [r0, #0]	@ 0002e070 0078
.org 0x2e072
	cmp r6, r0	@ 0002e072 8642
.org 0x2e074
	bcs.n 0x2e112	@ 0002e074 4dd2
.org 0x2e076
	movs r2, #240	@ 0002e076 f022
.org 0x2e078
	lsls r2, r2, #1	@ 0002e078 5200
.org 0x2e07a
	ldr r4, [pc, #120]	@ 0002e07a 1e4c
.org 0x2e07c
	adds r2, r2, r4	@ 0002e07c 1219
.org 0x2e07e
	mov sl, r2	@ 0002e07e 9246
.org 0x2e080
	movs r7, #196	@ 0002e080 c427
.org 0x2e082
	lsls r7, r7, #1	@ 0002e082 7f00
.org 0x2e084
	adds r0, r5, r7	@ 0002e084 e819
.org 0x2e086
	adds r0, r0, r6	@ 0002e086 8019
.org 0x2e088
	ldrb r3, [r0, #0]	@ 0002e088 0378
.org 0x2e08a
	lsls r0, r3, #1	@ 0002e08a 5800
.org 0x2e08c
	adds r0, r0, r3	@ 0002e08c c018
.org 0x2e08e
	lsls r2, r0, #3	@ 0002e08e c200
.org 0x2e090
	ldr r1, [pc, #96]	@ 0002e090 1849
.org 0x2e092
	movs r4, #238	@ 0002e092 ee24
.org 0x2e094
	lsls r4, r4, #1	@ 0002e094 6400
.org 0x2e096
	adds r0, r1, r4	@ 0002e096 0819
.org 0x2e098
	adds r0, r2, r0	@ 0002e098 1018
.org 0x2e09a
	ldr r1, [r0, #0]	@ 0002e09a 0168
.org 0x2e09c
	mov r7, r9	@ 0002e09c 4f46
.org 0x2e09e
	subs r1, r7, r1	@ 0002e09e 791a
.org 0x2e0a0
	ldr r0, [pc, #80]	@ 0002e0a0 1448
.org 0x2e0a2
	adds r4, r2, r0	@ 0002e0a2 1418
.org 0x2e0a4
	movs r7, #236	@ 0002e0a4 ec27
.org 0x2e0a6
	lsls r7, r7, #1	@ 0002e0a6 7f00
.org 0x2e0a8
	adds r0, r4, r7	@ 0002e0a8 e019
.org 0x2e0aa
	ldrh r0, [r0, #0]	@ 0002e0aa 0088
.org 0x2e0ac
	adds r1, r1, r0	@ 0002e0ac 0918
.org 0x2e0ae
	lsls r0, r0, #1	@ 0002e0ae 4000
.org 0x2e0b0
	cmp r1, r0	@ 0002e0b0 8142
.org 0x2e0b2
	bcs.n 0x2e100	@ 0002e0b2 25d2
.org 0x2e0b4
	mov r1, sl	@ 0002e0b4 5146
.org 0x2e0b6
	adds r0, r2, r1	@ 0002e0b6 5018
.org 0x2e0b8
	ldr r1, [r0, #0]	@ 0002e0b8 0168
.org 0x2e0ba
	mov r2, r8	@ 0002e0ba 4246
.org 0x2e0bc
	subs r1, r2, r1	@ 0002e0bc 511a
.org 0x2e0be
	adds r7, #2	@ 0002e0be 0237
.org 0x2e0c0
	adds r0, r4, r7	@ 0002e0c0 e019
.org 0x2e0c2
	ldrh r0, [r0, #0]	@ 0002e0c2 0088
.org 0x2e0c4
	adds r1, r1, r0	@ 0002e0c4 0918
.org 0x2e0c6
	lsls r0, r0, #1	@ 0002e0c6 4000
.org 0x2e0c8
	cmp r1, r0	@ 0002e0c8 8142
.org 0x2e0ca
	bcs.n 0x2e100	@ 0002e0ca 19d2
.org 0x2e0cc
	adds r0, r5, #0	@ 0002e0cc 281c
.org 0x2e0ce
	adds r1, r3, #0	@ 0002e0ce 191c
.org 0x2e0d0
	bl 0x2e63c	@ 0002e0d0 00f0b4fa
.org 0x2e0d4
	movs r0, #235	@ 0002e0d4 eb20
.org 0x2e0d6
	lsls r0, r0, #1	@ 0002e0d6 4000
.org 0x2e0d8
	adds r1, r4, r0	@ 0002e0d8 2118
.org 0x2e0da
	ldrh r2, [r1, #0]	@ 0002e0da 0a88
.org 0x2e0dc
	movs r0, #15	@ 0002e0dc 0f20
.org 0x2e0de
	ands r0, r2	@ 0002e0de 1040
.org 0x2e0e0
	cmp r0, #15	@ 0002e0e0 0f28
.org 0x2e0e2
	bne.n 0x2e0fc	@ 0002e0e2 0bd1
.org 0x2e0e4
	movs r1, #128	@ 0002e0e4 8021
.org 0x2e0e6
	lsls r1, r1, #8	@ 0002e0e6 0902
.org 0x2e0e8
	adds r0, r1, #0	@ 0002e0e8 081c
.org 0x2e0ea
	ands r0, r2	@ 0002e0ea 1040
.org 0x2e0ec
	cmp r0, #0	@ 0002e0ec 0028
.org 0x2e0ee
	beq.n 0x2e100	@ 0002e0ee 07d0
.org 0x2e0f0
	ldr r0, [pc, #4]	@ 0002e0f0 0148
.org 0x2e0f2
	b.n 0x2e114	@ 0002e0f2 0fe0
.org 0x2e0f4
	.byte 0xb0,0x0a,0x00,0x02	@ 0002e0f4 data
.org 0x2e0f8
	.byte 0x01,0x80,0x00,0x00	@ 0002e0f8 data
.org 0x2e0fc
	ldrh r0, [r1, #0]	@ 0002e0fc 0888
.org 0x2e0fe
	b.n 0x2e114	@ 0002e0fe 09e0
.org 0x2e100
	adds r0, r6, #1	@ 0002e100 701c
.org 0x2e102
	lsls r0, r0, #24	@ 0002e102 0006
.org 0x2e104
	lsrs r6, r0, #24	@ 0002e104 060e
.org 0x2e106
	movs r2, #220	@ 0002e106 dc22
.org 0x2e108
	lsls r2, r2, #1	@ 0002e108 5200
.org 0x2e10a
	adds r0, r5, r2	@ 0002e10a a818
.org 0x2e10c
	ldrb r0, [r0, #0]	@ 0002e10c 0078
.org 0x2e10e
	cmp r6, r0	@ 0002e10e 8642
.org 0x2e110
	bcc.n 0x2e080	@ 0002e110 b6d3
.org 0x2e112
	movs r0, #0	@ 0002e112 0020
.org 0x2e114
	pop {r3, r4, r5}	@ 0002e114 38bc
.org 0x2e116
	mov r8, r3	@ 0002e116 9846
.org 0x2e118
	mov r9, r4	@ 0002e118 a146
