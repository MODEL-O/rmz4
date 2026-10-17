@ FUN_08052974  entry 0x08052974  size 856
.thumb
.org 0x52974
FUN_08052974:
	push {r4, r5, r6, r7, lr}	@ 00052974 f0b5
.org 0x52976
	mov r7, r9	@ 00052976 4f46
.org 0x52978
	mov r6, r8	@ 00052978 4646
.org 0x5297a
	push {r6, r7}	@ 0005297a c0b4
.org 0x5297c
	sub sp, #8	@ 0005297c 82b0
.org 0x5297e
	adds r7, r0, #0	@ 0005297e 071c
.org 0x52980
	ldrb r0, [r7, #14]	@ 00052980 b87b
.org 0x52982
	cmp r0, #0	@ 00052982 0028
.org 0x52984
	beq.n 0x52988	@ 00052984 00d0
.org 0x52986
	b.n 0x52cae	@ 00052986 92e1
.org 0x52988
	ldr r1, [pc, #40]	@ 00052988 0a49
.org 0x5298a
	adds r0, r7, #0	@ 0005298a 381c
.org 0x5298c
	bl 0x1cf00	@ 0005298c caf7b8fa
.org 0x52990
	movs r0, #236	@ 00052990 ec20
.org 0x52992
	bl 0x2b10	@ 00052992 b0f7bdf8
.org 0x52996
	ldrb r1, [r7, #10]	@ 00052996 b97a
.org 0x52998
	movs r0, #32	@ 00052998 2020
.org 0x5299a
	ands r0, r1	@ 0005299a 0840
.org 0x5299c
	cmp r0, #0	@ 0005299c 0028
.org 0x5299e
	beq.n 0x529b8	@ 0005299e 0bd0
.org 0x529a0
	ldr r0, [r7, #84]	@ 000529a0 786d
.org 0x529a2
	ldr r1, [r7, #88]	@ 000529a2 b96d
.org 0x529a4
	bl 0x8748	@ 000529a4 b5f7d0fe
.org 0x529a8
	str r0, [r7, #88]	@ 000529a8 b865
.org 0x529aa
	movs r0, #128	@ 000529aa 8020
.org 0x529ac
	lsls r0, r0, #1	@ 000529ac 4000
.org 0x529ae
	str r0, [r7, #96]	@ 000529ae 3866
.org 0x529b0
	movs r0, #16	@ 000529b0 1020
.org 0x529b2
	b.n 0x529c8	@ 000529b2 09e0
.org 0x529b4
	.byte 0x09,0xa1,0x00,0x00	@ 000529b4 data
.org 0x529b8
	ldr r0, [r7, #84]	@ 000529b8 786d
.org 0x529ba
	ldr r1, [r7, #88]	@ 000529ba b96d
.org 0x529bc
	bl 0x8534	@ 000529bc b5f7bafd
.org 0x529c0
	str r0, [r7, #88]	@ 000529c0 b865
.org 0x529c2
	ldr r0, [pc, #28]	@ 000529c2 0748
.org 0x529c4
	str r0, [r7, #96]	@ 000529c4 3866
.org 0x529c6
	movs r0, #64	@ 000529c6 4020
.org 0x529c8
	str r0, [r7, #104]	@ 000529c8 b866
.org 0x529ca
	ldr r0, [pc, #24]	@ 000529ca 0648
.org 0x529cc
	ldr r0, [r0, #0]	@ 000529cc 0068
.org 0x529ce
	ldrb r1, [r0, #10]	@ 000529ce 817a
.org 0x529d0
	movs r0, #16	@ 000529d0 1020
.org 0x529d2
	ands r0, r1	@ 000529d2 0840
.org 0x529d4
	cmp r0, #0	@ 000529d4 0028
.org 0x529d6
	beq.n 0x529f0	@ 000529d6 0bd0
.org 0x529d8
	ldr r0, [pc, #12]	@ 000529d8 0348
.org 0x529da
	str r0, [r7, #92]	@ 000529da f865
.org 0x529dc
	ldr r0, [pc, #12]	@ 000529dc 0348
.org 0x529de
	b.n 0x529fa	@ 000529de 0ce0
.org 0x529e0
	.byte 0x80,0xfa,0xff,0xff	@ 000529e0 data
.org 0x529e4
	.byte 0xf0,0xdb,0x02,0x02	@ 000529e4 data
.org 0x529e8
	.byte 0x40,0xfb,0xff,0xff	@ 000529e8 data
.org 0x529ec
	.byte 0x00,0xf8,0xff,0xff	@ 000529ec data
.org 0x529f0
	movs r0, #152	@ 000529f0 9820
.org 0x529f2
	lsls r0, r0, #3	@ 000529f2 c000
.org 0x529f4
	str r0, [r7, #92]	@ 000529f4 f865
.org 0x529f6
	movs r0, #128	@ 000529f6 8020
.org 0x529f8
	lsls r0, r0, #4	@ 000529f8 0001
.org 0x529fa
	str r0, [r7, #100]	@ 000529fa 7866
.org 0x529fc
	adds r0, r7, #0	@ 000529fc 381c
.org 0x529fe
	adds r0, #116	@ 000529fe 7430
.org 0x52a00
	ldr r1, [pc, #428]	@ 00052a00 6b49
.org 0x52a02
	bl 0x5784	@ 00052a02 b2f7bffe
.org 0x52a06
	ldr r3, [r7, #84]	@ 00052a06 7b6d
.org 0x52a08
	movs r0, #128	@ 00052a08 8020
.org 0x52a0a
	lsls r0, r0, #5	@ 00052a0a 4001
.org 0x52a0c
	adds r2, r3, r0	@ 00052a0c 1a18
.org 0x52a0e
	ldr r5, [pc, #420]	@ 00052a0e 694d
.org 0x52a10
	ldr r0, [r5, #0]	@ 00052a10 2868
.org 0x52a12
	ldr r4, [pc, #420]	@ 00052a12 694c
.org 0x52a14
	muls r0, r4	@ 00052a14 6043
.org 0x52a16
	ldr r1, [pc, #420]	@ 00052a16 6949
.org 0x52a18
	adds r0, r0, r1	@ 00052a18 4018
.org 0x52a1a
	lsls r0, r0, #1	@ 00052a1a 4000
.org 0x52a1c
	lsrs r1, r0, #1	@ 00052a1c 4108
.org 0x52a1e
	str r1, [r5, #0]	@ 00052a1e 2960
.org 0x52a20
	lsrs r0, r0, #17	@ 00052a20 400c
.org 0x52a22
	movs r1, #31	@ 00052a22 1f21
.org 0x52a24
	mov r9, r1	@ 00052a24 8946
.org 0x52a26
	ands r0, r1	@ 00052a26 0840
.org 0x52a28
	lsls r0, r0, #8	@ 00052a28 0002
.org 0x52a2a
	subs r2, r2, r0	@ 00052a2a 121a
.org 0x52a2c
	str r2, [sp, #0]	@ 00052a2c 0092
.org 0x52a2e
	ldrb r1, [r7, #10]	@ 00052a2e b97a
.org 0x52a30
	movs r0, #32	@ 00052a30 2020
.org 0x52a32
	ands r0, r1	@ 00052a32 0840
.org 0x52a34
	cmp r0, #0	@ 00052a34 0028
.org 0x52a36
	bne.n 0x52a3a	@ 00052a36 00d1
.org 0x52a38
	b.n 0x52bc4	@ 00052a38 c4e0
.org 0x52a3a
	ldr r1, [r7, #88]	@ 00052a3a b96d
.org 0x52a3c
	adds r0, r3, #0	@ 00052a3c 181c
.org 0x52a3e
	bl 0x8748	@ 00052a3e b5f783fe
.org 0x52a42
	str r0, [sp, #4]	@ 00052a42 0190
.org 0x52a44
	ldr r6, [pc, #376]	@ 00052a44 5e4e
.org 0x52a46
	ldr r0, [r5, #0]	@ 00052a46 2868
.org 0x52a48
	adds r3, r0, #0	@ 00052a48 031c
.org 0x52a4a
	muls r3, r4	@ 00052a4a 6343
.org 0x52a4c
	ldr r2, [pc, #364]	@ 00052a4c 5b4a
.org 0x52a4e
	adds r3, r3, r2	@ 00052a4e 9b18
.org 0x52a50
	lsls r3, r3, #1	@ 00052a50 5b00
.org 0x52a52
	lsrs r0, r3, #1	@ 00052a52 5808
.org 0x52a54
	str r0, [r5, #0]	@ 00052a54 2860
.org 0x52a56
	lsrs r3, r3, #17	@ 00052a56 5b0c
.org 0x52a58
	movs r0, #1	@ 00052a58 0120
.org 0x52a5a
	mov r8, r0	@ 00052a5a 8046
.org 0x52a5c
	mov r1, r8	@ 00052a5c 4146
.org 0x52a5e
	ands r3, r1	@ 00052a5e 0b40
.org 0x52a60
	lsls r3, r3, #4	@ 00052a60 1b01
.org 0x52a62
	mov r0, sp	@ 00052a62 6846
.org 0x52a64
	adds r1, r6, #0	@ 00052a64 311c
.org 0x52a66
	movs r2, #0	@ 00052a66 0022
.org 0x52a68
	bl 0xd4c8c	@ 00052a68 82f010f9
.org 0x52a6c
	ldr r1, [r7, #84]	@ 00052a6c 796d
.org 0x52a6e
	movs r2, #128	@ 00052a6e 8022
.org 0x52a70
	lsls r2, r2, #5	@ 00052a70 5201
.org 0x52a72
	adds r1, r1, r2	@ 00052a72 8918
.org 0x52a74
	ldr r0, [r5, #0]	@ 00052a74 2868
.org 0x52a76
	muls r0, r4	@ 00052a76 6043
.org 0x52a78
	ldr r3, [pc, #320]	@ 00052a78 504b
.org 0x52a7a
	adds r0, r0, r3	@ 00052a7a c018
.org 0x52a7c
	lsls r0, r0, #1	@ 00052a7c 4000
.org 0x52a7e
	lsrs r2, r0, #1	@ 00052a7e 4208
.org 0x52a80
	lsrs r0, r0, #17	@ 00052a80 400c
.org 0x52a82
	mov r3, r9	@ 00052a82 4b46
.org 0x52a84
	ands r0, r3	@ 00052a84 1840
.org 0x52a86
	lsls r0, r0, #8	@ 00052a86 0002
.org 0x52a88
	subs r1, r1, r0	@ 00052a88 091a
.org 0x52a8a
	str r1, [sp, #0]	@ 00052a8a 0091
.org 0x52a8c
	adds r3, r2, #0	@ 00052a8c 131c
.org 0x52a8e
	muls r3, r4	@ 00052a8e 6343
.org 0x52a90
	ldr r0, [pc, #296]	@ 00052a90 4a48
.org 0x52a92
	adds r3, r3, r0	@ 00052a92 1b18
.org 0x52a94
	lsls r3, r3, #1	@ 00052a94 5b00
.org 0x52a96
	lsrs r0, r3, #1	@ 00052a96 5808
.org 0x52a98
	str r0, [r5, #0]	@ 00052a98 2860
.org 0x52a9a
	lsrs r3, r3, #17	@ 00052a9a 5b0c
.org 0x52a9c
	mov r1, r8	@ 00052a9c 4146
.org 0x52a9e
	ands r3, r1	@ 00052a9e 0b40
.org 0x52aa0
	lsls r3, r3, #4	@ 00052aa0 1b01
.org 0x52aa2
	mov r0, sp	@ 00052aa2 6846
.org 0x52aa4
	adds r1, r6, #0	@ 00052aa4 311c
.org 0x52aa6
	movs r2, #0	@ 00052aa6 0022
.org 0x52aa8
	bl 0xd4c8c	@ 00052aa8 82f0f0f8
.org 0x52aac
	ldr r1, [r7, #84]	@ 00052aac 796d
.org 0x52aae
	movs r2, #128	@ 00052aae 8022
.org 0x52ab0
	lsls r2, r2, #5	@ 00052ab0 5201
.org 0x52ab2
	adds r1, r1, r2	@ 00052ab2 8918
.org 0x52ab4
	ldr r0, [r5, #0]	@ 00052ab4 2868
.org 0x52ab6
	muls r0, r4	@ 00052ab6 6043
.org 0x52ab8
	ldr r3, [pc, #256]	@ 00052ab8 404b
.org 0x52aba
	adds r0, r0, r3	@ 00052aba c018
.org 0x52abc
	lsls r0, r0, #1	@ 00052abc 4000
.org 0x52abe
	lsrs r2, r0, #1	@ 00052abe 4208
.org 0x52ac0
	lsrs r0, r0, #17	@ 00052ac0 400c
.org 0x52ac2
	mov r3, r9	@ 00052ac2 4b46
.org 0x52ac4
	ands r0, r3	@ 00052ac4 1840
.org 0x52ac6
	lsls r0, r0, #8	@ 00052ac6 0002
.org 0x52ac8
	subs r1, r1, r0	@ 00052ac8 091a
.org 0x52aca
	str r1, [sp, #0]	@ 00052aca 0091
.org 0x52acc
	adds r3, r2, #0	@ 00052acc 131c
.org 0x52ace
	muls r3, r4	@ 00052ace 6343
.org 0x52ad0
	ldr r0, [pc, #232]	@ 00052ad0 3a48
.org 0x52ad2
	adds r3, r3, r0	@ 00052ad2 1b18
.org 0x52ad4
	lsls r3, r3, #1	@ 00052ad4 5b00
.org 0x52ad6
	lsrs r0, r3, #1	@ 00052ad6 5808
.org 0x52ad8
	str r0, [r5, #0]	@ 00052ad8 2860
.org 0x52ada
	lsrs r3, r3, #17	@ 00052ada 5b0c
.org 0x52adc
	mov r1, r8	@ 00052adc 4146
.org 0x52ade
	ands r3, r1	@ 00052ade 0b40
.org 0x52ae0
	lsls r3, r3, #4	@ 00052ae0 1b01
.org 0x52ae2
	mov r0, sp	@ 00052ae2 6846
.org 0x52ae4
	adds r1, r6, #0	@ 00052ae4 311c
.org 0x52ae6
	movs r2, #0	@ 00052ae6 0022
.org 0x52ae8
	bl 0xd4c8c	@ 00052ae8 82f0d0f8
.org 0x52aec
	ldr r1, [r7, #84]	@ 00052aec 796d
.org 0x52aee
	movs r2, #128	@ 00052aee 8022
.org 0x52af0
	lsls r2, r2, #5	@ 00052af0 5201
.org 0x52af2
	adds r1, r1, r2	@ 00052af2 8918
.org 0x52af4
	ldr r0, [r5, #0]	@ 00052af4 2868
.org 0x52af6
	muls r0, r4	@ 00052af6 6043
.org 0x52af8
	ldr r3, [pc, #192]	@ 00052af8 304b
.org 0x52afa
	adds r0, r0, r3	@ 00052afa c018
.org 0x52afc
	lsls r0, r0, #1	@ 00052afc 4000
.org 0x52afe
	lsrs r2, r0, #1	@ 00052afe 4208
.org 0x52b00
	lsrs r0, r0, #17	@ 00052b00 400c
.org 0x52b02
	mov r3, r9	@ 00052b02 4b46
.org 0x52b04
	ands r0, r3	@ 00052b04 1840
.org 0x52b06
	lsls r0, r0, #8	@ 00052b06 0002
.org 0x52b08
	subs r1, r1, r0	@ 00052b08 091a
.org 0x52b0a
	str r1, [sp, #0]	@ 00052b0a 0091
.org 0x52b0c
	adds r6, #28	@ 00052b0c 1c36
.org 0x52b0e
	adds r3, r2, #0	@ 00052b0e 131c
.org 0x52b10
	muls r3, r4	@ 00052b10 6343
.org 0x52b12
	ldr r0, [pc, #168]	@ 00052b12 2a48
.org 0x52b14
	adds r3, r3, r0	@ 00052b14 1b18
.org 0x52b16
	lsls r3, r3, #1	@ 00052b16 5b00
.org 0x52b18
	lsrs r0, r3, #1	@ 00052b18 5808
.org 0x52b1a
	str r0, [r5, #0]	@ 00052b1a 2860
.org 0x52b1c
	lsrs r3, r3, #17	@ 00052b1c 5b0c
.org 0x52b1e
	mov r1, r8	@ 00052b1e 4146
.org 0x52b20
	ands r3, r1	@ 00052b20 0b40
.org 0x52b22
	lsls r3, r3, #4	@ 00052b22 1b01
.org 0x52b24
	mov r0, sp	@ 00052b24 6846
.org 0x52b26
	adds r1, r6, #0	@ 00052b26 311c
.org 0x52b28
	movs r2, #0	@ 00052b28 0022
.org 0x52b2a
	bl 0xd4c8c	@ 00052b2a 82f0aff8
.org 0x52b2e
	ldr r1, [r7, #84]	@ 00052b2e 796d
.org 0x52b30
	movs r2, #128	@ 00052b30 8022
.org 0x52b32
	lsls r2, r2, #5	@ 00052b32 5201
.org 0x52b34
	adds r1, r1, r2	@ 00052b34 8918
.org 0x52b36
	ldr r0, [r5, #0]	@ 00052b36 2868
.org 0x52b38
	muls r0, r4	@ 00052b38 6043
.org 0x52b3a
	ldr r3, [pc, #128]	@ 00052b3a 204b
.org 0x52b3c
	adds r0, r0, r3	@ 00052b3c c018
.org 0x52b3e
	lsls r0, r0, #1	@ 00052b3e 4000
.org 0x52b40
	lsrs r2, r0, #1	@ 00052b40 4208
.org 0x52b42
	lsrs r0, r0, #17	@ 00052b42 400c
.org 0x52b44
	mov r3, r9	@ 00052b44 4b46
.org 0x52b46
	ands r0, r3	@ 00052b46 1840
.org 0x52b48
	lsls r0, r0, #8	@ 00052b48 0002
.org 0x52b4a
	subs r1, r1, r0	@ 00052b4a 091a
.org 0x52b4c
	str r1, [sp, #0]	@ 00052b4c 0091
.org 0x52b4e
	adds r3, r2, #0	@ 00052b4e 131c
.org 0x52b50
	muls r3, r4	@ 00052b50 6343
.org 0x52b52
	ldr r0, [pc, #104]	@ 00052b52 1a48
.org 0x52b54
	adds r3, r3, r0	@ 00052b54 1b18
.org 0x52b56
	lsls r3, r3, #1	@ 00052b56 5b00
.org 0x52b58
	lsrs r0, r3, #1	@ 00052b58 5808
.org 0x52b5a
	str r0, [r5, #0]	@ 00052b5a 2860
.org 0x52b5c
	lsrs r3, r3, #17	@ 00052b5c 5b0c
.org 0x52b5e
	mov r1, r8	@ 00052b5e 4146
.org 0x52b60
	ands r3, r1	@ 00052b60 0b40
.org 0x52b62
	lsls r3, r3, #4	@ 00052b62 1b01
.org 0x52b64
	mov r0, sp	@ 00052b64 6846
.org 0x52b66
	adds r1, r6, #0	@ 00052b66 311c
.org 0x52b68
	movs r2, #0	@ 00052b68 0022
.org 0x52b6a
	bl 0xd4c8c	@ 00052b6a 82f08ff8
.org 0x52b6e
	ldr r1, [r7, #84]	@ 00052b6e 796d
.org 0x52b70
	movs r2, #128	@ 00052b70 8022
.org 0x52b72
	lsls r2, r2, #5	@ 00052b72 5201
.org 0x52b74
	adds r1, r1, r2	@ 00052b74 8918
.org 0x52b76
	ldr r0, [r5, #0]	@ 00052b76 2868
.org 0x52b78
	muls r0, r4	@ 00052b78 6043
.org 0x52b7a
	ldr r3, [pc, #64]	@ 00052b7a 104b
.org 0x52b7c
	adds r0, r0, r3	@ 00052b7c c018
.org 0x52b7e
	lsls r0, r0, #1	@ 00052b7e 4000
.org 0x52b80
	lsrs r2, r0, #1	@ 00052b80 4208
.org 0x52b82
	lsrs r0, r0, #17	@ 00052b82 400c
.org 0x52b84
	mov r3, r9	@ 00052b84 4b46
.org 0x52b86
	ands r0, r3	@ 00052b86 1840
.org 0x52b88
	lsls r0, r0, #8	@ 00052b88 0002
.org 0x52b8a
	subs r1, r1, r0	@ 00052b8a 091a
.org 0x52b8c
	str r1, [sp, #0]	@ 00052b8c 0091
.org 0x52b8e
	adds r3, r2, #0	@ 00052b8e 131c
.org 0x52b90
	muls r3, r4	@ 00052b90 6343
.org 0x52b92
	ldr r0, [pc, #40]	@ 00052b92 0a48
.org 0x52b94
	adds r3, r3, r0	@ 00052b94 1b18
.org 0x52b96
	lsls r3, r3, #1	@ 00052b96 5b00
.org 0x52b98
	lsrs r0, r3, #1	@ 00052b98 5808
.org 0x52b9a
	str r0, [r5, #0]	@ 00052b9a 2860
.org 0x52b9c
	lsrs r3, r3, #17	@ 00052b9c 5b0c
.org 0x52b9e
	mov r1, r8	@ 00052b9e 4146
.org 0x52ba0
	ands r3, r1	@ 00052ba0 0b40
.org 0x52ba2
	lsls r3, r3, #4	@ 00052ba2 1b01
.org 0x52ba4
	mov r0, sp	@ 00052ba4 6846
.org 0x52ba6
	adds r1, r6, #0	@ 00052ba6 311c
.org 0x52ba8
	movs r2, #0	@ 00052ba8 0022
.org 0x52baa
	bl 0xd4c8c	@ 00052baa 82f06ff8
.org 0x52bae
	b.n 0x52ca8	@ 00052bae 7be0
.org 0x52bb0
	.byte 0x94,0x80,0x85,0x08	@ 00052bb0 data
.org 0x52bb4
	.byte 0x38,0xdc,0x02,0x02	@ 00052bb4 data
.org 0x52bb8
	.byte 0xfd,0x43,0x03,0x00	@ 00052bb8 data
.org 0x52bbc
	.byte 0xc3,0x9e,0x26,0x00	@ 00052bbc data
.org 0x52bc0
	.byte 0x9c,0x81,0x85,0x08	@ 00052bc0 data
.org 0x52bc4
	ldr r1, [r7, #88]	@ 00052bc4 b96d
.org 0x52bc6
	adds r0, r3, #0	@ 00052bc6 181c
.org 0x52bc8
	bl 0x8534	@ 00052bc8 b5f7b4fc
.org 0x52bcc
	str r0, [sp, #4]	@ 00052bcc 0190
.org 0x52bce
	ldr r2, [pc, #256]	@ 00052bce 404a
.org 0x52bd0
	mov r9, r2	@ 00052bd0 9146
.org 0x52bd2
	ldr r0, [r5, #0]	@ 00052bd2 2868
.org 0x52bd4
	adds r3, r0, #0	@ 00052bd4 031c
.org 0x52bd6
	muls r3, r4	@ 00052bd6 6343
.org 0x52bd8
	ldr r0, [pc, #248]	@ 00052bd8 3e48
.org 0x52bda
	adds r3, r3, r0	@ 00052bda 1b18
.org 0x52bdc
	lsls r3, r3, #1	@ 00052bdc 5b00
.org 0x52bde
	lsrs r0, r3, #1	@ 00052bde 5808
.org 0x52be0
	str r0, [r5, #0]	@ 00052be0 2860
.org 0x52be2
	lsrs r3, r3, #17	@ 00052be2 5b0c
.org 0x52be4
	movs r1, #1	@ 00052be4 0121
.org 0x52be6
	mov r8, r1	@ 00052be6 8846
.org 0x52be8
	mov r2, r8	@ 00052be8 4246
.org 0x52bea
	ands r3, r2	@ 00052bea 1340
.org 0x52bec
	lsls r3, r3, #4	@ 00052bec 1b01
.org 0x52bee
	mov r0, sp	@ 00052bee 6846
.org 0x52bf0
	mov r1, r9	@ 00052bf0 4946
.org 0x52bf2
	movs r2, #0	@ 00052bf2 0022
.org 0x52bf4
	bl 0xd4c8c	@ 00052bf4 82f04af8
.org 0x52bf8
	ldr r0, [r5, #0]	@ 00052bf8 2868
.org 0x52bfa
	adds r3, r0, #0	@ 00052bfa 031c
.org 0x52bfc
	muls r3, r4	@ 00052bfc 6343
.org 0x52bfe
	ldr r0, [pc, #212]	@ 00052bfe 3548
.org 0x52c00
	adds r3, r3, r0	@ 00052c00 1b18
.org 0x52c02
	lsls r3, r3, #1	@ 00052c02 5b00
.org 0x52c04
	lsrs r0, r3, #1	@ 00052c04 5808
.org 0x52c06
	str r0, [r5, #0]	@ 00052c06 2860
.org 0x52c08
	lsrs r3, r3, #17	@ 00052c08 5b0c
.org 0x52c0a
	mov r1, r8	@ 00052c0a 4146
.org 0x52c0c
	ands r3, r1	@ 00052c0c 0b40
.org 0x52c0e
	lsls r3, r3, #4	@ 00052c0e 1b01
.org 0x52c10
	mov r0, sp	@ 00052c10 6846
.org 0x52c12
	mov r1, r9	@ 00052c12 4946
.org 0x52c14
	movs r2, #0	@ 00052c14 0022
.org 0x52c16
	bl 0xd4c8c	@ 00052c16 82f039f8
.org 0x52c1a
	mov r6, r9	@ 00052c1a 4e46
.org 0x52c1c
	adds r6, #112	@ 00052c1c 7036
.org 0x52c1e
	ldr r0, [r5, #0]	@ 00052c1e 2868
.org 0x52c20
	adds r3, r0, #0	@ 00052c20 031c
.org 0x52c22
	muls r3, r4	@ 00052c22 6343
.org 0x52c24
	ldr r2, [pc, #172]	@ 00052c24 2b4a
.org 0x52c26
	adds r3, r3, r2	@ 00052c26 9b18
.org 0x52c28
	lsls r3, r3, #1	@ 00052c28 5b00
.org 0x52c2a
	lsrs r0, r3, #1	@ 00052c2a 5808
.org 0x52c2c
	str r0, [r5, #0]	@ 00052c2c 2860
.org 0x52c2e
	lsrs r3, r3, #17	@ 00052c2e 5b0c
.org 0x52c30
	mov r0, r8	@ 00052c30 4046
.org 0x52c32
	ands r3, r0	@ 00052c32 0340
.org 0x52c34
	lsls r3, r3, #4	@ 00052c34 1b01
.org 0x52c36
	mov r0, sp	@ 00052c36 6846
.org 0x52c38
	adds r1, r6, #0	@ 00052c38 311c
.org 0x52c3a
	movs r2, #0	@ 00052c3a 0022
.org 0x52c3c
	bl 0xd4c8c	@ 00052c3c 82f026f8
.org 0x52c40
	ldr r0, [r5, #0]	@ 00052c40 2868
.org 0x52c42
	adds r3, r0, #0	@ 00052c42 031c
.org 0x52c44
	muls r3, r4	@ 00052c44 6343
.org 0x52c46
	ldr r1, [pc, #140]	@ 00052c46 2349
.org 0x52c48
	adds r3, r3, r1	@ 00052c48 5b18
.org 0x52c4a
	lsls r3, r3, #1	@ 00052c4a 5b00
.org 0x52c4c
	lsrs r0, r3, #1	@ 00052c4c 5808
.org 0x52c4e
	str r0, [r5, #0]	@ 00052c4e 2860
.org 0x52c50
	lsrs r3, r3, #17	@ 00052c50 5b0c
.org 0x52c52
	mov r2, r8	@ 00052c52 4246
.org 0x52c54
	ands r3, r2	@ 00052c54 1340
.org 0x52c56
	lsls r3, r3, #4	@ 00052c56 1b01
.org 0x52c58
	mov r0, sp	@ 00052c58 6846
.org 0x52c5a
	adds r1, r6, #0	@ 00052c5a 311c
.org 0x52c5c
	movs r2, #0	@ 00052c5c 0022
.org 0x52c5e
	bl 0xd4c8c	@ 00052c5e 82f015f8
.org 0x52c62
	adds r6, #28	@ 00052c62 1c36
.org 0x52c64
	ldr r0, [r5, #0]	@ 00052c64 2868
.org 0x52c66
	adds r3, r0, #0	@ 00052c66 031c
.org 0x52c68
	muls r3, r4	@ 00052c68 6343
.org 0x52c6a
	ldr r0, [pc, #104]	@ 00052c6a 1a48
.org 0x52c6c
	adds r3, r3, r0	@ 00052c6c 1b18
.org 0x52c6e
	lsls r3, r3, #1	@ 00052c6e 5b00
.org 0x52c70
	lsrs r0, r3, #1	@ 00052c70 5808
.org 0x52c72
	str r0, [r5, #0]	@ 00052c72 2860
.org 0x52c74
	lsrs r3, r3, #17	@ 00052c74 5b0c
.org 0x52c76
	mov r1, r8	@ 00052c76 4146
.org 0x52c78
	ands r3, r1	@ 00052c78 0b40
.org 0x52c7a
	lsls r3, r3, #4	@ 00052c7a 1b01
.org 0x52c7c
	mov r0, sp	@ 00052c7c 6846
.org 0x52c7e
	adds r1, r6, #0	@ 00052c7e 311c
.org 0x52c80
	movs r2, #0	@ 00052c80 0022
.org 0x52c82
	bl 0xd4c8c	@ 00052c82 82f003f8
.org 0x52c86
	ldr r0, [r5, #0]	@ 00052c86 2868
.org 0x52c88
	adds r3, r0, #0	@ 00052c88 031c
.org 0x52c8a
	muls r3, r4	@ 00052c8a 6343
.org 0x52c8c
	ldr r2, [pc, #68]	@ 00052c8c 114a
.org 0x52c8e
	adds r3, r3, r2	@ 00052c8e 9b18
.org 0x52c90
	lsls r3, r3, #1	@ 00052c90 5b00
.org 0x52c92
	lsrs r0, r3, #1	@ 00052c92 5808
.org 0x52c94
	str r0, [r5, #0]	@ 00052c94 2860
.org 0x52c96
	lsrs r3, r3, #17	@ 00052c96 5b0c
.org 0x52c98
	mov r0, r8	@ 00052c98 4046
.org 0x52c9a
	ands r3, r0	@ 00052c9a 0340
.org 0x52c9c
	lsls r3, r3, #4	@ 00052c9c 1b01
.org 0x52c9e
	mov r0, sp	@ 00052c9e 6846
.org 0x52ca0
	adds r1, r6, #0	@ 00052ca0 311c
.org 0x52ca2
	movs r2, #0	@ 00052ca2 0022
.org 0x52ca4
	bl 0xd4c8c	@ 00052ca4 81f0f2ff
.org 0x52ca8
	ldrb r0, [r7, #14]	@ 00052ca8 b87b
.org 0x52caa
	adds r0, #1	@ 00052caa 0130
.org 0x52cac
	strb r0, [r7, #14]	@ 00052cac b873
.org 0x52cae
	adds r0, r7, #0	@ 00052cae 381c
.org 0x52cb0
	bl 0x1cff0	@ 00052cb0 caf79ef9
.org 0x52cb4
	ldr r0, [r7, #84]	@ 00052cb4 786d
.org 0x52cb6
	ldr r1, [r7, #100]	@ 00052cb6 796e
.org 0x52cb8
	adds r0, r0, r1	@ 00052cb8 4018
.org 0x52cba
	ldr r1, [r7, #88]	@ 00052cba b96d
.org 0x52cbc
	bl 0x7c7c	@ 00052cbc b4f7deff
.org 0x52cc0
	lsls r0, r0, #16	@ 00052cc0 0004
.org 0x52cc2
	cmp r0, #0	@ 00052cc2 0028
.org 0x52cc4
	beq.n 0x52cd8	@ 00052cc4 08d0
.org 0x52cc6
	movs r1, #0	@ 00052cc6 0021
.org 0x52cc8
	movs r0, #27	@ 00052cc8 1b20
.org 0x52cca
	strb r0, [r7, #13]	@ 00052cca 7873
