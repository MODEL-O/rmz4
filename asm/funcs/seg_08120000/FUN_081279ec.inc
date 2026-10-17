@ FUN_081279ec  entry 0x081279ec  size 200
.thumb
.org 0x1279ec
FUN_081279ec:
	push {r4, r5, r6, lr}	@ 001279ec 70b5
.org 0x1279ee
	sub sp, #4	@ 001279ee 81b0
.org 0x1279f0
	adds r5, r0, #0	@ 001279f0 051c
.org 0x1279f2
	ldr r1, [pc, #192]	@ 001279f2 3049
.org 0x1279f4
	movs r0, #143	@ 001279f4 8f20
.org 0x1279f6
	strh r0, [r1, #0]	@ 001279f6 0880
.org 0x1279f8
	ldr r3, [pc, #188]	@ 001279f8 2f4b
.org 0x1279fa
	movs r2, #0	@ 001279fa 0022
.org 0x1279fc
	strh r2, [r3, #0]	@ 001279fc 1a80
.org 0x1279fe
	ldr r0, [pc, #188]	@ 001279fe 2f48
.org 0x127a00
	movs r1, #8	@ 00127a00 0821
.org 0x127a02
	strb r1, [r0, #0]	@ 00127a02 0170
.org 0x127a04
	adds r0, #6	@ 00127a04 0630
.org 0x127a06
	strb r1, [r0, #0]	@ 00127a06 0170
.org 0x127a08
	adds r0, #16	@ 00127a08 1030
.org 0x127a0a
	strb r1, [r0, #0]	@ 00127a0a 0170
.org 0x127a0c
	subs r0, #20	@ 00127a0c 1438
.org 0x127a0e
	movs r1, #128	@ 00127a0e 8021
.org 0x127a10
	strb r1, [r0, #0]	@ 00127a10 0170
.org 0x127a12
	adds r0, #8	@ 00127a12 0830
.org 0x127a14
	strb r1, [r0, #0]	@ 00127a14 0170
.org 0x127a16
	adds r0, #16	@ 00127a16 1030
.org 0x127a18
	strb r1, [r0, #0]	@ 00127a18 0170
.org 0x127a1a
	subs r0, #13	@ 00127a1a 0d38
.org 0x127a1c
	strb r2, [r0, #0]	@ 00127a1c 0270
.org 0x127a1e
	movs r0, #119	@ 00127a1e 7720
.org 0x127a20
	strb r0, [r3, #0]	@ 00127a20 1870
.org 0x127a22
	ldr r0, [pc, #156]	@ 00127a22 2748
.org 0x127a24
	ldr r4, [r0, #0]	@ 00127a24 0468
.org 0x127a26
	ldr r6, [r4, #0]	@ 00127a26 2668
.org 0x127a28
	ldr r0, [pc, #152]	@ 00127a28 2648
.org 0x127a2a
	cmp r6, r0	@ 00127a2a 8642
.org 0x127a2c
	bne.n 0x127aac	@ 00127a2c 3ed1
.org 0x127a2e
	adds r0, r6, #1	@ 00127a2e 701c
.org 0x127a30
	str r0, [r4, #0]	@ 00127a30 2060
.org 0x127a32
	ldr r1, [pc, #148]	@ 00127a32 2549
.org 0x127a34
	ldr r0, [pc, #148]	@ 00127a34 2548
.org 0x127a36
	str r0, [r1, #32]	@ 00127a36 0862
.org 0x127a38
	ldr r0, [pc, #148]	@ 00127a38 2548
.org 0x127a3a
	str r0, [r1, #68]	@ 00127a3a 4864
.org 0x127a3c
	ldr r0, [pc, #148]	@ 00127a3c 2548
.org 0x127a3e
	str r0, [r1, #76]	@ 00127a3e c864
.org 0x127a40
	ldr r0, [pc, #148]	@ 00127a40 2548
.org 0x127a42
	str r0, [r1, #112]	@ 00127a42 0867
.org 0x127a44
	ldr r0, [pc, #148]	@ 00127a44 2548
.org 0x127a46
	str r0, [r1, #116]	@ 00127a46 4867
.org 0x127a48
	ldr r0, [pc, #148]	@ 00127a48 2548
.org 0x127a4a
	str r0, [r1, #120]	@ 00127a4a 8867
.org 0x127a4c
	ldr r0, [pc, #148]	@ 00127a4c 2548
.org 0x127a4e
	str r0, [r1, #124]	@ 00127a4e c867
.org 0x127a50
	adds r2, r1, #0	@ 00127a50 0a1c
.org 0x127a52
	adds r2, #128	@ 00127a52 8032
.org 0x127a54
	ldr r0, [pc, #144]	@ 00127a54 2448
.org 0x127a56
	str r0, [r2, #0]	@ 00127a56 1060
.org 0x127a58
	adds r1, #132	@ 00127a58 8431
.org 0x127a5a
	ldr r0, [pc, #144]	@ 00127a5a 2448
.org 0x127a5c
	str r0, [r1, #0]	@ 00127a5c 0860
.org 0x127a5e
	str r5, [r4, #28]	@ 00127a5e e561
.org 0x127a60
	ldr r0, [pc, #140]	@ 00127a60 2348
.org 0x127a62
	str r0, [r4, #40]	@ 00127a62 a062
.org 0x127a64
	ldr r0, [pc, #140]	@ 00127a64 2348
.org 0x127a66
	str r0, [r4, #44]	@ 00127a66 e062
.org 0x127a68
	ldr r0, [pc, #140]	@ 00127a68 2348
.org 0x127a6a
	str r0, [r4, #48]	@ 00127a6a 2063
.org 0x127a6c
	ldr r0, [pc, #140]	@ 00127a6c 2348
.org 0x127a6e
	movs r1, #0	@ 00127a6e 0021
.org 0x127a70
	strb r0, [r4, #12]	@ 00127a70 2073
.org 0x127a72
	str r1, [sp, #0]	@ 00127a72 0091
.org 0x127a74
	ldr r2, [pc, #136]	@ 00127a74 224a
.org 0x127a76
	mov r0, sp	@ 00127a76 6846
.org 0x127a78
	adds r1, r5, #0	@ 00127a78 291c
.org 0x127a7a
	bl 0x128be4	@ 00127a7a 01f0b3f8
.org 0x127a7e
	movs r0, #1	@ 00127a7e 0120
.org 0x127a80
	strb r0, [r5, #1]	@ 00127a80 6870
.org 0x127a82
	movs r0, #17	@ 00127a82 1120
.org 0x127a84
	strb r0, [r5, #28]	@ 00127a84 2877
.org 0x127a86
	adds r1, r5, #0	@ 00127a86 291c
.org 0x127a88
	adds r1, #65	@ 00127a88 4131
.org 0x127a8a
	movs r0, #2	@ 00127a8a 0220
.org 0x127a8c
	strb r0, [r1, #0]	@ 00127a8c 0870
.org 0x127a8e
	adds r1, #27	@ 00127a8e 1b31
.org 0x127a90
	movs r0, #34	@ 00127a90 2220
.org 0x127a92
	strb r0, [r1, #0]	@ 00127a92 0870
.org 0x127a94
	adds r1, #37	@ 00127a94 2531
.org 0x127a96
	movs r0, #3	@ 00127a96 0320
.org 0x127a98
	strb r0, [r1, #0]	@ 00127a98 0870
.org 0x127a9a
	adds r1, #27	@ 00127a9a 1b31
.org 0x127a9c
	movs r0, #68	@ 00127a9c 4420
.org 0x127a9e
	strb r0, [r1, #0]	@ 00127a9e 0870
.org 0x127aa0
	adds r1, #36	@ 00127aa0 2431
.org 0x127aa2
	movs r0, #4	@ 00127aa2 0420
.org 0x127aa4
	strb r0, [r1, #1]	@ 00127aa4 4870
.org 0x127aa6
	movs r0, #136	@ 00127aa6 8820
.org 0x127aa8
	strb r0, [r1, #28]	@ 00127aa8 0877
.org 0x127aaa
	str r6, [r4, #0]	@ 00127aaa 2660
.org 0x127aac
	add sp, #4	@ 00127aac 01b0
.org 0x127aae
	pop {r4, r5, r6}	@ 00127aae 70bc
.org 0x127ab0
	pop {r0}	@ 00127ab0 01bc
.org 0x127ab2
	bx r0	@ 00127ab2 0047
