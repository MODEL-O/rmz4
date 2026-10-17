@ FUN_080e803c  entry 0x080e803c  size 200
.thumb
.org 0xe803c
FUN_080e803c:
	push {r4, lr}	@ 000e803c 10b5
.org 0xe803e
	adds r4, r0, #0	@ 000e803e 041c
.org 0xe8040
	ldr r0, [pc, #88]	@ 000e8040 1648
.org 0xe8042
	adds r1, r0, #0	@ 000e8042 011c
.org 0xe8044
	ldrb r2, [r4, #17]	@ 000e8044 627c
.org 0xe8046
	adds r1, r1, r2	@ 000e8046 8918
.org 0xe8048
	lsls r1, r1, #16	@ 000e8048 0904
.org 0xe804a
	lsrs r1, r1, #16	@ 000e804a 090c
.org 0xe804c
	adds r0, r4, #0	@ 000e804c 201c
.org 0xe804e
	bl 0x1cf00	@ 000e804e 34f757ff
.org 0xe8052
	ldrb r0, [r4, #17]	@ 000e8052 607c
.org 0xe8054
	cmp r0, #0	@ 000e8054 0028
.org 0xe8056
	bne.n 0xe80a4	@ 000e8056 25d1
.org 0xe8058
	ldr r3, [pc, #68]	@ 000e8058 114b
.org 0xe805a
	adds r0, r3, #0	@ 000e805a 181c
.org 0xe805c
	adds r0, #200	@ 000e805c c830
.org 0xe805e
	movs r2, #0	@ 000e805e 0022
.org 0xe8060
	ldrsh r1, [r0, r2]	@ 000e8060 815e
.org 0xe8062
	lsls r0, r1, #3	@ 000e8062 c800
.org 0xe8064
	adds r0, r0, r1	@ 000e8064 4018
.org 0xe8066
	lsls r0, r0, #7	@ 000e8066 c001
.org 0xe8068
	cmp r0, #0	@ 000e8068 0028
.org 0xe806a
	bge.n 0xe806e	@ 000e806a 00da
.org 0xe806c
	adds r0, #255	@ 000e806c ff30
.org 0xe806e
	asrs r2, r0, #8	@ 000e806e 0212
.org 0xe8070
	str r2, [r4, #92]	@ 000e8070 e265
.org 0xe8072
	adds r0, r3, #0	@ 000e8072 181c
.org 0xe8074
	adds r0, #72	@ 000e8074 4830
.org 0xe8076
	movs r3, #0	@ 000e8076 0023
.org 0xe8078
	ldrsh r1, [r0, r3]	@ 000e8078 c15e
.org 0xe807a
	lsls r0, r1, #3	@ 000e807a c800
.org 0xe807c
	adds r0, r0, r1	@ 000e807c 4018
.org 0xe807e
	lsls r0, r0, #7	@ 000e807e c001
.org 0xe8080
	cmp r0, #0	@ 000e8080 0028
.org 0xe8082
	bge.n 0xe8086	@ 000e8082 00da
.org 0xe8084
	adds r0, #255	@ 000e8084 ff30
.org 0xe8086
	asrs r1, r0, #8	@ 000e8086 0112
.org 0xe8088
	str r1, [r4, #96]	@ 000e8088 2166
.org 0xe808a
	lsls r0, r2, #8	@ 000e808a 1002
.org 0xe808c
	negs r0, r0	@ 000e808c 4042
.org 0xe808e
	cmp r0, #0	@ 000e808e 0028
.org 0xe8090
	bge.n 0xe8094	@ 000e8090 00da
.org 0xe8092
	adds r0, #255	@ 000e8092 ff30
.org 0xe8094
	asrs r0, r0, #8	@ 000e8094 0012
.org 0xe8096
	str r0, [r4, #92]	@ 000e8096 e065
.org 0xe8098
	lsls r0, r1, #8	@ 000e8098 0802
.org 0xe809a
	b.n 0xe80d8	@ 000e809a 1de0
.org 0xe809c
	.byte 0x05,0xe9,0x00,0x00	@ 000e809c data
.org 0xe80a0
	.byte 0x0c,0x93,0x12,0x08	@ 000e80a0 data
.org 0xe80a4
	ldr r2, [pc, #100]	@ 000e80a4 194a
.org 0xe80a6
	adds r0, r2, #0	@ 000e80a6 101c
.org 0xe80a8
	adds r0, #236	@ 000e80a8 ec30
.org 0xe80aa
	movs r3, #0	@ 000e80aa 0023
.org 0xe80ac
	ldrsh r1, [r0, r3]	@ 000e80ac c15e
.org 0xe80ae
	lsls r0, r1, #1	@ 000e80ae 4800
.org 0xe80b0
	adds r0, r0, r1	@ 000e80b0 4018
.org 0xe80b2
	lsls r0, r0, #7	@ 000e80b2 c001
.org 0xe80b4
	cmp r0, #0	@ 000e80b4 0028
.org 0xe80b6
	bge.n 0xe80ba	@ 000e80b6 00da
.org 0xe80b8
	adds r0, #255	@ 000e80b8 ff30
.org 0xe80ba
	asrs r0, r0, #8	@ 000e80ba 0012
.org 0xe80bc
	str r0, [r4, #92]	@ 000e80bc e065
.org 0xe80be
	adds r0, r2, #0	@ 000e80be 101c
.org 0xe80c0
	adds r0, #136	@ 000e80c0 8830
.org 0xe80c2
	movs r2, #0	@ 000e80c2 0022
.org 0xe80c4
	ldrsh r1, [r0, r2]	@ 000e80c4 815e
.org 0xe80c6
	lsls r0, r1, #1	@ 000e80c6 4800
.org 0xe80c8
	adds r0, r0, r1	@ 000e80c8 4018
.org 0xe80ca
	lsls r0, r0, #7	@ 000e80ca c001
.org 0xe80cc
	cmp r0, #0	@ 000e80cc 0028
.org 0xe80ce
	bge.n 0xe80d2	@ 000e80ce 00da
.org 0xe80d0
	adds r0, #255	@ 000e80d0 ff30
.org 0xe80d2
	asrs r0, r0, #8	@ 000e80d2 0012
.org 0xe80d4
	str r0, [r4, #96]	@ 000e80d4 2066
.org 0xe80d6
	lsls r0, r0, #8	@ 000e80d6 0002
.org 0xe80d8
	negs r0, r0	@ 000e80d8 4042
.org 0xe80da
	cmp r0, #0	@ 000e80da 0028
.org 0xe80dc
	bge.n 0xe80e0	@ 000e80dc 00da
.org 0xe80de
	adds r0, #255	@ 000e80de ff30
.org 0xe80e0
	asrs r0, r0, #8	@ 000e80e0 0012
.org 0xe80e2
	str r0, [r4, #96]	@ 000e80e2 2066
.org 0xe80e4
	movs r2, #0	@ 000e80e4 0022
.org 0xe80e6
	ldrb r1, [r4, #10]	@ 000e80e6 a17a
.org 0xe80e8
	movs r0, #239	@ 000e80e8 ef20
.org 0xe80ea
	ands r0, r1	@ 000e80ea 0840
.org 0xe80ec
	strb r0, [r4, #10]	@ 000e80ec a072
.org 0xe80ee
	adds r0, r4, #0	@ 000e80ee 201c
.org 0xe80f0
	adds r0, #76	@ 000e80f0 4c30
.org 0xe80f2
	strb r2, [r0, #0]	@ 000e80f2 0270
.org 0xe80f4
	adds r2, r4, #0	@ 000e80f4 221c
.org 0xe80f6
	adds r2, #74	@ 000e80f6 4a32
.org 0xe80f8
	ldrb r1, [r2, #0]	@ 000e80f8 1178
.org 0xe80fa
	movs r0, #17	@ 000e80fa 1120
.org 0xe80fc
	negs r0, r0	@ 000e80fc 4042
.org 0xe80fe
	ands r0, r1	@ 000e80fe 0840
.org 0xe8100
	strb r0, [r2, #0]	@ 000e8100 1070
.org 0xe8102
	movs r0, #2	@ 000e8102 0220
