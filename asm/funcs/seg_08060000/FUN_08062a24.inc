@ FUN_08062a24  entry 0x08062a24  size 162
.thumb
.org 0x62a24
FUN_08062a24:
	push {r4, r5, r6, lr}	@ 00062a24 70b5
.org 0x62a26
	sub sp, #12	@ 00062a26 83b0
.org 0x62a28
	adds r6, r0, #0	@ 00062a28 061c
.org 0x62a2a
	ldrb r0, [r6, #15]	@ 00062a2a f07b
.org 0x62a2c
	cmp r0, #0	@ 00062a2c 0028
.org 0x62a2e
	bne.n 0x62a3e	@ 00062a2e 06d1
.org 0x62a30
	adds r0, r6, #0	@ 00062a30 301c
.org 0x62a32
	movs r1, #4	@ 00062a32 0421
.org 0x62a34
	bl 0x65a94	@ 00062a34 03f02ef8
.org 0x62a38
	ldrb r0, [r6, #15]	@ 00062a38 f07b
.org 0x62a3a
	adds r0, #1	@ 00062a3a 0130
.org 0x62a3c
	strb r0, [r6, #15]	@ 00062a3c f073
.org 0x62a3e
	adds r0, r6, #0	@ 00062a3e 301c
.org 0x62a40
	bl 0x1cff0	@ 00062a40 baf7d6fa
.org 0x62a44
	adds r0, r6, #0	@ 00062a44 301c
.org 0x62a46
	adds r0, #116	@ 00062a46 7430
.org 0x62a48
	ldr r4, [pc, #124]	@ 00062a48 1f4c
.org 0x62a4a
	ldr r3, [pc, #128]	@ 00062a4a 204b
.org 0x62a4c
	adds r1, r6, #0	@ 00062a4c 311c
.org 0x62a4e
	adds r1, #180	@ 00062a4e b431
.org 0x62a50
	ldrb r2, [r1, #0]	@ 00062a50 0a78
.org 0x62a52
	lsls r1, r2, #1	@ 00062a52 5100
.org 0x62a54
	adds r1, r1, r3	@ 00062a54 c918
.org 0x62a56
	ldrh r1, [r1, #0]	@ 00062a56 0988
.org 0x62a58
	lsls r1, r1, #2	@ 00062a58 8900
.org 0x62a5a
	adds r1, r1, r4	@ 00062a5a 0919
.org 0x62a5c
	adds r3, r6, #0	@ 00062a5c 331c
.org 0x62a5e
	adds r3, #113	@ 00062a5e 7133
.org 0x62a60
	movs r5, #0	@ 00062a60 0025
.org 0x62a62
	ldrsb r5, [r3, r5]	@ 00062a62 5d57
.org 0x62a64
	ldr r1, [r1, #0]	@ 00062a64 0968
.org 0x62a66
	lsls r3, r5, #2	@ 00062a66 ab00
.org 0x62a68
	adds r3, r3, r1	@ 00062a68 5b18
.org 0x62a6a
	ldr r4, [pc, #100]	@ 00062a6a 194c
.org 0x62a6c
	adds r1, r6, #0	@ 00062a6c 311c
.org 0x62a6e
	adds r1, #181	@ 00062a6e b531
.org 0x62a70
	ldrb r1, [r1, #0]	@ 00062a70 0978
.org 0x62a72
	lsls r1, r1, #2	@ 00062a72 8900
.org 0x62a74
	adds r1, r1, r4	@ 00062a74 0919
.org 0x62a76
	ldr r1, [r1, #0]	@ 00062a76 0968
.org 0x62a78
	lsls r2, r2, #2	@ 00062a78 9200
.org 0x62a7a
	adds r2, r2, r1	@ 00062a7a 5218
.org 0x62a7c
	ldr r1, [r2, #0]	@ 00062a7c 1168
.org 0x62a7e
	adds r1, r1, r5	@ 00062a7e 4919
.org 0x62a80
	ldrb r1, [r1, #0]	@ 00062a80 0978
.org 0x62a82
	lsls r2, r1, #1	@ 00062a82 4a00
.org 0x62a84
	adds r2, r2, r1	@ 00062a84 5218
.org 0x62a86
	lsls r2, r2, #3	@ 00062a86 d200
.org 0x62a88
	ldr r1, [r3, #0]	@ 00062a88 1968
.org 0x62a8a
	adds r1, r1, r2	@ 00062a8a 8918
.org 0x62a8c
	bl 0x5784	@ 00062a8c a2f77afe
.org 0x62a90
	adds r0, r6, #0	@ 00062a90 301c
.org 0x62a92
	adds r0, #115	@ 00062a92 7330
.org 0x62a94
	ldrb r0, [r0, #0]	@ 00062a94 0078
.org 0x62a96
	cmp r0, #3	@ 00062a96 0328
.org 0x62a98
	bne.n 0x62abe	@ 00062a98 11d1
.org 0x62a9a
	mov r1, sp	@ 00062a9a 6946
.org 0x62a9c
	ldr r0, [pc, #52]	@ 00062a9c 0d48
.org 0x62a9e
	ldmia r0!, {r2, r3, r4}	@ 00062a9e 1cc8
.org 0x62aa0
	stmia r1!, {r2, r3, r4}	@ 00062aa0 1cc1
.org 0x62aa2
	adds r0, r6, #0	@ 00062aa2 301c
.org 0x62aa4
	bl 0x66160	@ 00062aa4 03f05cfb
.org 0x62aa8
	lsls r0, r0, #2	@ 00062aa8 8000
.org 0x62aaa
	add r0, sp	@ 00062aaa 6844
.org 0x62aac
	ldr r1, [r0, #0]	@ 00062aac 0168
.org 0x62aae
	adds r0, r6, #0	@ 00062aae 301c
.org 0x62ab0
	adds r0, #224	@ 00062ab0 e030
.org 0x62ab2
	movs r2, #0	@ 00062ab2 0022
.org 0x62ab4
	strb r1, [r0, #0]	@ 00062ab4 0170
.org 0x62ab6
	movs r0, #13	@ 00062ab6 0d20
.org 0x62ab8
	strb r0, [r6, #13]	@ 00062ab8 7073
.org 0x62aba
	strb r2, [r6, #14]	@ 00062aba b273
.org 0x62abc
	strb r2, [r6, #15]	@ 00062abc f273
.org 0x62abe
	add sp, #12	@ 00062abe 03b0
.org 0x62ac0
	pop {r4, r5, r6}	@ 00062ac0 70bc
.org 0x62ac2
	pop {r0}	@ 00062ac2 01bc
.org 0x62ac4
	bx r0	@ 00062ac4 0047
