@ FUN_08042b18  entry 0x08042b18  size 162
.thumb
.org 0x42b18
FUN_08042b18:
	push {r4, r5, r6, lr}	@ 00042b18 70b5
.org 0x42b1a
	mov r6, r9	@ 00042b1a 4e46
.org 0x42b1c
	mov r5, r8	@ 00042b1c 4546
.org 0x42b1e
	push {r5, r6}	@ 00042b1e 60b4
.org 0x42b20
	adds r4, r0, #0	@ 00042b20 041c
.org 0x42b22
	ldr r6, [r4, #40]	@ 00042b22 a66a
.org 0x42b24
	ldr r0, [r4, #44]	@ 00042b24 e06a
.org 0x42b26
	mov r8, r0	@ 00042b26 8046
.org 0x42b28
	adds r0, r4, #0	@ 00042b28 201c
.org 0x42b2a
	bl 0x1cc9c	@ 00042b2a daf7b7f8
.org 0x42b2e
	adds r0, r4, #0	@ 00042b2e 201c
.org 0x42b30
	bl 0x1ceec	@ 00042b30 daf7dcf9
.org 0x42b34
	ldrb r1, [r4, #10]	@ 00042b34 a17a
.org 0x42b36
	movs r0, #1	@ 00042b36 0120
.org 0x42b38
	movs r2, #0	@ 00042b38 0022
.org 0x42b3a
	mov r9, r2	@ 00042b3a 9146
.org 0x42b3c
	orrs r0, r1	@ 00042b3c 0843
.org 0x42b3e
	movs r1, #2	@ 00042b3e 0221
.org 0x42b40
	orrs r0, r1	@ 00042b40 0843
.org 0x42b42
	strb r0, [r4, #10]	@ 00042b42 a072
.org 0x42b44
	ldr r1, [pc, #116]	@ 00042b44 1d49
.org 0x42b46
	adds r0, r4, #0	@ 00042b46 201c
.org 0x42b48
	bl 0x1cf00	@ 00042b48 daf7daf9
.org 0x42b4c
	ldrb r1, [r4, #10]	@ 00042b4c a17a
.org 0x42b4e
	movs r0, #4	@ 00042b4e 0420
.org 0x42b50
	orrs r0, r1	@ 00042b50 0843
.org 0x42b52
	strb r0, [r4, #10]	@ 00042b52 a072
.org 0x42b54
	adds r5, r4, #0	@ 00042b54 251c
.org 0x42b56
	adds r5, #116	@ 00042b56 7435
.org 0x42b58
	ldr r1, [pc, #100]	@ 00042b58 1949
.org 0x42b5a
	adds r2, r4, #0	@ 00042b5a 221c
.org 0x42b5c
	adds r2, #84	@ 00042b5c 5432
.org 0x42b5e
	adds r0, r5, #0	@ 00042b5e 281c
.org 0x42b60
	movs r3, #8	@ 00042b60 0823
.org 0x42b62
	bl 0x5760	@ 00042b62 c2f7fdfd
.org 0x42b66
	str r4, [r5, #44]	@ 00042b66 ec62
.org 0x42b68
	ldr r0, [pc, #88]	@ 00042b68 1648
.org 0x42b6a
	str r0, [r5, #36]	@ 00042b6a 6862
.org 0x42b6c
	adds r1, r4, #0	@ 00042b6c 211c
.org 0x42b6e
	adds r1, #37	@ 00042b6e 2531
.org 0x42b70
	movs r0, #17	@ 00042b70 1120
.org 0x42b72
	strb r0, [r1, #0]	@ 00042b72 0870
.org 0x42b74
	adds r0, r6, #0	@ 00042b74 301c
.org 0x42b76
	mov r1, r8	@ 00042b76 4146
.org 0x42b78
	adds r2, r4, #0	@ 00042b78 221c
.org 0x42b7a
	movs r3, #0	@ 00042b7a 0023
.org 0x42b7c
	bl 0x42964	@ 00042b7c fff7f2fe
.org 0x42b80
	adds r0, r6, #0	@ 00042b80 301c
.org 0x42b82
	mov r1, r8	@ 00042b82 4146
.org 0x42b84
	adds r2, r4, #0	@ 00042b84 221c
.org 0x42b86
	movs r3, #1	@ 00042b86 0123
.org 0x42b88
	bl 0x42964	@ 00042b88 fff7ecfe
.org 0x42b8c
	adds r0, r6, #0	@ 00042b8c 301c
.org 0x42b8e
	mov r1, r8	@ 00042b8e 4146
.org 0x42b90
	adds r2, r4, #0	@ 00042b90 221c
.org 0x42b92
	movs r3, #2	@ 00042b92 0223
.org 0x42b94
	bl 0x42964	@ 00042b94 fff7e6fe
.org 0x42b98
	adds r0, r6, #0	@ 00042b98 301c
.org 0x42b9a
	mov r1, r8	@ 00042b9a 4146
.org 0x42b9c
	adds r2, r4, #0	@ 00042b9c 221c
.org 0x42b9e
	movs r3, #3	@ 00042b9e 0323
.org 0x42ba0
	bl 0x42964	@ 00042ba0 fff7e0fe
.org 0x42ba4
	mov r0, r9	@ 00042ba4 4846
.org 0x42ba6
	str r0, [r4, #92]	@ 00042ba6 e065
.org 0x42ba8
	movs r0, #128	@ 00042ba8 8020
.org 0x42baa
	lsls r0, r0, #4	@ 00042baa 0001
.org 0x42bac
	str r0, [r4, #96]	@ 00042bac 2066
.org 0x42bae
	pop {r3, r4}	@ 00042bae 18bc
.org 0x42bb0
	mov r8, r3	@ 00042bb0 9846
.org 0x42bb2
	mov r9, r4	@ 00042bb2 a146
.org 0x42bb4
	pop {r4, r5, r6}	@ 00042bb4 70bc
.org 0x42bb6
	pop {r0}	@ 00042bb6 01bc
.org 0x42bb8
	bx r0	@ 00042bb8 0047
