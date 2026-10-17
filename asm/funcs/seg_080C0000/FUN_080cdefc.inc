@ FUN_080cdefc  entry 0x080cdefc  size 286
.thumb
.org 0xcdefc
FUN_080cdefc:
	push {r4, r5, r6, r7, lr}	@ 000cdefc f0b5
.org 0xcdefe
	adds r7, r0, #0	@ 000cdefe 071c
.org 0xcdf00
	bl 0x1cc9c	@ 000cdf00 4ef7ccfe
.org 0xcdf04
	ldrb r1, [r7, #10]	@ 000cdf04 b97a
.org 0xcdf06
	movs r0, #1	@ 000cdf06 0120
.org 0xcdf08
	movs r4, #0	@ 000cdf08 0024
.org 0xcdf0a
	orrs r0, r1	@ 000cdf0a 0843
.org 0xcdf0c
	movs r1, #2	@ 000cdf0c 0221
.org 0xcdf0e
	orrs r0, r1	@ 000cdf0e 0843
.org 0xcdf10
	strb r0, [r7, #10]	@ 000cdf10 b872
.org 0xcdf12
	ldr r1, [pc, #40]	@ 000cdf12 0a49
.org 0xcdf14
	ldrb r0, [r7, #17]	@ 000cdf14 787c
.org 0xcdf16
	lsls r0, r0, #1	@ 000cdf16 4000
.org 0xcdf18
	adds r0, r0, r1	@ 000cdf18 4018
.org 0xcdf1a
	ldrh r1, [r0, #0]	@ 000cdf1a 0188
.org 0xcdf1c
	adds r0, r7, #0	@ 000cdf1c 381c
.org 0xcdf1e
	bl 0x1cf00	@ 000cdf1e 4ef7efff
.org 0xcdf22
	adds r0, r7, #0	@ 000cdf22 381c
.org 0xcdf24
	bl 0x1cff0	@ 000cdf24 4ff764f8
.org 0xcdf28
	ldr r1, [pc, #20]	@ 000cdf28 0549
.org 0xcdf2a
	ldrb r0, [r7, #17]	@ 000cdf2a 787c
.org 0xcdf2c
	adds r0, r0, r1	@ 000cdf2c 4018
.org 0xcdf2e
	ldrb r2, [r0, #0]	@ 000cdf2e 0278
.org 0xcdf30
	cmp r2, #0	@ 000cdf30 002a
.org 0xcdf32
	beq.n 0xcdf44	@ 000cdf32 07d0
.org 0xcdf34
	ldrb r0, [r7, #10]	@ 000cdf34 b87a
.org 0xcdf36
	movs r1, #16	@ 000cdf36 1021
.org 0xcdf38
	orrs r0, r1	@ 000cdf38 0843
.org 0xcdf3a
	b.n 0xcdf4a	@ 000cdf3a 06e0
.org 0xcdf3c
	.byte 0x48,0x6b,0x86,0x08	@ 000cdf3c data
.org 0xcdf40
	.byte 0x60,0x6b,0x86,0x08	@ 000cdf40 data
.org 0xcdf44
	ldrb r1, [r7, #10]	@ 000cdf44 b97a
.org 0xcdf46
	movs r0, #239	@ 000cdf46 ef20
.org 0xcdf48
	ands r0, r1	@ 000cdf48 0840
.org 0xcdf4a
	strb r0, [r7, #10]	@ 000cdf4a b872
.org 0xcdf4c
	movs r1, #1	@ 000cdf4c 0121
.org 0xcdf4e
	ands r1, r2	@ 000cdf4e 1140
.org 0xcdf50
	adds r0, r7, #0	@ 000cdf50 381c
.org 0xcdf52
	adds r0, #76	@ 000cdf52 4c30
.org 0xcdf54
	strb r1, [r0, #0]	@ 000cdf54 0170
.org 0xcdf56
	adds r3, r7, #0	@ 000cdf56 3b1c
.org 0xcdf58
	adds r3, #74	@ 000cdf58 4a33
.org 0xcdf5a
	lsls r1, r1, #4	@ 000cdf5a 0901
.org 0xcdf5c
	ldrb r2, [r3, #0]	@ 000cdf5c 1a78
.org 0xcdf5e
	movs r0, #17	@ 000cdf5e 1120
.org 0xcdf60
	negs r0, r0	@ 000cdf60 4042
.org 0xcdf62
	ands r0, r2	@ 000cdf62 1040
.org 0xcdf64
	orrs r0, r1	@ 000cdf64 0843
.org 0xcdf66
	strb r0, [r3, #0]	@ 000cdf66 1870
.org 0xcdf68
	ldr r1, [pc, #16]	@ 000cdf68 0449
.org 0xcdf6a
	ldrb r0, [r7, #17]	@ 000cdf6a 787c
.org 0xcdf6c
	adds r0, r0, r1	@ 000cdf6c 4018
.org 0xcdf6e
	ldrb r2, [r0, #0]	@ 000cdf6e 0278
.org 0xcdf70
	cmp r2, #0	@ 000cdf70 002a
.org 0xcdf72
	beq.n 0xcdf80	@ 000cdf72 05d0
.org 0xcdf74
	ldrb r0, [r7, #10]	@ 000cdf74 b87a
.org 0xcdf76
	movs r1, #32	@ 000cdf76 2021
.org 0xcdf78
	orrs r0, r1	@ 000cdf78 0843
.org 0xcdf7a
	b.n 0xcdf86	@ 000cdf7a 04e0
.org 0xcdf7c
	.byte 0x68,0x6b,0x86,0x08	@ 000cdf7c data
.org 0xcdf80
	ldrb r1, [r7, #10]	@ 000cdf80 b97a
.org 0xcdf82
	movs r0, #223	@ 000cdf82 df20
.org 0xcdf84
	ands r0, r1	@ 000cdf84 0840
.org 0xcdf86
	strb r0, [r7, #10]	@ 000cdf86 b872
.org 0xcdf88
	movs r6, #1	@ 000cdf88 0126
.org 0xcdf8a
	adds r1, r6, #0	@ 000cdf8a 311c
.org 0xcdf8c
	ands r1, r2	@ 000cdf8c 1140
.org 0xcdf8e
	adds r0, r7, #0	@ 000cdf8e 381c
.org 0xcdf90
	adds r0, #77	@ 000cdf90 4d30
.org 0xcdf92
	movs r5, #0	@ 000cdf92 0025
.org 0xcdf94
	strb r1, [r0, #0]	@ 000cdf94 0170
.org 0xcdf96
	lsls r1, r1, #5	@ 000cdf96 4901
.org 0xcdf98
	ldrb r2, [r3, #0]	@ 000cdf98 1a78
.org 0xcdf9a
	movs r0, #33	@ 000cdf9a 2120
.org 0xcdf9c
	negs r0, r0	@ 000cdf9c 4042
.org 0xcdf9e
	ands r0, r2	@ 000cdf9e 1040
.org 0xcdfa0
	orrs r0, r1	@ 000cdfa0 0843
.org 0xcdfa2
	strb r0, [r3, #0]	@ 000cdfa2 1870
.org 0xcdfa4
	ldrb r1, [r7, #10]	@ 000cdfa4 b97a
.org 0xcdfa6
	movs r0, #4	@ 000cdfa6 0420
.org 0xcdfa8
	orrs r0, r1	@ 000cdfa8 0843
.org 0xcdfaa
	strb r0, [r7, #10]	@ 000cdfaa b872
.org 0xcdfac
	adds r4, r7, #0	@ 000cdfac 3c1c
.org 0xcdfae
	adds r4, #116	@ 000cdfae 7434
.org 0xcdfb0
	ldr r1, [pc, #116]	@ 000cdfb0 1d49
.org 0xcdfb2
	ldrb r0, [r7, #17]	@ 000cdfb2 787c
.org 0xcdfb4
	adds r0, r0, r1	@ 000cdfb4 4018
.org 0xcdfb6
	ldrb r0, [r0, #0]	@ 000cdfb6 0078
.org 0xcdfb8
	lsls r1, r0, #1	@ 000cdfb8 4100
.org 0xcdfba
	adds r1, r1, r0	@ 000cdfba 0918
.org 0xcdfbc
	lsls r1, r1, #3	@ 000cdfbc c900
.org 0xcdfbe
	ldr r0, [pc, #108]	@ 000cdfbe 1b48
.org 0xcdfc0
	adds r1, r1, r0	@ 000cdfc0 0918
.org 0xcdfc2
	adds r2, r7, #0	@ 000cdfc2 3a1c
.org 0xcdfc4
	adds r2, #84	@ 000cdfc4 5432
.org 0xcdfc6
	adds r0, r4, #0	@ 000cdfc6 201c
.org 0xcdfc8
	movs r3, #8	@ 000cdfc8 0823
.org 0xcdfca
	bl 0x5760	@ 000cdfca 37f7c9fb
.org 0xcdfce
	str r7, [r4, #44]	@ 000cdfce e762
.org 0xcdfd0
	str r5, [r4, #36]	@ 000cdfd0 6562
.org 0xcdfd2
	ldr r3, [pc, #92]	@ 000cdfd2 174b
.org 0xcdfd4
	ldr r2, [pc, #92]	@ 000cdfd4 174a
.org 0xcdfd6
	ldrb r0, [r7, #17]	@ 000cdfd6 787c
.org 0xcdfd8
	adds r0, r0, r2	@ 000cdfd8 8018
.org 0xcdfda
	ldrb r0, [r0, #0]	@ 000cdfda 0078
.org 0xcdfdc
	adds r0, #64	@ 000cdfdc 4030
.org 0xcdfde
	lsls r0, r0, #24	@ 000cdfde 0006
.org 0xcdfe0
	lsrs r0, r0, #23	@ 000cdfe0 c00d
.org 0xcdfe2
	adds r0, r0, r3	@ 000cdfe2 c018
.org 0xcdfe4
	movs r4, #0	@ 000cdfe4 0024
.org 0xcdfe6
	ldrsh r1, [r0, r4]	@ 000cdfe6 015f
.org 0xcdfe8
	lsls r0, r1, #2	@ 000cdfe8 8800
.org 0xcdfea
	adds r0, r0, r1	@ 000cdfea 4018
.org 0xcdfec
	asrs r0, r0, #1	@ 000cdfec 4010
.org 0xcdfee
	str r0, [r7, #92]	@ 000cdfee f865
.org 0xcdff0
	ldrb r0, [r7, #17]	@ 000cdff0 787c
.org 0xcdff2
	adds r0, r0, r2	@ 000cdff2 8018
.org 0xcdff4
	ldrb r0, [r0, #0]	@ 000cdff4 0078
.org 0xcdff6
	lsls r0, r0, #1	@ 000cdff6 4000
.org 0xcdff8
	adds r0, r0, r3	@ 000cdff8 c018
.org 0xcdffa
	movs r2, #0	@ 000cdffa 0022
.org 0xcdffc
	ldrsh r1, [r0, r2]	@ 000cdffc 815e
.org 0xcdffe
	lsls r0, r1, #2	@ 000cdffe 8800
.org 0xce000
	adds r0, r0, r1	@ 000ce000 4018
.org 0xce002
	asrs r0, r0, #1	@ 000ce002 4010
.org 0xce004
	str r0, [r7, #96]	@ 000ce004 3866
.org 0xce006
	strb r5, [r7, #18]	@ 000ce006 bd74
.org 0xce008
	strb r5, [r7, #19]	@ 000ce008 fd74
.org 0xce00a
	ldr r1, [pc, #44]	@ 000ce00a 0b49
.org 0xce00c
	ldrb r0, [r7, #9]	@ 000ce00c 787a
.org 0xce00e
	lsls r0, r0, #2	@ 000ce00e 8000
.org 0xce010
	adds r0, r0, r1	@ 000ce010 4018
.org 0xce012
	str r6, [r7, #12]	@ 000ce012 fe60
.org 0xce014
	ldr r0, [r0, #0]	@ 000ce014 0068
.org 0xce016
	ldr r0, [r0, #4]	@ 000ce016 4068
.org 0xce018
	str r0, [r7, #20]	@ 000ce018 7861
