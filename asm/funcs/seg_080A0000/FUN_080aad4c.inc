@ FUN_080aad4c  entry 0x080aad4c  size 360
.thumb
.org 0xaad4c
FUN_080aad4c:
	push {r4, r5, r6, r7, lr}	@ 000aad4c f0b5
.org 0xaad4e
	mov r7, r8	@ 000aad4e 4746
.org 0xaad50
	push {r7}	@ 000aad50 80b4
.org 0xaad52
	adds r6, r0, #0	@ 000aad52 061c
.org 0xaad54
	ldrb r0, [r6, #10]	@ 000aad54 b07a
.org 0xaad56
	lsrs r7, r0, #4	@ 000aad56 0709
.org 0xaad58
	movs r0, #1	@ 000aad58 0120
.org 0xaad5a
	ands r7, r0	@ 000aad5a 0740
.org 0xaad5c
	movs r0, #0	@ 000aad5c 0020
.org 0xaad5e
	mov r8, r0	@ 000aad5e 8046
.org 0xaad60
	ldrb r0, [r6, #15]	@ 000aad60 f07b
.org 0xaad62
	cmp r0, #0	@ 000aad62 0028
.org 0xaad64
	bne.n 0xaad88	@ 000aad64 10d1
.org 0xaad66
	movs r1, #144	@ 000aad66 9021
.org 0xaad68
	lsls r1, r1, #8	@ 000aad68 0902
.org 0xaad6a
	adds r0, r6, #0	@ 000aad6a 301c
.org 0xaad6c
	bl 0x1cf00	@ 000aad6c 72f7c8f8
.org 0xaad70
	lsls r1, r7, #1	@ 000aad70 7900
.org 0xaad72
	subs r1, #1	@ 000aad72 0139
.org 0xaad74
	lsls r0, r1, #2	@ 000aad74 8800
.org 0xaad76
	adds r0, r0, r1	@ 000aad76 4018
.org 0xaad78
	lsls r0, r0, #7	@ 000aad78 c001
.org 0xaad7a
	negs r0, r0	@ 000aad7a 4042
.org 0xaad7c
	str r0, [r6, #92]	@ 000aad7c f065
.org 0xaad7e
	ldr r0, [pc, #72]	@ 000aad7e 1248
.org 0xaad80
	str r0, [r6, #96]	@ 000aad80 3066
.org 0xaad82
	ldrb r0, [r6, #15]	@ 000aad82 f07b
.org 0xaad84
	adds r0, #1	@ 000aad84 0130
.org 0xaad86
	strb r0, [r6, #15]	@ 000aad86 f073
.org 0xaad88
	adds r0, r6, #0	@ 000aad88 301c
.org 0xaad8a
	bl 0x1cff0	@ 000aad8a 72f731f9
.org 0xaad8e
	adds r0, r6, #0	@ 000aad8e 301c
.org 0xaad90
	adds r0, #116	@ 000aad90 7430
.org 0xaad92
	ldr r1, [pc, #56]	@ 000aad92 0e49
.org 0xaad94
	bl 0x5784	@ 000aad94 5af7f6fc
.org 0xaad98
	ldr r0, [r6, #88]	@ 000aad98 b06d
.org 0xaad9a
	ldr r1, [r6, #96]	@ 000aad9a 316e
.org 0xaad9c
	adds r0, r0, r1	@ 000aad9c 4018
.org 0xaad9e
	str r0, [r6, #88]	@ 000aad9e b065
.org 0xaada0
	cmp r1, #0	@ 000aada0 0029
.org 0xaada2
	bge.n 0xaadd0	@ 000aada2 15da
.org 0xaada4
	ldr r4, [r6, #84]	@ 000aada4 746d
.org 0xaada6
	ldr r5, [r6, #88]	@ 000aada6 b56d
.org 0xaada8
	adds r0, r4, #0	@ 000aada8 201c
.org 0xaadaa
	adds r1, r5, #0	@ 000aadaa 291c
.org 0xaadac
	bl 0x7c7c	@ 000aadac 5cf766ff
.org 0xaadb0
	lsls r0, r0, #16	@ 000aadb0 0004
.org 0xaadb2
	cmp r0, #0	@ 000aadb2 0028
.org 0xaadb4
	beq.n 0xaadf4	@ 000aadb4 1ed0
.org 0xaadb6
	adds r0, r4, #0	@ 000aadb6 201c
.org 0xaadb8
	adds r1, r5, #0	@ 000aadb8 291c
.org 0xaadba
	bl 0x8748	@ 000aadba 5df7c5fc
.org 0xaadbe
	str r0, [r6, #88]	@ 000aadbe b065
.org 0xaadc0
	mov r0, r8	@ 000aadc0 4046
.org 0xaadc2
	str r0, [r6, #96]	@ 000aadc2 3066
.org 0xaadc4
	b.n 0xaae04	@ 000aadc4 1ee0
.org 0xaadc6
	.byte 0x00	@ 000aadc6 data
.org 0xaadc7
	.byte 0x00	@ 000aadc7 data
.org 0xaadc8
	.byte 0x00,0xfc,0xff,0xff	@ 000aadc8 data
.org 0xaadcc
	.byte 0xb4,0x2b,0x86,0x08	@ 000aadcc data
.org 0xaadd0
	ldr r4, [r6, #84]	@ 000aadd0 746d
.org 0xaadd2
	ldr r5, [r6, #88]	@ 000aadd2 b56d
.org 0xaadd4
	adds r0, r4, #0	@ 000aadd4 201c
.org 0xaadd6
	adds r1, r5, #0	@ 000aadd6 291c
.org 0xaadd8
	bl 0x7c7c	@ 000aadd8 5cf750ff
.org 0xaaddc
	lsls r0, r0, #16	@ 000aaddc 0004
.org 0xaadde
	cmp r0, #0	@ 000aadde 0028
.org 0xaade0
	beq.n 0xaadf4	@ 000aade0 08d0
.org 0xaade2
	adds r0, r4, #0	@ 000aade2 201c
.org 0xaade4
	adds r1, r5, #0	@ 000aade4 291c
.org 0xaade6
	bl 0x8534	@ 000aade6 5df7a5fb
.org 0xaadea
	subs r0, #1	@ 000aadea 0138
.org 0xaadec
	str r0, [r6, #88]	@ 000aadec b065
.org 0xaadee
	movs r0, #1	@ 000aadee 0120
.org 0xaadf0
	mov r8, r0	@ 000aadf0 8046
.org 0xaadf2
	b.n 0xaae04	@ 000aadf2 07e0
.org 0xaadf4
	ldr r0, [r6, #96]	@ 000aadf4 306e
.org 0xaadf6
	adds r0, #64	@ 000aadf6 4030
.org 0xaadf8
	str r0, [r6, #96]	@ 000aadf8 3066
.org 0xaadfa
	movs r1, #224	@ 000aadfa e021
.org 0xaadfc
	lsls r1, r1, #3	@ 000aadfc c900
.org 0xaadfe
	cmp r0, r1	@ 000aadfe 8842
.org 0xaae00
	ble.n 0xaae04	@ 000aae00 00dd
.org 0xaae02
	str r1, [r6, #96]	@ 000aae02 3166
.org 0xaae04
	ldr r0, [r6, #84]	@ 000aae04 706d
.org 0xaae06
	ldr r1, [r6, #92]	@ 000aae06 f16d
.org 0xaae08
	adds r0, r0, r1	@ 000aae08 4018
.org 0xaae0a
	str r0, [r6, #84]	@ 000aae0a 7065
.org 0xaae0c
	cmp r1, #0	@ 000aae0c 0029
.org 0xaae0e
	bge.n 0xaae4e	@ 000aae0e 1eda
.org 0xaae10
	ldr r4, [r6, #84]	@ 000aae10 746d
.org 0xaae12
	ldr r5, [r6, #88]	@ 000aae12 b56d
.org 0xaae14
	adds r0, r4, #0	@ 000aae14 201c
.org 0xaae16
	adds r1, r5, #0	@ 000aae16 291c
.org 0xaae18
	bl 0x7c7c	@ 000aae18 5cf730ff
.org 0xaae1c
	lsls r0, r0, #16	@ 000aae1c 0004
.org 0xaae1e
	cmp r0, #0	@ 000aae1e 0028
.org 0xaae20
	beq.n 0xaaea4	@ 000aae20 40d0
.org 0xaae22
	adds r0, r4, #0	@ 000aae22 201c
.org 0xaae24
	adds r1, r5, #0	@ 000aae24 291c
.org 0xaae26
	bl 0x8988	@ 000aae26 5df7affd
.org 0xaae2a
	str r0, [r6, #84]	@ 000aae2a 7065
.org 0xaae2c
	adds r0, r7, #1	@ 000aae2c 781c
.org 0xaae2e
	movs r1, #1	@ 000aae2e 0121
.org 0xaae30
	ands r0, r1	@ 000aae30 0840
.org 0xaae32
	adds r2, r0, #0	@ 000aae32 021c
.org 0xaae34
	cmp r2, #0	@ 000aae34 002a
.org 0xaae36
	beq.n 0xaae40	@ 000aae36 03d0
.org 0xaae38
	ldrb r1, [r6, #10]	@ 000aae38 b17a
.org 0xaae3a
	movs r0, #16	@ 000aae3a 1020
.org 0xaae3c
	orrs r0, r1	@ 000aae3c 0843
.org 0xaae3e
	b.n 0xaae46	@ 000aae3e 02e0
.org 0xaae40
	ldrb r1, [r6, #10]	@ 000aae40 b17a
.org 0xaae42
	movs r0, #239	@ 000aae42 ef20
.org 0xaae44
	ands r0, r1	@ 000aae44 0840
.org 0xaae46
	strb r0, [r6, #10]	@ 000aae46 b072
.org 0xaae48
	movs r1, #1	@ 000aae48 0121
.org 0xaae4a
	ands r1, r2	@ 000aae4a 1140
.org 0xaae4c
	b.n 0xaae86	@ 000aae4c 1be0
.org 0xaae4e
	ldr r4, [r6, #84]	@ 000aae4e 746d
.org 0xaae50
	ldr r5, [r6, #88]	@ 000aae50 b56d
.org 0xaae52
	adds r0, r4, #0	@ 000aae52 201c
.org 0xaae54
	adds r1, r5, #0	@ 000aae54 291c
.org 0xaae56
	bl 0x7c7c	@ 000aae56 5cf711ff
.org 0xaae5a
	lsls r0, r0, #16	@ 000aae5a 0004
.org 0xaae5c
	cmp r0, #0	@ 000aae5c 0028
.org 0xaae5e
	beq.n 0xaaea4	@ 000aae5e 21d0
.org 0xaae60
	adds r0, r4, #0	@ 000aae60 201c
.org 0xaae62
	adds r1, r5, #0	@ 000aae62 291c
.org 0xaae64
	bl 0x8868	@ 000aae64 5df700fd
.org 0xaae68
	str r0, [r6, #84]	@ 000aae68 7065
.org 0xaae6a
	adds r2, r7, #1	@ 000aae6a 7a1c
.org 0xaae6c
	movs r0, #1	@ 000aae6c 0120
.org 0xaae6e
	ands r2, r0	@ 000aae6e 0240
.org 0xaae70
	cmp r2, #0	@ 000aae70 002a
.org 0xaae72
	beq.n 0xaae7c	@ 000aae72 03d0
.org 0xaae74
	ldrb r1, [r6, #10]	@ 000aae74 b17a
.org 0xaae76
	movs r0, #16	@ 000aae76 1020
.org 0xaae78
	orrs r0, r1	@ 000aae78 0843
.org 0xaae7a
	b.n 0xaae82	@ 000aae7a 02e0
.org 0xaae7c
	ldrb r1, [r6, #10]	@ 000aae7c b17a
.org 0xaae7e
	movs r0, #239	@ 000aae7e ef20
.org 0xaae80
	ands r0, r1	@ 000aae80 0840
.org 0xaae82
	strb r0, [r6, #10]	@ 000aae82 b072
.org 0xaae84
	adds r1, r2, #0	@ 000aae84 111c
.org 0xaae86
	adds r0, r6, #0	@ 000aae86 301c
.org 0xaae88
	adds r0, #76	@ 000aae88 4c30
.org 0xaae8a
	strb r1, [r0, #0]	@ 000aae8a 0170
.org 0xaae8c
	adds r3, r6, #0	@ 000aae8c 331c
.org 0xaae8e
	adds r3, #74	@ 000aae8e 4a33
.org 0xaae90
	lsls r1, r1, #4	@ 000aae90 0901
.org 0xaae92
	ldrb r2, [r3, #0]	@ 000aae92 1a78
.org 0xaae94
	movs r0, #17	@ 000aae94 1120
.org 0xaae96
	negs r0, r0	@ 000aae96 4042
.org 0xaae98
	ands r0, r2	@ 000aae98 1040
.org 0xaae9a
	orrs r0, r1	@ 000aae9a 0843
.org 0xaae9c
	strb r0, [r3, #0]	@ 000aae9c 1870
.org 0xaae9e
	ldr r0, [r6, #92]	@ 000aae9e f06d
.org 0xaaea0
	negs r0, r0	@ 000aaea0 4042
.org 0xaaea2
	str r0, [r6, #92]	@ 000aaea2 f065
.org 0xaaea4
	mov r0, r8	@ 000aaea4 4046
.org 0xaaea6
	cmp r0, #0	@ 000aaea6 0028
.org 0xaaea8
	beq.n 0xaaeb4	@ 000aaea8 04d0
.org 0xaaeaa
	movs r1, #0	@ 000aaeaa 0021
.org 0xaaeac
	movs r0, #1	@ 000aaeac 0120
.org 0xaaeae
	strb r0, [r6, #13]	@ 000aaeae 7073
.org 0xaaeb0
	strb r1, [r6, #14]	@ 000aaeb0 b173
.org 0xaaeb2
	strb r1, [r6, #15]	@ 000aaeb2 f173
