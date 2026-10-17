@ FUN_08017abc  entry 0x08017abc  size 128
.thumb
.org 0x17abc
FUN_08017abc:
	push {r4, r5, r6, r7, lr}	@ 00017abc f0b5
.org 0x17abe
	mov r7, r8	@ 00017abe 4746
.org 0x17ac0
	push {r7}	@ 00017ac0 80b4
.org 0x17ac2
	sub sp, #8	@ 00017ac2 82b0
.org 0x17ac4
	adds r7, r0, #0	@ 00017ac4 071c
.org 0x17ac6
	ldrb r0, [r7, #14]	@ 00017ac6 b87b
.org 0x17ac8
	mov r8, r0	@ 00017ac8 8046
.org 0x17aca
	cmp r0, #0	@ 00017aca 0028
.org 0x17acc
	bne.n 0x17b30	@ 00017acc 30d1
.org 0x17ace
	ldr r0, [r7, #92]	@ 00017ace f86d
.org 0x17ad0
	lsls r0, r0, #16	@ 00017ad0 0004
.org 0x17ad2
	lsrs r0, r0, #20	@ 00017ad2 000d
.org 0x17ad4
	lsls r5, r0, #1	@ 00017ad4 4500
.org 0x17ad6
	ldr r3, [pc, #100]	@ 00017ad6 194b
.org 0x17ad8
	adds r5, r5, r3	@ 00017ad8 ed18
.org 0x17ada
	ldr r1, [r7, #100]	@ 00017ada 796e
.org 0x17adc
	ldr r4, [pc, #96]	@ 00017adc 184c
.org 0x17ade
	adds r2, r4, #0	@ 00017ade 221c
.org 0x17ae0
	orrs r1, r2	@ 00017ae0 1143
.org 0x17ae2
	strh r1, [r5, #0]	@ 00017ae2 2980
.org 0x17ae4
	lsls r0, r0, #2	@ 00017ae4 8000
.org 0x17ae6
	adds r3, #8	@ 00017ae6 0833
.org 0x17ae8
	adds r0, r0, r3	@ 00017ae8 c018
.org 0x17aea
	mov r2, r8	@ 00017aea 4246
.org 0x17aec
	str r2, [r0, #0]	@ 00017aec 0260
.org 0x17aee
	ldr r0, [pc, #84]	@ 00017aee 1548
.org 0x17af0
	ldr r0, [r0, #0]	@ 00017af0 0068
.org 0x17af2
	ldr r4, [pc, #84]	@ 00017af2 154c
.org 0x17af4
	adds r0, r0, r4	@ 00017af4 0019
.org 0x17af6
	movs r4, #248	@ 00017af6 f824
.org 0x17af8
	lsls r4, r4, #5	@ 00017af8 6401
.org 0x17afa
	ands r1, r4	@ 00017afa 2140
.org 0x17afc
	lsls r1, r1, #3	@ 00017afc c900
.org 0x17afe
	movs r2, #192	@ 00017afe c022
.org 0x17b00
	lsls r2, r2, #19	@ 00017b00 d204
.org 0x17b02
	adds r1, r1, r2	@ 00017b02 8918
.org 0x17b04
	movs r6, #128	@ 00017b04 8026
.org 0x17b06
	lsls r6, r6, #2	@ 00017b06 b600
.org 0x17b08
	adds r2, r6, #0	@ 00017b08 321c
.org 0x17b0a
	bl 0x128be0	@ 00017b0a 11f169f8
.org 0x17b0e
	ldrh r0, [r5, #0]	@ 00017b0e 2888
.org 0x17b10
	ands r4, r0	@ 00017b10 0440
.org 0x17b12
	lsls r4, r4, #3	@ 00017b12 e400
.org 0x17b14
	ldr r0, [pc, #52]	@ 00017b14 0d48
.org 0x17b16
	adds r4, r4, r0	@ 00017b16 2418
.org 0x17b18
	mov r2, r8	@ 00017b18 4246
.org 0x17b1a
	str r2, [sp, #0]	@ 00017b1a 0092
.org 0x17b1c
	movs r2, #128	@ 00017b1c 8022
.org 0x17b1e
	lsls r2, r2, #17	@ 00017b1e 5204
.org 0x17b20
	orrs r2, r6	@ 00017b20 3243
.org 0x17b22
	mov r0, sp	@ 00017b22 6846
.org 0x17b24
	adds r1, r4, #0	@ 00017b24 211c
.org 0x17b26
	bl 0x128be0	@ 00017b26 11f15bf8
.org 0x17b2a
	ldrb r0, [r7, #14]	@ 00017b2a b87b
.org 0x17b2c
	adds r0, #1	@ 00017b2c 0130
.org 0x17b2e
	strb r0, [r7, #14]	@ 00017b2e b873
.org 0x17b30
	add sp, #8	@ 00017b30 02b0
.org 0x17b32
	pop {r3}	@ 00017b32 08bc
.org 0x17b34
	mov r8, r3	@ 00017b34 9846
.org 0x17b36
	pop {r4, r5, r6, r7}	@ 00017b36 f0bc
.org 0x17b38
	pop {r0}	@ 00017b38 01bc
.org 0x17b3a
	bx r0	@ 00017b3a 0047
