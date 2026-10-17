@ FUN_080a4fa0  entry 0x080a4fa0  size 282
.thumb
.org 0xa4fa0
FUN_080a4fa0:
	push {r4, r5, r6, r7, lr}	@ 000a4fa0 f0b5
.org 0xa4fa2
	mov r7, r9	@ 000a4fa2 4f46
.org 0xa4fa4
	mov r6, r8	@ 000a4fa4 4646
.org 0xa4fa6
	push {r6, r7}	@ 000a4fa6 c0b4
.org 0xa4fa8
	sub sp, #16	@ 000a4fa8 84b0
.org 0xa4faa
	adds r6, r0, #0	@ 000a4faa 061c
.org 0xa4fac
	ldrb r7, [r6, #17]	@ 000a4fac 777c
.org 0xa4fae
	ldrb r0, [r6, #15]	@ 000a4fae f07b
.org 0xa4fb0
	cmp r0, #0	@ 000a4fb0 0028
.org 0xa4fb2
	bne.n 0xa4fc0	@ 000a4fb2 05d1
.org 0xa4fb4
	movs r0, #64	@ 000a4fb4 4020
.org 0xa4fb6
	bl 0x2b10	@ 000a4fb6 5df7abfd
.org 0xa4fba
	ldrb r0, [r6, #15]	@ 000a4fba f07b
.org 0xa4fbc
	adds r0, #1	@ 000a4fbc 0130
.org 0xa4fbe
	strb r0, [r6, #15]	@ 000a4fbe f073
.org 0xa4fc0
	adds r0, r6, #0	@ 000a4fc0 301c
.org 0xa4fc2
	bl 0x1cff0	@ 000a4fc2 78f715f8
.org 0xa4fc6
	adds r3, r6, #0	@ 000a4fc6 331c
.org 0xa4fc8
	adds r3, #82	@ 000a4fc8 5233
.org 0xa4fca
	ldrh r0, [r3, #0]	@ 000a4fca 1888
.org 0xa4fcc
	adds r0, #16	@ 000a4fcc 1030
.org 0xa4fce
	lsls r0, r0, #16	@ 000a4fce 0004
.org 0xa4fd0
	lsrs r0, r0, #16	@ 000a4fd0 000c
.org 0xa4fd2
	mov r8, r0	@ 000a4fd2 8046
.org 0xa4fd4
	movs r1, #0	@ 000a4fd4 0021
.org 0xa4fd6
	mov ip, r1	@ 000a4fd6 8c46
.org 0xa4fd8
	mov r2, r8	@ 000a4fd8 4246
.org 0xa4fda
	strh r2, [r3, #0]	@ 000a4fda 1a80
.org 0xa4fdc
	ldr r1, [pc, #64]	@ 000a4fdc 1049
.org 0xa4fde
	mov r2, r8	@ 000a4fde 4246
.org 0xa4fe0
	lsls r0, r2, #25	@ 000a4fe0 5006
.org 0xa4fe2
	movs r2, #128	@ 000a4fe2 8022
.org 0xa4fe4
	lsls r2, r2, #24	@ 000a4fe4 1206
.org 0xa4fe6
	adds r0, r0, r2	@ 000a4fe6 8018
.org 0xa4fe8
	lsrs r0, r0, #23	@ 000a4fe8 c00d
.org 0xa4fea
	adds r0, r0, r1	@ 000a4fea 4018
.org 0xa4fec
	movs r1, #0	@ 000a4fec 0021
.org 0xa4fee
	ldrsh r0, [r0, r1]	@ 000a4fee 405e
.org 0xa4ff0
	lsls r4, r0, #4	@ 000a4ff0 0401
.org 0xa4ff2
	ldr r2, [pc, #48]	@ 000a4ff2 0c4a
.org 0xa4ff4
	ldr r1, [r2, #0]	@ 000a4ff4 1168
.org 0xa4ff6
	ldr r0, [pc, #48]	@ 000a4ff6 0c48
.org 0xa4ff8
	muls r0, r1	@ 000a4ff8 4843
.org 0xa4ffa
	ldr r1, [pc, #48]	@ 000a4ffa 0c49
.org 0xa4ffc
	adds r0, r0, r1	@ 000a4ffc 4018
.org 0xa4ffe
	lsls r0, r0, #1	@ 000a4ffe 4000
.org 0xa5000
	lsrs r1, r0, #1	@ 000a5000 4108
.org 0xa5002
	str r1, [r2, #0]	@ 000a5002 1160
.org 0xa5004
	lsrs r0, r0, #17	@ 000a5004 400c
.org 0xa5006
	movs r1, #7	@ 000a5006 0721
.org 0xa5008
	ands r0, r1	@ 000a5008 0840
.org 0xa500a
	subs r0, #3	@ 000a500a 0338
.org 0xa500c
	lsls r5, r0, #8	@ 000a500c 0502
.org 0xa500e
	mov r9, r3	@ 000a500e 9946
.org 0xa5010
	cmp r7, #1	@ 000a5010 012f
.org 0xa5012
	beq.n 0xa5056	@ 000a5012 20d0
.org 0xa5014
	cmp r7, #1	@ 000a5014 012f
.org 0xa5016
	bgt.n 0xa5030	@ 000a5016 0bdc
.org 0xa5018
	cmp r7, #0	@ 000a5018 002f
.org 0xa501a
	beq.n 0xa503c	@ 000a501a 0fd0
.org 0xa501c
	add r1, sp, #8	@ 000a501c 02a9
.org 0xa501e
	b.n 0xa509a	@ 000a501e 3ce0
.org 0xa5020
	.byte 0x0c,0x93,0x12,0x08	@ 000a5020 data
.org 0xa5024
	.byte 0x38,0xdc,0x02,0x02	@ 000a5024 data
.org 0xa5028
	.byte 0xfd,0x43,0x03,0x00	@ 000a5028 data
.org 0xa502c
	.byte 0xc3,0x9e,0x26,0x00	@ 000a502c data
.org 0xa5030
	cmp r7, #2	@ 000a5030 022f
.org 0xa5032
	beq.n 0xa506c	@ 000a5032 1bd0
.org 0xa5034
	cmp r7, #3	@ 000a5034 032f
.org 0xa5036
	beq.n 0xa5082	@ 000a5036 24d0
.org 0xa5038
	add r1, sp, #8	@ 000a5038 02a9
.org 0xa503a
	b.n 0xa509a	@ 000a503a 2ee0
.org 0xa503c
	ldr r0, [r6, #84]	@ 000a503c 706d
.org 0xa503e
	adds r0, r0, r5	@ 000a503e 4019
.org 0xa5040
	str r0, [sp, #0]	@ 000a5040 0090
.org 0xa5042
	ldr r0, [r6, #88]	@ 000a5042 b06d
.org 0xa5044
	adds r0, r0, r4	@ 000a5044 0019
.org 0xa5046
	str r0, [sp, #4]	@ 000a5046 0190
.org 0xa5048
	movs r0, #128	@ 000a5048 8020
.org 0xa504a
	negs r0, r0	@ 000a504a 4042
.org 0xa504c
	str r0, [sp, #8]	@ 000a504c 0290
.org 0xa504e
	add r0, sp, #8	@ 000a504e 02a8
.org 0xa5050
	mov r2, ip	@ 000a5050 6246
.org 0xa5052
	str r2, [r0, #4]	@ 000a5052 4260
.org 0xa5054
	b.n 0xa5098	@ 000a5054 20e0
.org 0xa5056
	ldr r0, [r6, #84]	@ 000a5056 706d
.org 0xa5058
	adds r0, r0, r5	@ 000a5058 4019
.org 0xa505a
	str r0, [sp, #0]	@ 000a505a 0090
.org 0xa505c
	ldr r0, [r6, #88]	@ 000a505c b06d
.org 0xa505e
	adds r0, r0, r4	@ 000a505e 0019
.org 0xa5060
	str r0, [sp, #4]	@ 000a5060 0190
.org 0xa5062
	movs r0, #128	@ 000a5062 8020
.org 0xa5064
	str r0, [sp, #8]	@ 000a5064 0290
.org 0xa5066
	add r0, sp, #8	@ 000a5066 02a8
.org 0xa5068
	mov r1, ip	@ 000a5068 6146
.org 0xa506a
	b.n 0xa5096	@ 000a506a 14e0
.org 0xa506c
	ldr r0, [r6, #84]	@ 000a506c 706d
.org 0xa506e
	adds r0, r0, r4	@ 000a506e 0019
.org 0xa5070
	str r0, [sp, #0]	@ 000a5070 0090
.org 0xa5072
	ldr r0, [r6, #88]	@ 000a5072 b06d
.org 0xa5074
	adds r0, r0, r5	@ 000a5074 4019
.org 0xa5076
	str r0, [sp, #4]	@ 000a5076 0190
.org 0xa5078
	mov r2, ip	@ 000a5078 6246
.org 0xa507a
	str r2, [sp, #8]	@ 000a507a 0292
.org 0xa507c
	movs r1, #128	@ 000a507c 8021
.org 0xa507e
	negs r1, r1	@ 000a507e 4942
.org 0xa5080
	b.n 0xa5094	@ 000a5080 08e0
.org 0xa5082
	ldr r0, [r6, #84]	@ 000a5082 706d
.org 0xa5084
	adds r0, r0, r4	@ 000a5084 0019
.org 0xa5086
	str r0, [sp, #0]	@ 000a5086 0090
.org 0xa5088
	ldr r0, [r6, #88]	@ 000a5088 b06d
.org 0xa508a
	adds r0, r0, r5	@ 000a508a 4019
.org 0xa508c
	str r0, [sp, #4]	@ 000a508c 0190
.org 0xa508e
	mov r0, ip	@ 000a508e 6046
.org 0xa5090
	str r0, [sp, #8]	@ 000a5090 0290
.org 0xa5092
	movs r1, #128	@ 000a5092 8021
.org 0xa5094
	add r0, sp, #8	@ 000a5094 02a8
.org 0xa5096
	str r1, [r0, #4]	@ 000a5096 4160
.org 0xa5098
	adds r1, r0, #0	@ 000a5098 011c
.org 0xa509a
	mov r0, sp	@ 000a509a 6846
.org 0xa509c
	movs r2, #0	@ 000a509c 0022
.org 0xa509e
	movs r3, #0	@ 000a509e 0023
.org 0xa50a0
	bl 0xd9b9c	@ 000a50a0 34f07cfd
.org 0xa50a4
	mov r1, r8	@ 000a50a4 4146
.org 0xa50a6
	cmp r1, #255	@ 000a50a6 ff29
.org 0xa50a8
	bls.n 0xa50bc	@ 000a50a8 08d9
.org 0xa50aa
	movs r0, #0	@ 000a50aa 0020
.org 0xa50ac
	movs r1, #128	@ 000a50ac 8021
.org 0xa50ae
	lsls r1, r1, #1	@ 000a50ae 4900
.org 0xa50b0
	mov r2, r9	@ 000a50b0 4a46
.org 0xa50b2
	strh r1, [r2, #0]	@ 000a50b2 1180
.org 0xa50b4
	movs r1, #1	@ 000a50b4 0121
.org 0xa50b6
	strb r1, [r6, #13]	@ 000a50b6 7173
.org 0xa50b8
	strb r0, [r6, #14]	@ 000a50b8 b073
