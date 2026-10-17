@ FUN_08018f04  entry 0x08018f04  size 446
.thumb
.org 0x18f04
FUN_08018f04:
	push {lr}	@ 00018f04 00b5
.org 0x18f06
	ldr r2, [pc, #80]	@ 00018f06 144a
.org 0x18f08
	ldr r0, [pc, #80]	@ 00018f08 1448
.org 0x18f0a
	adds r1, r2, r0	@ 00018f0a 1118
.org 0x18f0c
	ldr r0, [r1, #0]	@ 00018f0c 0868
.org 0x18f0e
	adds r0, #1	@ 00018f0e 0130
.org 0x18f10
	str r0, [r1, #0]	@ 00018f10 0860
.org 0x18f12
	ldr r1, [pc, #76]	@ 00018f12 1349
.org 0x18f14
	adds r0, r2, r1	@ 00018f14 5018
.org 0x18f16
	ldrh r1, [r0, #0]	@ 00018f16 0188
.org 0x18f18
	lsrs r0, r1, #8	@ 00018f18 080a
.org 0x18f1a
	cmp r0, #13	@ 00018f1a 0d28
.org 0x18f1c
	bne.n 0x18f68	@ 00018f1c 24d1
.org 0x18f1e
	movs r0, #255	@ 00018f1e ff20
.org 0x18f20
	ands r0, r1	@ 00018f20 0840
.org 0x18f22
	cmp r0, #0	@ 00018f22 0028
.org 0x18f24
	bne.n 0x18f68	@ 00018f24 20d1
.org 0x18f26
	ldr r0, [pc, #60]	@ 00018f26 0f48
.org 0x18f28
	adds r1, r2, r0	@ 00018f28 1118
.org 0x18f2a
	ldrb r2, [r1, #0]	@ 00018f2a 0a78
.org 0x18f2c
	movs r0, #1	@ 00018f2c 0120
.org 0x18f2e
	ands r0, r2	@ 00018f2e 1040
.org 0x18f30
	cmp r0, #0	@ 00018f30 0028
.org 0x18f32
	bne.n 0x18f4a	@ 00018f32 0ad1
.org 0x18f34
	movs r0, #1	@ 00018f34 0120
.org 0x18f36
	orrs r0, r2	@ 00018f36 1043
.org 0x18f38
	strb r0, [r1, #0]	@ 00018f38 0870
.org 0x18f3a
	movs r0, #150	@ 00018f3a 9620
.org 0x18f3c
	movs r1, #0	@ 00018f3c 0021
.org 0x18f3e
	bl 0x249c	@ 00018f3e e9f7adfa
.org 0x18f42
	movs r0, #151	@ 00018f42 9720
.org 0x18f44
	movs r1, #0	@ 00018f44 0021
.org 0x18f46
	bl 0x249c	@ 00018f46 e9f7a9fa
.org 0x18f4a
	movs r0, #150	@ 00018f4a 9620
.org 0x18f4c
	bl 0x25d8	@ 00018f4c e9f744fb
.org 0x18f50
	movs r0, #151	@ 00018f50 9720
.org 0x18f52
	bl 0x25d8	@ 00018f52 e9f741fb
.org 0x18f56
	b.n 0x18f8a	@ 00018f56 18e0
.org 0x18f58
	.byte 0xb0,0x0a,0x00,0x02	@ 00018f58 data
.org 0x18f5c
	.byte 0x2c,0xd0,0x02,0x00	@ 00018f5c data
.org 0x18f60
	.byte 0xd4,0x07,0x00,0x00	@ 00018f60 data
.org 0x18f64
	.byte 0x28,0xd0,0x02,0x00	@ 00018f64 data
.org 0x18f68
	ldr r0, [pc, #108]	@ 00018f68 1b48
.org 0x18f6a
	ldr r1, [pc, #112]	@ 00018f6a 1c49
.org 0x18f6c
	adds r2, r0, r1	@ 00018f6c 4218
.org 0x18f6e
	ldrb r1, [r2, #0]	@ 00018f6e 1178
.org 0x18f70
	movs r0, #1	@ 00018f70 0120
.org 0x18f72
	ands r0, r1	@ 00018f72 0840
.org 0x18f74
	cmp r0, #0	@ 00018f74 0028
.org 0x18f76
	beq.n 0x18f8a	@ 00018f76 08d0
.org 0x18f78
	movs r0, #1	@ 00018f78 0120
.org 0x18f7a
	eors r0, r1	@ 00018f7a 4840
.org 0x18f7c
	strb r0, [r2, #0]	@ 00018f7c 1070
.org 0x18f7e
	movs r0, #150	@ 00018f7e 9620
.org 0x18f80
	bl 0x2624	@ 00018f80 e9f750fb
.org 0x18f84
	movs r0, #151	@ 00018f84 9720
.org 0x18f86
	bl 0x2624	@ 00018f86 e9f74dfb
.org 0x18f8a
	ldr r2, [pc, #76]	@ 00018f8a 134a
.org 0x18f8c
	ldr r1, [pc, #80]	@ 00018f8c 1449
.org 0x18f8e
	adds r0, r2, r1	@ 00018f8e 5018
.org 0x18f90
	ldrh r1, [r0, #0]	@ 00018f90 0188
.org 0x18f92
	lsrs r0, r1, #8	@ 00018f92 080a
.org 0x18f94
	cmp r0, #13	@ 00018f94 0d28
.org 0x18f96
	bne.n 0x18fe4	@ 00018f96 25d1
.org 0x18f98
	movs r0, #255	@ 00018f98 ff20
.org 0x18f9a
	ands r0, r1	@ 00018f9a 0840
.org 0x18f9c
	cmp r0, #1	@ 00018f9c 0128
.org 0x18f9e
	bne.n 0x18fe4	@ 00018f9e 21d1
.org 0x18fa0
	ldr r0, [pc, #56]	@ 00018fa0 0e48
.org 0x18fa2
	adds r2, r2, r0	@ 00018fa2 1218
.org 0x18fa4
	ldrb r1, [r2, #0]	@ 00018fa4 1178
.org 0x18fa6
	movs r0, #2	@ 00018fa6 0220
.org 0x18fa8
	ands r0, r1	@ 00018fa8 0840
.org 0x18faa
	cmp r0, #0	@ 00018faa 0028
.org 0x18fac
	bne.n 0x18fc4	@ 00018fac 0ad1
.org 0x18fae
	movs r0, #2	@ 00018fae 0220
.org 0x18fb0
	orrs r0, r1	@ 00018fb0 0843
.org 0x18fb2
	strb r0, [r2, #0]	@ 00018fb2 1070
.org 0x18fb4
	movs r0, #152	@ 00018fb4 9820
.org 0x18fb6
	movs r1, #0	@ 00018fb6 0021
.org 0x18fb8
	bl 0x249c	@ 00018fb8 e9f770fa
.org 0x18fbc
	movs r0, #153	@ 00018fbc 9920
.org 0x18fbe
	movs r1, #0	@ 00018fbe 0021
.org 0x18fc0
	bl 0x249c	@ 00018fc0 e9f76cfa
.org 0x18fc4
	movs r0, #152	@ 00018fc4 9820
.org 0x18fc6
	bl 0x25d8	@ 00018fc6 e9f707fb
.org 0x18fca
	movs r0, #153	@ 00018fca 9920
.org 0x18fcc
	bl 0x25d8	@ 00018fcc e9f704fb
.org 0x18fd0
	movs r0, #153	@ 00018fd0 9920
.org 0x18fd2
	bl 0x25d8	@ 00018fd2 e9f701fb
.org 0x18fd6
	b.n 0x19006	@ 00018fd6 16e0
.org 0x18fd8
	.byte 0xb0,0x0a,0x00,0x02	@ 00018fd8 data
.org 0x18fdc
	.byte 0x28,0xd0,0x02,0x00	@ 00018fdc data
.org 0x18fe0
	.byte 0xd6,0x07,0x00,0x00	@ 00018fe0 data
.org 0x18fe4
	ldr r0, [pc, #104]	@ 00018fe4 1a48
.org 0x18fe6
	ldr r1, [pc, #108]	@ 00018fe6 1b49
.org 0x18fe8
	adds r2, r0, r1	@ 00018fe8 4218
.org 0x18fea
	ldrb r1, [r2, #0]	@ 00018fea 1178
.org 0x18fec
	movs r0, #2	@ 00018fec 0220
.org 0x18fee
	ands r0, r1	@ 00018fee 0840
.org 0x18ff0
	cmp r0, #0	@ 00018ff0 0028
.org 0x18ff2
	beq.n 0x19006	@ 00018ff2 08d0
.org 0x18ff4
	movs r0, #2	@ 00018ff4 0220
.org 0x18ff6
	eors r0, r1	@ 00018ff6 4840
.org 0x18ff8
	strb r0, [r2, #0]	@ 00018ff8 1070
.org 0x18ffa
	movs r0, #152	@ 00018ffa 9820
.org 0x18ffc
	bl 0x2624	@ 00018ffc e9f712fb
.org 0x19000
	movs r0, #153	@ 00019000 9920
.org 0x19002
	bl 0x2624	@ 00019002 e9f70ffb
.org 0x19006
	ldr r2, [pc, #72]	@ 00019006 124a
.org 0x19008
	ldr r1, [pc, #76]	@ 00019008 1349
.org 0x1900a
	adds r0, r2, r1	@ 0001900a 5018
.org 0x1900c
	ldrh r1, [r0, #0]	@ 0001900c 0188
.org 0x1900e
	lsrs r0, r1, #8	@ 0001900e 080a
.org 0x19010
	cmp r0, #13	@ 00019010 0d28
.org 0x19012
	bne.n 0x1905c	@ 00019012 23d1
.org 0x19014
	movs r0, #255	@ 00019014 ff20
.org 0x19016
	ands r0, r1	@ 00019016 0840
.org 0x19018
	cmp r0, #2	@ 00019018 0228
.org 0x1901a
	bne.n 0x1905c	@ 0001901a 1fd1
.org 0x1901c
	ldr r0, [pc, #52]	@ 0001901c 0d48
.org 0x1901e
	adds r2, r2, r0	@ 0001901e 1218
.org 0x19020
	ldrb r1, [r2, #0]	@ 00019020 1178
.org 0x19022
	movs r0, #4	@ 00019022 0420
.org 0x19024
	ands r0, r1	@ 00019024 0840
.org 0x19026
	cmp r0, #0	@ 00019026 0028
.org 0x19028
	bne.n 0x19040	@ 00019028 0ad1
.org 0x1902a
	movs r0, #4	@ 0001902a 0420
.org 0x1902c
	orrs r0, r1	@ 0001902c 0843
.org 0x1902e
	strb r0, [r2, #0]	@ 0001902e 1070
.org 0x19030
	movs r0, #154	@ 00019030 9a20
.org 0x19032
	movs r1, #0	@ 00019032 0021
.org 0x19034
	bl 0x249c	@ 00019034 e9f732fa
.org 0x19038
	movs r0, #155	@ 00019038 9b20
.org 0x1903a
	movs r1, #0	@ 0001903a 0021
.org 0x1903c
	bl 0x249c	@ 0001903c e9f72efa
.org 0x19040
	movs r0, #154	@ 00019040 9a20
.org 0x19042
	bl 0x25d8	@ 00019042 e9f7c9fa
.org 0x19046
	movs r0, #155	@ 00019046 9b20
.org 0x19048
	bl 0x25d8	@ 00019048 e9f7c6fa
.org 0x1904c
	b.n 0x1907e	@ 0001904c 17e0
.org 0x1904e
	.byte 0x00	@ 0001904e data
.org 0x1904f
	.byte 0x00	@ 0001904f data
.org 0x19050
	.byte 0xb0,0x0a,0x00,0x02	@ 00019050 data
.org 0x19054
	.byte 0x28,0xd0,0x02,0x00	@ 00019054 data
.org 0x19058
	.byte 0xd4,0x07,0x00,0x00	@ 00019058 data
.org 0x1905c
	ldr r0, [pc, #104]	@ 0001905c 1a48
.org 0x1905e
	ldr r1, [pc, #108]	@ 0001905e 1b49
.org 0x19060
	adds r2, r0, r1	@ 00019060 4218
.org 0x19062
	ldrb r1, [r2, #0]	@ 00019062 1178
.org 0x19064
	movs r0, #4	@ 00019064 0420
.org 0x19066
	ands r0, r1	@ 00019066 0840
.org 0x19068
	cmp r0, #0	@ 00019068 0028
.org 0x1906a
	beq.n 0x1907e	@ 0001906a 08d0
.org 0x1906c
	movs r0, #4	@ 0001906c 0420
.org 0x1906e
	eors r0, r1	@ 0001906e 4840
.org 0x19070
	strb r0, [r2, #0]	@ 00019070 1070
.org 0x19072
	movs r0, #154	@ 00019072 9a20
.org 0x19074
	bl 0x2624	@ 00019074 e9f7d6fa
.org 0x19078
	movs r0, #155	@ 00019078 9b20
.org 0x1907a
	bl 0x2624	@ 0001907a e9f7d3fa
.org 0x1907e
	ldr r0, [pc, #72]	@ 0001907e 1248
.org 0x19080
	ldr r2, [pc, #76]	@ 00019080 134a
.org 0x19082
	adds r1, r0, r2	@ 00019082 8118
.org 0x19084
	ldrh r2, [r1, #0]	@ 00019084 0a88
.org 0x19086
	lsrs r1, r2, #8	@ 00019086 110a
.org 0x19088
	adds r3, r0, #0	@ 00019088 031c
.org 0x1908a
	cmp r1, #13	@ 0001908a 0d29
.org 0x1908c
	bne.n 0x190d4	@ 0001908c 22d1
.org 0x1908e
	movs r0, #255	@ 0001908e ff20
.org 0x19090
	ands r0, r2	@ 00019090 1040
.org 0x19092
	cmp r0, #3	@ 00019092 0328
.org 0x19094
	bne.n 0x190d4	@ 00019094 1ed1
.org 0x19096
	ldr r0, [pc, #52]	@ 00019096 0d48
.org 0x19098
	adds r2, r3, r0	@ 00019098 1a18
.org 0x1909a
	ldrb r1, [r2, #0]	@ 0001909a 1178
.org 0x1909c
	movs r0, #8	@ 0001909c 0820
.org 0x1909e
	ands r0, r1	@ 0001909e 0840
.org 0x190a0
	cmp r0, #0	@ 000190a0 0028
.org 0x190a2
	bne.n 0x190ba	@ 000190a2 0ad1
.org 0x190a4
	movs r0, #8	@ 000190a4 0820
.org 0x190a6
	orrs r0, r1	@ 000190a6 0843
.org 0x190a8
	strb r0, [r2, #0]	@ 000190a8 1070
.org 0x190aa
	movs r0, #156	@ 000190aa 9c20
.org 0x190ac
	movs r1, #0	@ 000190ac 0021
.org 0x190ae
	bl 0x249c	@ 000190ae e9f7f5f9
.org 0x190b2
	movs r0, #157	@ 000190b2 9d20
.org 0x190b4
	movs r1, #0	@ 000190b4 0021
.org 0x190b6
	bl 0x249c	@ 000190b6 e9f7f1f9
.org 0x190ba
	movs r0, #156	@ 000190ba 9c20
.org 0x190bc
	bl 0x25d8	@ 000190bc e9f78cfa
.org 0x190c0
	movs r0, #157	@ 000190c0 9d20
