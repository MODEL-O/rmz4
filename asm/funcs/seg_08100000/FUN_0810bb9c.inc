@ FUN_0810bb9c  entry 0x0810bb9c  size 98
.thumb
.org 0x10bb9c
FUN_0810bb9c:
	push {lr}	@ 0010bb9c 00b5
.org 0x10bb9e
	adds r2, r0, #0	@ 0010bb9e 021c
.org 0x10bba0
	ldr r3, [r2, #40]	@ 0010bba0 936a
.org 0x10bba2
	ldrb r0, [r3, #2]	@ 0010bba2 9878
.org 0x10bba4
	cmp r0, #1	@ 0010bba4 0128
.org 0x10bba6
	bls.n 0x10bbb2	@ 0010bba6 04d9
.org 0x10bba8
	ldrb r1, [r2, #10]	@ 0010bba8 917a
.org 0x10bbaa
	movs r0, #254	@ 0010bbaa fe20
.org 0x10bbac
	ands r0, r1	@ 0010bbac 0840
.org 0x10bbae
	strb r0, [r2, #10]	@ 0010bbae 9072
.org 0x10bbb0
	b.n 0x10bbfa	@ 0010bbb0 23e0
.org 0x10bbb2
	ldrb r0, [r2, #10]	@ 0010bbb2 907a
.org 0x10bbb4
	movs r1, #1	@ 0010bbb4 0121
.org 0x10bbb6
	orrs r1, r0	@ 0010bbb6 0143
.org 0x10bbb8
	strb r1, [r2, #10]	@ 0010bbb8 9172
.org 0x10bbba
	ldrb r0, [r3, #2]	@ 0010bbba 9878
.org 0x10bbbc
	cmp r0, #1	@ 0010bbbc 0128
.org 0x10bbbe
	bne.n 0x10bbde	@ 0010bbbe 0ed1
.org 0x10bbc0
	ldrb r0, [r3, #3]	@ 0010bbc0 d878
.org 0x10bbc2
	cmp r0, #1	@ 0010bbc2 0128
.org 0x10bbc4
	bls.n 0x10bbd6	@ 0010bbc4 07d9
.org 0x10bbc6
	movs r0, #196	@ 0010bbc6 c420
.org 0x10bbc8
	lsls r0, r0, #9	@ 0010bbc8 4002
.org 0x10bbca
	str r0, [r2, #84]	@ 0010bbca 5065
.org 0x10bbcc
	ldrb r0, [r3, #3]	@ 0010bbcc d878
.org 0x10bbce
	lsls r0, r0, #12	@ 0010bbce 0003
.org 0x10bbd0
	movs r1, #192	@ 0010bbd0 c021
.org 0x10bbd2
	lsls r1, r1, #6	@ 0010bbd2 8901
.org 0x10bbd4
	b.n 0x10bbf0	@ 0010bbd4 0ce0
.org 0x10bbd6
	movs r0, #254	@ 0010bbd6 fe20
.org 0x10bbd8
	ands r1, r0	@ 0010bbd8 0140
.org 0x10bbda
	strb r1, [r2, #10]	@ 0010bbda 9172
.org 0x10bbdc
	b.n 0x10bbfa	@ 0010bbdc 0de0
.org 0x10bbde
	movs r0, #192	@ 0010bbde c020
.org 0x10bbe0
	lsls r0, r0, #9	@ 0010bbe0 4002
.org 0x10bbe2
	str r0, [r2, #84]	@ 0010bbe2 5065
.org 0x10bbe4
	ldr r1, [pc, #24]	@ 0010bbe4 0649
.org 0x10bbe6
	adds r0, r3, r1	@ 0010bbe6 5818
.org 0x10bbe8
	ldrb r0, [r0, #2]	@ 0010bbe8 8078
.org 0x10bbea
	lsls r0, r0, #12	@ 0010bbea 0003
.org 0x10bbec
	movs r1, #128	@ 0010bbec 8021
.org 0x10bbee
	lsls r1, r1, #7	@ 0010bbee c901
.org 0x10bbf0
	adds r0, r0, r1	@ 0010bbf0 4018
.org 0x10bbf2
	str r0, [r2, #88]	@ 0010bbf2 9065
.org 0x10bbf4
	adds r0, r2, #0	@ 0010bbf4 101c
.org 0x10bbf6
	bl 0x1cff0	@ 0010bbf6 11f7fbf9
.org 0x10bbfa
	pop {r0}	@ 0010bbfa 01bc
.org 0x10bbfc
	bx r0	@ 0010bbfc 0047
