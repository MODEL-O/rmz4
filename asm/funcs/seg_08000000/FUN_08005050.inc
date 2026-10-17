@ FUN_08005050  entry 0x08005050  size 208
.thumb
.org 0x5050
FUN_08005050:
	push {r4, r5, r6, r7, lr}	@ 00005050 f0b5
.org 0x5052
	mov r7, sl	@ 00005052 5746
.org 0x5054
	mov r6, r9	@ 00005054 4e46
.org 0x5056
	mov r5, r8	@ 00005056 4546
.org 0x5058
	push {r5, r6, r7}	@ 00005058 e0b4
.org 0x505a
	sub sp, #8	@ 0000505a 82b0
.org 0x505c
	mov sl, r0	@ 0000505c 8246
.org 0x505e
	mov r9, r1	@ 0000505e 8946
.org 0x5060
	str r2, [sp, #0]	@ 00005060 0092
.org 0x5062
	ldr r2, [r1, #0]	@ 00005062 0a68
.org 0x5064
	adds r0, r2, #0	@ 00005064 101c
.org 0x5066
	subs r0, #16	@ 00005066 1038
.org 0x5068
	ldr r1, [r1, #4]	@ 00005068 4968
.org 0x506a
	adds r5, r1, #0	@ 0000506a 0d1c
.org 0x506c
	subs r5, #16	@ 0000506c 103d
.org 0x506e
	asrs r0, r2, #4	@ 0000506e 1011
.org 0x5070
	adds r4, r0, #0	@ 00005070 041c
.org 0x5072
	asrs r5, r1, #4	@ 00005072 0d11
.org 0x5074
	lsls r0, r0, #1	@ 00005074 4000
.org 0x5076
	adds r0, #4	@ 00005076 0430
.org 0x5078
	adds r0, r3, r0	@ 00005078 1818
.org 0x507a
	ldrh r2, [r3, #0]	@ 0000507a 1a88
.org 0x507c
	adds r1, r2, #0	@ 0000507c 111c
.org 0x507e
	muls r1, r5	@ 0000507e 6943
.org 0x5080
	lsls r1, r1, #1	@ 00005080 4900
.org 0x5082
	adds r6, r0, r1	@ 00005082 4618
.org 0x5084
	movs r1, #0	@ 00005084 0021
.org 0x5086
	mov r0, sl	@ 00005086 5046
.org 0x5088
	ldr r0, [r0, #12]	@ 00005088 c068
.org 0x508a
	mov ip, r0	@ 0000508a 8446
.org 0x508c
	lsls r2, r2, #1	@ 0000508c 5200
.org 0x508e
	str r2, [sp, #4]	@ 0000508e 0192
.org 0x5090
	lsls r1, r1, #16	@ 00005090 0904
.org 0x5092
	asrs r0, r1, #16	@ 00005092 0814
.org 0x5094
	adds r0, r0, r5	@ 00005094 4019
.org 0x5096
	movs r2, #15	@ 00005096 0f22
.org 0x5098
	ands r0, r2	@ 00005098 1040
.org 0x509a
	lsls r0, r0, #7	@ 0000509a c001
.org 0x509c
	ldr r3, [sp, #0]	@ 0000509c 009b
.org 0x509e
	adds r7, r3, r0	@ 0000509e 1f18
.org 0x50a0
	movs r0, #0	@ 000050a0 0020
.org 0x50a2
	mov r8, r1	@ 000050a2 8846
.org 0x50a4
	lsls r3, r0, #16	@ 000050a4 0304
.org 0x50a6
	asrs r3, r3, #16	@ 000050a6 1b14
.org 0x50a8
	adds r1, r3, r4	@ 000050a8 1919
.org 0x50aa
	adds r2, r1, #0	@ 000050aa 0a1c
.org 0x50ac
	movs r0, #15	@ 000050ac 0f20
.org 0x50ae
	ands r2, r0	@ 000050ae 0240
.org 0x50b0
	lsls r2, r2, #2	@ 000050b0 9200
.org 0x50b2
	adds r2, r7, r2	@ 000050b2 ba18
.org 0x50b4
	movs r0, #16	@ 000050b4 1020
.org 0x50b6
	ands r1, r0	@ 000050b6 0140
.org 0x50b8
	lsls r1, r1, #7	@ 000050b8 c901
.org 0x50ba
	adds r2, r2, r1	@ 000050ba 5218
.org 0x50bc
	ldrh r0, [r6, #0]	@ 000050bc 3088
.org 0x50be
	lsls r0, r0, #3	@ 000050be c000
.org 0x50c0
	add r0, ip	@ 000050c0 6044
.org 0x50c2
	ldr r0, [r0, #0]	@ 000050c2 0068
.org 0x50c4
	str r0, [r2, #0]	@ 000050c4 1060
.org 0x50c6
	ldrh r0, [r6, #0]	@ 000050c6 3088
.org 0x50c8
	lsls r0, r0, #3	@ 000050c8 c000
.org 0x50ca
	add r0, ip	@ 000050ca 6044
.org 0x50cc
	ldr r0, [r0, #4]	@ 000050cc 4068
.org 0x50ce
	str r0, [r2, #64]	@ 000050ce 1064
.org 0x50d0
	adds r6, #2	@ 000050d0 0236
.org 0x50d2
	adds r3, #1	@ 000050d2 0133
.org 0x50d4
	lsls r3, r3, #16	@ 000050d4 1b04
.org 0x50d6
	lsrs r0, r3, #16	@ 000050d6 180c
.org 0x50d8
	asrs r3, r3, #16	@ 000050d8 1b14
.org 0x50da
	cmp r3, #17	@ 000050da 112b
.org 0x50dc
	ble.n 0x50a4	@ 000050dc e2dd
.org 0x50de
	ldr r1, [sp, #4]	@ 000050de 0199
.org 0x50e0
	adds r0, r6, r1	@ 000050e0 7018
.org 0x50e2
	adds r6, r0, #0	@ 000050e2 061c
.org 0x50e4
	subs r6, #36	@ 000050e4 243e
.org 0x50e6
	movs r0, #128	@ 000050e6 8020
.org 0x50e8
	lsls r0, r0, #9	@ 000050e8 4002
.org 0x50ea
	add r0, r8	@ 000050ea 4044
.org 0x50ec
	lsrs r1, r0, #16	@ 000050ec 010c
.org 0x50ee
	asrs r0, r0, #16	@ 000050ee 0014
.org 0x50f0
	cmp r0, #11	@ 000050f0 0b28
.org 0x50f2
	ble.n 0x5090	@ 000050f2 cddd
.org 0x50f4
	mov r2, r9	@ 000050f4 4a46
.org 0x50f6
	ldr r3, [r2, #0]	@ 000050f6 1368
.org 0x50f8
	ldr r2, [pc, #36]	@ 000050f8 094a
.org 0x50fa
	adds r0, r3, #0	@ 000050fa 181c
.org 0x50fc
	ands r0, r2	@ 000050fc 1040
.org 0x50fe
	mov r6, sl	@ 000050fe 5646
.org 0x5100
	strh r0, [r6, #8]	@ 00005100 3081
.org 0x5102
	mov r0, r9	@ 00005102 4846
.org 0x5104
	ldr r1, [r0, #4]	@ 00005104 4168
.org 0x5106
	adds r0, r1, #0	@ 00005106 081c
.org 0x5108
	ands r0, r2	@ 00005108 1040
.org 0x510a
	strh r0, [r6, #10]	@ 0000510a 7081
.org 0x510c
	str r3, [r6, #0]	@ 0000510c 3360
.org 0x510e
	str r1, [r6, #4]	@ 0000510e 7160
.org 0x5110
	add sp, #8	@ 00005110 02b0
.org 0x5112
	pop {r3, r4, r5}	@ 00005112 38bc
.org 0x5114
	mov r8, r3	@ 00005114 9846
.org 0x5116
	mov r9, r4	@ 00005116 a146
.org 0x5118
	mov sl, r5	@ 00005118 aa46
.org 0x511a
	pop {r4, r5, r6, r7}	@ 0000511a f0bc
.org 0x511c
	pop {r0}	@ 0000511c 01bc
.org 0x511e
	bx r0	@ 0000511e 0047
