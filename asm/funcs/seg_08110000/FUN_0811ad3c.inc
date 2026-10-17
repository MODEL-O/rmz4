@ FUN_0811ad3c  entry 0x0811ad3c  size 272
.thumb
.org 0x11ad3c
FUN_0811ad3c:
	push {r4, r5, r6, r7, lr}	@ 0011ad3c f0b5
.org 0x11ad3e
	mov r7, r9	@ 0011ad3e 4f46
.org 0x11ad40
	mov r6, r8	@ 0011ad40 4646
.org 0x11ad42
	push {r6, r7}	@ 0011ad42 c0b4
.org 0x11ad44
	sub sp, #8	@ 0011ad44 82b0
.org 0x11ad46
	adds r4, r0, #0	@ 0011ad46 041c
.org 0x11ad48
	ldr r1, [pc, #20]	@ 0011ad48 0549
.org 0x11ad4a
	adds r0, r4, r1	@ 0011ad4a 6018
.org 0x11ad4c
	ldr r3, [r0, #0]	@ 0011ad4c 0368
.org 0x11ad4e
	adds r2, r3, #0	@ 0011ad4e 1a1c
.org 0x11ad50
	adds r2, #180	@ 0011ad50 b432
.org 0x11ad52
	ldrb r0, [r2, #16]	@ 0011ad52 107c
.org 0x11ad54
	cmp r0, #255	@ 0011ad54 ff28
.org 0x11ad56
	bne.n 0x11ad64	@ 0011ad56 05d1
.org 0x11ad58
	mov r1, sp	@ 0011ad58 6946
.org 0x11ad5a
	movs r0, #235	@ 0011ad5a eb20
.org 0x11ad5c
	lsls r0, r0, #1	@ 0011ad5c 4000
.org 0x11ad5e
	b.n 0x11ad70	@ 0011ad5e 07e0
.org 0x11ad60
	.byte 0xa8,0x63,0x00,0x00	@ 0011ad60 data
.org 0x11ad64
	mov r1, sp	@ 0011ad64 6946
.org 0x11ad66
	movs r5, #200	@ 0011ad66 c825
.org 0x11ad68
	lsls r5, r5, #1	@ 0011ad68 6d00
.org 0x11ad6a
	adds r0, r5, #0	@ 0011ad6a 281c
.org 0x11ad6c
	ldrb r2, [r2, #16]	@ 0011ad6c 127c
.org 0x11ad6e
	adds r0, r0, r2	@ 0011ad6e 8018
.org 0x11ad70
	strh r0, [r1, #0]	@ 0011ad70 0880
.org 0x11ad72
	adds r0, r3, #0	@ 0011ad72 181c
.org 0x11ad74
	adds r0, #180	@ 0011ad74 b430
.org 0x11ad76
	ldrb r1, [r0, #17]	@ 0011ad76 417c
.org 0x11ad78
	adds r2, r0, #0	@ 0011ad78 021c
.org 0x11ad7a
	cmp r1, #255	@ 0011ad7a ff29
.org 0x11ad7c
	bne.n 0x11ad88	@ 0011ad7c 04d1
.org 0x11ad7e
	mov r1, sp	@ 0011ad7e 6946
.org 0x11ad80
	ldr r0, [pc, #0]	@ 0011ad80 0048
.org 0x11ad82
	b.n 0x11ad94	@ 0011ad82 07e0
.org 0x11ad84
	.byte 0xd7,0x01,0x00,0x00	@ 0011ad84 data
.org 0x11ad88
	mov r1, sp	@ 0011ad88 6946
.org 0x11ad8a
	movs r3, #200	@ 0011ad8a c823
.org 0x11ad8c
	lsls r3, r3, #1	@ 0011ad8c 5b00
.org 0x11ad8e
	adds r0, r3, #0	@ 0011ad8e 181c
.org 0x11ad90
	ldrb r5, [r2, #17]	@ 0011ad90 557c
.org 0x11ad92
	adds r0, r0, r5	@ 0011ad92 4019
.org 0x11ad94
	strh r0, [r1, #2]	@ 0011ad94 4880
.org 0x11ad96
	ldrb r0, [r2, #18]	@ 0011ad96 907c
.org 0x11ad98
	cmp r0, #255	@ 0011ad98 ff28
.org 0x11ad9a
	bne.n 0x11ada4	@ 0011ad9a 03d1
.org 0x11ad9c
	mov r1, sp	@ 0011ad9c 6946
.org 0x11ad9e
	movs r0, #236	@ 0011ad9e ec20
.org 0x11ada0
	lsls r0, r0, #1	@ 0011ada0 4000
.org 0x11ada2
	b.n 0x11adb0	@ 0011ada2 05e0
.org 0x11ada4
	mov r1, sp	@ 0011ada4 6946
.org 0x11ada6
	movs r3, #200	@ 0011ada6 c823
.org 0x11ada8
	lsls r3, r3, #1	@ 0011ada8 5b00
.org 0x11adaa
	adds r0, r3, #0	@ 0011adaa 181c
.org 0x11adac
	ldrb r2, [r2, #18]	@ 0011adac 927c
.org 0x11adae
	adds r0, r0, r2	@ 0011adae 8018
.org 0x11adb0
	strh r0, [r1, #4]	@ 0011adb0 8880
.org 0x11adb2
	movs r5, #0	@ 0011adb2 0025
.org 0x11adb4
	mov r9, r5	@ 0011adb4 a946
.org 0x11adb6
	movs r0, #221	@ 0011adb6 dd20
.org 0x11adb8
	lsls r0, r0, #4	@ 0011adb8 0001
.org 0x11adba
	adds r6, r4, r0	@ 0011adba 2618
.org 0x11adbc
	ldrb r0, [r6, #2]	@ 0011adbc b078
.org 0x11adbe
	lsls r1, r0, #24	@ 0011adbe 0106
.org 0x11adc0
	lsrs r0, r1, #24	@ 0011adc0 080e
.org 0x11adc2
	cmp r0, #255	@ 0011adc2 ff28
.org 0x11adc4
	bne.n 0x11adcc	@ 0011adc4 02d1
.org 0x11adc6
	ldrb r3, [r6, #0]	@ 0011adc6 3378
.org 0x11adc8
	cmp r9, r3	@ 0011adc8 9945
.org 0x11adca
	bne.n 0x11ae42	@ 0011adca 3ad1
.org 0x11adcc
	lsrs r3, r1, #26	@ 0011adcc 8b0e
.org 0x11adce
	ldr r5, [pc, #72]	@ 0011adce 124d
.org 0x11add0
	mov r8, r5	@ 0011add0 a846
.org 0x11add2
	mov r1, r9	@ 0011add2 4946
.org 0x11add4
	lsls r0, r1, #1	@ 0011add4 4800
.org 0x11add6
	mov r1, sp	@ 0011add6 6946
.org 0x11add8
	adds r5, r1, r0	@ 0011add8 0d18
.org 0x11adda
	ldrh r0, [r5, #0]	@ 0011adda 2888
.org 0x11addc
	lsls r0, r0, #1	@ 0011addc 4000
.org 0x11adde
	add r0, r8	@ 0011adde 4044
.org 0x11ade0
	ldrh r0, [r0, #0]	@ 0011ade0 0088
.org 0x11ade2
	ldr r7, [pc, #56]	@ 0011ade2 0e4f
.org 0x11ade4
	adds r0, r0, r7	@ 0011ade4 c019
.org 0x11ade6
	mov r1, r9	@ 0011ade6 4946
.org 0x11ade8
	lsls r4, r1, #2	@ 0011ade8 8c00
.org 0x11adea
	adds r2, r4, #1	@ 0011adea 621c
.org 0x11adec
	movs r1, #7	@ 0011adec 0721
.org 0x11adee
	bl 0x10d8b8	@ 0011adee f2f763fd
.org 0x11adf2
	ldrb r0, [r6, #2]	@ 0011adf2 b078
.org 0x11adf4
	cmp r0, #63	@ 0011adf4 3f28
.org 0x11adf6
	bhi.n 0x11ae42	@ 0011adf6 24d8
.org 0x11adf8
	ldrh r0, [r5, #0]	@ 0011adf8 2888
.org 0x11adfa
	lsls r0, r0, #1	@ 0011adfa 4000
.org 0x11adfc
	add r0, r8	@ 0011adfc 4044
.org 0x11adfe
	ldrh r0, [r0, #0]	@ 0011adfe 0088
.org 0x11ae00
	adds r0, r0, r7	@ 0011ae00 c019
.org 0x11ae02
	bl 0x10d7ec	@ 0011ae02 f2f7f3fc
.org 0x11ae06
	lsls r0, r0, #24	@ 0011ae06 0006
.org 0x11ae08
	lsrs r3, r0, #24	@ 0011ae08 030e
.org 0x11ae0a
	ldrb r1, [r6, #2]	@ 0011ae0a b178
.org 0x11ae0c
	lsrs r0, r1, #2	@ 0011ae0c 8808
.org 0x11ae0e
	cmp r3, r0	@ 0011ae0e 8342
.org 0x11ae10
	bls.n 0x11ae20	@ 0011ae10 06d9
.org 0x11ae12
	adds r3, r0, #0	@ 0011ae12 031c
.org 0x11ae14
	b.n 0x11ae2e	@ 0011ae14 0be0
.org 0x11ae16
	.byte 0x00	@ 0011ae16 data
.org 0x11ae17
	.byte 0x00	@ 0011ae17 data
.org 0x11ae18
	.byte 0xf8,0xcf,0x86,0x08	@ 0011ae18 data
.org 0x11ae1c
	.byte 0x5f,0x0e,0x01,0x09	@ 0011ae1c data
.org 0x11ae20
	cmp r3, #10	@ 0011ae20 0a2b
.org 0x11ae22
	bhi.n 0x11ae42	@ 0011ae22 0ed8
.org 0x11ae24
	movs r0, #7	@ 0011ae24 0720
.org 0x11ae26
	ands r0, r1	@ 0011ae26 0840
.org 0x11ae28
	cmp r0, #3	@ 0011ae28 0328
.org 0x11ae2a
	bls.n 0x11ae2e	@ 0011ae2a 00d9
.org 0x11ae2c
	movs r3, #0	@ 0011ae2c 0023
.org 0x11ae2e
	cmp r3, #0	@ 0011ae2e 002b
.org 0x11ae30
	beq.n 0x11ae42	@ 0011ae30 07d0
.org 0x11ae32
	ldr r0, [pc, #44]	@ 0011ae32 0b48
.org 0x11ae34
	ldrh r0, [r0, #20]	@ 0011ae34 808a
.org 0x11ae36
	ldr r1, [pc, #44]	@ 0011ae36 0b49
.org 0x11ae38
	adds r0, r0, r1	@ 0011ae38 4018
.org 0x11ae3a
	adds r1, r3, #7	@ 0011ae3a d91d
.org 0x11ae3c
	adds r2, r4, #1	@ 0011ae3c 621c
.org 0x11ae3e
	bl 0x10d85c	@ 0011ae3e f2f70dfd
.org 0x11ae42
	mov r0, r9	@ 0011ae42 4846
.org 0x11ae44
	adds r0, #1	@ 0011ae44 0130
.org 0x11ae46
	lsls r0, r0, #24	@ 0011ae46 0006
.org 0x11ae48
	lsrs r0, r0, #24	@ 0011ae48 000e
.org 0x11ae4a
	mov r9, r0	@ 0011ae4a 8146
