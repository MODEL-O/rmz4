@ FUN_0807ce1c  entry 0x0807ce1c  size 322
.thumb
.org 0x7ce1c
FUN_0807ce1c:
	push {r4, r5, r6, lr}	@ 0007ce1c 70b5
.org 0x7ce1e
	sub sp, #12	@ 0007ce1e 83b0
.org 0x7ce20
	adds r4, r0, #0	@ 0007ce20 041c
.org 0x7ce22
	ldr r1, [pc, #76]	@ 0007ce22 1349
.org 0x7ce24
	mov r0, sp	@ 0007ce24 6846
.org 0x7ce26
	movs r2, #2	@ 0007ce26 0222
.org 0x7ce28
	bl 0x129258	@ 0007ce28 acf016fa
.org 0x7ce2c
	adds r0, r4, #0	@ 0007ce2c 201c
.org 0x7ce2e
	adds r0, #213	@ 0007ce2e d530
.org 0x7ce30
	ldrb r5, [r0, #0]	@ 0007ce30 0578
.org 0x7ce32
	ldrb r1, [r4, #15]	@ 0007ce32 e17b
.org 0x7ce34
	cmp r1, #0	@ 0007ce34 0029
.org 0x7ce36
	bne.n 0x7ceb0	@ 0007ce36 3bd1
.org 0x7ce38
	ldr r0, [pc, #56]	@ 0007ce38 0e48
.org 0x7ce3a
	strh r1, [r0, #0]	@ 0007ce3a 0180
.org 0x7ce3c
	adds r2, r4, #0	@ 0007ce3c 221c
.org 0x7ce3e
	adds r2, #69	@ 0007ce3e 4532
.org 0x7ce40
	ldrb r1, [r2, #0]	@ 0007ce40 1178
.org 0x7ce42
	movs r0, #13	@ 0007ce42 0d20
.org 0x7ce44
	negs r0, r0	@ 0007ce44 4042
.org 0x7ce46
	ands r0, r1	@ 0007ce46 0840
.org 0x7ce48
	strb r0, [r2, #0]	@ 0007ce48 1070
.org 0x7ce4a
	adds r0, r4, #0	@ 0007ce4a 201c
.org 0x7ce4c
	adds r0, #208	@ 0007ce4c d030
.org 0x7ce4e
	ldr r0, [r0, #0]	@ 0007ce4e 0068
.org 0x7ce50
	cmp r0, #0	@ 0007ce50 0028
.org 0x7ce52
	bne.n 0x7ce7c	@ 0007ce52 13d1
.org 0x7ce54
	movs r0, #13	@ 0007ce54 0d20
.org 0x7ce56
	strb r0, [r4, #14]	@ 0007ce56 a073
.org 0x7ce58
	movs r0, #0	@ 0007ce58 0020
.org 0x7ce5a
	strb r0, [r4, #15]	@ 0007ce5a e073
.org 0x7ce5c
	ldr r1, [pc, #24]	@ 0007ce5c 0649
.org 0x7ce5e
	ldrb r0, [r4, #13]	@ 0007ce5e 607b
.org 0x7ce60
	lsls r0, r0, #2	@ 0007ce60 8000
.org 0x7ce62
	adds r0, r0, r1	@ 0007ce62 4018
.org 0x7ce64
	ldr r1, [r0, #0]	@ 0007ce64 0168
.org 0x7ce66
	adds r0, r4, #0	@ 0007ce66 201c
.org 0x7ce68
	bl 0x128f80	@ 0007ce68 acf08af8
.org 0x7ce6c
	b.n 0x7cf6e	@ 0007ce6c 7fe0
.org 0x7ce6e
	.byte 0x00	@ 0007ce6e data
.org 0x7ce6f
	.byte 0x00	@ 0007ce6f data
.org 0x7ce70
	.byte 0x28,0x9a,0x12,0x08	@ 0007ce70 data
.org 0x7ce74
	.byte 0x40,0x0a,0x00,0x02	@ 0007ce74 data
.org 0x7ce78
	.byte 0xa4,0xd4,0x85,0x08	@ 0007ce78 data
.org 0x7ce7c
	adds r0, r4, #0	@ 0007ce7c 201c
.org 0x7ce7e
	movs r1, #0	@ 0007ce7e 0021
.org 0x7ce80
	bl 0x7e8c8	@ 0007ce80 01f022fd
.org 0x7ce84
	movs r6, #0	@ 0007ce84 0026
.org 0x7ce86
	movs r1, #0	@ 0007ce86 0021
.org 0x7ce88
	movs r3, #1	@ 0007ce88 0123
.org 0x7ce8a
	lsrs r0, r1, #31	@ 0007ce8a c80f
.org 0x7ce8c
	adds r0, r1, r0	@ 0007ce8c 0818
.org 0x7ce8e
	asrs r2, r0, #1	@ 0007ce8e 4210
.org 0x7ce90
	cmp r2, r5	@ 0007ce90 aa42
.org 0x7ce92
	beq.n 0x7ce9a	@ 0007ce92 02d0
.org 0x7ce94
	adds r0, r3, #0	@ 0007ce94 181c
.org 0x7ce96
	lsls r0, r1	@ 0007ce96 8840
.org 0x7ce98
	orrs r6, r0	@ 0007ce98 0643
.org 0x7ce9a
	adds r1, #1	@ 0007ce9a 0131
.org 0x7ce9c
	cmp r1, #7	@ 0007ce9c 0729
.org 0x7ce9e
	ble.n 0x7ce8a	@ 0007ce9e f4dd
.org 0x7cea0
	str r6, [r4, #100]	@ 0007cea0 6666
.org 0x7cea2
	movs r1, #0	@ 0007cea2 0021
.org 0x7cea4
	movs r0, #48	@ 0007cea4 3020
.org 0x7cea6
	strb r0, [r4, #18]	@ 0007cea6 a074
.org 0x7cea8
	strb r1, [r4, #19]	@ 0007cea8 e174
.org 0x7ceaa
	ldrb r0, [r4, #15]	@ 0007ceaa e07b
.org 0x7ceac
	adds r0, #1	@ 0007ceac 0130
.org 0x7ceae
	strb r0, [r4, #15]	@ 0007ceae e073
.org 0x7ceb0
	ldr r6, [r4, #100]	@ 0007ceb0 666e
.org 0x7ceb2
	adds r5, r4, #0	@ 0007ceb2 251c
.org 0x7ceb4
	adds r5, #188	@ 0007ceb4 bc35
.org 0x7ceb6
	ldrb r0, [r5, #0]	@ 0007ceb6 2878
.org 0x7ceb8
	cmp r0, #0	@ 0007ceb8 0028
.org 0x7ceba
	beq.n 0x7cec2	@ 0007ceba 02d0
.org 0x7cebc
	adds r0, r4, #0	@ 0007cebc 201c
.org 0x7cebe
	bl 0x1cff0	@ 0007cebe a0f797f8
.org 0x7cec2
	adds r0, r4, #0	@ 0007cec2 201c
.org 0x7cec4
	adds r0, #116	@ 0007cec4 7430
.org 0x7cec6
	ldr r3, [pc, #68]	@ 0007cec6 114b
.org 0x7cec8
	ldr r2, [pc, #68]	@ 0007cec8 114a
.org 0x7ceca
	ldrb r1, [r5, #0]	@ 0007ceca 2978
.org 0x7cecc
	lsls r1, r1, #1	@ 0007cecc 4900
.org 0x7cece
	adds r1, r1, r2	@ 0007cece 8918
.org 0x7ced0
	ldrh r2, [r1, #0]	@ 0007ced0 0a88
.org 0x7ced2
	lsls r2, r2, #2	@ 0007ced2 9200
.org 0x7ced4
	adds r2, r2, r3	@ 0007ced4 d218
.org 0x7ced6
	adds r1, r4, #0	@ 0007ced6 211c
.org 0x7ced8
	adds r1, #113	@ 0007ced8 7131
.org 0x7ceda
	ldrb r1, [r1, #0]	@ 0007ceda 0978
.org 0x7cedc
	lsls r1, r1, #24	@ 0007cedc 0906
.org 0x7cede
	asrs r1, r1, #24	@ 0007cede 0916
.org 0x7cee0
	ldr r2, [r2, #0]	@ 0007cee0 1268
.org 0x7cee2
	lsls r1, r1, #2	@ 0007cee2 8900
.org 0x7cee4
	adds r1, r1, r2	@ 0007cee4 8918
.org 0x7cee6
	ldr r1, [r1, #0]	@ 0007cee6 0968
.org 0x7cee8
	bl 0x5784	@ 0007cee8 88f74cfc
.org 0x7ceec
	ldrb r0, [r4, #18]	@ 0007ceec a07c
.org 0x7ceee
	subs r0, #1	@ 0007ceee 0138
.org 0x7cef0
	strb r0, [r4, #18]	@ 0007cef0 a074
.org 0x7cef2
	lsls r0, r0, #24	@ 0007cef2 0006
.org 0x7cef4
	cmp r0, #0	@ 0007cef4 0028
.org 0x7cef6
	bne.n 0x7cf6c	@ 0007cef6 39d1
.org 0x7cef8
	movs r1, #255	@ 0007cef8 ff21
.org 0x7cefa
	ands r1, r6	@ 0007cefa 3140
.org 0x7cefc
	cmp r1, #0	@ 0007cefc 0029
.org 0x7cefe
	bne.n 0x7cf14	@ 0007cefe 09d1
.org 0x7cf00
	ldrb r0, [r4, #14]	@ 0007cf00 a07b
.org 0x7cf02
	adds r0, #1	@ 0007cf02 0130
.org 0x7cf04
	strb r0, [r4, #14]	@ 0007cf04 a073
.org 0x7cf06
	strb r1, [r4, #15]	@ 0007cf06 e173
.org 0x7cf08
	b.n 0x7cf6e	@ 0007cf08 31e0
.org 0x7cf0a
	.byte 0x00	@ 0007cf0a data
.org 0x7cf0b
	.byte 0x00	@ 0007cf0b data
.org 0x7cf0c
	.byte 0xd8,0xd7,0x85,0x08	@ 0007cf0c data
.org 0x7cf10
	.byte 0xe4,0xd7,0x85,0x08	@ 0007cf10 data
.org 0x7cf14
	adds r0, r4, #0	@ 0007cf14 201c
.org 0x7cf16
	adds r0, #208	@ 0007cf16 d030
.org 0x7cf18
	ldr r0, [r0, #0]	@ 0007cf18 0068
.org 0x7cf1a
	ldr r1, [r0, #88]	@ 0007cf1a 816d
.org 0x7cf1c
	ldr r0, [r0, #84]	@ 0007cf1c 406d
.org 0x7cf1e
	str r0, [sp, #4]	@ 0007cf1e 0190
.org 0x7cf20
	str r1, [sp, #8]	@ 0007cf20 0291
.org 0x7cf22
	ldrb r1, [r4, #19]	@ 0007cf22 e17c
.org 0x7cf24
	lsls r0, r1, #1	@ 0007cf24 4800
.org 0x7cf26
	subs r2, r0, #1	@ 0007cf26 421e
.org 0x7cf28
	mov r3, sp	@ 0007cf28 6b46
.org 0x7cf2a
	adds r0, r3, r1	@ 0007cf2a 5818
.org 0x7cf2c
	ldrb r5, [r0, #0]	@ 0007cf2c 0578
.org 0x7cf2e
	adds r0, r6, #0	@ 0007cf2e 301c
.org 0x7cf30
	asrs r0, r5	@ 0007cf30 2841
.org 0x7cf32
	movs r1, #1	@ 0007cf32 0121
.org 0x7cf34
	ands r0, r1	@ 0007cf34 0840
.org 0x7cf36
	add r1, sp, #4	@ 0007cf36 01a9
.org 0x7cf38
	cmp r0, #0	@ 0007cf38 0028
.org 0x7cf3a
	bne.n 0x7cf4e	@ 0007cf3a 08d1
.org 0x7cf3c
	movs r3, #1	@ 0007cf3c 0123
.org 0x7cf3e
	adds r0, r5, r2	@ 0007cf3e a818
.org 0x7cf40
	lsls r0, r0, #24	@ 0007cf40 0006
.org 0x7cf42
	lsrs r5, r0, #24	@ 0007cf42 050e
.org 0x7cf44
	adds r0, r6, #0	@ 0007cf44 301c
.org 0x7cf46
	asrs r0, r5	@ 0007cf46 2841
.org 0x7cf48
	ands r0, r3	@ 0007cf48 1840
.org 0x7cf4a
	cmp r0, #0	@ 0007cf4a 0028
.org 0x7cf4c
	beq.n 0x7cf3e	@ 0007cf4c f7d0
.org 0x7cf4e
	adds r0, r4, #0	@ 0007cf4e 201c
.org 0x7cf50
	movs r2, #1	@ 0007cf50 0122
.org 0x7cf52
	adds r3, r5, #0	@ 0007cf52 2b1c
.org 0x7cf54
	bl 0xcf36c	@ 0007cf54 52f00afa
.org 0x7cf58
	movs r0, #48	@ 0007cf58 3020
.org 0x7cf5a
	strb r0, [r4, #18]	@ 0007cf5a a074
.org 0x7cf5c
	ldrb r0, [r4, #19]	@ 0007cf5c e07c
