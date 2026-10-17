@ FUN_080c0ea4  entry 0x080c0ea4  size 114
.thumb
.org 0xc0ea4
FUN_080c0ea4:
	push {r4, r5, r6, lr}	@ 000c0ea4 70b5
.org 0xc0ea6
	adds r4, r0, #0	@ 000c0ea6 041c
.org 0xc0ea8
	movs r6, #0	@ 000c0ea8 0026
.org 0xc0eaa
	ldr r1, [pc, #108]	@ 000c0eaa 1b49
.org 0xc0eac
	ldrb r0, [r4, #9]	@ 000c0eac 607a
.org 0xc0eae
	lsls r0, r0, #2	@ 000c0eae 8000
.org 0xc0eb0
	adds r0, r0, r1	@ 000c0eb0 4018
.org 0xc0eb2
	movs r1, #1	@ 000c0eb2 0121
.org 0xc0eb4
	str r1, [r4, #12]	@ 000c0eb4 e160
.org 0xc0eb6
	ldr r0, [r0, #0]	@ 000c0eb6 0068
.org 0xc0eb8
	ldr r0, [r0, #4]	@ 000c0eb8 4068
.org 0xc0eba
	str r0, [r4, #20]	@ 000c0eba 6061
.org 0xc0ebc
	strb r6, [r4, #13]	@ 000c0ebc 6673
.org 0xc0ebe
	strb r6, [r4, #14]	@ 000c0ebe a673
.org 0xc0ec0
	strb r6, [r4, #15]	@ 000c0ec0 e673
.org 0xc0ec2
	ldrb r0, [r4, #10]	@ 000c0ec2 a07a
.org 0xc0ec4
	orrs r0, r1	@ 000c0ec4 0843
.org 0xc0ec6
	movs r1, #2	@ 000c0ec6 0221
.org 0xc0ec8
	orrs r0, r1	@ 000c0ec8 0843
.org 0xc0eca
	strb r0, [r4, #10]	@ 000c0eca a072
.org 0xc0ecc
	adds r0, r4, #0	@ 000c0ecc 201c
.org 0xc0ece
	bl 0x1cc9c	@ 000c0ece 5bf7e5fe
.org 0xc0ed2
	ldrb r1, [r4, #10]	@ 000c0ed2 a17a
.org 0xc0ed4
	movs r0, #239	@ 000c0ed4 ef20
.org 0xc0ed6
	ands r0, r1	@ 000c0ed6 0840
.org 0xc0ed8
	strb r0, [r4, #10]	@ 000c0ed8 a072
.org 0xc0eda
	adds r0, r4, #0	@ 000c0eda 201c
.org 0xc0edc
	adds r0, #76	@ 000c0edc 4c30
.org 0xc0ede
	strb r6, [r0, #0]	@ 000c0ede 0670
.org 0xc0ee0
	adds r2, r4, #0	@ 000c0ee0 221c
.org 0xc0ee2
	adds r2, #74	@ 000c0ee2 4a32
.org 0xc0ee4
	ldrb r1, [r2, #0]	@ 000c0ee4 1178
.org 0xc0ee6
	movs r0, #17	@ 000c0ee6 1120
.org 0xc0ee8
	negs r0, r0	@ 000c0ee8 4042
.org 0xc0eea
	ands r0, r1	@ 000c0eea 0840
.org 0xc0eec
	strb r0, [r2, #0]	@ 000c0eec 1070
.org 0xc0eee
	ldrb r1, [r4, #10]	@ 000c0eee a17a
.org 0xc0ef0
	movs r0, #4	@ 000c0ef0 0420
.org 0xc0ef2
	orrs r0, r1	@ 000c0ef2 0843
.org 0xc0ef4
	strb r0, [r4, #10]	@ 000c0ef4 a072
.org 0xc0ef6
	adds r5, r4, #0	@ 000c0ef6 251c
.org 0xc0ef8
	adds r5, #116	@ 000c0ef8 7435
.org 0xc0efa
	ldr r1, [pc, #32]	@ 000c0efa 0849
.org 0xc0efc
	adds r2, #10	@ 000c0efc 0a32
.org 0xc0efe
	adds r0, r5, #0	@ 000c0efe 281c
.org 0xc0f00
	movs r3, #64	@ 000c0f00 4023
.org 0xc0f02
	bl 0x5760	@ 000c0f02 44f72dfc
.org 0xc0f06
	str r4, [r5, #44]	@ 000c0f06 ec62
.org 0xc0f08
	str r6, [r5, #36]	@ 000c0f08 6e62
.org 0xc0f0a
	adds r0, r4, #0	@ 000c0f0a 201c
.org 0xc0f0c
	bl 0xc0f20	@ 000c0f0c 00f008f8
.org 0xc0f10
	pop {r4, r5, r6}	@ 000c0f10 70bc
.org 0xc0f12
	pop {r0}	@ 000c0f12 01bc
.org 0xc0f14
	bx r0	@ 000c0f14 0047
