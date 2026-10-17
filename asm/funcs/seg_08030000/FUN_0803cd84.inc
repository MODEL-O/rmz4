@ FUN_0803cd84  entry 0x0803cd84  size 376
.thumb
.org 0x3cd84
FUN_0803cd84:
	push {r4, r5, r6, r7, lr}	@ 0003cd84 f0b5
.org 0x3cd86
	mov r7, r9	@ 0003cd86 4f46
.org 0x3cd88
	mov r6, r8	@ 0003cd88 4646
.org 0x3cd8a
	push {r6, r7}	@ 0003cd8a c0b4
.org 0x3cd8c
	sub sp, #16	@ 0003cd8c 84b0
.org 0x3cd8e
	adds r4, r0, #0	@ 0003cd8e 041c
.org 0x3cd90
	adds r0, #180	@ 0003cd90 b430
.org 0x3cd92
	ldr r7, [r0, #0]	@ 0003cd92 0768
.org 0x3cd94
	ldrb r0, [r7, #13]	@ 0003cd94 787b
.org 0x3cd96
	cmp r0, #0	@ 0003cd96 0028
.org 0x3cd98
	beq.n 0x3cdf4	@ 0003cd98 2cd0
.org 0x3cd9a
	ldrb r1, [r4, #10]	@ 0003cd9a a17a
.org 0x3cd9c
	movs r0, #254	@ 0003cd9c fe20
.org 0x3cd9e
	ands r0, r1	@ 0003cd9e 0840
.org 0x3cda0
	movs r2, #0	@ 0003cda0 0022
.org 0x3cda2
	movs r1, #253	@ 0003cda2 fd21
.org 0x3cda4
	ands r0, r1	@ 0003cda4 0840
.org 0x3cda6
	strb r0, [r4, #10]	@ 0003cda6 a072
.org 0x3cda8
	adds r0, r4, #0	@ 0003cda8 201c
.org 0x3cdaa
	adds r0, #140	@ 0003cdaa 8c30
.org 0x3cdac
	str r2, [r0, #0]	@ 0003cdac 0260
.org 0x3cdae
	adds r0, #4	@ 0003cdae 0430
.org 0x3cdb0
	str r2, [r0, #0]	@ 0003cdb0 0260
.org 0x3cdb2
	adds r0, #4	@ 0003cdb2 0430
.org 0x3cdb4
	strb r2, [r0, #0]	@ 0003cdb4 0270
.org 0x3cdb6
	ldrb r1, [r4, #10]	@ 0003cdb6 a17a
.org 0x3cdb8
	movs r0, #251	@ 0003cdb8 fb20
.org 0x3cdba
	ands r0, r1	@ 0003cdba 0840
.org 0x3cdbc
	strb r0, [r4, #10]	@ 0003cdbc a072
.org 0x3cdbe
	ldr r1, [pc, #16]	@ 0003cdbe 0449
.org 0x3cdc0
	ldrb r0, [r4, #9]	@ 0003cdc0 607a
.org 0x3cdc2
	lsls r0, r0, #2	@ 0003cdc2 8000
.org 0x3cdc4
	adds r0, r0, r1	@ 0003cdc4 4018
.org 0x3cdc6
	movs r1, #3	@ 0003cdc6 0321
.org 0x3cdc8
	str r1, [r4, #12]	@ 0003cdc8 e160
.org 0x3cdca
	ldr r0, [r0, #0]	@ 0003cdca 0068
.org 0x3cdcc
	ldr r0, [r0, #12]	@ 0003cdcc c068
.org 0x3cdce
	b.n 0x3cf04	@ 0003cdce 99e0
.org 0x3cdd0
	.byte 0xf8,0x39,0x85,0x08	@ 0003cdd0 data
.org 0x3cdd4
	adds r0, r7, #0	@ 0003cdd4 381c
.org 0x3cdd6
	add r1, sp, #8	@ 0003cdd6 02a9
.org 0x3cdd8
	movs r2, #0	@ 0003cdd8 0022
.org 0x3cdda
	movs r3, #0	@ 0003cdda 0023
.org 0x3cddc
	bl 0x4b3f8	@ 0003cddc 0ef00cfb
.org 0x3cde0
	adds r0, r7, #0	@ 0003cde0 381c
.org 0x3cde2
	add r1, sp, #8	@ 0003cde2 02a9
.org 0x3cde4
	movs r2, #0	@ 0003cde4 0022
.org 0x3cde6
	movs r3, #1	@ 0003cde6 0123
.org 0x3cde8
	bl 0x4b3f8	@ 0003cde8 0ef006fb
.org 0x3cdec
	ldrb r0, [r4, #15]	@ 0003cdec e07b
.org 0x3cdee
	adds r0, #1	@ 0003cdee 0130
.org 0x3cdf0
	strb r0, [r4, #15]	@ 0003cdf0 e073
.org 0x3cdf2
	b.n 0x3ce4e	@ 0003cdf2 2ce0
.org 0x3cdf4
	ldrb r0, [r4, #18]	@ 0003cdf4 a07c
.org 0x3cdf6
	adds r0, #1	@ 0003cdf6 0130
.org 0x3cdf8
	strb r0, [r4, #18]	@ 0003cdf8 a074
.org 0x3cdfa
	ldrb r0, [r4, #14]	@ 0003cdfa a07b
.org 0x3cdfc
	cmp r0, #0	@ 0003cdfc 0028
.org 0x3cdfe
	bne.n 0x3cee4	@ 0003cdfe 71d1
.org 0x3ce00
	ldrb r0, [r4, #15]	@ 0003ce00 e07b
.org 0x3ce02
	movs r1, #112	@ 0003ce02 7021
.org 0x3ce04
	adds r1, r1, r7	@ 0003ce04 c919
.org 0x3ce06
	mov r8, r1	@ 0003ce06 8846
.org 0x3ce08
	movs r2, #116	@ 0003ce08 7422
.org 0x3ce0a
	adds r2, r2, r4	@ 0003ce0a 1219
.org 0x3ce0c
	mov r9, r2	@ 0003ce0c 9146
.org 0x3ce0e
	cmp r0, #0	@ 0003ce0e 0028
.org 0x3ce10
	bne.n 0x3ce4e	@ 0003ce10 1dd1
.org 0x3ce12
	movs r6, #24	@ 0003ce12 1826
.org 0x3ce14
	movs r5, #192	@ 0003ce14 c025
.org 0x3ce16
	lsls r5, r5, #5	@ 0003ce16 6d01
.org 0x3ce18
	ldrb r1, [r4, #10]	@ 0003ce18 a17a
.org 0x3ce1a
	movs r0, #16	@ 0003ce1a 1020
.org 0x3ce1c
	ands r0, r1	@ 0003ce1c 0840
.org 0x3ce1e
	cmp r0, #0	@ 0003ce1e 0028
.org 0x3ce20
	beq.n 0x3ce28	@ 0003ce20 02d0
.org 0x3ce22
	ldr r0, [r4, #84]	@ 0003ce22 606d
.org 0x3ce24
	adds r0, r0, r5	@ 0003ce24 4019
.org 0x3ce26
	b.n 0x3ce2c	@ 0003ce26 01e0
.org 0x3ce28
	ldr r0, [r4, #84]	@ 0003ce28 606d
.org 0x3ce2a
	subs r0, r0, r5	@ 0003ce2a 401b
.org 0x3ce2c
	str r0, [sp, #8]	@ 0003ce2c 0290
.org 0x3ce2e
	ldr r1, [r4, #88]	@ 0003ce2e a16d
.org 0x3ce30
	ldr r0, [pc, #76]	@ 0003ce30 1348
.org 0x3ce32
	adds r1, r1, r0	@ 0003ce32 0918
.org 0x3ce34
	str r1, [sp, #12]	@ 0003ce34 0391
.org 0x3ce36
	ldr r0, [sp, #8]	@ 0003ce36 0298
.org 0x3ce38
	bl 0x4b980	@ 0003ce38 0ef0a2fd
.org 0x3ce3c
	lsls r0, r0, #16	@ 0003ce3c 0004
.org 0x3ce3e
	cmp r0, #0	@ 0003ce3e 0028
.org 0x3ce40
	bne.n 0x3cdd4	@ 0003ce40 c8d1
.org 0x3ce42
	movs r1, #192	@ 0003ce42 c021
.org 0x3ce44
	lsls r1, r1, #3	@ 0003ce44 c900
.org 0x3ce46
	adds r5, r5, r1	@ 0003ce46 6d18
.org 0x3ce48
	adds r6, #6	@ 0003ce48 0636
.org 0x3ce4a
	cmp r6, #60	@ 0003ce4a 3c2e
.org 0x3ce4c
	ble.n 0x3ce18	@ 0003ce4c e4dd
.org 0x3ce4e
	ldrb r0, [r7, #30]	@ 0003ce4e b87f
.org 0x3ce50
	lsls r0, r0, #8	@ 0003ce50 0002
.org 0x3ce52
	mov r2, r8	@ 0003ce52 4246
.org 0x3ce54
	ldrb r1, [r2, #0]	@ 0003ce54 1178
.org 0x3ce56
	orrs r1, r0	@ 0003ce56 0143
.org 0x3ce58
	movs r0, #192	@ 0003ce58 c020
.org 0x3ce5a
	lsls r0, r0, #5	@ 0003ce5a 4001
.org 0x3ce5c
	cmp r1, r0	@ 0003ce5c 8142
.org 0x3ce5e
	beq.n 0x3ceac	@ 0003ce5e 25d0
.org 0x3ce60
	ldrb r1, [r4, #30]	@ 0003ce60 a17f
.org 0x3ce62
	lsls r1, r1, #8	@ 0003ce62 0902
.org 0x3ce64
	adds r0, r4, #0	@ 0003ce64 201c
.org 0x3ce66
	adds r0, #112	@ 0003ce66 7030
.org 0x3ce68
	ldrb r0, [r0, #0]	@ 0003ce68 0078
.org 0x3ce6a
	orrs r0, r1	@ 0003ce6a 0843
.org 0x3ce6c
	movs r1, #210	@ 0003ce6c d221
.org 0x3ce6e
	lsls r1, r1, #7	@ 0003ce6e c901
.org 0x3ce70
	cmp r0, r1	@ 0003ce70 8842
.org 0x3ce72
	bne.n 0x3ce84	@ 0003ce72 07d1
.org 0x3ce74
	adds r1, #1	@ 0003ce74 0131
.org 0x3ce76
	adds r0, r4, #0	@ 0003ce76 201c
.org 0x3ce78
	bl 0x1cf00	@ 0003ce78 e0f742f8
.org 0x3ce7c
	b.n 0x3ce8c	@ 0003ce7c 06e0
.org 0x3ce7e
	.byte 0x00	@ 0003ce7e data
.org 0x3ce7f
	.byte 0x00	@ 0003ce7f data
.org 0x3ce80
	.byte 0x00,0xf6,0xff,0xff	@ 0003ce80 data
.org 0x3ce84
	ldr r1, [pc, #28]	@ 0003ce84 0749
.org 0x3ce86
	adds r0, r4, #0	@ 0003ce86 201c
.org 0x3ce88
	bl 0x1cf00	@ 0003ce88 e0f73af8
.org 0x3ce8c
	adds r0, r4, #0	@ 0003ce8c 201c
.org 0x3ce8e
	bl 0x1cff0	@ 0003ce8e e0f7aff8
.org 0x3ce92
	ldr r1, [pc, #20]	@ 0003ce92 0549
.org 0x3ce94
	mov r0, r9	@ 0003ce94 4846
.org 0x3ce96
	bl 0x5784	@ 0003ce96 c8f775fc
.org 0x3ce9a
	ldrb r0, [r4, #14]	@ 0003ce9a a07b
.org 0x3ce9c
	adds r0, #1	@ 0003ce9c 0130
.org 0x3ce9e
	strb r0, [r4, #14]	@ 0003ce9e a073
.org 0x3cea0
	b.n 0x3cf06	@ 0003cea0 31e0
.org 0x3cea2
	.byte 0x00	@ 0003cea2 data
.org 0x3cea3
	.byte 0x00	@ 0003cea3 data
.org 0x3cea4
	.byte 0x03,0x69,0x00,0x00	@ 0003cea4 data
.org 0x3cea8
	.byte 0x24,0x4d,0x85,0x08	@ 0003cea8 data
.org 0x3ceac
	adds r0, r4, #0	@ 0003ceac 201c
.org 0x3ceae
	bl 0x1cff0	@ 0003ceae e0f79ff8
.org 0x3ceb2
	ldrb r0, [r4, #18]	@ 0003ceb2 a07c
.org 0x3ceb4
	lsrs r5, r0, #2	@ 0003ceb4 8508
.org 0x3ceb6
	cmp r5, #2	@ 0003ceb6 022d
.org 0x3ceb8
	bls.n 0x3cebc	@ 0003ceb8 00d9
.org 0x3ceba
	movs r5, #2	@ 0003ceba 0225
.org 0x3cebc
	ldr r1, [pc, #32]	@ 0003cebc 0849
.org 0x3cebe
	ldrb r0, [r4, #16]	@ 0003cebe 207c
.org 0x3cec0
	lsls r0, r0, #2	@ 0003cec0 8000
.org 0x3cec2
	adds r0, r0, r1	@ 0003cec2 4018
.org 0x3cec4
	ldr r0, [r0, #0]	@ 0003cec4 0068
.org 0x3cec6
	ldr r1, [r0, #0]	@ 0003cec6 0168
.org 0x3cec8
	adds r0, r4, #0	@ 0003cec8 201c
.org 0x3ceca
	adds r0, #180	@ 0003ceca b430
.org 0x3cecc
	ldrb r2, [r0, #13]	@ 0003cecc 427b
.org 0x3cece
	ldrb r3, [r0, #12]	@ 0003cece 037b
.org 0x3ced0
	ldrb r0, [r0, #14]	@ 0003ced0 807b
.org 0x3ced2
	str r0, [sp, #0]	@ 0003ced2 0090
.org 0x3ced4
	adds r0, r5, #1	@ 0003ced4 681c
.org 0x3ced6
	str r0, [sp, #4]	@ 0003ced6 0190
.org 0x3ced8
	mov r0, r9	@ 0003ced8 4846
.org 0x3ceda
	bl 0x5794	@ 0003ceda c8f75bfc
.org 0x3cede
	b.n 0x3cf06	@ 0003cede 12e0
.org 0x3cee0
	.byte 0x10,0x50,0x85,0x08	@ 0003cee0 data
.org 0x3cee4
	adds r0, r4, #0	@ 0003cee4 201c
.org 0x3cee6
	bl 0x1cff0	@ 0003cee6 e0f783f8
.org 0x3ceea
	adds r0, r4, #0	@ 0003ceea 201c
.org 0x3ceec
	adds r0, #115	@ 0003ceec 7330
.org 0x3ceee
	ldrb r0, [r0, #0]	@ 0003ceee 0078
.org 0x3cef0
	cmp r0, #3	@ 0003cef0 0328
.org 0x3cef2
	bne.n 0x3cf06	@ 0003cef2 08d1
.org 0x3cef4
	ldr r1, [pc, #28]	@ 0003cef4 0749
.org 0x3cef6
	ldrb r0, [r4, #9]	@ 0003cef6 607a
.org 0x3cef8
	lsls r0, r0, #2	@ 0003cef8 8000
.org 0x3cefa
	adds r0, r0, r1	@ 0003cefa 4018
