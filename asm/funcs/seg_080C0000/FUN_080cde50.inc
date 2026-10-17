@ FUN_080cde50  entry 0x080cde50  size 160
.thumb
.org 0xcde50
FUN_080cde50:
	push {r4, r5, r6, lr}	@ 000cde50 70b5
.org 0xcde52
	mov r6, r8	@ 000cde52 4646
.org 0xcde54
	push {r6}	@ 000cde54 40b4
.org 0xcde56
	adds r4, r0, #0	@ 000cde56 041c
.org 0xcde58
	bl 0x1cc9c	@ 000cde58 4ef720ff
.org 0xcde5c
	ldrb r1, [r4, #10]	@ 000cde5c a17a
.org 0xcde5e
	movs r0, #1	@ 000cde5e 0120
.org 0xcde60
	orrs r0, r1	@ 000cde60 0843
.org 0xcde62
	movs r1, #2	@ 000cde62 0221
.org 0xcde64
	orrs r0, r1	@ 000cde64 0843
.org 0xcde66
	strb r0, [r4, #10]	@ 000cde66 a072
.org 0xcde68
	movs r1, #211	@ 000cde68 d321
.org 0xcde6a
	lsls r1, r1, #8	@ 000cde6a 0902
.org 0xcde6c
	adds r0, r4, #0	@ 000cde6c 201c
.org 0xcde6e
	bl 0x1cf00	@ 000cde6e 4ff747f8
.org 0xcde72
	adds r0, r4, #0	@ 000cde72 201c
.org 0xcde74
	bl 0x1cff0	@ 000cde74 4ff7bcf8
.org 0xcde78
	movs r0, #1	@ 000cde78 0120
.org 0xcde7a
	mov r8, r0	@ 000cde7a 8046
.org 0xcde7c
	ldrb r0, [r4, #10]	@ 000cde7c a07a
.org 0xcde7e
	movs r1, #16	@ 000cde7e 1021
.org 0xcde80
	orrs r0, r1	@ 000cde80 0843
.org 0xcde82
	strb r0, [r4, #10]	@ 000cde82 a072
.org 0xcde84
	adds r0, r4, #0	@ 000cde84 201c
.org 0xcde86
	adds r0, #76	@ 000cde86 4c30
.org 0xcde88
	movs r6, #0	@ 000cde88 0026
.org 0xcde8a
	mov r1, r8	@ 000cde8a 4146
.org 0xcde8c
	strb r1, [r0, #0]	@ 000cde8c 0170
.org 0xcde8e
	adds r3, r4, #0	@ 000cde8e 231c
.org 0xcde90
	adds r3, #74	@ 000cde90 4a33
.org 0xcde92
	movs r2, #16	@ 000cde92 1022
.org 0xcde94
	ldrb r1, [r3, #0]	@ 000cde94 1978
.org 0xcde96
	movs r0, #17	@ 000cde96 1120
.org 0xcde98
	negs r0, r0	@ 000cde98 4042
.org 0xcde9a
	ands r0, r1	@ 000cde9a 0840
.org 0xcde9c
	orrs r0, r2	@ 000cde9c 1043
.org 0xcde9e
	strb r0, [r3, #0]	@ 000cde9e 1870
.org 0xcdea0
	ldrb r1, [r4, #10]	@ 000cdea0 a17a
.org 0xcdea2
	movs r0, #4	@ 000cdea2 0420
.org 0xcdea4
	orrs r0, r1	@ 000cdea4 0843
.org 0xcdea6
	strb r0, [r4, #10]	@ 000cdea6 a072
.org 0xcdea8
	adds r5, r4, #0	@ 000cdea8 251c
.org 0xcdeaa
	adds r5, #116	@ 000cdeaa 7435
.org 0xcdeac
	ldr r1, [pc, #64]	@ 000cdeac 1049
.org 0xcdeae
	adds r2, r4, #0	@ 000cdeae 221c
.org 0xcdeb0
	adds r2, #84	@ 000cdeb0 5432
.org 0xcdeb2
	adds r0, r5, #0	@ 000cdeb2 281c
.org 0xcdeb4
	movs r3, #8	@ 000cdeb4 0823
.org 0xcdeb6
	bl 0x5760	@ 000cdeb6 37f753fc
.org 0xcdeba
	str r4, [r5, #44]	@ 000cdeba ec62
.org 0xcdebc
	str r6, [r5, #36]	@ 000cdebc 6e62
.org 0xcdebe
	adds r1, r4, #0	@ 000cdebe 211c
.org 0xcdec0
	adds r1, #37	@ 000cdec0 2531
.org 0xcdec2
	movs r0, #7	@ 000cdec2 0720
.org 0xcdec4
	strb r0, [r1, #0]	@ 000cdec4 0870
.org 0xcdec6
	ldr r0, [pc, #44]	@ 000cdec6 0b48
.org 0xcdec8
	str r0, [r4, #92]	@ 000cdec8 e065
.org 0xcdeca
	movs r0, #32	@ 000cdeca 2020
.org 0xcdecc
	str r0, [r4, #100]	@ 000cdecc 6066
.org 0xcdece
	ldr r1, [pc, #40]	@ 000cdece 0a49
.org 0xcded0
	ldrb r0, [r4, #9]	@ 000cded0 607a
.org 0xcded2
	lsls r0, r0, #2	@ 000cded2 8000
.org 0xcded4
	adds r0, r0, r1	@ 000cded4 4018
.org 0xcded6
	mov r1, r8	@ 000cded6 4146
.org 0xcded8
	str r1, [r4, #12]	@ 000cded8 e160
.org 0xcdeda
	ldr r0, [r0, #0]	@ 000cdeda 0068
.org 0xcdedc
	ldr r0, [r0, #4]	@ 000cdedc 4068
.org 0xcdede
	str r0, [r4, #20]	@ 000cdede 6061
.org 0xcdee0
	adds r0, r4, #0	@ 000cdee0 201c
.org 0xcdee2
	bl 0xcde10	@ 000cdee2 fff795ff
.org 0xcdee6
	pop {r3}	@ 000cdee6 08bc
.org 0xcdee8
	mov r8, r3	@ 000cdee8 9846
.org 0xcdeea
	pop {r4, r5, r6}	@ 000cdeea 70bc
.org 0xcdeec
	pop {r0}	@ 000cdeec 01bc
.org 0xcdeee
	bx r0	@ 000cdeee 0047
