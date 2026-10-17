@ FUN_080ebb8c  entry 0x080ebb8c  size 208
.thumb
.org 0xebb8c
FUN_080ebb8c:
	push {r4, r5, lr}	@ 000ebb8c 30b5
.org 0xebb8e
	adds r4, r0, #0	@ 000ebb8e 041c
.org 0xebb90
	adds r5, r4, #0	@ 000ebb90 251c
.org 0xebb92
	adds r5, #191	@ 000ebb92 bf35
.org 0xebb94
	ldrb r0, [r5, #0]	@ 000ebb94 2878
.org 0xebb96
	cmp r0, #0	@ 000ebb96 0028
.org 0xebb98
	bne.n 0xebbc4	@ 000ebb98 14d1
.org 0xebb9a
	ldr r0, [r4, #84]	@ 000ebb9a 606d
.org 0xebb9c
	ldr r1, [r4, #88]	@ 000ebb9c a16d
.org 0xebb9e
	movs r2, #192	@ 000ebb9e c022
.org 0xebba0
	lsls r2, r2, #6	@ 000ebba0 9201
.org 0xebba2
	adds r1, r1, r2	@ 000ebba2 8918
.org 0xebba4
	bl 0x7c7c	@ 000ebba4 1cf76af8
.org 0xebba8
	lsls r0, r0, #16	@ 000ebba8 0004
.org 0xebbaa
	cmp r0, #0	@ 000ebbaa 0028
.org 0xebbac
	bne.n 0xebbc4	@ 000ebbac 0ad1
.org 0xebbae
	ldrb r1, [r4, #11]	@ 000ebbae e17a
.org 0xebbb0
	movs r0, #8	@ 000ebbb0 0820
.org 0xebbb2
	orrs r0, r1	@ 000ebbb2 0843
.org 0xebbb4
	strb r0, [r4, #11]	@ 000ebbb4 e072
.org 0xebbb6
	ldr r0, [pc, #68]	@ 000ebbb6 1148
.org 0xebbb8
	str r0, [r4, #48]	@ 000ebbb8 2063
.org 0xebbba
	movs r0, #15	@ 000ebbba 0f20
.org 0xebbbc
	strh r0, [r4, #38]	@ 000ebbbc e084
.org 0xebbbe
	ldrb r0, [r5, #0]	@ 000ebbbe 2878
.org 0xebbc0
	adds r0, #1	@ 000ebbc0 0130
.org 0xebbc2
	strb r0, [r5, #0]	@ 000ebbc2 2870
.org 0xebbc4
	adds r0, r4, #0	@ 000ebbc4 201c
.org 0xebbc6
	adds r0, #140	@ 000ebbc6 8c30
.org 0xebbc8
	ldr r0, [r0, #0]	@ 000ebbc8 0068
.org 0xebbca
	movs r1, #128	@ 000ebbca 8021
.org 0xebbcc
	lsls r1, r1, #2	@ 000ebbcc 8900
.org 0xebbce
	ands r0, r1	@ 000ebbce 0840
.org 0xebbd0
	cmp r0, #0	@ 000ebbd0 0028
.org 0xebbd2
	bne.n 0xebbe2	@ 000ebbd2 06d1
.org 0xebbd4
	adds r1, r4, #0	@ 000ebbd4 211c
.org 0xebbd6
	adds r1, #192	@ 000ebbd6 c031
.org 0xebbd8
	ldr r0, [r1, #0]	@ 000ebbd8 0868
.org 0xebbda
	subs r0, #1	@ 000ebbda 0138
.org 0xebbdc
	str r0, [r1, #0]	@ 000ebbdc 0860
.org 0xebbde
	cmp r0, #0	@ 000ebbde 0028
.org 0xebbe0
	bne.n 0xebc04	@ 000ebbe0 10d1
.org 0xebbe2
	ldr r1, [pc, #28]	@ 000ebbe2 0749
.org 0xebbe4
	ldrb r0, [r4, #9]	@ 000ebbe4 607a
.org 0xebbe6
	lsls r0, r0, #2	@ 000ebbe6 8000
.org 0xebbe8
	adds r0, r0, r1	@ 000ebbe8 4018
.org 0xebbea
	movs r1, #2	@ 000ebbea 0221
.org 0xebbec
	str r1, [r4, #12]	@ 000ebbec e160
.org 0xebbee
	ldr r0, [r0, #0]	@ 000ebbee 0068
.org 0xebbf0
	ldr r0, [r0, #8]	@ 000ebbf0 8068
.org 0xebbf2
	str r0, [r4, #20]	@ 000ebbf2 6061
.org 0xebbf4
	adds r0, r4, #0	@ 000ebbf4 201c
.org 0xebbf6
	bl 0xebc70	@ 000ebbf6 00f03bf8
.org 0xebbfa
	b.n 0xebc5e	@ 000ebbfa 30e0
.org 0xebbfc
	.byte 0x48,0x97,0x86,0x08	@ 000ebbfc data
.org 0xebc00
	.byte 0xfc,0x92,0x86,0x08	@ 000ebc00 data
.org 0xebc04
	adds r0, r4, #0	@ 000ebc04 201c
.org 0xebc06
	bl 0x1cff0	@ 000ebc06 31f7f3f9
.org 0xebc0a
	ldr r0, [r4, #88]	@ 000ebc0a a06d
.org 0xebc0c
	ldr r1, [r4, #96]	@ 000ebc0c 216e
.org 0xebc0e
	adds r0, r0, r1	@ 000ebc0e 4018
.org 0xebc10
	str r0, [r4, #88]	@ 000ebc10 a065
.org 0xebc12
	ldr r0, [pc, #80]	@ 000ebc12 1448
.org 0xebc14
	cmp r1, r0	@ 000ebc14 8142
.org 0xebc16
	ble.n 0xebc1c	@ 000ebc16 01dd
.org 0xebc18
	subs r0, r1, #4	@ 000ebc18 081f
.org 0xebc1a
	str r0, [r4, #96]	@ 000ebc1a 2066
.org 0xebc1c
	ldr r0, [r4, #84]	@ 000ebc1c 606d
.org 0xebc1e
	ldr r1, [r4, #88]	@ 000ebc1e a16d
.org 0xebc20
	ldr r2, [pc, #68]	@ 000ebc20 114a
.org 0xebc22
	adds r1, r1, r2	@ 000ebc22 8918
.org 0xebc24
	bl 0x7c7c	@ 000ebc24 1cf72af8
.org 0xebc28
	lsls r0, r0, #16	@ 000ebc28 0004
.org 0xebc2a
	lsrs r1, r0, #16	@ 000ebc2a 010c
.org 0xebc2c
	movs r0, #15	@ 000ebc2c 0f20
.org 0xebc2e
	ands r0, r1	@ 000ebc2e 0840
.org 0xebc30
	cmp r0, #15	@ 000ebc30 0f28
.org 0xebc32
	bne.n 0xebc36	@ 000ebc32 00d1
.org 0xebc34
	movs r1, #0	@ 000ebc34 0021
.org 0xebc36
	movs r0, #128	@ 000ebc36 8020
.org 0xebc38
	lsls r0, r0, #8	@ 000ebc38 0002
.org 0xebc3a
	ands r0, r1	@ 000ebc3a 0840
.org 0xebc3c
	cmp r0, #0	@ 000ebc3c 0028
.org 0xebc3e
	beq.n 0xebc42	@ 000ebc3e 00d0
.org 0xebc40
	movs r1, #0	@ 000ebc40 0021
.org 0xebc42
	cmp r1, #0	@ 000ebc42 0029
.org 0xebc44
	beq.n 0xebc5e	@ 000ebc44 0bd0
.org 0xebc46
	ldr r1, [pc, #36]	@ 000ebc46 0949
.org 0xebc48
	ldrb r0, [r4, #9]	@ 000ebc48 607a
.org 0xebc4a
	lsls r0, r0, #2	@ 000ebc4a 8000
.org 0xebc4c
	adds r0, r0, r1	@ 000ebc4c 4018
.org 0xebc4e
	movs r1, #2	@ 000ebc4e 0221
.org 0xebc50
	str r1, [r4, #12]	@ 000ebc50 e160
.org 0xebc52
	ldr r0, [r0, #0]	@ 000ebc52 0068
.org 0xebc54
	ldr r0, [r0, #8]	@ 000ebc54 8068
.org 0xebc56
	str r0, [r4, #20]	@ 000ebc56 6061
.org 0xebc58
	adds r0, r4, #0	@ 000ebc58 201c
.org 0xebc5a
	bl 0xebc70	@ 000ebc5a 00f009f8
