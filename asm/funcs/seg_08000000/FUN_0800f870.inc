@ FUN_0800f870  entry 0x0800f870  size 84
.thumb
.org 0xf870
FUN_0800f870:
	push {r4, lr}	@ 0000f870 10b5
.org 0xf872
	ldr r0, [pc, #60]	@ 0000f872 0f48
.org 0xf874
	ldr r0, [r0, #0]	@ 0000f874 0068
.org 0xf876
	ldr r3, [r0, #84]	@ 0000f876 436d
.org 0xf878
	ldr r4, [r0, #88]	@ 0000f878 846d
.org 0xf87a
	ldr r2, [pc, #56]	@ 0000f87a 0e4a
.org 0xf87c
	ldrh r1, [r2, #8]	@ 0000f87c 1189
.org 0xf87e
	movs r0, #2	@ 0000f87e 0220
.org 0xf880
	ands r0, r1	@ 0000f880 0840
.org 0xf882
	cmp r0, #0	@ 0000f882 0028
.org 0xf884
	bne.n 0xf8d2	@ 0000f884 25d1
.org 0xf886
	ldr r0, [pc, #48]	@ 0000f886 0c48
.org 0xf888
	adds r1, r3, r0	@ 0000f888 1918
.org 0xf88a
	ldr r0, [pc, #48]	@ 0000f88a 0c48
.org 0xf88c
	cmp r1, r0	@ 0000f88c 8142
.org 0xf88e
	bhi.n 0xf8c4	@ 0000f88e 19d8
.org 0xf890
	ldr r0, [pc, #44]	@ 0000f890 0b48
.org 0xf892
	cmp r4, r0	@ 0000f892 8442
.org 0xf894
	ble.n 0xf8c4	@ 0000f894 16dd
.org 0xf896
	movs r0, #166	@ 0000f896 a620
.org 0xf898
	lsls r0, r0, #1	@ 0000f898 4000
.org 0xf89a
	adds r1, r2, r0	@ 0000f89a 1118
.org 0xf89c
	movs r0, #148	@ 0000f89c 9420
.org 0xf89e
	lsls r0, r0, #13	@ 0000f89e 4003
.org 0xf8a0
	str r0, [r1, #0]	@ 0000f8a0 0860
.org 0xf8a2
	movs r0, #168	@ 0000f8a2 a820
.org 0xf8a4
	lsls r0, r0, #1	@ 0000f8a4 4000
.org 0xf8a6
	adds r1, r2, r0	@ 0000f8a6 1118
.org 0xf8a8
	movs r0, #160	@ 0000f8a8 a020
.org 0xf8aa
	lsls r0, r0, #14	@ 0000f8aa 8003
.org 0xf8ac
	str r0, [r1, #0]	@ 0000f8ac 0860
.org 0xf8ae
	b.n 0xf8d2	@ 0000f8ae 10e0
.org 0xf8b0
	.byte 0xf0,0xdb,0x02,0x02	@ 0000f8b0 data
.org 0xf8b4
	.byte 0x10,0xe9,0x02,0x02	@ 0000f8b4 data
.org 0xf8b8
	.byte 0xff,0x2f,0xfe,0xff	@ 0000f8b8 data
.org 0xf8bc
	.byte 0xfe,0x1f,0x01,0x00	@ 0000f8bc data
.org 0xf8c0
	.byte 0x00,0x90,0x12,0x00	@ 0000f8c0 data
