@ FUN_08012e80  entry 0x08012e80  size 524
.thumb
.org 0x12e80
FUN_08012e80:
	push {r4, r5, r6, r7, lr}	@ 00012e80 f0b5
.org 0x12e82
	mov r7, sl	@ 00012e82 5746
.org 0x12e84
	mov r6, r9	@ 00012e84 4e46
.org 0x12e86
	mov r5, r8	@ 00012e86 4546
.org 0x12e88
	push {r5, r6, r7}	@ 00012e88 e0b4
.org 0x12e8a
	sub sp, #12	@ 00012e8a 83b0
.org 0x12e8c
	adds r6, r0, #0	@ 00012e8c 061c
.org 0x12e8e
	ldr r0, [pc, #28]	@ 00012e8e 0748
.org 0x12e90
	ldr r1, [pc, #28]	@ 00012e90 0749
.org 0x12e92
	adds r0, r0, r1	@ 00012e92 4018
.org 0x12e94
	ldr r0, [r0, #0]	@ 00012e94 0068
.org 0x12e96
	ldr r2, [r0, #84]	@ 00012e96 426d
.org 0x12e98
	ldr r1, [r0, #88]	@ 00012e98 816d
.org 0x12e9a
	ldr r0, [pc, #24]	@ 00012e9a 0648
.org 0x12e9c
	cmp r2, r0	@ 00012e9c 8242
.org 0x12e9e
	bgt.n 0x12eca	@ 00012e9e 14dc
.org 0x12ea0
	ldr r0, [pc, #20]	@ 00012ea0 0548
.org 0x12ea2
	cmp r1, r0	@ 00012ea2 8142
.org 0x12ea4
	bgt.n 0x12ebc	@ 00012ea4 0adc
.org 0x12ea6
	movs r5, #128	@ 00012ea6 8025
.org 0x12ea8
	lsls r5, r5, #1	@ 00012ea8 6d00
.org 0x12eaa
	b.n 0x12ede	@ 00012eaa 18e0
.org 0x12eac
	.byte 0x10,0xf6,0x02,0x02	@ 00012eac data
.org 0x12eb0
	.byte 0xa8,0x63,0x00,0x00	@ 00012eb0 data
.org 0x12eb4
	.byte 0xff,0xcf,0x11,0x00	@ 00012eb4 data
.org 0x12eb8
	.byte 0xff,0x7f,0x02,0x00	@ 00012eb8 data
.org 0x12ebc
	movs r0, #160	@ 00012ebc a020
.org 0x12ebe
	lsls r0, r0, #10	@ 00012ebe 8002
.org 0x12ec0
	cmp r1, r0	@ 00012ec0 8142
.org 0x12ec2
	ble.n 0x12eca	@ 00012ec2 02dd
.org 0x12ec4
	movs r5, #136	@ 00012ec4 8825
.org 0x12ec6
	lsls r5, r5, #3	@ 00012ec6 ed00
.org 0x12ec8
	b.n 0x12ede	@ 00012ec8 09e0
.org 0x12eca
	ldr r0, [pc, #464]	@ 00012eca 7448
.org 0x12ecc
	movs r5, #142	@ 00012ecc 8e25
.org 0x12ece
	lsls r5, r5, #3	@ 00012ece ed00
.org 0x12ed0
	cmp r2, r0	@ 00012ed0 8242
.org 0x12ed2
	ble.n 0x12ede	@ 00012ed2 04dd
.org 0x12ed4
	ldr r0, [pc, #456]	@ 00012ed4 7248
.org 0x12ed6
	cmp r1, r0	@ 00012ed6 8142
.org 0x12ed8
	bgt.n 0x12ede	@ 00012ed8 01dc
.org 0x12eda
	movs r5, #160	@ 00012eda a025
.org 0x12edc
	lsls r5, r5, #1	@ 00012edc 6d00
.org 0x12ede
	movs r0, #160	@ 00012ede a020
.org 0x12ee0
	lsls r0, r0, #2	@ 00012ee0 8000
.org 0x12ee2
	bl 0xa70	@ 00012ee2 edf7c5fd
.org 0x12ee6
	mov ip, r0	@ 00012ee6 8446
.org 0x12ee8
	cmp r0, #0	@ 00012ee8 0028
.org 0x12eea
	bne.n 0x12eee	@ 00012eea 00d1
.org 0x12eec
	b.n 0x1308c	@ 00012eec cee0
.org 0x12eee
	ldr r2, [pc, #436]	@ 00012eee 6d4a
.org 0x12ef0
	movs r1, #186	@ 00012ef0 ba21
.org 0x12ef2
	lsls r1, r1, #1	@ 00012ef2 4900
.org 0x12ef4
	adds r0, r2, r1	@ 00012ef4 5018
.org 0x12ef6
	mov r1, ip	@ 00012ef6 6146
.org 0x12ef8
	str r1, [r0, #0]	@ 00012ef8 0160
.org 0x12efa
	movs r0, #188	@ 00012efa bc20
.org 0x12efc
	lsls r0, r0, #1	@ 00012efc 4000
.org 0x12efe
	adds r1, r2, r0	@ 00012efe 1118
.org 0x12f00
	ldr r0, [pc, #420]	@ 00012f00 6948
.org 0x12f02
	str r0, [r1, #0]	@ 00012f02 0860
.org 0x12f04
	movs r0, #190	@ 00012f04 be20
.org 0x12f06
	lsls r0, r0, #1	@ 00012f06 4000
.org 0x12f08
	adds r1, r2, r0	@ 00012f08 1118
.org 0x12f0a
	ldr r0, [pc, #416]	@ 00012f0a 6848
.org 0x12f0c
	str r0, [r1, #0]	@ 00012f0c 0860
.org 0x12f0e
	adds r0, r6, #0	@ 00012f0e 301c
.org 0x12f10
	adds r0, #104	@ 00012f10 6830
.org 0x12f12
	ldrh r0, [r0, #0]	@ 00012f12 0088
.org 0x12f14
	lsrs r0, r0, #4	@ 00012f14 0009
.org 0x12f16
	ldr r1, [r6, #52]	@ 00012f16 716b
.org 0x12f18
	asrs r1, r1, #2	@ 00012f18 8910
.org 0x12f1a
	adds r0, r0, r1	@ 00012f1a 4018
.org 0x12f1c
	lsls r0, r0, #16	@ 00012f1c 0004
.org 0x12f1e
	lsrs r4, r0, #16	@ 00012f1e 040c
.org 0x12f20
	ldr r0, [r6, #56]	@ 00012f20 b06b
.org 0x12f22
	subs r0, r0, r5	@ 00012f22 401b
.org 0x12f24
	lsls r0, r0, #16	@ 00012f24 0004
.org 0x12f26
	lsrs r0, r0, #16	@ 00012f26 000c
.org 0x12f28
	mov r8, r0	@ 00012f28 8046
.org 0x12f2a
	movs r3, #0	@ 00012f2a 0023
.org 0x12f2c
	movs r0, #159	@ 00012f2c 9f20
.org 0x12f2e
	lsls r0, r0, #16	@ 00012f2e 0004
.org 0x12f30
	asrs r7, r0, #16	@ 00012f30 0714
.org 0x12f32
	mov r9, r0	@ 00012f32 8146
.org 0x12f34
	movs r1, #106	@ 00012f34 6a21
.org 0x12f36
	adds r1, r1, r6	@ 00012f36 8919
.org 0x12f38
	mov sl, r1	@ 00012f38 8a46
.org 0x12f3a
	adds r2, r6, #0	@ 00012f3a 321c
.org 0x12f3c
	adds r2, #108	@ 00012f3c 6c32
.org 0x12f3e
	str r2, [sp, #0]	@ 00012f3e 0092
.org 0x12f40
	adds r0, r6, #0	@ 00012f40 301c
.org 0x12f42
	adds r0, #110	@ 00012f42 6e30
.org 0x12f44
	str r0, [sp, #4]	@ 00012f44 0190
.org 0x12f46
	adds r1, r6, #0	@ 00012f46 311c
.org 0x12f48
	adds r1, #112	@ 00012f48 7031
.org 0x12f4a
	str r1, [sp, #8]	@ 00012f4a 0291
.org 0x12f4c
	cmp r3, r7	@ 00012f4c bb42
.org 0x12f4e
	bgt.n 0x12f72	@ 00012f4e 10dc
.org 0x12f50
	mov r2, r8	@ 00012f50 4246
.org 0x12f52
	lsls r0, r2, #16	@ 00012f52 1004
.org 0x12f54
	asrs r0, r0, #16	@ 00012f54 0014
.org 0x12f56
	cmp r0, #39	@ 00012f56 2728
.org 0x12f58
	bgt.n 0x12f72	@ 00012f58 0bdc
.org 0x12f5a
	mov r5, ip	@ 00012f5a 6546
.org 0x12f5c
	adds r2, r0, #0	@ 00012f5c 021c
.org 0x12f5e
	lsls r1, r2, #16	@ 00012f5e 1104
.org 0x12f60
	orrs r1, r4	@ 00012f60 2143
.org 0x12f62
	adds r4, r7, #0	@ 00012f62 3c1c
.org 0x12f64
	stmia r5!, {r1}	@ 00012f64 02c5
.org 0x12f66
	adds r3, #1	@ 00012f66 0133
.org 0x12f68
	cmp r3, r4	@ 00012f68 a342
.org 0x12f6a
	bgt.n 0x12f72	@ 00012f6a 02dc
.org 0x12f6c
	adds r0, r2, r3	@ 00012f6c d018
.org 0x12f6e
	cmp r0, #39	@ 00012f6e 2728
.org 0x12f70
	ble.n 0x12f64	@ 00012f70 f8dd
.org 0x12f72
	mov r1, sl	@ 00012f72 5146
.org 0x12f74
	ldrh r0, [r1, #0]	@ 00012f74 0888
.org 0x12f76
	lsrs r0, r0, #4	@ 00012f76 0009
.org 0x12f78
	ldr r1, [r6, #52]	@ 00012f78 716b
.org 0x12f7a
	asrs r1, r1, #3	@ 00012f7a c910
.org 0x12f7c
	adds r0, r0, r1	@ 00012f7c 4018
.org 0x12f7e
	lsls r0, r0, #16	@ 00012f7e 0004
.org 0x12f80
	lsrs r4, r0, #16	@ 00012f80 040c
.org 0x12f82
	mov r2, r9	@ 00012f82 4a46
.org 0x12f84
	asrs r7, r2, #16	@ 00012f84 1714
.org 0x12f86
	cmp r3, r7	@ 00012f86 bb42
.org 0x12f88
	bgt.n 0x12fb2	@ 00012f88 13dc
.org 0x12f8a
	mov r1, r8	@ 00012f8a 4146
.org 0x12f8c
	lsls r0, r1, #16	@ 00012f8c 0804
.org 0x12f8e
	asrs r1, r0, #16	@ 00012f8e 0114
.org 0x12f90
	adds r0, r1, r3	@ 00012f90 c818
.org 0x12f92
	cmp r0, #71	@ 00012f92 4728
.org 0x12f94
	bgt.n 0x12fb2	@ 00012f94 0ddc
.org 0x12f96
	lsls r0, r3, #2	@ 00012f96 9800
.org 0x12f98
	mov r2, ip	@ 00012f98 6246
.org 0x12f9a
	adds r5, r0, r2	@ 00012f9a 8518
.org 0x12f9c
	adds r2, r1, #0	@ 00012f9c 0a1c
.org 0x12f9e
	lsls r1, r2, #16	@ 00012f9e 1104
.org 0x12fa0
	orrs r1, r4	@ 00012fa0 2143
.org 0x12fa2
	adds r4, r7, #0	@ 00012fa2 3c1c
.org 0x12fa4
	stmia r5!, {r1}	@ 00012fa4 02c5
.org 0x12fa6
	adds r3, #1	@ 00012fa6 0133
.org 0x12fa8
	cmp r3, r4	@ 00012fa8 a342
.org 0x12faa
	bgt.n 0x12fb2	@ 00012faa 02dc
.org 0x12fac
	adds r0, r2, r3	@ 00012fac d018
.org 0x12fae
	cmp r0, #71	@ 00012fae 4728
.org 0x12fb0
	ble.n 0x12fa4	@ 00012fb0 f8dd
.org 0x12fb2
	ldr r1, [sp, #0]	@ 00012fb2 0099
.org 0x12fb4
	ldrh r0, [r1, #0]	@ 00012fb4 0888
.org 0x12fb6
	lsrs r0, r0, #4	@ 00012fb6 0009
.org 0x12fb8
	ldr r1, [r6, #52]	@ 00012fb8 716b
.org 0x12fba
	asrs r1, r1, #4	@ 00012fba 0911
.org 0x12fbc
	adds r0, r0, r1	@ 00012fbc 4018
.org 0x12fbe
	lsls r0, r0, #16	@ 00012fbe 0004
.org 0x12fc0
	lsrs r4, r0, #16	@ 00012fc0 040c
.org 0x12fc2
	mov r2, r9	@ 00012fc2 4a46
.org 0x12fc4
	asrs r7, r2, #16	@ 00012fc4 1714
.org 0x12fc6
	cmp r3, r7	@ 00012fc6 bb42
.org 0x12fc8
	bgt.n 0x12ff2	@ 00012fc8 13dc
.org 0x12fca
	mov r1, r8	@ 00012fca 4146
.org 0x12fcc
	lsls r0, r1, #16	@ 00012fcc 0804
.org 0x12fce
	asrs r1, r0, #16	@ 00012fce 0114
.org 0x12fd0
	adds r0, r1, r3	@ 00012fd0 c818
.org 0x12fd2
	cmp r0, #87	@ 00012fd2 5728
.org 0x12fd4
	bgt.n 0x12ff2	@ 00012fd4 0ddc
.org 0x12fd6
	lsls r0, r3, #2	@ 00012fd6 9800
.org 0x12fd8
	mov r2, ip	@ 00012fd8 6246
.org 0x12fda
	adds r5, r0, r2	@ 00012fda 8518
.org 0x12fdc
	adds r2, r1, #0	@ 00012fdc 0a1c
.org 0x12fde
	lsls r1, r2, #16	@ 00012fde 1104
.org 0x12fe0
	orrs r1, r4	@ 00012fe0 2143
.org 0x12fe2
	adds r4, r7, #0	@ 00012fe2 3c1c
.org 0x12fe4
	stmia r5!, {r1}	@ 00012fe4 02c5
.org 0x12fe6
	adds r3, #1	@ 00012fe6 0133
.org 0x12fe8
	cmp r3, r4	@ 00012fe8 a342
.org 0x12fea
	bgt.n 0x12ff2	@ 00012fea 02dc
.org 0x12fec
	adds r0, r2, r3	@ 00012fec d018
.org 0x12fee
	cmp r0, #87	@ 00012fee 5728
.org 0x12ff0
	ble.n 0x12fe4	@ 00012ff0 f8dd
.org 0x12ff2
	ldr r1, [sp, #4]	@ 00012ff2 0199
.org 0x12ff4
	ldrh r0, [r1, #0]	@ 00012ff4 0888
.org 0x12ff6
	lsrs r0, r0, #4	@ 00012ff6 0009
.org 0x12ff8
	ldr r1, [r6, #52]	@ 00012ff8 716b
.org 0x12ffa
	asrs r1, r1, #5	@ 00012ffa 4911
.org 0x12ffc
	adds r0, r0, r1	@ 00012ffc 4018
.org 0x12ffe
	lsls r0, r0, #16	@ 00012ffe 0004
.org 0x13000
	lsrs r4, r0, #16	@ 00013000 040c
.org 0x13002
	mov r2, r9	@ 00013002 4a46
.org 0x13004
	asrs r7, r2, #16	@ 00013004 1714
.org 0x13006
	cmp r3, r7	@ 00013006 bb42
.org 0x13008
	bgt.n 0x13032	@ 00013008 13dc
.org 0x1300a
	mov r1, r8	@ 0001300a 4146
.org 0x1300c
	lsls r0, r1, #16	@ 0001300c 0804
.org 0x1300e
	asrs r1, r0, #16	@ 0001300e 0114
.org 0x13010
	adds r0, r1, r3	@ 00013010 c818
.org 0x13012
	cmp r0, #103	@ 00013012 6728
.org 0x13014
	bgt.n 0x13032	@ 00013014 0ddc
.org 0x13016
	lsls r0, r3, #2	@ 00013016 9800
.org 0x13018
	mov r2, ip	@ 00013018 6246
.org 0x1301a
	adds r5, r0, r2	@ 0001301a 8518
.org 0x1301c
	adds r2, r1, #0	@ 0001301c 0a1c
.org 0x1301e
	lsls r1, r2, #16	@ 0001301e 1104
.org 0x13020
	orrs r1, r4	@ 00013020 2143
.org 0x13022
	adds r4, r7, #0	@ 00013022 3c1c
.org 0x13024
	stmia r5!, {r1}	@ 00013024 02c5
.org 0x13026
	adds r3, #1	@ 00013026 0133
.org 0x13028
	cmp r3, r4	@ 00013028 a342
.org 0x1302a
	bgt.n 0x13032	@ 0001302a 02dc
.org 0x1302c
	adds r0, r2, r3	@ 0001302c d018
.org 0x1302e
	cmp r0, #103	@ 0001302e 6728
.org 0x13030
	ble.n 0x13024	@ 00013030 f8dd
.org 0x13032
	ldr r1, [sp, #8]	@ 00013032 0299
.org 0x13034
	ldrh r0, [r1, #0]	@ 00013034 0888
.org 0x13036
	lsrs r0, r0, #4	@ 00013036 0009
.org 0x13038
	ldr r1, [r6, #52]	@ 00013038 716b
.org 0x1303a
	asrs r1, r1, #6	@ 0001303a 8911
.org 0x1303c
	adds r0, r0, r1	@ 0001303c 4018
.org 0x1303e
	lsls r0, r0, #16	@ 0001303e 0004
.org 0x13040
	lsrs r4, r0, #16	@ 00013040 040c
.org 0x13042
	mov r2, r9	@ 00013042 4a46
.org 0x13044
	asrs r6, r2, #16	@ 00013044 1614
.org 0x13046
	cmp r3, r6	@ 00013046 b342
.org 0x13048
	bgt.n 0x1308c	@ 00013048 20dc
.org 0x1304a
	mov r1, r8	@ 0001304a 4146
.org 0x1304c
	lsls r0, r1, #16	@ 0001304c 0804
.org 0x1304e
	asrs r2, r0, #16	@ 0001304e 0214
.org 0x13050
	adds r1, r2, r3	@ 00013050 d118
.org 0x13052
	adds r7, r0, #0	@ 00013052 071c
.org 0x13054
	cmp r1, #111	@ 00013054 6f29
.org 0x13056
	bgt.n 0x13074	@ 00013056 0ddc
.org 0x13058
	lsls r0, r3, #2	@ 00013058 9800
.org 0x1305a
	mov r1, ip	@ 0001305a 6146
.org 0x1305c
	adds r5, r0, r1	@ 0001305c 4518
.org 0x1305e
	adds r1, r2, #0	@ 0001305e 111c
.org 0x13060
	lsls r2, r1, #16	@ 00013060 0a04
.org 0x13062
	orrs r2, r4	@ 00013062 2243
.org 0x13064
	adds r4, r6, #0	@ 00013064 341c
.org 0x13066
	stmia r5!, {r2}	@ 00013066 04c5
.org 0x13068
	adds r3, #1	@ 00013068 0133
.org 0x1306a
	cmp r3, r4	@ 0001306a a342
.org 0x1306c
	bgt.n 0x1308c	@ 0001306c 0edc
.org 0x1306e
	adds r0, r1, r3	@ 0001306e c818
.org 0x13070
	cmp r0, #111	@ 00013070 6f28
.org 0x13072
	ble.n 0x13066	@ 00013072 f8dd
.org 0x13074
	mov r2, r9	@ 00013074 4a46
.org 0x13076
	asrs r0, r2, #16	@ 00013076 1014
.org 0x13078
	cmp r3, r0	@ 00013078 8342
.org 0x1307a
	bgt.n 0x1308c	@ 0001307a 07dc
.org 0x1307c
	adds r2, r7, #0	@ 0001307c 3a1c
.org 0x1307e
	adds r1, r0, #0	@ 0001307e 011c
.org 0x13080
	lsls r0, r3, #2	@ 00013080 9800
.org 0x13082
	add r0, ip	@ 00013082 6044
.org 0x13084
	stmia r0!, {r2}	@ 00013084 04c0
.org 0x13086
	adds r3, #1	@ 00013086 0133
.org 0x13088
	cmp r3, r1	@ 00013088 8b42
.org 0x1308a
	ble.n 0x13084	@ 0001308a fbdd
