@ FUN_080bbafc  entry 0x080bbafc  size 132
.thumb
.org 0xbbafc
FUN_080bbafc:
	push {r4, lr}	@ 000bbafc 10b5
.org 0xbbafe
	sub sp, #8	@ 000bbafe 82b0
.org 0xbbb00
	adds r4, r0, #0	@ 000bbb00 041c
.org 0xbbb02
	ldr r1, [r4, #40]	@ 000bbb02 a16a
.org 0xbbb04
	ldrb r0, [r4, #10]	@ 000bbb04 a07a
.org 0xbbb06
	lsrs r3, r0, #4	@ 000bbb06 0309
.org 0xbbb08
	movs r0, #1	@ 000bbb08 0120
.org 0xbbb0a
	ands r3, r0	@ 000bbb0a 0340
.org 0xbbb0c
	ldrb r0, [r4, #15]	@ 000bbb0c e07b
.org 0xbbb0e
	cmp r0, #0	@ 000bbb0e 0028
.org 0xbbb10
	bne.n 0xbbb52	@ 000bbb10 1fd1
.org 0xbbb12
	adds r0, r1, #0	@ 000bbb12 081c
.org 0xbbb14
	adds r0, #180	@ 000bbb14 b430
.org 0xbbb16
	ldr r0, [r0, #0]	@ 000bbb16 0068
.org 0xbbb18
	movs r2, #240	@ 000bbb18 f022
.org 0xbbb1a
	lsls r2, r2, #7	@ 000bbb1a d201
.org 0xbbb1c
	adds r0, r0, r2	@ 000bbb1c 8018
.org 0xbbb1e
	str r0, [sp, #0]	@ 000bbb1e 0090
.org 0xbbb20
	adds r0, r1, #0	@ 000bbb20 081c
.org 0xbbb22
	adds r0, #184	@ 000bbb22 b830
.org 0xbbb24
	ldr r0, [r0, #0]	@ 000bbb24 0068
.org 0xbbb26
	ldr r2, [pc, #88]	@ 000bbb26 164a
.org 0xbbb28
	adds r0, r0, r2	@ 000bbb28 8018
.org 0xbbb2a
	str r0, [sp, #4]	@ 000bbb2a 0190
.org 0xbbb2c
	adds r0, r1, #0	@ 000bbb2c 081c
.org 0xbbb2e
	mov r1, sp	@ 000bbb2e 6946
.org 0xbbb30
	movs r2, #0	@ 000bbb30 0022
.org 0xbbb32
	bl 0xd03dc	@ 000bbb32 14f053fc
.org 0xbbb36
	adds r0, r4, #0	@ 000bbb36 201c
.org 0xbbb38
	adds r0, #116	@ 000bbb38 7430
.org 0xbbb3a
	ldr r1, [pc, #72]	@ 000bbb3a 1249
.org 0xbbb3c
	bl 0x5784	@ 000bbb3c 49f722fe
.org 0xbbb40
	ldr r1, [pc, #68]	@ 000bbb40 1149
.org 0xbbb42
	adds r0, r4, #0	@ 000bbb42 201c
.org 0xbbb44
	bl 0x1cf00	@ 000bbb44 61f7dcf9
.org 0xbbb48
	movs r0, #16	@ 000bbb48 1020
.org 0xbbb4a
	strb r0, [r4, #18]	@ 000bbb4a a074
.org 0xbbb4c
	ldrb r0, [r4, #15]	@ 000bbb4c e07b
.org 0xbbb4e
	adds r0, #1	@ 000bbb4e 0130
.org 0xbbb50
	strb r0, [r4, #15]	@ 000bbb50 e073
.org 0xbbb52
	adds r0, r4, #0	@ 000bbb52 201c
.org 0xbbb54
	bl 0x1cff0	@ 000bbb54 61f74cfa
.org 0xbbb58
	ldrb r0, [r4, #18]	@ 000bbb58 a07c
.org 0xbbb5a
	cmp r0, #0	@ 000bbb5a 0028
.org 0xbbb5c
	beq.n 0xbbb62	@ 000bbb5c 01d0
.org 0xbbb5e
	subs r0, #1	@ 000bbb5e 0138
.org 0xbbb60
	strb r0, [r4, #18]	@ 000bbb60 a074
.org 0xbbb62
	ldrb r0, [r4, #18]	@ 000bbb62 a07c
.org 0xbbb64
	subs r0, #1	@ 000bbb64 0138
.org 0xbbb66
	strb r0, [r4, #18]	@ 000bbb66 a074
.org 0xbbb68
	lsls r0, r0, #24	@ 000bbb68 0006
.org 0xbbb6a
	lsrs r1, r0, #24	@ 000bbb6a 010e
.org 0xbbb6c
	cmp r1, #0	@ 000bbb6c 0029
.org 0xbbb6e
	bne.n 0xbbb78	@ 000bbb6e 03d1
.org 0xbbb70
	movs r0, #5	@ 000bbb70 0520
.org 0xbbb72
	strb r0, [r4, #13]	@ 000bbb72 6073
.org 0xbbb74
	strb r1, [r4, #14]	@ 000bbb74 a173
.org 0xbbb76
	strb r1, [r4, #15]	@ 000bbb76 e173
.org 0xbbb78
	add sp, #8	@ 000bbb78 02b0
.org 0xbbb7a
	pop {r4}	@ 000bbb7a 10bc
.org 0xbbb7c
	pop {r0}	@ 000bbb7c 01bc
.org 0xbbb7e
	bx r0	@ 000bbb7e 0047
