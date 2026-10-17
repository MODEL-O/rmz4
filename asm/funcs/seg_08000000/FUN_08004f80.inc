@ FUN_08004f80  entry 0x08004f80  size 204
.thumb
.org 0x4f80
FUN_08004f80:
	push {r4, r5, r6, r7, lr}	@ 00004f80 f0b5
.org 0x4f82
	mov r7, sl	@ 00004f82 5746
.org 0x4f84
	mov r6, r9	@ 00004f84 4e46
.org 0x4f86
	mov r5, r8	@ 00004f86 4546
.org 0x4f88
	push {r5, r6, r7}	@ 00004f88 e0b4
.org 0x4f8a
	sub sp, #8	@ 00004f8a 82b0
.org 0x4f8c
	mov sl, r0	@ 00004f8c 8246
.org 0x4f8e
	mov r9, r1	@ 00004f8e 8946
.org 0x4f90
	str r2, [sp, #0]	@ 00004f90 0092
.org 0x4f92
	ldr r1, [r1, #0]	@ 00004f92 0968
.org 0x4f94
	asrs r1, r1, #4	@ 00004f94 0911
.org 0x4f96
	adds r5, r1, #0	@ 00004f96 0d1c
.org 0x4f98
	mov r2, r9	@ 00004f98 4a46
.org 0x4f9a
	ldr r0, [r2, #4]	@ 00004f9a 5068
.org 0x4f9c
	asrs r6, r0, #4	@ 00004f9c 0611
.org 0x4f9e
	lsls r1, r1, #1	@ 00004f9e 4900
.org 0x4fa0
	adds r1, #4	@ 00004fa0 0431
.org 0x4fa2
	adds r1, r3, r1	@ 00004fa2 5918
.org 0x4fa4
	ldrh r2, [r3, #0]	@ 00004fa4 1a88
.org 0x4fa6
	adds r0, r2, #0	@ 00004fa6 101c
.org 0x4fa8
	muls r0, r6	@ 00004fa8 7043
.org 0x4faa
	lsls r0, r0, #1	@ 00004faa 4000
.org 0x4fac
	adds r4, r1, r0	@ 00004fac 0c18
.org 0x4fae
	movs r1, #0	@ 00004fae 0021
.org 0x4fb0
	mov r3, sl	@ 00004fb0 5346
.org 0x4fb2
	ldr r3, [r3, #12]	@ 00004fb2 db68
.org 0x4fb4
	mov ip, r3	@ 00004fb4 9c46
.org 0x4fb6
	lsls r2, r2, #1	@ 00004fb6 5200
.org 0x4fb8
	str r2, [sp, #4]	@ 00004fb8 0192
.org 0x4fba
	lsls r1, r1, #16	@ 00004fba 0904
.org 0x4fbc
	asrs r0, r1, #16	@ 00004fbc 0814
.org 0x4fbe
	adds r0, r0, r6	@ 00004fbe 8019
.org 0x4fc0
	movs r2, #15	@ 00004fc0 0f22
.org 0x4fc2
	ands r0, r2	@ 00004fc2 1040
.org 0x4fc4
	lsls r0, r0, #7	@ 00004fc4 c001
.org 0x4fc6
	ldr r3, [sp, #0]	@ 00004fc6 009b
.org 0x4fc8
	adds r7, r3, r0	@ 00004fc8 1f18
.org 0x4fca
	movs r0, #0	@ 00004fca 0020
.org 0x4fcc
	mov r8, r1	@ 00004fcc 8846
.org 0x4fce
	lsls r3, r0, #16	@ 00004fce 0304
.org 0x4fd0
	asrs r3, r3, #16	@ 00004fd0 1b14
.org 0x4fd2
	adds r1, r3, r5	@ 00004fd2 5919
.org 0x4fd4
	adds r2, r1, #0	@ 00004fd4 0a1c
.org 0x4fd6
	movs r0, #15	@ 00004fd6 0f20
.org 0x4fd8
	ands r2, r0	@ 00004fd8 0240
.org 0x4fda
	lsls r2, r2, #2	@ 00004fda 9200
.org 0x4fdc
	adds r2, r7, r2	@ 00004fdc ba18
.org 0x4fde
	movs r0, #16	@ 00004fde 1020
.org 0x4fe0
	ands r1, r0	@ 00004fe0 0140
.org 0x4fe2
	lsls r1, r1, #7	@ 00004fe2 c901
.org 0x4fe4
	adds r2, r2, r1	@ 00004fe4 5218
.org 0x4fe6
	ldrh r0, [r4, #0]	@ 00004fe6 2088
.org 0x4fe8
	lsls r0, r0, #3	@ 00004fe8 c000
.org 0x4fea
	add r0, ip	@ 00004fea 6044
.org 0x4fec
	ldr r0, [r0, #0]	@ 00004fec 0068
.org 0x4fee
	str r0, [r2, #0]	@ 00004fee 1060
.org 0x4ff0
	ldrh r0, [r4, #0]	@ 00004ff0 2088
.org 0x4ff2
	lsls r0, r0, #3	@ 00004ff2 c000
.org 0x4ff4
	add r0, ip	@ 00004ff4 6044
.org 0x4ff6
	ldr r0, [r0, #4]	@ 00004ff6 4068
.org 0x4ff8
	str r0, [r2, #64]	@ 00004ff8 1064
.org 0x4ffa
	adds r4, #2	@ 00004ffa 0234
.org 0x4ffc
	adds r3, #1	@ 00004ffc 0133
.org 0x4ffe
	lsls r3, r3, #16	@ 00004ffe 1b04
.org 0x5000
	lsrs r0, r3, #16	@ 00005000 180c
.org 0x5002
	asrs r3, r3, #16	@ 00005002 1b14
.org 0x5004
	cmp r3, #15	@ 00005004 0f2b
.org 0x5006
	ble.n 0x4fce	@ 00005006 e2dd
.org 0x5008
	ldr r1, [sp, #4]	@ 00005008 0199
.org 0x500a
	adds r0, r4, r1	@ 0000500a 6018
.org 0x500c
	adds r4, r0, #0	@ 0000500c 041c
.org 0x500e
	subs r4, #32	@ 0000500e 203c
.org 0x5010
	movs r0, #128	@ 00005010 8020
.org 0x5012
	lsls r0, r0, #9	@ 00005012 4002
.org 0x5014
	add r0, r8	@ 00005014 4044
.org 0x5016
	lsrs r1, r0, #16	@ 00005016 010c
.org 0x5018
	asrs r0, r0, #16	@ 00005018 0014
.org 0x501a
	cmp r0, #10	@ 0000501a 0a28
.org 0x501c
	ble.n 0x4fba	@ 0000501c cddd
.org 0x501e
	mov r2, r9	@ 0000501e 4a46
.org 0x5020
	ldr r3, [r2, #0]	@ 00005020 1368
.org 0x5022
	ldr r2, [pc, #40]	@ 00005022 0a4a
.org 0x5024
	adds r0, r3, #0	@ 00005024 181c
.org 0x5026
	ands r0, r2	@ 00005026 1040
.org 0x5028
	mov r1, sl	@ 00005028 5146
.org 0x502a
	strh r0, [r1, #8]	@ 0000502a 0881
.org 0x502c
	mov r0, r9	@ 0000502c 4846
.org 0x502e
	ldr r1, [r0, #4]	@ 0000502e 4168
.org 0x5030
	adds r0, r1, #0	@ 00005030 081c
.org 0x5032
	ands r0, r2	@ 00005032 1040
.org 0x5034
	mov r2, sl	@ 00005034 5246
.org 0x5036
	strh r0, [r2, #10]	@ 00005036 5081
.org 0x5038
	str r3, [r2, #0]	@ 00005038 1360
.org 0x503a
	str r1, [r2, #4]	@ 0000503a 5160
.org 0x503c
	add sp, #8	@ 0000503c 02b0
.org 0x503e
	pop {r3, r4, r5}	@ 0000503e 38bc
.org 0x5040
	mov r8, r3	@ 00005040 9846
.org 0x5042
	mov r9, r4	@ 00005042 a146
.org 0x5044
	mov sl, r5	@ 00005044 aa46
.org 0x5046
	pop {r4, r5, r6, r7}	@ 00005046 f0bc
.org 0x5048
	pop {r0}	@ 00005048 01bc
.org 0x504a
	bx r0	@ 0000504a 0047
