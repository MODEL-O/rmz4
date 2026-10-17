@ FUN_0806ad2c  entry 0x0806ad2c  size 318
.thumb
.org 0x6ad2c
FUN_0806ad2c:
	push {r4, r5, r6, r7, lr}	@ 0006ad2c f0b5
.org 0x6ad2e
	mov r7, sl	@ 0006ad2e 5746
.org 0x6ad30
	mov r6, r9	@ 0006ad30 4e46
.org 0x6ad32
	mov r5, r8	@ 0006ad32 4546
.org 0x6ad34
	push {r5, r6, r7}	@ 0006ad34 e0b4
.org 0x6ad36
	sub sp, #20	@ 0006ad36 85b0
.org 0x6ad38
	adds r7, r0, #0	@ 0006ad38 071c
.org 0x6ad3a
	ldr r1, [pc, #144]	@ 0006ad3a 2449
.org 0x6ad3c
	mov r0, sp	@ 0006ad3c 6846
.org 0x6ad3e
	movs r2, #4	@ 0006ad3e 0422
.org 0x6ad40
	bl 0x129258	@ 0006ad40 bef08afa
.org 0x6ad44
	add r0, sp, #4	@ 0006ad44 01a8
.org 0x6ad46
	mov r9, r0	@ 0006ad46 8146
.org 0x6ad48
	ldr r1, [pc, #132]	@ 0006ad48 2149
.org 0x6ad4a
	movs r2, #4	@ 0006ad4a 0422
.org 0x6ad4c
	bl 0x129258	@ 0006ad4c bef084fa
.org 0x6ad50
	adds r0, r7, #0	@ 0006ad50 381c
.org 0x6ad52
	adds r0, #196	@ 0006ad52 c430
.org 0x6ad54
	ldrb r0, [r0, #0]	@ 0006ad54 0078
.org 0x6ad56
	mov sl, r0	@ 0006ad56 8246
.org 0x6ad58
	movs r2, #3	@ 0006ad58 0322
.org 0x6ad5a
	mov r1, sp	@ 0006ad5a 6946
.org 0x6ad5c
	strb r2, [r1, #16]	@ 0006ad5c 0a74
.org 0x6ad5e
	lsrs r1, r0, #6	@ 0006ad5e 8109
.org 0x6ad60
	ldr r0, [r7, #84]	@ 0006ad60 786d
.org 0x6ad62
	str r0, [sp, #8]	@ 0006ad62 0290
.org 0x6ad64
	ldr r0, [r7, #88]	@ 0006ad64 b86d
.org 0x6ad66
	add r2, sp, #8	@ 0006ad66 02aa
.org 0x6ad68
	mov r8, r2	@ 0006ad68 9046
.org 0x6ad6a
	str r0, [r2, #4]	@ 0006ad6a 5060
.org 0x6ad6c
	adds r0, r1, #0	@ 0006ad6c 081c
.org 0x6ad6e
	movs r2, #1	@ 0006ad6e 0122
.org 0x6ad70
	ands r0, r2	@ 0006ad70 1040
.org 0x6ad72
	lsls r0, r0, #2	@ 0006ad72 8000
.org 0x6ad74
	add r0, r8	@ 0006ad74 4044
.org 0x6ad76
	ldr r5, [r0, #0]	@ 0006ad76 0568
.org 0x6ad78
	mov r0, r9	@ 0006ad78 4846
.org 0x6ad7a
	adds r4, r0, r1	@ 0006ad7a 4418
.org 0x6ad7c
	ldrb r0, [r4, #0]	@ 0006ad7c 2078
.org 0x6ad7e
	lsls r0, r0, #1	@ 0006ad7e 4000
.org 0x6ad80
	subs r6, r0, #1	@ 0006ad80 461e
.org 0x6ad82
	lsls r0, r6, #1	@ 0006ad82 7000
.org 0x6ad84
	adds r0, r0, r6	@ 0006ad84 8019
.org 0x6ad86
	lsls r0, r0, #2	@ 0006ad86 8000
.org 0x6ad88
	subs r0, r0, r6	@ 0006ad88 801b
.org 0x6ad8a
	lsls r0, r0, #10	@ 0006ad8a 8002
.org 0x6ad8c
	adds r5, r5, r0	@ 0006ad8c 2d18
.org 0x6ad8e
	mov r2, sp	@ 0006ad8e 6a46
.org 0x6ad90
	adds r0, r2, r1	@ 0006ad90 5018
.org 0x6ad92
	ldrb r1, [r0, #0]	@ 0006ad92 0178
.org 0x6ad94
	adds r0, r7, #0	@ 0006ad94 381c
.org 0x6ad96
	bl 0x6a7c8	@ 0006ad96 fff717fd
.org 0x6ad9a
	adds r2, r0, #0	@ 0006ad9a 021c
.org 0x6ad9c
	subs r1, r5, r6	@ 0006ad9c a91b
.org 0x6ad9e
	subs r1, r1, r2	@ 0006ad9e 891a
.org 0x6ada0
	ldrb r0, [r4, #0]	@ 0006ada0 2078
.org 0x6ada2
	lsls r0, r0, #1	@ 0006ada2 4000
.org 0x6ada4
	subs r0, #1	@ 0006ada4 0138
.org 0x6ada6
	muls r0, r1	@ 0006ada6 4843
.org 0x6ada8
	cmp r0, #0	@ 0006ada8 0028
.org 0x6adaa
	blt.n 0x6add4	@ 0006adaa 13db
.org 0x6adac
	subs r5, r2, r5	@ 0006adac 551b
.org 0x6adae
	negs r0, r6	@ 0006adae 7042
.org 0x6adb0
	muls r5, r0	@ 0006adb0 4543
.org 0x6adb2
	lsls r0, r5, #1	@ 0006adb2 6800
.org 0x6adb4
	adds r0, r0, r5	@ 0006adb4 4019
.org 0x6adb6
	lsls r0, r0, #2	@ 0006adb6 8000
.org 0x6adb8
	movs r1, #160	@ 0006adb8 a021
.org 0x6adba
	lsls r1, r1, #5	@ 0006adba 4901
.org 0x6adbc
	bl 0x128fb8	@ 0006adbc bef0fcf8
.org 0x6adc0
	adds r2, r0, #0	@ 0006adc0 021c
.org 0x6adc2
	cmp r2, #12	@ 0006adc2 0c2a
.org 0x6adc4
	ble.n 0x6ae54	@ 0006adc4 46dd
.org 0x6adc6
	movs r2, #12	@ 0006adc6 0c22
.org 0x6adc8
	b.n 0x6ae54	@ 0006adc8 44e0
.org 0x6adca
	.byte 0x00	@ 0006adca data
.org 0x6adcb
	.byte 0x00	@ 0006adcb data
.org 0x6adcc
	.byte 0xf2,0x98,0x12,0x08	@ 0006adcc data
.org 0x6add0
	.byte 0xfa,0x98,0x12,0x08	@ 0006add0 data
.org 0x6add4
	mov r0, sl	@ 0006add4 5046
.org 0x6add6
	adds r0, #128	@ 0006add6 8030
.org 0x6add8
	lsls r0, r0, #24	@ 0006add8 0006
.org 0x6adda
	lsrs r1, r0, #30	@ 0006adda 810f
.org 0x6addc
	mov r0, sp	@ 0006addc 6846
.org 0x6adde
	ldrb r0, [r0, #16]	@ 0006adde 007c
.org 0x6ade0
	ands r1, r0	@ 0006ade0 0140
.org 0x6ade2
	adds r0, r1, #0	@ 0006ade2 081c
.org 0x6ade4
	movs r2, #1	@ 0006ade4 0122
.org 0x6ade6
	ands r0, r2	@ 0006ade6 1040
.org 0x6ade8
	lsls r0, r0, #2	@ 0006ade8 8000
.org 0x6adea
	add r0, r8	@ 0006adea 4044
.org 0x6adec
	ldr r5, [r0, #0]	@ 0006adec 0568
.org 0x6adee
	mov r0, r9	@ 0006adee 4846
.org 0x6adf0
	adds r4, r0, r1	@ 0006adf0 4418
.org 0x6adf2
	ldrb r0, [r4, #0]	@ 0006adf2 2078
.org 0x6adf4
	lsls r0, r0, #1	@ 0006adf4 4000
.org 0x6adf6
	subs r6, r0, #1	@ 0006adf6 461e
.org 0x6adf8
	lsls r0, r6, #1	@ 0006adf8 7000
.org 0x6adfa
	adds r0, r0, r6	@ 0006adfa 8019
.org 0x6adfc
	lsls r0, r0, #2	@ 0006adfc 8000
.org 0x6adfe
	subs r0, r0, r6	@ 0006adfe 801b
.org 0x6ae00
	lsls r0, r0, #10	@ 0006ae00 8002
.org 0x6ae02
	adds r5, r5, r0	@ 0006ae02 2d18
.org 0x6ae04
	mov r2, sp	@ 0006ae04 6a46
.org 0x6ae06
	adds r0, r2, r1	@ 0006ae06 5018
.org 0x6ae08
	ldrb r1, [r0, #0]	@ 0006ae08 0178
.org 0x6ae0a
	adds r0, r7, #0	@ 0006ae0a 381c
.org 0x6ae0c
	bl 0x6a7c8	@ 0006ae0c fff7dcfc
.org 0x6ae10
	adds r2, r0, #0	@ 0006ae10 021c
.org 0x6ae12
	subs r1, r5, r6	@ 0006ae12 a91b
.org 0x6ae14
	subs r1, r1, r2	@ 0006ae14 891a
.org 0x6ae16
	ldrb r0, [r4, #0]	@ 0006ae16 2078
.org 0x6ae18
	lsls r0, r0, #1	@ 0006ae18 4000
.org 0x6ae1a
	subs r0, #1	@ 0006ae1a 0138
.org 0x6ae1c
	muls r0, r1	@ 0006ae1c 4843
.org 0x6ae1e
	cmp r0, #0	@ 0006ae1e 0028
.org 0x6ae20
	blt.n 0x6ae44	@ 0006ae20 10db
.org 0x6ae22
	subs r5, r2, r5	@ 0006ae22 551b
.org 0x6ae24
	negs r0, r6	@ 0006ae24 7042
.org 0x6ae26
	muls r5, r0	@ 0006ae26 4543
.org 0x6ae28
	movs r1, #160	@ 0006ae28 a021
.org 0x6ae2a
	lsls r1, r1, #5	@ 0006ae2a 4901
.org 0x6ae2c
	subs r2, r1, r5	@ 0006ae2c 4a1b
.org 0x6ae2e
	lsls r0, r2, #3	@ 0006ae2e d000
.org 0x6ae30
	subs r0, r0, r2	@ 0006ae30 801a
.org 0x6ae32
	lsls r0, r0, #1	@ 0006ae32 4000
.org 0x6ae34
	bl 0x128fb8	@ 0006ae34 bef0c0f8
.org 0x6ae38
	adds r2, r0, #0	@ 0006ae38 021c
.org 0x6ae3a
	cmp r2, #0	@ 0006ae3a 002a
.org 0x6ae3c
	bgt.n 0x6ae40	@ 0006ae3c 00dc
.org 0x6ae3e
	movs r2, #1	@ 0006ae3e 0122
.org 0x6ae40
	adds r2, #12	@ 0006ae40 0c32
.org 0x6ae42
	b.n 0x6ae54	@ 0006ae42 07e0
.org 0x6ae44
	adds r0, r7, #0	@ 0006ae44 381c
.org 0x6ae46
	adds r0, #116	@ 0006ae46 7430
.org 0x6ae48
	ldr r1, [pc, #4]	@ 0006ae48 0149
.org 0x6ae4a
	bl 0x5784	@ 0006ae4a 9af79bfc
.org 0x6ae4e
	b.n 0x6ae68	@ 0006ae4e 0be0
.org 0x6ae50
	.byte 0x84,0xb6,0x85,0x08	@ 0006ae50 data
.org 0x6ae54
	lsls r2, r2, #2	@ 0006ae54 9200
.org 0x6ae56
	adds r0, r7, #0	@ 0006ae56 381c
.org 0x6ae58
	adds r0, #116	@ 0006ae58 7430
.org 0x6ae5a
	lsls r1, r2, #1	@ 0006ae5a 5100
.org 0x6ae5c
	adds r1, r1, r2	@ 0006ae5c 8918
.org 0x6ae5e
	lsls r1, r1, #3	@ 0006ae5e c900
.org 0x6ae60
	ldr r2, [pc, #20]	@ 0006ae60 054a
.org 0x6ae62
	adds r1, r1, r2	@ 0006ae62 8918
.org 0x6ae64
	bl 0x5784	@ 0006ae64 9af78efc
.org 0x6ae68
	add sp, #20	@ 0006ae68 05b0
