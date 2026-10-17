@ FUN_080bcfd8  entry 0x080bcfd8  size 130
.thumb
.org 0xbcfd8
FUN_080bcfd8:
	push {r4, lr}	@ 000bcfd8 10b5
.org 0xbcfda
	adds r4, r0, #0	@ 000bcfda 041c
.org 0xbcfdc
	ldrb r1, [r4, #13]	@ 000bcfdc 617b
.org 0xbcfde
	cmp r1, #0	@ 000bcfde 0029
.org 0xbcfe0
	bne.n 0xbd000	@ 000bcfe0 0ed1
.org 0xbcfe2
	adds r0, #140	@ 000bcfe2 8c30
.org 0xbcfe4
	str r1, [r0, #0]	@ 000bcfe4 0160
.org 0xbcfe6
	adds r0, #4	@ 000bcfe6 0430
.org 0xbcfe8
	str r1, [r0, #0]	@ 000bcfe8 0160
.org 0xbcfea
	adds r0, #4	@ 000bcfea 0430
.org 0xbcfec
	strb r1, [r0, #0]	@ 000bcfec 0170
.org 0xbcfee
	ldrb r1, [r4, #10]	@ 000bcfee a17a
.org 0xbcff0
	movs r0, #251	@ 000bcff0 fb20
.org 0xbcff2
	ands r0, r1	@ 000bcff2 0840
.org 0xbcff4
	strb r0, [r4, #10]	@ 000bcff4 a072
.org 0xbcff6
	movs r0, #64	@ 000bcff6 4020
.org 0xbcff8
	strb r0, [r4, #18]	@ 000bcff8 a074
.org 0xbcffa
	ldrb r0, [r4, #13]	@ 000bcffa 607b
.org 0xbcffc
	adds r0, #1	@ 000bcffc 0130
.org 0xbcffe
	strb r0, [r4, #13]	@ 000bcffe 6073
.org 0xbd000
	adds r0, r4, #0	@ 000bd000 201c
.org 0xbd002
	bl 0x1cff0	@ 000bd002 5ff7f5ff
.org 0xbd006
	ldr r0, [r4, #84]	@ 000bd006 606d
.org 0xbd008
	ldr r1, [r4, #92]	@ 000bd008 e16d
.org 0xbd00a
	adds r0, r0, r1	@ 000bd00a 4018
.org 0xbd00c
	str r0, [r4, #84]	@ 000bd00c 6065
.org 0xbd00e
	ldr r0, [r4, #88]	@ 000bd00e a06d
.org 0xbd010
	ldr r1, [r4, #96]	@ 000bd010 216e
.org 0xbd012
	adds r0, r0, r1	@ 000bd012 4018
.org 0xbd014
	str r0, [r4, #88]	@ 000bd014 a065
.org 0xbd016
	adds r1, #64	@ 000bd016 4031
.org 0xbd018
	str r1, [r4, #96]	@ 000bd018 2166
.org 0xbd01a
	ldrb r1, [r4, #18]	@ 000bd01a a17c
.org 0xbd01c
	movs r0, #1	@ 000bd01c 0120
.org 0xbd01e
	ands r0, r1	@ 000bd01e 0840
.org 0xbd020
	cmp r0, #0	@ 000bd020 0028
.org 0xbd022
	beq.n 0xbd02c	@ 000bd022 03d0
.org 0xbd024
	ldrb r1, [r4, #10]	@ 000bd024 a17a
.org 0xbd026
	movs r0, #1	@ 000bd026 0120
.org 0xbd028
	orrs r0, r1	@ 000bd028 0843
.org 0xbd02a
	b.n 0xbd032	@ 000bd02a 02e0
.org 0xbd02c
	ldrb r1, [r4, #10]	@ 000bd02c a17a
.org 0xbd02e
	movs r0, #254	@ 000bd02e fe20
.org 0xbd030
	ands r0, r1	@ 000bd030 0840
.org 0xbd032
	strb r0, [r4, #10]	@ 000bd032 a072
.org 0xbd034
	ldrb r0, [r4, #18]	@ 000bd034 a07c
.org 0xbd036
	subs r0, #1	@ 000bd036 0138
.org 0xbd038
	strb r0, [r4, #18]	@ 000bd038 a074
.org 0xbd03a
	lsls r0, r0, #24	@ 000bd03a 0006
.org 0xbd03c
	lsrs r0, r0, #24	@ 000bd03c 000e
.org 0xbd03e
	cmp r0, #255	@ 000bd03e ff28
.org 0xbd040
	bne.n 0xbd054	@ 000bd040 08d1
.org 0xbd042
	ldr r1, [pc, #24]	@ 000bd042 0649
.org 0xbd044
	ldrb r0, [r4, #9]	@ 000bd044 607a
.org 0xbd046
	lsls r0, r0, #2	@ 000bd046 8000
.org 0xbd048
	adds r0, r0, r1	@ 000bd048 4018
.org 0xbd04a
	movs r1, #4	@ 000bd04a 0421
.org 0xbd04c
	str r1, [r4, #12]	@ 000bd04c e160
.org 0xbd04e
	ldr r0, [r0, #0]	@ 000bd04e 0068
.org 0xbd050
	ldr r0, [r0, #16]	@ 000bd050 0069
.org 0xbd052
	str r0, [r4, #20]	@ 000bd052 6061
.org 0xbd054
	pop {r4}	@ 000bd054 10bc
.org 0xbd056
	pop {r0}	@ 000bd056 01bc
.org 0xbd058
	bx r0	@ 000bd058 0047
