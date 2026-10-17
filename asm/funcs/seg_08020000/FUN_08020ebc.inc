@ FUN_08020ebc  entry 0x08020ebc  size 600
.thumb
.org 0x20ebc
FUN_08020ebc:
	push {r4, r5, r6, lr}	@ 00020ebc 70b5
.org 0x20ebe
	adds r2, r0, #0	@ 00020ebe 021c
.org 0x20ec0
	ldr r4, [r2, #32]	@ 00020ec0 146a
.org 0x20ec2
	movs r0, #190	@ 00020ec2 be20
.org 0x20ec4
	lsls r0, r0, #1	@ 00020ec4 4000
.org 0x20ec6
	adds r5, r2, r0	@ 00020ec6 1518
.org 0x20ec8
	ldrb r3, [r5, #0]	@ 00020ec8 2b78
.org 0x20eca
	cmp r3, #0	@ 00020eca 002b
.org 0x20ecc
	bne.n 0x20fa0	@ 00020ecc 68d1
.org 0x20ece
	ldr r2, [pc, #76]	@ 00020ece 134a
.org 0x20ed0
	ldrh r1, [r2, #8]	@ 00020ed0 1189
.org 0x20ed2
	movs r0, #1	@ 00020ed2 0120
.org 0x20ed4
	orrs r0, r1	@ 00020ed4 0843
.org 0x20ed6
	strh r0, [r2, #8]	@ 00020ed6 1081
.org 0x20ed8
	ldr r6, [pc, #68]	@ 00020ed8 114e
.org 0x20eda
	ldrb r1, [r6, #4]	@ 00020eda 3179
.org 0x20edc
	movs r0, #8	@ 00020edc 0820
.org 0x20ede
	orrs r0, r1	@ 00020ede 0843
.org 0x20ee0
	strb r0, [r6, #4]	@ 00020ee0 3071
.org 0x20ee2
	movs r1, #196	@ 00020ee2 c421
.org 0x20ee4
	lsls r1, r1, #1	@ 00020ee4 4900
.org 0x20ee6
	adds r0, r2, r1	@ 00020ee6 5018
.org 0x20ee8
	str r3, [r0, #0]	@ 00020ee8 0360
.org 0x20eea
	ldrb r4, [r2, #2]	@ 00020eea 9478
.org 0x20eec
	cmp r4, #0	@ 00020eec 002c
.org 0x20eee
	bne.n 0x20f2c	@ 00020eee 1dd1
.org 0x20ef0
	adds r0, r2, #0	@ 00020ef0 101c
.org 0x20ef2
	adds r0, #16	@ 00020ef2 1030
.org 0x20ef4
	ldr r1, [pc, #44]	@ 00020ef4 0b49
.org 0x20ef6
	ldr r1, [r1, #12]	@ 00020ef6 c968
.org 0x20ef8
	ldr r1, [r1, #56]	@ 00020ef8 896b
.org 0x20efa
	bl 0x275f0	@ 00020efa 06f079fb
.org 0x20efe
	movs r0, #2	@ 00020efe 0220
.org 0x20f00
	bl 0x1f63c	@ 00020f00 fef79cfb
.org 0x20f04
	ldrb r2, [r6, #9]	@ 00020f04 727a
.org 0x20f06
	movs r1, #223	@ 00020f06 df21
.org 0x20f08
	adds r0, r1, #0	@ 00020f08 081c
.org 0x20f0a
	ands r0, r2	@ 00020f0a 1040
.org 0x20f0c
	strb r0, [r6, #9]	@ 00020f0c 7072
.org 0x20f0e
	ldr r2, [pc, #24]	@ 00020f0e 064a
.org 0x20f10
	ldrb r0, [r2, #5]	@ 00020f10 5079
.org 0x20f12
	ands r1, r0	@ 00020f12 0140
.org 0x20f14
	strb r1, [r2, #5]	@ 00020f14 5171
.org 0x20f16
	movs r0, #2	@ 00020f16 0220
.org 0x20f18
	b.n 0x21196	@ 00020f18 3de1
.org 0x20f1a
	.byte 0x00	@ 00020f1a data
.org 0x20f1b
	.byte 0x00	@ 00020f1b data
.org 0x20f1c
	.byte 0x10,0xe9,0x02,0x02	@ 00020f1c data
.org 0x20f20
	.byte 0xb0,0xe8,0x02,0x02	@ 00020f20 data
.org 0x20f24
	.byte 0xf8,0x2c,0x84,0x08	@ 00020f24 data
.org 0x20f28
	.byte 0x80,0x58,0x03,0x02	@ 00020f28 data
.org 0x20f2c
	cmp r4, #2	@ 00020f2c 022c
.org 0x20f2e
	bne.n 0x20f48	@ 00020f2e 0bd1
.org 0x20f30
	adds r0, r2, #0	@ 00020f30 101c
.org 0x20f32
	adds r0, #16	@ 00020f32 1030
.org 0x20f34
	ldr r1, [pc, #12]	@ 00020f34 0349
.org 0x20f36
	ldr r1, [r1, #12]	@ 00020f36 c968
.org 0x20f38
	ldr r1, [r1, #8]	@ 00020f38 8968
.org 0x20f3a
	bl 0x275f0	@ 00020f3a 06f059fb
.org 0x20f3e
	strb r4, [r5, #0]	@ 00020f3e 2c70
.org 0x20f40
	b.n 0x21198	@ 00020f40 2ae1
.org 0x20f42
	.byte 0x00	@ 00020f42 data
.org 0x20f43
	.byte 0x00	@ 00020f43 data
.org 0x20f44
	.byte 0xf8,0x2c,0x84,0x08	@ 00020f44 data
.org 0x20f48
	cmp r4, #3	@ 00020f48 032c
.org 0x20f4a
	bne.n 0x20f68	@ 00020f4a 0dd1
.org 0x20f4c
	adds r0, r2, #0	@ 00020f4c 101c
.org 0x20f4e
	adds r0, #16	@ 00020f4e 1030
.org 0x20f50
	ldr r1, [pc, #16]	@ 00020f50 0449
.org 0x20f52
	ldr r1, [r1, #12]	@ 00020f52 c968
.org 0x20f54
	ldr r1, [r1, #16]	@ 00020f54 0969
.org 0x20f56
	bl 0x275f0	@ 00020f56 06f04bfb
.org 0x20f5a
	movs r0, #4	@ 00020f5a 0420
.org 0x20f5c
	bl 0x1f63c	@ 00020f5c fef76efb
.org 0x20f60
	movs r0, #4	@ 00020f60 0420
.org 0x20f62
	b.n 0x21196	@ 00020f62 18e1
.org 0x20f64
	.byte 0xf8,0x2c,0x84,0x08	@ 00020f64 data
.org 0x20f68
	cmp r4, #4	@ 00020f68 042c
.org 0x20f6a
	bne.n 0x20f84	@ 00020f6a 0bd1
.org 0x20f6c
	adds r0, r2, #0	@ 00020f6c 101c
.org 0x20f6e
	adds r0, #16	@ 00020f6e 1030
.org 0x20f70
	ldr r1, [pc, #12]	@ 00020f70 0349
.org 0x20f72
	ldr r1, [r1, #12]	@ 00020f72 c968
.org 0x20f74
	ldr r1, [r1, #24]	@ 00020f74 8969
.org 0x20f76
	bl 0x275f0	@ 00020f76 06f03bfb
.org 0x20f7a
	movs r0, #5	@ 00020f7a 0520
.org 0x20f7c
	b.n 0x21196	@ 00020f7c 0be1
.org 0x20f7e
	.byte 0x00	@ 00020f7e data
.org 0x20f7f
	.byte 0x00	@ 00020f7f data
.org 0x20f80
	.byte 0xf8,0x2c,0x84,0x08	@ 00020f80 data
.org 0x20f84
	cmp r4, #5	@ 00020f84 052c
.org 0x20f86
	beq.n 0x20f8a	@ 00020f86 00d0
.org 0x20f88
	b.n 0x21198	@ 00020f88 06e1
.org 0x20f8a
	adds r0, r2, #0	@ 00020f8a 101c
.org 0x20f8c
	adds r0, #16	@ 00020f8c 1030
.org 0x20f8e
	ldr r1, [pc, #12]	@ 00020f8e 0349
.org 0x20f90
	ldr r1, [r1, #12]	@ 00020f90 c968
.org 0x20f92
	ldr r1, [r1, #32]	@ 00020f92 096a
.org 0x20f94
	bl 0x275f0	@ 00020f94 06f02cfb
.org 0x20f98
	movs r0, #9	@ 00020f98 0920
.org 0x20f9a
	b.n 0x21196	@ 00020f9a fce0
.org 0x20f9c
	.byte 0xf8,0x2c,0x84,0x08	@ 00020f9c data
.org 0x20fa0
	cmp r3, #2	@ 00020fa0 022b
.org 0x20fa2
	bne.n 0x20fcc	@ 00020fa2 13d1
.org 0x20fa4
	ldr r1, [r4, #84]	@ 00020fa4 616d
.org 0x20fa6
	ldr r0, [pc, #28]	@ 00020fa6 0748
.org 0x20fa8
	cmp r1, r0	@ 00020fa8 8142
.org 0x20faa
	bgt.n 0x20fcc	@ 00020faa 0fdc
.org 0x20fac
	ldr r1, [pc, #24]	@ 00020fac 0649
.org 0x20fae
	ldrb r2, [r1, #0]	@ 00020fae 0a78
.org 0x20fb0
	movs r0, #128	@ 00020fb0 8020
.org 0x20fb2
	orrs r0, r2	@ 00020fb2 1043
.org 0x20fb4
	strb r0, [r1, #0]	@ 00020fb4 0870
.org 0x20fb6
	ldrb r2, [r1, #1]	@ 00020fb6 4a78
.org 0x20fb8
	movs r0, #2	@ 00020fb8 0220
.org 0x20fba
	orrs r0, r2	@ 00020fba 1043
.org 0x20fbc
	strb r0, [r1, #1]	@ 00020fbc 4870
.org 0x20fbe
	movs r0, #3	@ 00020fbe 0320
.org 0x20fc0
	b.n 0x21196	@ 00020fc0 e9e0
.org 0x20fc2
	.byte 0x00	@ 00020fc2 data
.org 0x20fc3
	.byte 0x00	@ 00020fc3 data
.org 0x20fc4
	.byte 0xff,0xcf,0x02,0x00	@ 00020fc4 data
.org 0x20fc8
	.byte 0xe0,0x32,0x00,0x03	@ 00020fc8 data
.org 0x20fcc
	movs r0, #190	@ 00020fcc be20
.org 0x20fce
	lsls r0, r0, #1	@ 00020fce 4000
.org 0x20fd0
	adds r5, r2, r0	@ 00020fd0 1518
.org 0x20fd2
	ldrb r0, [r5, #0]	@ 00020fd2 2878
.org 0x20fd4
	cmp r0, #3	@ 00020fd4 0328
.org 0x20fd6
	bne.n 0x2101c	@ 00020fd6 21d1
.org 0x20fd8
	ldr r1, [r4, #84]	@ 00020fd8 616d
.org 0x20fda
	ldr r0, [pc, #44]	@ 00020fda 0b48
.org 0x20fdc
	cmp r1, r0	@ 00020fdc 8142
.org 0x20fde
	bgt.n 0x2101c	@ 00020fde 1ddc
.org 0x20fe0
	ldr r1, [pc, #40]	@ 00020fe0 0a49
.org 0x20fe2
	movs r0, #0	@ 00020fe2 0020
.org 0x20fe4
	strb r0, [r1, #1]	@ 00020fe4 4870
.org 0x20fe6
	ldr r0, [pc, #40]	@ 00020fe6 0a48
.org 0x20fe8
	ldr r1, [pc, #40]	@ 00020fe8 0a49
.org 0x20fea
	ldr r1, [r1, #12]	@ 00020fea c968
.org 0x20fec
	ldr r1, [r1, #20]	@ 00020fec 4969
.org 0x20fee
	bl 0x275f0	@ 00020fee 06f0fffa
.org 0x20ff2
	movs r0, #4	@ 00020ff2 0420
.org 0x20ff4
	bl 0x1f63c	@ 00020ff4 fef722fb
.org 0x20ff8
	ldr r2, [pc, #28]	@ 00020ff8 074a
.org 0x20ffa
	ldrb r1, [r2, #4]	@ 00020ffa 1179
.org 0x20ffc
	movs r0, #8	@ 00020ffc 0820
.org 0x20ffe
	orrs r0, r1	@ 00020ffe 0843
.org 0x21000
	strb r0, [r2, #4]	@ 00021000 1071
.org 0x21002
	movs r0, #5	@ 00021002 0520
.org 0x21004
	b.n 0x21196	@ 00021004 c7e0
.org 0x21006
	.byte 0x00	@ 00021006 data
.org 0x21007
	.byte 0x00	@ 00021007 data
.org 0x21008
	.byte 0xff,0xcf,0x02,0x00	@ 00021008 data
.org 0x2100c
	.byte 0xe0,0x32,0x00,0x03	@ 0002100c data
.org 0x21010
	.byte 0x20,0xe9,0x02,0x02	@ 00021010 data
.org 0x21014
	.byte 0xf8,0x2c,0x84,0x08	@ 00021014 data
.org 0x21018
	.byte 0xb0,0xe8,0x02,0x02	@ 00021018 data
.org 0x2101c
	movs r1, #190	@ 0002101c be21
.org 0x2101e
	lsls r1, r1, #1	@ 0002101e 4900
.org 0x21020
	adds r5, r2, r1	@ 00021020 5518
.org 0x21022
	ldrb r0, [r5, #0]	@ 00021022 2878
.org 0x21024
	cmp r0, #4	@ 00021024 0428
.org 0x21026
	bne.n 0x2106c	@ 00021026 21d1
.org 0x21028
	ldr r1, [r4, #84]	@ 00021028 616d
.org 0x2102a
	ldr r0, [pc, #44]	@ 0002102a 0b48
.org 0x2102c
	cmp r1, r0	@ 0002102c 8142
.org 0x2102e
	bgt.n 0x2106c	@ 0002102e 1ddc
.org 0x21030
	ldr r1, [pc, #40]	@ 00021030 0a49
.org 0x21032
	movs r0, #0	@ 00021032 0020
.org 0x21034
	strb r0, [r1, #1]	@ 00021034 4870
.org 0x21036
	ldr r0, [pc, #40]	@ 00021036 0a48
.org 0x21038
	ldr r1, [pc, #40]	@ 00021038 0a49
.org 0x2103a
	ldr r1, [r1, #12]	@ 0002103a c968
.org 0x2103c
	ldr r1, [r1, #20]	@ 0002103c 4969
.org 0x2103e
	bl 0x275f0	@ 0002103e 06f0d7fa
.org 0x21042
	movs r0, #4	@ 00021042 0420
.org 0x21044
	bl 0x1f63c	@ 00021044 fef7fafa
.org 0x21048
	ldr r2, [pc, #28]	@ 00021048 074a
.org 0x2104a
	ldrb r1, [r2, #4]	@ 0002104a 1179
.org 0x2104c
	movs r0, #8	@ 0002104c 0820
.org 0x2104e
	orrs r0, r1	@ 0002104e 0843
.org 0x21050
	strb r0, [r2, #4]	@ 00021050 1071
.org 0x21052
	movs r0, #5	@ 00021052 0520
.org 0x21054
	b.n 0x21196	@ 00021054 9fe0
.org 0x21056
	.byte 0x00	@ 00021056 data
.org 0x21057
	.byte 0x00	@ 00021057 data
.org 0x21058
	.byte 0xff,0xcf,0x02,0x00	@ 00021058 data
.org 0x2105c
	.byte 0xe0,0x32,0x00,0x03	@ 0002105c data
.org 0x21060
	.byte 0x20,0xe9,0x02,0x02	@ 00021060 data
.org 0x21064
	.byte 0xf8,0x2c,0x84,0x08	@ 00021064 data
.org 0x21068
	.byte 0xb0,0xe8,0x02,0x02	@ 00021068 data
.org 0x2106c
	movs r0, #190	@ 0002106c be20
.org 0x2106e
	lsls r0, r0, #1	@ 0002106e 4000
.org 0x21070
	adds r6, r2, r0	@ 00021070 1618
.org 0x21072
	ldrb r0, [r6, #0]	@ 00021072 3078
.org 0x21074
	cmp r0, #5	@ 00021074 0528
.org 0x21076
	bne.n 0x21094	@ 00021076 0dd1
.org 0x21078
	ldr r2, [pc, #20]	@ 00021078 054a
.org 0x2107a
	ldrb r1, [r2, #0]	@ 0002107a 1178
.org 0x2107c
	movs r0, #127	@ 0002107c 7f20
.org 0x2107e
	ands r0, r1	@ 0002107e 0840
.org 0x21080
	strb r0, [r2, #0]	@ 00021080 1070
.org 0x21082
	movs r0, #3	@ 00021082 0320
.org 0x21084
	bl 0x1f63c	@ 00021084 fef7dafa
.org 0x21088
	movs r0, #6	@ 00021088 0620
.org 0x2108a
	strb r0, [r6, #0]	@ 0002108a 3070
.org 0x2108c
	b.n 0x21198	@ 0002108c 84e0
.org 0x2108e
	.byte 0x00	@ 0002108e data
.org 0x2108f
	.byte 0x00	@ 0002108f data
.org 0x21090
	.byte 0xe0,0x32,0x00,0x03	@ 00021090 data
.org 0x21094
	cmp r0, #6	@ 00021094 0628
.org 0x21096
	bne.n 0x210fc	@ 00021096 31d1
.org 0x21098
	ldr r5, [pc, #76]	@ 00021098 134d
.org 0x2109a
	ldrh r1, [r5, #8]	@ 0002109a 2989
.org 0x2109c
	movs r0, #16	@ 0002109c 1020
.org 0x2109e
	ands r0, r1	@ 0002109e 0840
.org 0x210a0
	cmp r0, #0	@ 000210a0 0028
.org 0x210a2
	beq.n 0x210fc	@ 000210a2 2bd0
.org 0x210a4
	ldr r1, [pc, #68]	@ 000210a4 1149
.org 0x210a6
	ldrb r2, [r1, #0]	@ 000210a6 0a78
.org 0x210a8
	movs r0, #128	@ 000210a8 8020
.org 0x210aa
	orrs r0, r2	@ 000210aa 1043
.org 0x210ac
	strb r0, [r1, #0]	@ 000210ac 0870
.org 0x210ae
	ldrb r2, [r1, #1]	@ 000210ae 4a78
.org 0x210b0
	movs r0, #2	@ 000210b0 0220
.org 0x210b2
	orrs r0, r2	@ 000210b2 1043
.org 0x210b4
	strb r0, [r1, #1]	@ 000210b4 4870
.org 0x210b6
	adds r0, r5, #0	@ 000210b6 281c
.org 0x210b8
	adds r0, #16	@ 000210b8 1030
.org 0x210ba
	ldr r1, [pc, #52]	@ 000210ba 0d49
.org 0x210bc
	ldr r1, [r1, #12]	@ 000210bc c968
.org 0x210be
	ldr r1, [r1, #28]	@ 000210be c969
.org 0x210c0
	bl 0x275f0	@ 000210c0 06f096fa
.org 0x210c4
	ldrh r0, [r5, #8]	@ 000210c4 2889
.org 0x210c6
	ldr r2, [pc, #44]	@ 000210c6 0b4a
.org 0x210c8
	ands r2, r0	@ 000210c8 0240
.org 0x210ca
	ldrb r1, [r5, #18]	@ 000210ca a97c
.org 0x210cc
	movs r0, #253	@ 000210cc fd20
.org 0x210ce
	ands r0, r1	@ 000210ce 0840
.org 0x210d0
	strb r0, [r5, #18]	@ 000210d0 a874
.org 0x210d2
	ldr r3, [pc, #36]	@ 000210d2 094b
.org 0x210d4
	ldrb r1, [r3, #4]	@ 000210d4 1979
.org 0x210d6
	movs r0, #247	@ 000210d6 f720
.org 0x210d8
	ands r0, r1	@ 000210d8 0840
.org 0x210da
	strb r0, [r3, #4]	@ 000210da 1871
.org 0x210dc
	movs r0, #1	@ 000210dc 0120
.org 0x210de
	orrs r2, r0	@ 000210de 0243
.org 0x210e0
	strh r2, [r5, #8]	@ 000210e0 2a81
.org 0x210e2
	movs r0, #7	@ 000210e2 0720
.org 0x210e4
	strb r0, [r6, #0]	@ 000210e4 3070
.org 0x210e6
	b.n 0x21198	@ 000210e6 57e0
.org 0x210e8
	.byte 0x10,0xe9,0x02,0x02	@ 000210e8 data
.org 0x210ec
	.byte 0xe0,0x32,0x00,0x03	@ 000210ec data
.org 0x210f0
	.byte 0xf8,0x2c,0x84,0x08	@ 000210f0 data
.org 0x210f4
	.byte 0xef,0xff,0x00,0x00	@ 000210f4 data
.org 0x210f8
	.byte 0xb0,0xe8,0x02,0x02	@ 000210f8 data
.org 0x210fc
	movs r1, #190	@ 000210fc be21
.org 0x210fe
	lsls r1, r1, #1	@ 000210fe 4900
.org 0x21100
	adds r5, r2, r1	@ 00021100 5518
.org 0x21102
	ldrb r0, [r5, #0]	@ 00021102 2878
.org 0x21104
	cmp r0, #7	@ 00021104 0728
.org 0x21106
	bne.n 0x21120	@ 00021106 0bd1
.org 0x21108
	ldr r1, [pc, #16]	@ 00021108 0449
.org 0x2110a
	ldrb r2, [r1, #0]	@ 0002110a 0a78
.org 0x2110c
	movs r0, #127	@ 0002110c 7f20
.org 0x2110e
	ands r0, r2	@ 0002110e 1040
.org 0x21110
	movs r2, #0	@ 00021110 0022
.org 0x21112
	strb r0, [r1, #0]	@ 00021112 0870
