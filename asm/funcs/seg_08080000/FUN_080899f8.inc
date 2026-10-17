@ FUN_080899f8  entry 0x080899f8  size 240
.thumb
.org 0x899f8
FUN_080899f8:
	push {r4, r5, r6, r7, lr}	@ 000899f8 f0b5
.org 0x899fa
	mov r7, r9	@ 000899fa 4f46
.org 0x899fc
	mov r6, r8	@ 000899fc 4646
.org 0x899fe
	push {r6, r7}	@ 000899fe c0b4
.org 0x89a00
	sub sp, #20	@ 00089a00 85b0
.org 0x89a02
	adds r7, r0, #0	@ 00089a02 071c
.org 0x89a04
	adds r0, #140	@ 00089a04 8c30
.org 0x89a06
	movs r5, #0	@ 00089a06 0025
.org 0x89a08
	str r5, [r0, #0]	@ 00089a08 0560
.org 0x89a0a
	adds r0, #4	@ 00089a0a 0430
.org 0x89a0c
	str r5, [r0, #0]	@ 00089a0c 0560
.org 0x89a0e
	adds r0, #4	@ 00089a0e 0430
.org 0x89a10
	strb r5, [r0, #0]	@ 00089a10 0570
.org 0x89a12
	ldrb r1, [r7, #10]	@ 00089a12 b97a
.org 0x89a14
	movs r0, #251	@ 00089a14 fb20
.org 0x89a16
	ands r0, r1	@ 00089a16 0840
.org 0x89a18
	strb r0, [r7, #10]	@ 00089a18 b872
.org 0x89a1a
	adds r0, r7, #0	@ 00089a1a 381c
.org 0x89a1c
	adds r0, #92	@ 00089a1c 5c30
.org 0x89a1e
	str r5, [r0, #4]	@ 00089a1e 4560
.org 0x89a20
	str r5, [r7, #92]	@ 00089a20 fd65
.org 0x89a22
	ldr r0, [r7, #84]	@ 00089a22 786d
.org 0x89a24
	str r0, [sp, #4]	@ 00089a24 0190
.org 0x89a26
	ldr r0, [r7, #88]	@ 00089a26 b86d
.org 0x89a28
	ldr r1, [pc, #188]	@ 00089a28 2f49
.org 0x89a2a
	adds r0, r0, r1	@ 00089a2a 4018
.org 0x89a2c
	str r0, [sp, #8]	@ 00089a2c 0290
.org 0x89a2e
	movs r0, #1	@ 00089a2e 0120
.org 0x89a30
	add r1, sp, #4	@ 00089a30 01a9
.org 0x89a32
	bl 0xd0c88	@ 00089a32 47f029f9
.org 0x89a36
	movs r0, #42	@ 00089a36 2a20
.org 0x89a38
	bl 0x2b10	@ 00089a38 79f76af8
.org 0x89a3c
	movs r0, #84	@ 00089a3c 5420
.org 0x89a3e
	adds r0, r0, r7	@ 00089a3e c019
.org 0x89a40
	mov r9, r0	@ 00089a40 8146
.org 0x89a42
	movs r0, #3	@ 00089a42 0320
.org 0x89a44
	movs r1, #49	@ 00089a44 3121
.org 0x89a46
	mov r2, r9	@ 00089a46 4a46
.org 0x89a48
	bl 0x2ab88	@ 00089a48 a1f79ef8
.org 0x89a4c
	ldr r2, [pc, #156]	@ 00089a4c 274a
.org 0x89a4e
	ldr r1, [r2, #0]	@ 00089a4e 1168
.org 0x89a50
	ldr r0, [pc, #156]	@ 00089a50 2748
.org 0x89a52
	adds r4, r1, #0	@ 00089a52 0c1c
.org 0x89a54
	muls r4, r0	@ 00089a54 4443
.org 0x89a56
	ldr r1, [pc, #156]	@ 00089a56 2749
.org 0x89a58
	adds r4, r4, r1	@ 00089a58 6418
.org 0x89a5a
	lsls r4, r4, #1	@ 00089a5a 6400
.org 0x89a5c
	lsrs r0, r4, #1	@ 00089a5c 6008
.org 0x89a5e
	str r0, [r2, #0]	@ 00089a5e 1060
.org 0x89a60
	lsrs r4, r4, #17	@ 00089a60 640c
.org 0x89a62
	movs r0, #3	@ 00089a62 0320
.org 0x89a64
	ands r4, r0	@ 00089a64 0440
.org 0x89a66
	ldr r0, [r7, #84]	@ 00089a66 786d
.org 0x89a68
	str r0, [sp, #12]	@ 00089a68 0390
.org 0x89a6a
	ldr r0, [r7, #88]	@ 00089a6a b86d
.org 0x89a6c
	add r1, sp, #12	@ 00089a6c 03a9
.org 0x89a6e
	mov r8, r1	@ 00089a6e 8846
.org 0x89a70
	str r0, [r1, #4]	@ 00089a70 4860
.org 0x89a72
	ldrb r1, [r7, #10]	@ 00089a72 b97a
.org 0x89a74
	lsrs r1, r1, #4	@ 00089a74 0909
.org 0x89a76
	movs r6, #1	@ 00089a76 0126
.org 0x89a78
	ands r1, r6	@ 00089a78 3140
.org 0x89a7a
	ldr r2, [pc, #124]	@ 00089a7a 1f4a
.org 0x89a7c
	str r5, [sp, #0]	@ 00089a7c 0095
.org 0x89a7e
	mov r0, r8	@ 00089a7e 4046
.org 0x89a80
	adds r3, r4, #0	@ 00089a80 231c
.org 0x89a82
	bl 0xd8a6c	@ 00089a82 4ef0f3ff
.org 0x89a86
	ldrb r1, [r7, #10]	@ 00089a86 b97a
.org 0x89a88
	lsrs r1, r1, #4	@ 00089a88 0909
.org 0x89a8a
	ands r1, r6	@ 00089a8a 3140
.org 0x89a8c
	ldr r2, [pc, #108]	@ 00089a8c 1b4a
.org 0x89a8e
	str r5, [sp, #0]	@ 00089a8e 0095
.org 0x89a90
	mov r0, r8	@ 00089a90 4046
.org 0x89a92
	adds r3, r4, #0	@ 00089a92 231c
.org 0x89a94
	bl 0xd8a6c	@ 00089a94 4ef0eaff
.org 0x89a98
	ldrb r1, [r7, #10]	@ 00089a98 b97a
.org 0x89a9a
	lsrs r1, r1, #4	@ 00089a9a 0909
.org 0x89a9c
	ands r1, r6	@ 00089a9c 3140
.org 0x89a9e
	ldr r2, [pc, #96]	@ 00089a9e 184a
.org 0x89aa0
	str r5, [sp, #0]	@ 00089aa0 0095
.org 0x89aa2
	mov r0, r8	@ 00089aa2 4046
.org 0x89aa4
	adds r3, r4, #0	@ 00089aa4 231c
.org 0x89aa6
	bl 0xd8a6c	@ 00089aa6 4ef0e1ff
.org 0x89aaa
	ldr r2, [pc, #88]	@ 00089aaa 164a
.org 0x89aac
	ldrh r1, [r2, #12]	@ 00089aac 9189
.org 0x89aae
	ldr r0, [pc, #88]	@ 00089aae 1648
.org 0x89ab0
	cmp r1, r0	@ 00089ab0 8142
.org 0x89ab2
	bhi.n 0x89ab8	@ 00089ab2 01d8
.org 0x89ab4
	adds r0, r1, #1	@ 00089ab4 481c
.org 0x89ab6
	strh r0, [r2, #12]	@ 00089ab6 9081
.org 0x89ab8
	adds r0, r7, #0	@ 00089ab8 381c
.org 0x89aba
	mov r1, r9	@ 00089aba 4946
.org 0x89abc
	bl 0x2abe0	@ 00089abc a1f790f8
.org 0x89ac0
	ldrb r1, [r7, #10]	@ 00089ac0 b97a
.org 0x89ac2
	movs r0, #254	@ 00089ac2 fe20
.org 0x89ac4
	ands r0, r1	@ 00089ac4 0840
.org 0x89ac6
	strb r0, [r7, #10]	@ 00089ac6 b872
.org 0x89ac8
	ldr r1, [pc, #64]	@ 00089ac8 1049
.org 0x89aca
	ldrb r0, [r7, #9]	@ 00089aca 787a
.org 0x89acc
	lsls r0, r0, #2	@ 00089acc 8000
.org 0x89ace
	adds r0, r0, r1	@ 00089ace 4018
.org 0x89ad0
	movs r1, #4	@ 00089ad0 0421
.org 0x89ad2
	str r1, [r7, #12]	@ 00089ad2 f960
.org 0x89ad4
	ldr r0, [r0, #0]	@ 00089ad4 0068
.org 0x89ad6
	ldr r0, [r0, #16]	@ 00089ad6 0069
.org 0x89ad8
	str r0, [r7, #20]	@ 00089ad8 7861
.org 0x89ada
	add sp, #20	@ 00089ada 05b0
.org 0x89adc
	pop {r3, r4}	@ 00089adc 18bc
.org 0x89ade
	mov r8, r3	@ 00089ade 9846
.org 0x89ae0
	mov r9, r4	@ 00089ae0 a146
.org 0x89ae2
	pop {r4, r5, r6, r7}	@ 00089ae2 f0bc
.org 0x89ae4
	pop {r0}	@ 00089ae4 01bc
.org 0x89ae6
	bx r0	@ 00089ae6 0047
