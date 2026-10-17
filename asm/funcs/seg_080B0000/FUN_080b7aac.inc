@ FUN_080b7aac  entry 0x080b7aac  size 128
.thumb
.org 0xb7aac
FUN_080b7aac:
	push {r4, r5, r6, lr}	@ 000b7aac 70b5
.org 0xb7aae
	mov r6, r8	@ 000b7aae 4646
.org 0xb7ab0
	push {r6}	@ 000b7ab0 40b4
.org 0xb7ab2
	adds r4, r0, #0	@ 000b7ab2 041c
.org 0xb7ab4
	bl 0x1cc9c	@ 000b7ab4 65f7f2f8
.org 0xb7ab8
	ldrb r1, [r4, #10]	@ 000b7ab8 a17a
.org 0xb7aba
	movs r0, #1	@ 000b7aba 0120
.org 0xb7abc
	movs r6, #0	@ 000b7abc 0026
.org 0xb7abe
	orrs r0, r1	@ 000b7abe 0843
.org 0xb7ac0
	movs r1, #2	@ 000b7ac0 0221
.org 0xb7ac2
	orrs r0, r1	@ 000b7ac2 0843
.org 0xb7ac4
	strb r0, [r4, #10]	@ 000b7ac4 a072
.org 0xb7ac6
	ldr r1, [pc, #100]	@ 000b7ac6 1949
.org 0xb7ac8
	ldrb r0, [r4, #9]	@ 000b7ac8 607a
.org 0xb7aca
	lsls r0, r0, #2	@ 000b7aca 8000
.org 0xb7acc
	adds r0, r0, r1	@ 000b7acc 4018
.org 0xb7ace
	movs r1, #1	@ 000b7ace 0121
.org 0xb7ad0
	mov r8, r1	@ 000b7ad0 8846
.org 0xb7ad2
	str r1, [r4, #12]	@ 000b7ad2 e160
.org 0xb7ad4
	ldr r0, [r0, #0]	@ 000b7ad4 0068
.org 0xb7ad6
	ldr r0, [r0, #4]	@ 000b7ad6 4068
.org 0xb7ad8
	str r0, [r4, #20]	@ 000b7ad8 6061
.org 0xb7ada
	adds r1, r4, #0	@ 000b7ada 211c
.org 0xb7adc
	adds r1, #37	@ 000b7adc 2531
.org 0xb7ade
	movs r0, #31	@ 000b7ade 1f20
.org 0xb7ae0
	strb r0, [r1, #0]	@ 000b7ae0 0870
.org 0xb7ae2
	ldrb r1, [r4, #10]	@ 000b7ae2 a17a
.org 0xb7ae4
	movs r0, #4	@ 000b7ae4 0420
.org 0xb7ae6
	orrs r0, r1	@ 000b7ae6 0843
.org 0xb7ae8
	strb r0, [r4, #10]	@ 000b7ae8 a072
.org 0xb7aea
	adds r5, r4, #0	@ 000b7aea 251c
.org 0xb7aec
	adds r5, #116	@ 000b7aec 7435
.org 0xb7aee
	ldr r1, [pc, #64]	@ 000b7aee 1049
.org 0xb7af0
	adds r2, r4, #0	@ 000b7af0 221c
.org 0xb7af2
	adds r2, #84	@ 000b7af2 5432
.org 0xb7af4
	adds r0, r5, #0	@ 000b7af4 281c
.org 0xb7af6
	movs r3, #8	@ 000b7af6 0823
.org 0xb7af8
	bl 0x5760	@ 000b7af8 4df732fe
.org 0xb7afc
	str r4, [r5, #44]	@ 000b7afc ec62
.org 0xb7afe
	str r6, [r5, #36]	@ 000b7afe 6e62
.org 0xb7b00
	movs r1, #206	@ 000b7b00 ce21
.org 0xb7b02
	lsls r1, r1, #8	@ 000b7b02 0902
.org 0xb7b04
	adds r0, r4, #0	@ 000b7b04 201c
.org 0xb7b06
	bl 0x1cf00	@ 000b7b06 65f7fbf9
.org 0xb7b0a
	str r6, [r4, #92]	@ 000b7b0a e665
.org 0xb7b0c
	str r6, [r4, #96]	@ 000b7b0c 2666
.org 0xb7b0e
	adds r0, r4, #0	@ 000b7b0e 201c
.org 0xb7b10
	adds r0, #180	@ 000b7b10 b430
.org 0xb7b12
	strb r6, [r0, #0]	@ 000b7b12 0670
.org 0xb7b14
	adds r0, #1	@ 000b7b14 0130
.org 0xb7b16
	mov r1, r8	@ 000b7b16 4146
.org 0xb7b18
	strb r1, [r0, #0]	@ 000b7b18 0170
.org 0xb7b1a
	strb r6, [r4, #18]	@ 000b7b1a a674
.org 0xb7b1c
	adds r0, r4, #0	@ 000b7b1c 201c
.org 0xb7b1e
	bl 0xb7b34	@ 000b7b1e 00f009f8
.org 0xb7b22
	pop {r3}	@ 000b7b22 08bc
.org 0xb7b24
	mov r8, r3	@ 000b7b24 9846
.org 0xb7b26
	pop {r4, r5, r6}	@ 000b7b26 70bc
.org 0xb7b28
	pop {r0}	@ 000b7b28 01bc
.org 0xb7b2a
	bx r0	@ 000b7b2a 0047
