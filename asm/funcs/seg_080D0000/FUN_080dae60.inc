@ FUN_080dae60  entry 0x080dae60  size 310
.thumb
.org 0xdae60
FUN_080dae60:
	push {r4, r5, lr}	@ 000dae60 30b5
.org 0xdae62
	mov ip, r0	@ 000dae62 8446
.org 0xdae64
	ldrb r0, [r0, #14]	@ 000dae64 807b
.org 0xdae66
	cmp r0, #0	@ 000dae66 0028
.org 0xdae68
	bne.n 0xdaea0	@ 000dae68 1ad1
.org 0xdae6a
	ldr r1, [pc, #88]	@ 000dae6a 1649
.org 0xdae6c
	ldrh r2, [r1, #0]	@ 000dae6c 0a88
.org 0xdae6e
	movs r3, #128	@ 000dae6e 8023
.org 0xdae70
	lsls r3, r3, #7	@ 000dae70 db01
.org 0xdae72
	adds r0, r3, #0	@ 000dae72 181c
.org 0xdae74
	movs r3, #0	@ 000dae74 0023
.org 0xdae76
	orrs r0, r2	@ 000dae76 1043
.org 0xdae78
	strh r0, [r1, #0]	@ 000dae78 0880
.org 0xdae7a
	movs r0, #49	@ 000dae7a 3120
.org 0xdae7c
	strb r0, [r1, #13]	@ 000dae7c 4873
.org 0xdae7e
	ldrb r2, [r1, #14]	@ 000dae7e 8a7b
.org 0xdae80
	movs r0, #14	@ 000dae80 0e20
.org 0xdae82
	orrs r0, r2	@ 000dae82 1043
.org 0xdae84
	strb r0, [r1, #14]	@ 000dae84 8873
.org 0xdae86
	mov r0, ip	@ 000dae86 6046
.org 0xdae88
	adds r0, #116	@ 000dae88 7430
.org 0xdae8a
	strb r3, [r0, #0]	@ 000dae8a 0370
.org 0xdae8c
	adds r0, #1	@ 000dae8c 0130
.org 0xdae8e
	strb r3, [r0, #0]	@ 000dae8e 0370
.org 0xdae90
	adds r0, #1	@ 000dae90 0130
.org 0xdae92
	strb r3, [r0, #0]	@ 000dae92 0370
.org 0xdae94
	adds r0, #4	@ 000dae94 0430
.org 0xdae96
	strb r3, [r0, #0]	@ 000dae96 0370
.org 0xdae98
	mov r1, ip	@ 000dae98 6146
.org 0xdae9a
	ldrb r0, [r1, #14]	@ 000dae9a 887b
.org 0xdae9c
	adds r0, #1	@ 000dae9c 0130
.org 0xdae9e
	strb r0, [r1, #14]	@ 000dae9e 8873
.org 0xdaea0
	ldr r1, [pc, #36]	@ 000daea0 0949
.org 0xdaea2
	ldrh r2, [r1, #6]	@ 000daea2 ca88
.org 0xdaea4
	movs r0, #128	@ 000daea4 8020
.org 0xdaea6
	lsls r0, r0, #2	@ 000daea6 8000
.org 0xdaea8
	ands r0, r2	@ 000daea8 1040
.org 0xdaeaa
	adds r5, r1, #0	@ 000daeaa 0d1c
.org 0xdaeac
	cmp r0, #0	@ 000daeac 0028
.org 0xdaeae
	beq.n 0xdaecc	@ 000daeae 0dd0
.org 0xdaeb0
	mov r0, ip	@ 000daeb0 6046
.org 0xdaeb2
	adds r0, #122	@ 000daeb2 7a30
.org 0xdaeb4
	ldrb r3, [r0, #0]	@ 000daeb4 0378
.org 0xdaeb6
	adds r4, r3, #3	@ 000daeb6 dc1c
.org 0xdaeb8
	adds r2, r4, #0	@ 000daeb8 221c
.org 0xdaeba
	adds r1, r0, #0	@ 000daeba 011c
.org 0xdaebc
	asrs r0, r2, #2	@ 000daebc 9010
.org 0xdaebe
	lsls r0, r0, #2	@ 000daebe 8000
.org 0xdaec0
	subs r0, r4, r0	@ 000daec0 201a
.org 0xdaec2
	b.n 0xdaee6	@ 000daec2 10e0
.org 0xdaec4
	.byte 0x50,0x0a,0x00,0x02	@ 000daec4 data
.org 0xdaec8
	.byte 0x60,0x07,0x00,0x02	@ 000daec8 data
.org 0xdaecc
	movs r0, #128	@ 000daecc 8020
.org 0xdaece
	lsls r0, r0, #1	@ 000daece 4000
.org 0xdaed0
	ands r0, r2	@ 000daed0 1040
.org 0xdaed2
	mov r1, ip	@ 000daed2 6146
.org 0xdaed4
	adds r1, #122	@ 000daed4 7a31
.org 0xdaed6
	cmp r0, #0	@ 000daed6 0028
.org 0xdaed8
	beq.n 0xdaee8	@ 000daed8 06d0
.org 0xdaeda
	ldrb r2, [r1, #0]	@ 000daeda 0a78
.org 0xdaedc
	adds r3, r2, #1	@ 000daedc 531c
.org 0xdaede
	adds r0, r3, #0	@ 000daede 181c
.org 0xdaee0
	asrs r0, r0, #2	@ 000daee0 8010
.org 0xdaee2
	lsls r0, r0, #2	@ 000daee2 8000
.org 0xdaee4
	subs r0, r3, r0	@ 000daee4 181a
.org 0xdaee6
	strb r0, [r1, #0]	@ 000daee6 0870
.org 0xdaee8
	ldrb r0, [r1, #0]	@ 000daee8 0878
.org 0xdaeea
	cmp r0, #1	@ 000daeea 0128
.org 0xdaeec
	beq.n 0xdaf04	@ 000daeec 0ad0
.org 0xdaeee
	cmp r0, #1	@ 000daeee 0128
.org 0xdaef0
	bgt.n 0xdaef8	@ 000daef0 02dc
.org 0xdaef2
	cmp r0, #0	@ 000daef2 0028
.org 0xdaef4
	beq.n 0xdaefe	@ 000daef4 03d0
.org 0xdaef6
	b.n 0xdaf10	@ 000daef6 0be0
.org 0xdaef8
	cmp r0, #2	@ 000daef8 0228
.org 0xdaefa
	beq.n 0xdaf0a	@ 000daefa 06d0
.org 0xdaefc
	b.n 0xdaf10	@ 000daefc 08e0
.org 0xdaefe
	mov r2, ip	@ 000daefe 6246
.org 0xdaf00
	adds r2, #84	@ 000daf00 5432
.org 0xdaf02
	b.n 0xdaf14	@ 000daf02 07e0
.org 0xdaf04
	mov r2, ip	@ 000daf04 6246
.org 0xdaf06
	adds r2, #100	@ 000daf06 6432
.org 0xdaf08
	b.n 0xdaf14	@ 000daf08 04e0
.org 0xdaf0a
	mov r2, ip	@ 000daf0a 6246
.org 0xdaf0c
	adds r2, #92	@ 000daf0c 5c32
.org 0xdaf0e
	b.n 0xdaf14	@ 000daf0e 01e0
.org 0xdaf10
	mov r2, ip	@ 000daf10 6246
.org 0xdaf12
	adds r2, #124	@ 000daf12 7c32
.org 0xdaf14
	adds r3, r5, #0	@ 000daf14 2b1c
.org 0xdaf16
	ldrh r1, [r3, #6]	@ 000daf16 d988
.org 0xdaf18
	movs r0, #64	@ 000daf18 4020
.org 0xdaf1a
	ands r0, r1	@ 000daf1a 0840
.org 0xdaf1c
	cmp r0, #0	@ 000daf1c 0028
.org 0xdaf1e
	beq.n 0xdaf28	@ 000daf1e 03d0
.org 0xdaf20
	ldr r0, [r2, #4]	@ 000daf20 5068
.org 0xdaf22
	ldr r1, [pc, #96]	@ 000daf22 1849
.org 0xdaf24
	adds r0, r0, r1	@ 000daf24 4018
.org 0xdaf26
	str r0, [r2, #4]	@ 000daf26 5060
.org 0xdaf28
	ldrh r1, [r3, #6]	@ 000daf28 d988
.org 0xdaf2a
	movs r0, #128	@ 000daf2a 8020
.org 0xdaf2c
	ands r0, r1	@ 000daf2c 0840
.org 0xdaf2e
	cmp r0, #0	@ 000daf2e 0028
.org 0xdaf30
	beq.n 0xdaf3c	@ 000daf30 04d0
.org 0xdaf32
	ldr r0, [r2, #4]	@ 000daf32 5068
.org 0xdaf34
	movs r1, #128	@ 000daf34 8021
.org 0xdaf36
	lsls r1, r1, #1	@ 000daf36 4900
.org 0xdaf38
	adds r0, r0, r1	@ 000daf38 4018
.org 0xdaf3a
	str r0, [r2, #4]	@ 000daf3a 5060
.org 0xdaf3c
	ldrh r1, [r3, #6]	@ 000daf3c d988
.org 0xdaf3e
	movs r0, #32	@ 000daf3e 2020
.org 0xdaf40
	ands r0, r1	@ 000daf40 0840
.org 0xdaf42
	cmp r0, #0	@ 000daf42 0028
.org 0xdaf44
	beq.n 0xdaf4e	@ 000daf44 03d0
.org 0xdaf46
	ldr r0, [r2, #0]	@ 000daf46 1068
.org 0xdaf48
	ldr r3, [pc, #56]	@ 000daf48 0e4b
.org 0xdaf4a
	adds r0, r0, r3	@ 000daf4a c018
.org 0xdaf4c
	str r0, [r2, #0]	@ 000daf4c 1060
.org 0xdaf4e
	ldrh r1, [r5, #6]	@ 000daf4e e988
.org 0xdaf50
	movs r0, #16	@ 000daf50 1020
.org 0xdaf52
	ands r0, r1	@ 000daf52 0840
.org 0xdaf54
	cmp r0, #0	@ 000daf54 0028
.org 0xdaf56
	beq.n 0xdaf62	@ 000daf56 04d0
.org 0xdaf58
	ldr r0, [r2, #0]	@ 000daf58 1068
.org 0xdaf5a
	movs r1, #128	@ 000daf5a 8021
.org 0xdaf5c
	lsls r1, r1, #1	@ 000daf5c 4900
.org 0xdaf5e
	adds r0, r0, r1	@ 000daf5e 4018
.org 0xdaf60
	str r0, [r2, #0]	@ 000daf60 1060
.org 0xdaf62
	mov r3, ip	@ 000daf62 6346
.org 0xdaf64
	ldrb r0, [r3, #19]	@ 000daf64 d87c
.org 0xdaf66
	adds r0, #1	@ 000daf66 0130
.org 0xdaf68
	strb r0, [r3, #19]	@ 000daf68 d874
.org 0xdaf6a
	movs r1, #1	@ 000daf6a 0121
.org 0xdaf6c
	ands r0, r1	@ 000daf6c 0840
.org 0xdaf6e
	cmp r0, #0	@ 000daf6e 0028
.org 0xdaf70
	beq.n 0xdaf88	@ 000daf70 0ad0
.org 0xdaf72
	mov r0, ip	@ 000daf72 6046
.org 0xdaf74
	adds r0, #116	@ 000daf74 7430
.org 0xdaf76
	movs r1, #31	@ 000daf76 1f21
.org 0xdaf78
	strb r1, [r0, #0]	@ 000daf78 0170
.org 0xdaf7a
	adds r0, #1	@ 000daf7a 0130
.org 0xdaf7c
	strb r1, [r0, #0]	@ 000daf7c 0170
.org 0xdaf7e
	adds r0, #1	@ 000daf7e 0130
.org 0xdaf80
	b.n 0xdaf9c	@ 000daf80 0ce0
.org 0xdaf82
	.byte 0x00	@ 000daf82 data
.org 0xdaf83
	.byte 0x00	@ 000daf83 data
.org 0xdaf84
	.byte 0x00,0xff,0xff,0xff	@ 000daf84 data
.org 0xdaf88
	mov r0, ip	@ 000daf88 6046
.org 0xdaf8a
	adds r0, #116	@ 000daf8a 7430
.org 0xdaf8c
	movs r1, #24	@ 000daf8c 1821
.org 0xdaf8e
	strb r1, [r0, #0]	@ 000daf8e 0170
.org 0xdaf90
	mov r2, ip	@ 000daf90 6246
.org 0xdaf92
	adds r2, #117	@ 000daf92 7532
.org 0xdaf94
	movs r0, #31	@ 000daf94 1f20
