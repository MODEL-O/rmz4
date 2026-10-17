@ FUN_080df9d4  entry 0x080df9d4  size 246
.thumb
.org 0xdf9d4
FUN_080df9d4:
	push {r4, r5, r6, r7, lr}	@ 000df9d4 f0b5
.org 0xdf9d6
	mov r7, sl	@ 000df9d6 5746
.org 0xdf9d8
	mov r6, r9	@ 000df9d8 4e46
.org 0xdf9da
	mov r5, r8	@ 000df9da 4546
.org 0xdf9dc
	push {r5, r6, r7}	@ 000df9dc e0b4
.org 0xdf9de
	sub sp, #8	@ 000df9de 82b0
.org 0xdf9e0
	str r0, [sp, #0]	@ 000df9e0 0090
.org 0xdf9e2
	lsls r1, r1, #24	@ 000df9e2 0906
.org 0xdf9e4
	lsrs r1, r1, #24	@ 000df9e4 090e
.org 0xdf9e6
	str r1, [sp, #4]	@ 000df9e6 0191
.org 0xdf9e8
	lsls r2, r2, #24	@ 000df9e8 1206
.org 0xdf9ea
	lsrs r2, r2, #24	@ 000df9ea 120e
.org 0xdf9ec
	mov sl, r2	@ 000df9ec 9246
.org 0xdf9ee
	movs r4, #0	@ 000df9ee 0024
.org 0xdf9f0
	ldr r0, [pc, #20]	@ 000df9f0 0548
.org 0xdf9f2
	ldr r0, [r0, #0]	@ 000df9f2 0068
.org 0xdf9f4
	ldrh r1, [r0, #10]	@ 000df9f4 4189
.org 0xdf9f6
	movs r2, #10	@ 000df9f6 0a22
.org 0xdf9f8
	ldrsh r0, [r0, r2]	@ 000df9f8 805e
.org 0xdf9fa
	cmp r0, #2	@ 000df9fa 0228
.org 0xdf9fc
	bgt.n 0xdfa0c	@ 000df9fc 06dc
.org 0xdf9fe
	subs r0, r1, #1	@ 000df9fe 481e
.org 0xdfa00
	lsls r0, r0, #24	@ 000dfa00 0006
.org 0xdfa02
	lsrs r5, r0, #24	@ 000dfa02 050e
.org 0xdfa04
	b.n 0xdfa0e	@ 000dfa04 03e0
.org 0xdfa06
	.byte 0x00	@ 000dfa06 data
.org 0xdfa07
	.byte 0x00	@ 000dfa07 data
.org 0xdfa08
	.byte 0x9c,0xed,0x02,0x02	@ 000dfa08 data
.org 0xdfa0c
	movs r5, #3	@ 000dfa0c 0325
.org 0xdfa0e
	movs r6, #0	@ 000dfa0e 0026
.org 0xdfa10
	cmp r6, r5	@ 000dfa10 ae42
.org 0xdfa12
	bcs.n 0xdfad2	@ 000dfa12 5ed2
.org 0xdfa14
	mov r9, r6	@ 000dfa14 b146
.org 0xdfa16
	movs r0, #1	@ 000dfa16 0120
.org 0xdfa18
	mov r8, r0	@ 000dfa18 8046
.org 0xdfa1a
	ldr r7, [pc, #112]	@ 000dfa1a 1c4f
.org 0xdfa1c
	ldr r0, [pc, #112]	@ 000dfa1c 1c48
.org 0xdfa1e
	ldr r0, [r0, #0]	@ 000dfa1e 0068
.org 0xdfa20
	bl 0x5500	@ 000dfa20 25f76efd
.org 0xdfa24
	adds r4, r0, #0	@ 000dfa24 041c
.org 0xdfa26
	cmp r4, #0	@ 000dfa26 002c
.org 0xdfa28
	beq.n 0xdfac8	@ 000dfa28 4ed0
.org 0xdfa2a
	adds r0, #37	@ 000dfa2a 2530
.org 0xdfa2c
	mov r1, r8	@ 000dfa2c 4146
.org 0xdfa2e
	strb r1, [r0, #0]	@ 000dfa2e 0170
.org 0xdfa30
	movs r0, #53	@ 000dfa30 3520
.org 0xdfa32
	strb r0, [r4, #9]	@ 000dfa32 6072
.org 0xdfa34
	ldr r2, [pc, #92]	@ 000dfa34 174a
.org 0xdfa36
	ldr r0, [r2, #0]	@ 000dfa36 1068
.org 0xdfa38
	ldr r0, [r0, #0]	@ 000dfa38 0068
.org 0xdfa3a
	str r0, [r4, #20]	@ 000dfa3a 6061
.org 0xdfa3c
	mov r0, r9	@ 000dfa3c 4846
.org 0xdfa3e
	strh r0, [r4, #32]	@ 000dfa3e 2084
.org 0xdfa40
	adds r0, r4, #0	@ 000dfa40 201c
.org 0xdfa42
	adds r0, #34	@ 000dfa42 2230
.org 0xdfa44
	mov r1, r9	@ 000dfa44 4946
.org 0xdfa46
	strb r1, [r0, #0]	@ 000dfa46 0170
.org 0xdfa48
	ldr r2, [sp, #0]	@ 000dfa48 009a
.org 0xdfa4a
	ldr r0, [r2, #0]	@ 000dfa4a 1068
.org 0xdfa4c
	ldr r1, [r2, #4]	@ 000dfa4c 5168
.org 0xdfa4e
	str r0, [r4, #84]	@ 000dfa4e 6065
.org 0xdfa50
	str r1, [r4, #88]	@ 000dfa50 a165
.org 0xdfa52
	mov r0, r8	@ 000dfa52 4046
.org 0xdfa54
	strb r0, [r4, #16]	@ 000dfa54 2074
.org 0xdfa56
	mov r1, sp	@ 000dfa56 6946
.org 0xdfa58
	ldrb r1, [r1, #4]	@ 000dfa58 0979
.org 0xdfa5a
	strb r1, [r4, #17]	@ 000dfa5a 6174
.org 0xdfa5c
	adds r0, r4, #0	@ 000dfa5c 201c
.org 0xdfa5e
	adds r0, #119	@ 000dfa5e 7730
.org 0xdfa60
	mov r2, r8	@ 000dfa60 4246
.org 0xdfa62
	strb r2, [r0, #0]	@ 000dfa62 0270
.org 0xdfa64
	mov r0, sl	@ 000dfa64 5046
.org 0xdfa66
	cmp r0, #0	@ 000dfa66 0028
.org 0xdfa68
	beq.n 0xdfaa0	@ 000dfa68 1ad0
.org 0xdfa6a
	lsls r0, r6, #8	@ 000dfa6a 3002
.org 0xdfa6c
	adds r1, r5, #0	@ 000dfa6c 291c
.org 0xdfa6e
	bl 0x128fb8	@ 000dfa6e 49f0a3fa
.org 0xdfa72
	ldr r2, [r7, #0]	@ 000dfa72 3a68
.org 0xdfa74
	ldr r1, [pc, #32]	@ 000dfa74 0849
.org 0xdfa76
	muls r1, r2	@ 000dfa76 5143
.org 0xdfa78
	ldr r2, [pc, #32]	@ 000dfa78 084a
.org 0xdfa7a
	adds r1, r1, r2	@ 000dfa7a 8918
.org 0xdfa7c
	lsls r1, r1, #1	@ 000dfa7c 4900
.org 0xdfa7e
	lsrs r2, r1, #1	@ 000dfa7e 4a08
.org 0xdfa80
	str r2, [r7, #0]	@ 000dfa80 3a60
.org 0xdfa82
	lsrs r1, r1, #17	@ 000dfa82 490c
.org 0xdfa84
	movs r2, #31	@ 000dfa84 1f22
.org 0xdfa86
	ands r1, r2	@ 000dfa86 1140
.org 0xdfa88
	adds r1, #64	@ 000dfa88 4031
.org 0xdfa8a
	b.n 0xdfac0	@ 000dfa8a 19e0
.org 0xdfa8c
	.byte 0x38,0xdc,0x02,0x02	@ 000dfa8c data
.org 0xdfa90
	.byte 0x9c,0xed,0x02,0x02	@ 000dfa90 data
.org 0xdfa94
	.byte 0x38,0x70,0x86,0x08	@ 000dfa94 data
.org 0xdfa98
	.byte 0xfd,0x43,0x03,0x00	@ 000dfa98 data
.org 0xdfa9c
	.byte 0xc3,0x9e,0x26,0x00	@ 000dfa9c data
.org 0xdfaa0
	lsls r0, r6, #8	@ 000dfaa0 3002
.org 0xdfaa2
	adds r1, r5, #0	@ 000dfaa2 291c
.org 0xdfaa4
	bl 0x128fb8	@ 000dfaa4 49f088fa
.org 0xdfaa8
	ldr r2, [r7, #0]	@ 000dfaa8 3a68
.org 0xdfaaa
	ldr r1, [pc, #56]	@ 000dfaaa 0e49
.org 0xdfaac
	muls r1, r2	@ 000dfaac 5143
.org 0xdfaae
	ldr r2, [pc, #56]	@ 000dfaae 0e4a
.org 0xdfab0
	adds r1, r1, r2	@ 000dfab0 8918
.org 0xdfab2
	lsls r1, r1, #1	@ 000dfab2 4900
.org 0xdfab4
	lsrs r2, r1, #1	@ 000dfab4 4a08
.org 0xdfab6
	str r2, [r7, #0]	@ 000dfab6 3a60
.org 0xdfab8
	lsrs r1, r1, #17	@ 000dfab8 490c
.org 0xdfaba
	movs r2, #31	@ 000dfaba 1f22
.org 0xdfabc
	ands r1, r2	@ 000dfabc 1140
.org 0xdfabe
	adds r1, #192	@ 000dfabe c031
.org 0xdfac0
	adds r0, r0, r1	@ 000dfac0 4018
.org 0xdfac2
	adds r1, r4, #0	@ 000dfac2 211c
.org 0xdfac4
	adds r1, #117	@ 000dfac4 7531
.org 0xdfac6
	strb r0, [r1, #0]	@ 000dfac6 0870
.org 0xdfac8
	adds r0, r6, #1	@ 000dfac8 701c
