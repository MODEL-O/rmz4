@ FUN_0809bb30  entry 0x0809bb30  size 274
.thumb
.org 0x9bb30
FUN_0809bb30:
	push {r4, r5, r6, r7, lr}	@ 0009bb30 f0b5
.org 0x9bb32
	mov r7, r8	@ 0009bb32 4746
.org 0x9bb34
	push {r7}	@ 0009bb34 80b4
.org 0x9bb36
	adds r7, r0, #0	@ 0009bb36 071c
.org 0x9bb38
	ldr r5, [r7, #40]	@ 0009bb38 bd6a
.org 0x9bb3a
	ldrb r6, [r7, #17]	@ 0009bb3a 7e7c
.org 0x9bb3c
	ldr r1, [pc, #80]	@ 0009bb3c 1449
.org 0x9bb3e
	ldrb r0, [r7, #9]	@ 0009bb3e 787a
.org 0x9bb40
	lsls r0, r0, #2	@ 0009bb40 8000
.org 0x9bb42
	adds r0, r0, r1	@ 0009bb42 4018
.org 0x9bb44
	movs r1, #1	@ 0009bb44 0121
.org 0x9bb46
	str r1, [r7, #12]	@ 0009bb46 f960
.org 0x9bb48
	ldr r0, [r0, #0]	@ 0009bb48 0068
.org 0x9bb4a
	ldr r0, [r0, #4]	@ 0009bb4a 4068
.org 0x9bb4c
	str r0, [r7, #20]	@ 0009bb4c 7861
.org 0x9bb4e
	ldrb r1, [r7, #10]	@ 0009bb4e b97a
.org 0x9bb50
	movs r0, #1	@ 0009bb50 0120
.org 0x9bb52
	movs r4, #0	@ 0009bb52 0024
.org 0x9bb54
	orrs r0, r1	@ 0009bb54 0843
.org 0x9bb56
	movs r1, #2	@ 0009bb56 0221
.org 0x9bb58
	orrs r0, r1	@ 0009bb58 0843
.org 0x9bb5a
	strb r0, [r7, #10]	@ 0009bb5a b872
.org 0x9bb5c
	adds r1, r7, #0	@ 0009bb5c 391c
.org 0x9bb5e
	adds r1, #180	@ 0009bb5e b431
.org 0x9bb60
	ldr r0, [r7, #84]	@ 0009bb60 786d
.org 0x9bb62
	str r0, [r1, #0]	@ 0009bb62 0860
.org 0x9bb64
	adds r1, #4	@ 0009bb64 0431
.org 0x9bb66
	ldr r0, [r7, #88]	@ 0009bb66 b86d
.org 0x9bb68
	str r0, [r1, #0]	@ 0009bb68 0860
.org 0x9bb6a
	adds r0, r7, #0	@ 0009bb6a 381c
.org 0x9bb6c
	bl 0x1cc9c	@ 0009bb6c 81f796f8
.org 0x9bb70
	adds r0, r7, #0	@ 0009bb70 381c
.org 0x9bb72
	bl 0x1ceec	@ 0009bb72 81f7bbf9
.org 0x9bb76
	adds r1, r7, #0	@ 0009bb76 391c
.org 0x9bb78
	adds r1, #37	@ 0009bb78 2531
.org 0x9bb7a
	movs r0, #25	@ 0009bb7a 1920
.org 0x9bb7c
	strb r0, [r1, #0]	@ 0009bb7c 0870
.org 0x9bb7e
	ldr r0, [pc, #20]	@ 0009bb7e 0548
.org 0x9bb80
	adds r0, r6, r0	@ 0009bb80 3018
.org 0x9bb82
	ldrb r2, [r0, #0]	@ 0009bb82 0278
.org 0x9bb84
	cmp r2, #0	@ 0009bb84 002a
.org 0x9bb86
	beq.n 0x9bb98	@ 0009bb86 07d0
.org 0x9bb88
	ldrb r0, [r7, #10]	@ 0009bb88 b87a
.org 0x9bb8a
	movs r1, #16	@ 0009bb8a 1021
.org 0x9bb8c
	orrs r0, r1	@ 0009bb8c 0843
.org 0x9bb8e
	b.n 0x9bb9e	@ 0009bb8e 06e0
.org 0x9bb90
	.byte 0x40,0xdb,0x85,0x08	@ 0009bb90 data
.org 0x9bb94
	.byte 0x68,0x13,0x86,0x08	@ 0009bb94 data
.org 0x9bb98
	ldrb r1, [r7, #10]	@ 0009bb98 b97a
.org 0x9bb9a
	movs r0, #239	@ 0009bb9a ef20
.org 0x9bb9c
	ands r0, r1	@ 0009bb9c 0840
.org 0x9bb9e
	strb r0, [r7, #10]	@ 0009bb9e b872
.org 0x9bba0
	movs r1, #1	@ 0009bba0 0121
.org 0x9bba2
	ands r1, r2	@ 0009bba2 1140
.org 0x9bba4
	adds r0, r7, #0	@ 0009bba4 381c
.org 0x9bba6
	adds r0, #76	@ 0009bba6 4c30
.org 0x9bba8
	strb r1, [r0, #0]	@ 0009bba8 0170
.org 0x9bbaa
	adds r3, r7, #0	@ 0009bbaa 3b1c
.org 0x9bbac
	adds r3, #74	@ 0009bbac 4a33
.org 0x9bbae
	lsls r1, r1, #4	@ 0009bbae 0901
.org 0x9bbb0
	ldrb r2, [r3, #0]	@ 0009bbb0 1a78
.org 0x9bbb2
	movs r0, #17	@ 0009bbb2 1120
.org 0x9bbb4
	negs r0, r0	@ 0009bbb4 4042
.org 0x9bbb6
	ands r0, r2	@ 0009bbb6 1040
.org 0x9bbb8
	orrs r0, r1	@ 0009bbb8 0843
.org 0x9bbba
	strb r0, [r3, #0]	@ 0009bbba 1870
.org 0x9bbbc
	ldr r0, [pc, #16]	@ 0009bbbc 0448
.org 0x9bbbe
	adds r0, r6, r0	@ 0009bbbe 3018
.org 0x9bbc0
	ldrb r2, [r0, #0]	@ 0009bbc0 0278
.org 0x9bbc2
	cmp r2, #0	@ 0009bbc2 002a
.org 0x9bbc4
	beq.n 0x9bbd4	@ 0009bbc4 06d0
.org 0x9bbc6
	ldrb r0, [r7, #10]	@ 0009bbc6 b87a
.org 0x9bbc8
	movs r1, #32	@ 0009bbc8 2021
.org 0x9bbca
	orrs r0, r1	@ 0009bbca 0843
.org 0x9bbcc
	b.n 0x9bbda	@ 0009bbcc 05e0
.org 0x9bbce
	.byte 0x00	@ 0009bbce data
.org 0x9bbcf
	.byte 0x00	@ 0009bbcf data
.org 0x9bbd0
	.byte 0x6c,0x13,0x86,0x08	@ 0009bbd0 data
.org 0x9bbd4
	ldrb r1, [r7, #10]	@ 0009bbd4 b97a
.org 0x9bbd6
	movs r0, #223	@ 0009bbd6 df20
.org 0x9bbd8
	ands r0, r1	@ 0009bbd8 0840
.org 0x9bbda
	strb r0, [r7, #10]	@ 0009bbda b872
.org 0x9bbdc
	movs r1, #1	@ 0009bbdc 0121
.org 0x9bbde
	ands r1, r2	@ 0009bbde 1140
.org 0x9bbe0
	adds r0, r7, #0	@ 0009bbe0 381c
.org 0x9bbe2
	adds r0, #77	@ 0009bbe2 4d30
.org 0x9bbe4
	movs r2, #0	@ 0009bbe4 0022
.org 0x9bbe6
	mov r8, r2	@ 0009bbe6 9046
.org 0x9bbe8
	strb r1, [r0, #0]	@ 0009bbe8 0170
.org 0x9bbea
	lsls r1, r1, #5	@ 0009bbea 4901
.org 0x9bbec
	ldrb r2, [r3, #0]	@ 0009bbec 1a78
.org 0x9bbee
	movs r0, #33	@ 0009bbee 2120
.org 0x9bbf0
	negs r0, r0	@ 0009bbf0 4042
.org 0x9bbf2
	ands r0, r2	@ 0009bbf2 1040
.org 0x9bbf4
	orrs r0, r1	@ 0009bbf4 0843
.org 0x9bbf6
	strb r0, [r3, #0]	@ 0009bbf6 1870
.org 0x9bbf8
	ldrb r0, [r7, #11]	@ 0009bbf8 f87a
.org 0x9bbfa
	movs r1, #16	@ 0009bbfa 1021
.org 0x9bbfc
	orrs r0, r1	@ 0009bbfc 0843
.org 0x9bbfe
	strb r0, [r7, #11]	@ 0009bbfe f872
.org 0x9bc00
	ldrb r0, [r5, #28]	@ 0009bc00 287f
.org 0x9bc02
	strb r0, [r7, #29]	@ 0009bc02 7877
.org 0x9bc04
	ldrb r1, [r7, #10]	@ 0009bc04 b97a
.org 0x9bc06
	movs r0, #4	@ 0009bc06 0420
.org 0x9bc08
	orrs r0, r1	@ 0009bc08 0843
.org 0x9bc0a
	strb r0, [r7, #10]	@ 0009bc0a b872
.org 0x9bc0c
	adds r4, r7, #0	@ 0009bc0c 3c1c
.org 0x9bc0e
	adds r4, #116	@ 0009bc0e 7434
.org 0x9bc10
	ldr r0, [pc, #60]	@ 0009bc10 0f48
.org 0x9bc12
	ldr r0, [r0, #0]	@ 0009bc12 0068
.org 0x9bc14
	ldr r1, [r0, #0]	@ 0009bc14 0168
.org 0x9bc16
	adds r5, r7, #0	@ 0009bc16 3d1c
.org 0x9bc18
	adds r5, #84	@ 0009bc18 5435
.org 0x9bc1a
	adds r0, r4, #0	@ 0009bc1a 201c
.org 0x9bc1c
	adds r2, r5, #0	@ 0009bc1c 2a1c
.org 0x9bc1e
	movs r3, #64	@ 0009bc1e 4023
.org 0x9bc20
	bl 0x5760	@ 0009bc20 69f79efd
.org 0x9bc24
	str r7, [r4, #44]	@ 0009bc24 e762
.org 0x9bc26
	mov r0, r8	@ 0009bc26 4046
.org 0x9bc28
	str r0, [r4, #36]	@ 0009bc28 6062
.org 0x9bc2a
	movs r4, #0	@ 0009bc2a 0024
.org 0x9bc2c
	lsls r3, r4, #24	@ 0009bc2c 2306
.org 0x9bc2e
	lsrs r3, r3, #24	@ 0009bc2e 1b0e
.org 0x9bc30
	adds r0, r7, #0	@ 0009bc30 381c
.org 0x9bc32
	adds r1, r5, #0	@ 0009bc32 291c
.org 0x9bc34
	adds r2, r6, #0	@ 0009bc34 321c
.org 0x9bc36
	bl 0x9baa8	@ 0009bc36 fff737ff
.org 0x9bc3a
	adds r4, #1	@ 0009bc3a 0134
.org 0x9bc3c
	cmp r4, #4	@ 0009bc3c 042c
.org 0x9bc3e
	ble.n 0x9bc2c	@ 0009bc3e f5dd
.org 0x9bc40
	adds r0, r7, #0	@ 0009bc40 381c
