@ FUN_080bcba8  entry 0x080bcba8  size 210
.thumb
.org 0xbcba8
FUN_080bcba8:
	push {r4, r5, r6, lr}	@ 000bcba8 70b5
.org 0xbcbaa
	adds r4, r0, #0	@ 000bcbaa 041c
.org 0xbcbac
	adds r6, r4, #0	@ 000bcbac 261c
.org 0xbcbae
	adds r6, #140	@ 000bcbae 8c36
.org 0xbcbb0
	ldr r5, [r6, #0]	@ 000bcbb0 3568
.org 0xbcbb2
	movs r0, #128	@ 000bcbb2 8020
.org 0xbcbb4
	lsls r0, r0, #2	@ 000bcbb4 8000
.org 0xbcbb6
	ands r5, r0	@ 000bcbb6 0540
.org 0xbcbb8
	cmp r5, #0	@ 000bcbb8 002d
.org 0xbcbba
	beq.n 0xbcbdc	@ 000bcbba 0fd0
.org 0xbcbbc
	ldr r1, [pc, #24]	@ 000bcbbc 0649
.org 0xbcbbe
	ldrb r0, [r4, #9]	@ 000bcbbe 607a
.org 0xbcbc0
	lsls r0, r0, #2	@ 000bcbc0 8000
.org 0xbcbc2
	adds r0, r0, r1	@ 000bcbc2 4018
.org 0xbcbc4
	movs r1, #2	@ 000bcbc4 0221
.org 0xbcbc6
	str r1, [r4, #12]	@ 000bcbc6 e160
.org 0xbcbc8
	ldr r0, [r0, #0]	@ 000bcbc8 0068
.org 0xbcbca
	ldr r0, [r0, #8]	@ 000bcbca 8068
.org 0xbcbcc
	str r0, [r4, #20]	@ 000bcbcc 6061
.org 0xbcbce
	adds r0, r4, #0	@ 000bcbce 201c
.org 0xbcbd0
	bl 0xbcc8c	@ 000bcbd0 00f05cf8
.org 0xbcbd4
	b.n 0xbcc82	@ 000bcbd4 55e0
.org 0xbcbd6
	.byte 0x00	@ 000bcbd6 data
.org 0xbcbd7
	.byte 0x00	@ 000bcbd7 data
.org 0xbcbd8
	.byte 0x40,0xdb,0x85,0x08	@ 000bcbd8 data
.org 0xbcbdc
	adds r0, r4, #0	@ 000bcbdc 201c
.org 0xbcbde
	adds r0, #184	@ 000bcbde b830
.org 0xbcbe0
	ldrb r0, [r0, #0]	@ 000bcbe0 0078
.org 0xbcbe2
	cmp r0, #0	@ 000bcbe2 0028
.org 0xbcbe4
	bne.n 0xbcc24	@ 000bcbe4 1ed1
.org 0xbcbe6
	ldr r0, [r4, #84]	@ 000bcbe6 606d
.org 0xbcbe8
	ldr r1, [r4, #92]	@ 000bcbe8 e16d
.org 0xbcbea
	adds r0, r0, r1	@ 000bcbea 4018
.org 0xbcbec
	str r0, [r4, #84]	@ 000bcbec 6065
.org 0xbcbee
	adds r0, r4, #0	@ 000bcbee 201c
.org 0xbcbf0
	bl 0xbcd44	@ 000bcbf0 00f0a8f8
.org 0xbcbf4
	ldr r0, [r6, #0]	@ 000bcbf4 3068
.org 0xbcbf6
	movs r1, #4	@ 000bcbf6 0421
.org 0xbcbf8
	ands r0, r1	@ 000bcbf8 0840
.org 0xbcbfa
	cmp r0, #0	@ 000bcbfa 0028
.org 0xbcbfc
	beq.n 0xbcc48	@ 000bcbfc 24d0
.org 0xbcbfe
	ldr r0, [r4, #40]	@ 000bcbfe a06a
.org 0xbcc00
	ldr r2, [pc, #24]	@ 000bcc00 064a
.org 0xbcc02
	adds r1, r0, r2	@ 000bcc02 8118
.org 0xbcc04
	ldr r0, [r1, #20]	@ 000bcc04 4869
.org 0xbcc06
	subs r0, #180	@ 000bcc06 b438
.org 0xbcc08
	str r0, [r1, #20]	@ 000bcc08 4861
.org 0xbcc0a
	cmp r0, #0	@ 000bcc0a 0028
.org 0xbcc0c
	bge.n 0xbcc10	@ 000bcc0c 00da
.org 0xbcc0e
	str r5, [r1, #20]	@ 000bcc0e 4d61
.org 0xbcc10
	adds r0, r4, #0	@ 000bcc10 201c
.org 0xbcc12
	adds r0, #116	@ 000bcc12 7430
.org 0xbcc14
	ldr r1, [pc, #8]	@ 000bcc14 0249
.org 0xbcc16
	bl 0x5784	@ 000bcc16 48f7b5fd
.org 0xbcc1a
	b.n 0xbcc48	@ 000bcc1a 15e0
.org 0xbcc1c
	.byte 0xcc,0x0d,0x00,0x00	@ 000bcc1c data
.org 0xbcc20
	.byte 0x24,0x49,0x86,0x08	@ 000bcc20 data
.org 0xbcc24
	str r5, [r6, #0]	@ 000bcc24 3560
.org 0xbcc26
	adds r0, r4, #0	@ 000bcc26 201c
.org 0xbcc28
	adds r0, #144	@ 000bcc28 9030
.org 0xbcc2a
	str r5, [r0, #0]	@ 000bcc2a 0560
.org 0xbcc2c
	adds r0, #4	@ 000bcc2c 0430
.org 0xbcc2e
	strb r5, [r0, #0]	@ 000bcc2e 0570
.org 0xbcc30
	ldrb r1, [r4, #10]	@ 000bcc30 a17a
.org 0xbcc32
	movs r0, #251	@ 000bcc32 fb20
.org 0xbcc34
	ands r0, r1	@ 000bcc34 0840
.org 0xbcc36
	strb r0, [r4, #10]	@ 000bcc36 a072
.org 0xbcc38
	ldr r0, [r4, #84]	@ 000bcc38 606d
.org 0xbcc3a
	ldr r1, [r4, #92]	@ 000bcc3a e16d
.org 0xbcc3c
	adds r0, r0, r1	@ 000bcc3c 4018
.org 0xbcc3e
	str r0, [r4, #84]	@ 000bcc3e 6065
.org 0xbcc40
	ldr r0, [r4, #88]	@ 000bcc40 a06d
.org 0xbcc42
	ldr r1, [r4, #96]	@ 000bcc42 216e
.org 0xbcc44
	adds r0, r0, r1	@ 000bcc44 4018
.org 0xbcc46
	str r0, [r4, #88]	@ 000bcc46 a065
.org 0xbcc48
	adds r0, r4, #0	@ 000bcc48 201c
.org 0xbcc4a
	adds r0, #180	@ 000bcc4a b430
.org 0xbcc4c
	ldr r1, [r4, #84]	@ 000bcc4c 616d
.org 0xbcc4e
	ldr r0, [r0, #0]	@ 000bcc4e 0068
.org 0xbcc50
	subs r2, r1, r0	@ 000bcc50 0a1a
.org 0xbcc52
	cmp r2, #0	@ 000bcc52 002a
.org 0xbcc54
	blt.n 0xbcc60	@ 000bcc54 04db
.org 0xbcc56
	movs r0, #140	@ 000bcc56 8c20
.org 0xbcc58
	lsls r0, r0, #9	@ 000bcc58 4002
.org 0xbcc5a
	cmp r2, r0	@ 000bcc5a 8242
.org 0xbcc5c
	bgt.n 0xbcc6a	@ 000bcc5c 05dc
.org 0xbcc5e
	b.n 0xbcc7c	@ 000bcc5e 0de0
.org 0xbcc60
	subs r1, r0, r1	@ 000bcc60 411a
.org 0xbcc62
	movs r0, #140	@ 000bcc62 8c20
.org 0xbcc64
	lsls r0, r0, #9	@ 000bcc64 4002
.org 0xbcc66
	cmp r1, r0	@ 000bcc66 8142
.org 0xbcc68
	ble.n 0xbcc7c	@ 000bcc68 08dd
.org 0xbcc6a
	ldr r1, [pc, #28]	@ 000bcc6a 0749
.org 0xbcc6c
	ldrb r0, [r4, #9]	@ 000bcc6c 607a
.org 0xbcc6e
	lsls r0, r0, #2	@ 000bcc6e 8000
.org 0xbcc70
	adds r0, r0, r1	@ 000bcc70 4018
.org 0xbcc72
	movs r1, #2	@ 000bcc72 0221
.org 0xbcc74
	str r1, [r4, #12]	@ 000bcc74 e160
.org 0xbcc76
	ldr r0, [r0, #0]	@ 000bcc76 0068
.org 0xbcc78
	ldr r0, [r0, #8]	@ 000bcc78 8068
