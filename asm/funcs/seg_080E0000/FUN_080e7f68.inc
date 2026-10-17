@ FUN_080e7f68  entry 0x080e7f68  size 200
.thumb
.org 0xe7f68
FUN_080e7f68:
	push {r4, lr}	@ 000e7f68 10b5
.org 0xe7f6a
	adds r4, r0, #0	@ 000e7f6a 041c
.org 0xe7f6c
	ldr r0, [pc, #88]	@ 000e7f6c 1648
.org 0xe7f6e
	adds r1, r0, #0	@ 000e7f6e 011c
.org 0xe7f70
	ldrb r2, [r4, #17]	@ 000e7f70 627c
.org 0xe7f72
	adds r1, r1, r2	@ 000e7f72 8918
.org 0xe7f74
	lsls r1, r1, #16	@ 000e7f74 0904
.org 0xe7f76
	lsrs r1, r1, #16	@ 000e7f76 090c
.org 0xe7f78
	adds r0, r4, #0	@ 000e7f78 201c
.org 0xe7f7a
	bl 0x1cf00	@ 000e7f7a 34f7c1ff
.org 0xe7f7e
	ldrb r0, [r4, #17]	@ 000e7f7e 607c
.org 0xe7f80
	cmp r0, #0	@ 000e7f80 0028
.org 0xe7f82
	bne.n 0xe7fd0	@ 000e7f82 25d1
.org 0xe7f84
	ldr r3, [pc, #68]	@ 000e7f84 114b
.org 0xe7f86
	adds r0, r3, #0	@ 000e7f86 181c
.org 0xe7f88
	adds r0, #236	@ 000e7f88 ec30
.org 0xe7f8a
	movs r2, #0	@ 000e7f8a 0022
.org 0xe7f8c
	ldrsh r1, [r0, r2]	@ 000e7f8c 815e
.org 0xe7f8e
	lsls r0, r1, #1	@ 000e7f8e 4800
.org 0xe7f90
	adds r0, r0, r1	@ 000e7f90 4018
.org 0xe7f92
	lsls r0, r0, #7	@ 000e7f92 c001
.org 0xe7f94
	cmp r0, #0	@ 000e7f94 0028
.org 0xe7f96
	bge.n 0xe7f9a	@ 000e7f96 00da
.org 0xe7f98
	adds r0, #255	@ 000e7f98 ff30
.org 0xe7f9a
	asrs r2, r0, #8	@ 000e7f9a 0212
.org 0xe7f9c
	str r2, [r4, #92]	@ 000e7f9c e265
.org 0xe7f9e
	adds r0, r3, #0	@ 000e7f9e 181c
.org 0xe7fa0
	adds r0, #136	@ 000e7fa0 8830
.org 0xe7fa2
	movs r3, #0	@ 000e7fa2 0023
.org 0xe7fa4
	ldrsh r1, [r0, r3]	@ 000e7fa4 c15e
.org 0xe7fa6
	lsls r0, r1, #1	@ 000e7fa6 4800
.org 0xe7fa8
	adds r0, r0, r1	@ 000e7fa8 4018
.org 0xe7faa
	lsls r0, r0, #7	@ 000e7faa c001
.org 0xe7fac
	cmp r0, #0	@ 000e7fac 0028
.org 0xe7fae
	bge.n 0xe7fb2	@ 000e7fae 00da
.org 0xe7fb0
	adds r0, #255	@ 000e7fb0 ff30
.org 0xe7fb2
	asrs r1, r0, #8	@ 000e7fb2 0112
.org 0xe7fb4
	str r1, [r4, #96]	@ 000e7fb4 2166
.org 0xe7fb6
	lsls r0, r2, #8	@ 000e7fb6 1002
.org 0xe7fb8
	negs r0, r0	@ 000e7fb8 4042
.org 0xe7fba
	cmp r0, #0	@ 000e7fba 0028
.org 0xe7fbc
	bge.n 0xe7fc0	@ 000e7fbc 00da
.org 0xe7fbe
	adds r0, #255	@ 000e7fbe ff30
.org 0xe7fc0
	asrs r0, r0, #8	@ 000e7fc0 0012
.org 0xe7fc2
	str r0, [r4, #92]	@ 000e7fc2 e065
.org 0xe7fc4
	lsls r0, r1, #8	@ 000e7fc4 0802
.org 0xe7fc6
	b.n 0xe8004	@ 000e7fc6 1de0
.org 0xe7fc8
	.byte 0x03,0xe9,0x00,0x00	@ 000e7fc8 data
.org 0xe7fcc
	.byte 0x0c,0x93,0x12,0x08	@ 000e7fcc data
.org 0xe7fd0
	ldr r2, [pc, #100]	@ 000e7fd0 194a
.org 0xe7fd2
	adds r0, r2, #0	@ 000e7fd2 101c
.org 0xe7fd4
	adds r0, #200	@ 000e7fd4 c830
.org 0xe7fd6
	movs r3, #0	@ 000e7fd6 0023
.org 0xe7fd8
	ldrsh r1, [r0, r3]	@ 000e7fd8 c15e
.org 0xe7fda
	lsls r0, r1, #3	@ 000e7fda c800
.org 0xe7fdc
	adds r0, r0, r1	@ 000e7fdc 4018
.org 0xe7fde
	lsls r0, r0, #7	@ 000e7fde c001
.org 0xe7fe0
	cmp r0, #0	@ 000e7fe0 0028
.org 0xe7fe2
	bge.n 0xe7fe6	@ 000e7fe2 00da
.org 0xe7fe4
	adds r0, #255	@ 000e7fe4 ff30
.org 0xe7fe6
	asrs r0, r0, #8	@ 000e7fe6 0012
.org 0xe7fe8
	str r0, [r4, #92]	@ 000e7fe8 e065
.org 0xe7fea
	adds r0, r2, #0	@ 000e7fea 101c
.org 0xe7fec
	adds r0, #72	@ 000e7fec 4830
.org 0xe7fee
	movs r2, #0	@ 000e7fee 0022
.org 0xe7ff0
	ldrsh r1, [r0, r2]	@ 000e7ff0 815e
.org 0xe7ff2
	lsls r0, r1, #3	@ 000e7ff2 c800
.org 0xe7ff4
	adds r0, r0, r1	@ 000e7ff4 4018
.org 0xe7ff6
	lsls r0, r0, #7	@ 000e7ff6 c001
.org 0xe7ff8
	cmp r0, #0	@ 000e7ff8 0028
.org 0xe7ffa
	bge.n 0xe7ffe	@ 000e7ffa 00da
.org 0xe7ffc
	adds r0, #255	@ 000e7ffc ff30
.org 0xe7ffe
	asrs r0, r0, #8	@ 000e7ffe 0012
.org 0xe8000
	str r0, [r4, #96]	@ 000e8000 2066
.org 0xe8002
	lsls r0, r0, #8	@ 000e8002 0002
.org 0xe8004
	negs r0, r0	@ 000e8004 4042
.org 0xe8006
	cmp r0, #0	@ 000e8006 0028
.org 0xe8008
	bge.n 0xe800c	@ 000e8008 00da
.org 0xe800a
	adds r0, #255	@ 000e800a ff30
.org 0xe800c
	asrs r0, r0, #8	@ 000e800c 0012
.org 0xe800e
	str r0, [r4, #96]	@ 000e800e 2066
.org 0xe8010
	movs r2, #0	@ 000e8010 0022
.org 0xe8012
	ldrb r1, [r4, #10]	@ 000e8012 a17a
.org 0xe8014
	movs r0, #239	@ 000e8014 ef20
.org 0xe8016
	ands r0, r1	@ 000e8016 0840
.org 0xe8018
	strb r0, [r4, #10]	@ 000e8018 a072
.org 0xe801a
	movs r3, #1	@ 000e801a 0123
.org 0xe801c
	adds r0, r4, #0	@ 000e801c 201c
.org 0xe801e
	adds r0, #76	@ 000e801e 4c30
.org 0xe8020
	strb r2, [r0, #0]	@ 000e8020 0270
.org 0xe8022
	adds r2, r4, #0	@ 000e8022 221c
.org 0xe8024
	adds r2, #74	@ 000e8024 4a32
.org 0xe8026
	ldrb r1, [r2, #0]	@ 000e8026 1178
.org 0xe8028
	movs r0, #17	@ 000e8028 1120
.org 0xe802a
	negs r0, r0	@ 000e802a 4042
.org 0xe802c
	ands r0, r1	@ 000e802c 0840
.org 0xe802e
	strb r0, [r2, #0]	@ 000e802e 1070
