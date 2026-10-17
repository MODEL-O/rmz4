@ FUN_080bdeb8  entry 0x080bdeb8  size 200
.thumb
.org 0xbdeb8
FUN_080bdeb8:
	push {r4, r5, r6, r7, lr}	@ 000bdeb8 f0b5
.org 0xbdeba
	mov r7, r8	@ 000bdeba 4746
.org 0xbdebc
	push {r7}	@ 000bdebc 80b4
.org 0xbdebe
	adds r5, r0, #0	@ 000bdebe 051c
.org 0xbdec0
	ldr r4, [r5, #40]	@ 000bdec0 ac6a
.org 0xbdec2
	ldrb r0, [r5, #17]	@ 000bdec2 687c
.org 0xbdec4
	mov r8, r0	@ 000bdec4 8046
.org 0xbdec6
	adds r0, r5, #0	@ 000bdec6 281c
.org 0xbdec8
	bl 0x1cff0	@ 000bdec8 5ff792f8
.org 0xbdecc
	adds r2, r5, #0	@ 000bdecc 2a1c
.org 0xbdece
	adds r2, #180	@ 000bdece b432
.org 0xbded0
	ldr r1, [r2, #0]	@ 000bded0 1168
.org 0xbded2
	cmp r1, #0	@ 000bded2 0029
.org 0xbded4
	ble.n 0xbdf02	@ 000bded4 15dd
.org 0xbded6
	ldrb r0, [r4, #12]	@ 000bded6 207b
.org 0xbded8
	cmp r0, #1	@ 000bded8 0128
.org 0xbdeda
	bls.n 0xbdefc	@ 000bdeda 0fd9
.org 0xbdedc
	ldr r1, [pc, #24]	@ 000bdedc 0649
.org 0xbdede
	ldrb r0, [r5, #9]	@ 000bdede 687a
.org 0xbdee0
	lsls r0, r0, #2	@ 000bdee0 8000
.org 0xbdee2
	adds r0, r0, r1	@ 000bdee2 4018
.org 0xbdee4
	movs r1, #2	@ 000bdee4 0221
.org 0xbdee6
	str r1, [r5, #12]	@ 000bdee6 e960
.org 0xbdee8
	ldr r0, [r0, #0]	@ 000bdee8 0068
.org 0xbdeea
	ldr r0, [r0, #8]	@ 000bdeea 8068
.org 0xbdeec
	str r0, [r5, #20]	@ 000bdeec 6861
.org 0xbdeee
	adds r0, r5, #0	@ 000bdeee 281c
.org 0xbdef0
	bl 0xbdf8c	@ 000bdef0 00f04cf8
.org 0xbdef4
	b.n 0xbdf80	@ 000bdef4 44e0
.org 0xbdef6
	.byte 0x00	@ 000bdef6 data
.org 0xbdef7
	.byte 0x00	@ 000bdef7 data
.org 0xbdef8
	.byte 0xf4,0x49,0x86,0x08	@ 000bdef8 data
.org 0xbdefc
	subs r0, r1, #1	@ 000bdefc 481e
.org 0xbdefe
	str r0, [r2, #0]	@ 000bdefe 1060
.org 0xbdf00
	b.n 0xbdf80	@ 000bdf00 3ee0
.org 0xbdf02
	ldr r0, [r5, #84]	@ 000bdf02 686d
.org 0xbdf04
	ldr r1, [r5, #92]	@ 000bdf04 e96d
.org 0xbdf06
	adds r0, r0, r1	@ 000bdf06 4018
.org 0xbdf08
	adds r6, r0, #0	@ 000bdf08 061c
.org 0xbdf0a
	ldr r1, [r5, #88]	@ 000bdf0a a96d
.org 0xbdf0c
	ldr r2, [r5, #96]	@ 000bdf0c 2a6e
.org 0xbdf0e
	adds r1, r1, r2	@ 000bdf0e 8918
.org 0xbdf10
	adds r7, r1, #0	@ 000bdf10 0f1c
.org 0xbdf12
	bl 0x7c7c	@ 000bdf12 49f7b3fe
.org 0xbdf16
	lsls r0, r0, #16	@ 000bdf16 0004
.org 0xbdf18
	cmp r0, #0	@ 000bdf18 0028
.org 0xbdf1a
	beq.n 0xbdf7c	@ 000bdf1a 2fd0
.org 0xbdf1c
	adds r4, r5, #0	@ 000bdf1c 2c1c
.org 0xbdf1e
	adds r4, #84	@ 000bdf1e 5434
.org 0xbdf20
	mov r2, r8	@ 000bdf20 4246
.org 0xbdf22
	adds r2, #81	@ 000bdf22 5132
.org 0xbdf24
	lsls r2, r2, #24	@ 000bdf24 1206
.org 0xbdf26
	lsrs r2, r2, #24	@ 000bdf26 120e
.org 0xbdf28
	adds r0, r4, #0	@ 000bdf28 201c
.org 0xbdf2a
	movs r1, #0	@ 000bdf2a 0021
.org 0xbdf2c
	bl 0xbd9a8	@ 000bdf2c fff73cfd
.org 0xbdf30
	mov r2, r8	@ 000bdf30 4246
.org 0xbdf32
	subs r2, #81	@ 000bdf32 513a
.org 0xbdf34
	lsls r2, r2, #24	@ 000bdf34 1206
.org 0xbdf36
	lsrs r2, r2, #24	@ 000bdf36 120e
.org 0xbdf38
	adds r0, r4, #0	@ 000bdf38 201c
.org 0xbdf3a
	movs r1, #1	@ 000bdf3a 0121
.org 0xbdf3c
	bl 0xbd9a8	@ 000bdf3c fff734fd
.org 0xbdf40
	ldrb r1, [r5, #10]	@ 000bdf40 a97a
.org 0xbdf42
	movs r0, #254	@ 000bdf42 fe20
.org 0xbdf44
	ands r0, r1	@ 000bdf44 0840
.org 0xbdf46
	movs r2, #0	@ 000bdf46 0022
.org 0xbdf48
	movs r1, #253	@ 000bdf48 fd21
.org 0xbdf4a
	ands r0, r1	@ 000bdf4a 0840
.org 0xbdf4c
	strb r0, [r5, #10]	@ 000bdf4c a872
.org 0xbdf4e
	adds r0, r5, #0	@ 000bdf4e 281c
.org 0xbdf50
	adds r0, #140	@ 000bdf50 8c30
.org 0xbdf52
	str r2, [r0, #0]	@ 000bdf52 0260
.org 0xbdf54
	adds r0, #4	@ 000bdf54 0430
.org 0xbdf56
	str r2, [r0, #0]	@ 000bdf56 0260
.org 0xbdf58
	adds r0, #4	@ 000bdf58 0430
.org 0xbdf5a
	strb r2, [r0, #0]	@ 000bdf5a 0270
.org 0xbdf5c
	ldrb r1, [r5, #10]	@ 000bdf5c a97a
.org 0xbdf5e
	movs r0, #251	@ 000bdf5e fb20
.org 0xbdf60
	ands r0, r1	@ 000bdf60 0840
.org 0xbdf62
	strb r0, [r5, #10]	@ 000bdf62 a872
.org 0xbdf64
	ldr r1, [pc, #16]	@ 000bdf64 0449
.org 0xbdf66
	ldrb r0, [r5, #9]	@ 000bdf66 687a
.org 0xbdf68
	lsls r0, r0, #2	@ 000bdf68 8000
.org 0xbdf6a
	adds r0, r0, r1	@ 000bdf6a 4018
.org 0xbdf6c
	movs r1, #3	@ 000bdf6c 0321
.org 0xbdf6e
	str r1, [r5, #12]	@ 000bdf6e e960
.org 0xbdf70
	ldr r0, [r0, #0]	@ 000bdf70 0068
.org 0xbdf72
	ldr r0, [r0, #12]	@ 000bdf72 c068
.org 0xbdf74
	str r0, [r5, #20]	@ 000bdf74 6861
.org 0xbdf76
	b.n 0xbdf80	@ 000bdf76 03e0
.org 0xbdf78
	.byte 0xf4,0x49,0x86,0x08	@ 000bdf78 data
.org 0xbdf7c
	str r6, [r5, #84]	@ 000bdf7c 6e65
.org 0xbdf7e
	str r7, [r5, #88]	@ 000bdf7e af65
