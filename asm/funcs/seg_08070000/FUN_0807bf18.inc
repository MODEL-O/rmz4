@ FUN_0807bf18  entry 0x0807bf18  size 352
.thumb
.org 0x7bf18
FUN_0807bf18:
	push {r4, r5, r6, r7, lr}	@ 0007bf18 f0b5
.org 0x7bf1a
	mov r7, r9	@ 0007bf1a 4f46
.org 0x7bf1c
	mov r6, r8	@ 0007bf1c 4646
.org 0x7bf1e
	push {r6, r7}	@ 0007bf1e c0b4
.org 0x7bf20
	sub sp, #24	@ 0007bf20 86b0
.org 0x7bf22
	adds r5, r0, #0	@ 0007bf22 051c
.org 0x7bf24
	ldr r1, [pc, #336]	@ 0007bf24 5449
.org 0x7bf26
	mov r0, sp	@ 0007bf26 6846
.org 0x7bf28
	movs r2, #8	@ 0007bf28 0822
.org 0x7bf2a
	bl 0x129258	@ 0007bf2a adf095f9
.org 0x7bf2e
	ldrb r0, [r5, #10]	@ 0007bf2e a87a
.org 0x7bf30
	lsrs r6, r0, #4	@ 0007bf30 0609
.org 0x7bf32
	movs r0, #1	@ 0007bf32 0120
.org 0x7bf34
	ands r6, r0	@ 0007bf34 0640
.org 0x7bf36
	ldrb r0, [r5, #15]	@ 0007bf36 e87b
.org 0x7bf38
	cmp r0, #0	@ 0007bf38 0028
.org 0x7bf3a
	bne.n 0x7c00c	@ 0007bf3a 67d1
.org 0x7bf3c
	ldr r0, [pc, #316]	@ 0007bf3c 4f48
.org 0x7bf3e
	bl 0x2b10	@ 0007bf3e 86f7e7fd
.org 0x7bf42
	ldr r0, [pc, #316]	@ 0007bf42 4f48
.org 0x7bf44
	ldr r1, [pc, #316]	@ 0007bf44 4f49
.org 0x7bf46
	movs r4, #180	@ 0007bf46 b424
.org 0x7bf48
	lsls r4, r4, #1	@ 0007bf48 6400
.org 0x7bf4a
	adds r1, r1, r4	@ 0007bf4a 0919
.org 0x7bf4c
	ldrh r1, [r1, #0]	@ 0007bf4c 0988
.org 0x7bf4e
	ldrh r2, [r0, #6]	@ 0007bf4e c288
.org 0x7bf50
	lsrs r2, r2, #6	@ 0007bf50 9209
.org 0x7bf52
	subs r1, r1, r2	@ 0007bf52 891a
.org 0x7bf54
	lsls r1, r1, #5	@ 0007bf54 4901
.org 0x7bf56
	movs r2, #128	@ 0007bf56 8022
.org 0x7bf58
	lsls r2, r2, #9	@ 0007bf58 5202
.org 0x7bf5a
	adds r1, r1, r2	@ 0007bf5a 8918
.org 0x7bf5c
	bl 0x1d30	@ 0007bf5c 85f7e8fe
.org 0x7bf60
	ldr r0, [pc, #292]	@ 0007bf60 4948
.org 0x7bf62
	ldr r1, [pc, #296]	@ 0007bf62 4a49
.org 0x7bf64
	adds r1, r1, r4	@ 0007bf64 0919
.org 0x7bf66
	ldrh r1, [r1, #0]	@ 0007bf66 0988
.org 0x7bf68
	ldrb r2, [r0, #7]	@ 0007bf68 c279
.org 0x7bf6a
	subs r1, r1, r2	@ 0007bf6a 891a
.org 0x7bf6c
	lsls r1, r1, #5	@ 0007bf6c 4901
.org 0x7bf6e
	movs r3, #128	@ 0007bf6e 8023
.org 0x7bf70
	lsls r3, r3, #2	@ 0007bf70 9b00
.org 0x7bf72
	adds r1, r1, r3	@ 0007bf72 c918
.org 0x7bf74
	bl 0x2208	@ 0007bf74 86f748f9
.org 0x7bf78
	lsls r2, r6, #1	@ 0007bf78 7200
.org 0x7bf7a
	subs r1, r2, #1	@ 0007bf7a 511e
.org 0x7bf7c
	lsls r1, r1, #13	@ 0007bf7c 4903
.org 0x7bf7e
	ldr r0, [r5, #84]	@ 0007bf7e 686d
.org 0x7bf80
	adds r0, r0, r1	@ 0007bf80 4018
.org 0x7bf82
	str r0, [sp, #8]	@ 0007bf82 0290
.org 0x7bf84
	ldr r0, [r5, #88]	@ 0007bf84 a86d
.org 0x7bf86
	ldr r1, [pc, #264]	@ 0007bf86 4249
.org 0x7bf88
	adds r0, r0, r1	@ 0007bf88 4018
.org 0x7bf8a
	add r1, sp, #8	@ 0007bf8a 02a9
.org 0x7bf8c
	str r0, [r1, #4]	@ 0007bf8c 4860
.org 0x7bf8e
	movs r4, #0	@ 0007bf8e 0024
.org 0x7bf90
	mov r8, r2	@ 0007bf90 9046
.org 0x7bf92
	mov r9, r1	@ 0007bf92 8946
.org 0x7bf94
	ldr r7, [pc, #252]	@ 0007bf94 3f4f
.org 0x7bf96
	add r6, sp, #16	@ 0007bf96 04ae
.org 0x7bf98
	mov r2, sp	@ 0007bf98 6a46
.org 0x7bf9a
	adds r0, r2, r4	@ 0007bf9a 1019
.org 0x7bf9c
	ldrb r2, [r0, #0]	@ 0007bf9c 0278
.org 0x7bf9e
	movs r0, #160	@ 0007bf9e a020
.org 0x7bfa0
	lsls r0, r0, #1	@ 0007bfa0 4000
.org 0x7bfa2
	subs r0, r0, r2	@ 0007bfa2 801a
.org 0x7bfa4
	mov r3, r8	@ 0007bfa4 4346
.org 0x7bfa6
	muls r3, r0	@ 0007bfa6 4343
.org 0x7bfa8
	adds r0, r3, #0	@ 0007bfa8 181c
.org 0x7bfaa
	adds r0, r2, r0	@ 0007bfaa 1018
.org 0x7bfac
	lsls r0, r0, #24	@ 0007bfac 0006
.org 0x7bfae
	lsrs r0, r0, #24	@ 0007bfae 000e
.org 0x7bfb0
	adds r2, r0, #0	@ 0007bfb0 021c
.org 0x7bfb2
	adds r0, #64	@ 0007bfb2 4030
.org 0x7bfb4
	lsls r0, r0, #24	@ 0007bfb4 0006
.org 0x7bfb6
	lsrs r0, r0, #23	@ 0007bfb6 c00d
.org 0x7bfb8
	adds r0, r0, r7	@ 0007bfb8 c019
.org 0x7bfba
	movs r3, #0	@ 0007bfba 0023
.org 0x7bfbc
	ldrsh r1, [r0, r3]	@ 0007bfbc c15e
.org 0x7bfbe
	lsls r0, r1, #4	@ 0007bfbe 0801
.org 0x7bfc0
	subs r0, r0, r1	@ 0007bfc0 401a
.org 0x7bfc2
	lsls r0, r0, #6	@ 0007bfc2 8001
.org 0x7bfc4
	cmp r0, #0	@ 0007bfc4 0028
.org 0x7bfc6
	bge.n 0x7bfca	@ 0007bfc6 00da
.org 0x7bfc8
	adds r0, #255	@ 0007bfc8 ff30
.org 0x7bfca
	asrs r0, r0, #8	@ 0007bfca 0012
.org 0x7bfcc
	str r0, [sp, #16]	@ 0007bfcc 0490
.org 0x7bfce
	lsls r0, r2, #1	@ 0007bfce 5000
.org 0x7bfd0
	adds r0, r0, r7	@ 0007bfd0 c019
.org 0x7bfd2
	movs r2, #0	@ 0007bfd2 0022
.org 0x7bfd4
	ldrsh r1, [r0, r2]	@ 0007bfd4 815e
.org 0x7bfd6
	lsls r0, r1, #4	@ 0007bfd6 0801
.org 0x7bfd8
	subs r0, r0, r1	@ 0007bfd8 401a
.org 0x7bfda
	lsls r0, r0, #6	@ 0007bfda 8001
.org 0x7bfdc
	cmp r0, #0	@ 0007bfdc 0028
.org 0x7bfde
	bge.n 0x7bfe2	@ 0007bfde 00da
.org 0x7bfe0
	adds r0, #255	@ 0007bfe0 ff30
.org 0x7bfe2
	asrs r0, r0, #8	@ 0007bfe2 0012
.org 0x7bfe4
	str r0, [r6, #4]	@ 0007bfe4 7060
.org 0x7bfe6
	lsls r3, r4, #24	@ 0007bfe6 2306
.org 0x7bfe8
	lsrs r3, r3, #24	@ 0007bfe8 1b0e
.org 0x7bfea
	adds r0, r5, #0	@ 0007bfea 281c
.org 0x7bfec
	mov r1, r9	@ 0007bfec 4946
.org 0x7bfee
	adds r2, r6, #0	@ 0007bfee 321c
.org 0x7bff0
	bl 0xb572c	@ 0007bff0 39f09cfb
.org 0x7bff4
	adds r4, #1	@ 0007bff4 0134
.org 0x7bff6
	cmp r4, #7	@ 0007bff6 072c
.org 0x7bff8
	ble.n 0x7bf98	@ 0007bff8 cedd
.org 0x7bffa
	adds r0, r5, #0	@ 0007bffa 281c
.org 0x7bffc
	movs r1, #10	@ 0007bffc 0a21
.org 0x7bffe
	bl 0x7e8c8	@ 0007bffe 02f063fc
.org 0x7c002
	movs r0, #16	@ 0007c002 1020
.org 0x7c004
	strb r0, [r5, #18]	@ 0007c004 a874
.org 0x7c006
	ldrb r0, [r5, #15]	@ 0007c006 e87b
.org 0x7c008
	adds r0, #1	@ 0007c008 0130
.org 0x7c00a
	strb r0, [r5, #15]	@ 0007c00a e873
.org 0x7c00c
	adds r4, r5, #0	@ 0007c00c 2c1c
.org 0x7c00e
	adds r4, #188	@ 0007c00e bc34
.org 0x7c010
	ldrb r0, [r4, #0]	@ 0007c010 2078
.org 0x7c012
	cmp r0, #0	@ 0007c012 0028
.org 0x7c014
	beq.n 0x7c01c	@ 0007c014 02d0
.org 0x7c016
	adds r0, r5, #0	@ 0007c016 281c
.org 0x7c018
	bl 0x1cff0	@ 0007c018 a0f7eaff
.org 0x7c01c
	adds r0, r5, #0	@ 0007c01c 281c
.org 0x7c01e
	adds r0, #116	@ 0007c01e 7430
.org 0x7c020
	ldr r3, [pc, #116]	@ 0007c020 1d4b
.org 0x7c022
	ldr r2, [pc, #120]	@ 0007c022 1e4a
.org 0x7c024
	ldrb r1, [r4, #0]	@ 0007c024 2178
.org 0x7c026
	lsls r1, r1, #1	@ 0007c026 4900
.org 0x7c028
	adds r1, r1, r2	@ 0007c028 8918
.org 0x7c02a
	ldrh r2, [r1, #0]	@ 0007c02a 0a88
.org 0x7c02c
	lsls r2, r2, #2	@ 0007c02c 9200
.org 0x7c02e
	adds r2, r2, r3	@ 0007c02e d218
.org 0x7c030
	adds r1, r5, #0	@ 0007c030 291c
.org 0x7c032
	adds r1, #113	@ 0007c032 7131
.org 0x7c034
	ldrb r1, [r1, #0]	@ 0007c034 0978
.org 0x7c036
	lsls r1, r1, #24	@ 0007c036 0906
.org 0x7c038
	asrs r1, r1, #24	@ 0007c038 0916
.org 0x7c03a
	ldr r2, [r2, #0]	@ 0007c03a 1268
.org 0x7c03c
	lsls r1, r1, #2	@ 0007c03c 8900
.org 0x7c03e
	adds r1, r1, r2	@ 0007c03e 8918
.org 0x7c040
	ldr r1, [r1, #0]	@ 0007c040 0968
.org 0x7c042
	bl 0x5784	@ 0007c042 89f79ffb
.org 0x7c046
	ldrb r0, [r5, #18]	@ 0007c046 a87c
.org 0x7c048
	cmp r0, #0	@ 0007c048 0028
.org 0x7c04a
	beq.n 0x7c056	@ 0007c04a 04d0
.org 0x7c04c
	subs r0, #1	@ 0007c04c 0138
.org 0x7c04e
	strb r0, [r5, #18]	@ 0007c04e a874
.org 0x7c050
	lsls r0, r0, #24	@ 0007c050 0006
.org 0x7c052
	cmp r0, #0	@ 0007c052 0028
.org 0x7c054
	bne.n 0x7c06a	@ 0007c054 09d1
.org 0x7c056
	adds r0, r5, #0	@ 0007c056 281c
.org 0x7c058
	adds r0, #115	@ 0007c058 7330
.org 0x7c05a
	ldrb r0, [r0, #0]	@ 0007c05a 0078
.org 0x7c05c
	cmp r0, #3	@ 0007c05c 0328
.org 0x7c05e
	bne.n 0x7c06a	@ 0007c05e 04d1
.org 0x7c060
	ldrb r0, [r5, #14]	@ 0007c060 a87b
.org 0x7c062
	adds r0, #1	@ 0007c062 0130
.org 0x7c064
	movs r1, #0	@ 0007c064 0021
.org 0x7c066
	strb r0, [r5, #14]	@ 0007c066 a873
.org 0x7c068
	strb r1, [r5, #15]	@ 0007c068 e973
.org 0x7c06a
	add sp, #24	@ 0007c06a 06b0
.org 0x7c06c
	pop {r3, r4}	@ 0007c06c 18bc
.org 0x7c06e
	mov r8, r3	@ 0007c06e 9846
.org 0x7c070
	mov r9, r4	@ 0007c070 a146
.org 0x7c072
	pop {r4, r5, r6, r7}	@ 0007c072 f0bc
.org 0x7c074
	pop {r0}	@ 0007c074 01bc
.org 0x7c076
	bx r0	@ 0007c076 0047
