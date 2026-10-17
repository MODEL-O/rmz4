@ FUN_0801cdbc  entry 0x0801cdbc  size 144
.thumb
.org 0x1cdbc
FUN_0801cdbc:
	push {r4, r5, r6, lr}	@ 0001cdbc 70b5
.org 0x1cdbe
	adds r6, r0, #0	@ 0001cdbe 061c
.org 0x1cdc0
	adds r4, r6, #0	@ 0001cdc0 341c
.org 0x1cdc2
	adds r4, #52	@ 0001cdc2 3434
.org 0x1cdc4
	adds r0, #108	@ 0001cdc4 6c30
.org 0x1cdc6
	ldr r1, [pc, #132]	@ 0001cdc6 2149
.org 0x1cdc8
	ldr r1, [r1, #0]	@ 0001cdc8 0968
.org 0x1cdca
	bl 0x34a4	@ 0001cdca e6f76bfb
.org 0x1cdce
	ldr r0, [pc, #128]	@ 0001cdce 2048
.org 0x1cdd0
	ldr r1, [r0, #0]	@ 0001cdd0 0168
.org 0x1cdd2
	adds r2, r6, #0	@ 0001cdd2 321c
.org 0x1cdd4
	adds r2, #84	@ 0001cdd4 5432
.org 0x1cdd6
	adds r0, r4, #0	@ 0001cdd6 201c
.org 0x1cdd8
	bl 0x2d94	@ 0001cdd8 e5f7dcff
.org 0x1cddc
	ldrb r0, [r6, #10]	@ 0001cddc b07a
.org 0x1cdde
	lsrs r0, r0, #4	@ 0001cdde 0009
.org 0x1cde0
	movs r3, #1	@ 0001cde0 0123
.org 0x1cde2
	ands r0, r3	@ 0001cde2 1840
.org 0x1cde4
	movs r5, #0	@ 0001cde4 0025
.org 0x1cde6
	strb r0, [r4, #24]	@ 0001cde6 2076
.org 0x1cde8
	ldrb r0, [r6, #10]	@ 0001cde8 b07a
.org 0x1cdea
	lsrs r0, r0, #4	@ 0001cdea 0009
.org 0x1cdec
	ands r0, r3	@ 0001cdec 1840
.org 0x1cdee
	lsls r0, r0, #4	@ 0001cdee 0001
.org 0x1cdf0
	ldrb r2, [r4, #22]	@ 0001cdf0 a27d
.org 0x1cdf2
	movs r1, #17	@ 0001cdf2 1121
.org 0x1cdf4
	negs r1, r1	@ 0001cdf4 4942
.org 0x1cdf6
	ands r1, r2	@ 0001cdf6 1140
.org 0x1cdf8
	orrs r1, r0	@ 0001cdf8 0143
.org 0x1cdfa
	strb r1, [r4, #22]	@ 0001cdfa a175
.org 0x1cdfc
	ldrb r0, [r6, #10]	@ 0001cdfc b07a
.org 0x1cdfe
	lsrs r0, r0, #5	@ 0001cdfe 4009
.org 0x1ce00
	ands r0, r3	@ 0001ce00 1840
.org 0x1ce02
	strb r0, [r4, #25]	@ 0001ce02 6076
.org 0x1ce04
	ldrb r0, [r6, #10]	@ 0001ce04 b07a
.org 0x1ce06
	lsrs r0, r0, #5	@ 0001ce06 4009
.org 0x1ce08
	ands r0, r3	@ 0001ce08 1840
.org 0x1ce0a
	lsls r0, r0, #5	@ 0001ce0a 4001
.org 0x1ce0c
	movs r2, #33	@ 0001ce0c 2122
.org 0x1ce0e
	negs r2, r2	@ 0001ce0e 5242
.org 0x1ce10
	ands r1, r2	@ 0001ce10 1140
.org 0x1ce12
	orrs r1, r0	@ 0001ce12 0143
.org 0x1ce14
	strb r1, [r4, #22]	@ 0001ce14 a175
.org 0x1ce16
	movs r0, #255	@ 0001ce16 ff20
.org 0x1ce18
	strb r0, [r6, #30]	@ 0001ce18 b077
.org 0x1ce1a
	adds r0, r6, #0	@ 0001ce1a 301c
.org 0x1ce1c
	adds r0, #36	@ 0001ce1c 2430
.org 0x1ce1e
	strb r5, [r0, #0]	@ 0001ce1e 0570
.org 0x1ce20
	movs r0, #128	@ 0001ce20 8020
.org 0x1ce22
	lsls r0, r0, #1	@ 0001ce22 4000
.org 0x1ce24
	strh r0, [r4, #28]	@ 0001ce24 a083
.org 0x1ce26
	strh r0, [r4, #30]	@ 0001ce26 e083
.org 0x1ce28
	ldrb r0, [r6, #10]	@ 0001ce28 b07a
.org 0x1ce2a
	movs r1, #8	@ 0001ce2a 0821
.org 0x1ce2c
	orrs r0, r1	@ 0001ce2c 0843
.org 0x1ce2e
	movs r1, #64	@ 0001ce2e 4021
.org 0x1ce30
	orrs r0, r1	@ 0001ce30 0843
.org 0x1ce32
	strb r0, [r6, #10]	@ 0001ce32 b072
.org 0x1ce34
	ldrb r0, [r6, #11]	@ 0001ce34 f07a
.org 0x1ce36
	orrs r3, r0	@ 0001ce36 0343
.org 0x1ce38
	movs r0, #253	@ 0001ce38 fd20
.org 0x1ce3a
	ands r3, r0	@ 0001ce3a 0340
.org 0x1ce3c
	movs r0, #251	@ 0001ce3c fb20
.org 0x1ce3e
	ands r3, r0	@ 0001ce3e 0340
.org 0x1ce40
	movs r0, #223	@ 0001ce40 df20
.org 0x1ce42
	ands r3, r0	@ 0001ce42 0340
.org 0x1ce44
	strb r3, [r6, #11]	@ 0001ce44 f372
.org 0x1ce46
	pop {r4, r5, r6}	@ 0001ce46 70bc
.org 0x1ce48
	pop {r0}	@ 0001ce48 01bc
.org 0x1ce4a
	bx r0	@ 0001ce4a 0047
