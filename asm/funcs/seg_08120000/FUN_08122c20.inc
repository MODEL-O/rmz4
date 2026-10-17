@ FUN_08122c20  entry 0x08122c20  size 104
.thumb
.org 0x122c20
FUN_08122c20:
	push {r4, r5, r6, lr}	@ 00122c20 70b5
.org 0x122c22
	mov r6, r9	@ 00122c22 4e46
.org 0x122c24
	mov r5, r8	@ 00122c24 4546
.org 0x122c26
	push {r5, r6}	@ 00122c26 60b4
.org 0x122c28
	adds r4, r0, #0	@ 00122c28 041c
.org 0x122c2a
	lsls r1, r1, #24	@ 00122c2a 0906
.org 0x122c2c
	mov r8, r1	@ 00122c2c 8846
.org 0x122c2e
	mov r0, r8	@ 00122c2e 4046
.org 0x122c30
	lsrs r0, r0, #24	@ 00122c30 000e
.org 0x122c32
	mov r8, r0	@ 00122c32 8046
.org 0x122c34
	ldr r1, [pc, #80]	@ 00122c34 1449
.org 0x122c36
	adds r0, r4, r1	@ 00122c36 6018
.org 0x122c38
	bl 0x1e918	@ 00122c38 fbf66efe
.org 0x122c3c
	ldr r1, [pc, #76]	@ 00122c3c 1349
.org 0x122c3e
	adds r0, r4, r1	@ 00122c3e 6018
.org 0x122c40
	ldr r0, [r0, #0]	@ 00122c40 0068
.org 0x122c42
	subs r1, #96	@ 00122c42 6039
.org 0x122c44
	adds r4, r4, r1	@ 00122c44 6418
.org 0x122c46
	adds r1, r4, #0	@ 00122c46 211c
.org 0x122c48
	bl 0x382e4	@ 00122c48 15f74cfb
.org 0x122c4c
	ldr r5, [pc, #64]	@ 00122c4c 104d
.org 0x122c4e
	ldr r6, [pc, #68]	@ 00122c4e 114e
.org 0x122c50
	movs r0, #166	@ 00122c50 a620
.org 0x122c52
	lsls r0, r0, #1	@ 00122c52 4000
.org 0x122c54
	mov r9, r0	@ 00122c54 8146
.org 0x122c56
	movs r4, #160	@ 00122c56 a024
.org 0x122c58
	lsls r4, r4, #1	@ 00122c58 6400
.org 0x122c5a
	adds r0, r5, #0	@ 00122c5a 281c
.org 0x122c5c
	adds r1, r6, #0	@ 00122c5c 311c
.org 0x122c5e
	movs r2, #80	@ 00122c5e 5022
.org 0x122c60
	bl 0x128be0	@ 00122c60 05f0beff
.org 0x122c64
	adds r5, r5, r4	@ 00122c64 2d19
.org 0x122c66
	adds r4, r6, r4	@ 00122c66 3419
.org 0x122c68
	ldr r2, [pc, #44]	@ 00122c68 0b4a
.org 0x122c6a
	adds r0, r5, #0	@ 00122c6a 281c
.org 0x122c6c
	adds r1, r4, #0	@ 00122c6c 211c
.org 0x122c6e
	bl 0x128be4	@ 00122c6e 05f0b9ff
.org 0x122c72
	mov r0, r8	@ 00122c72 4046
.org 0x122c74
	adds r1, r6, #0	@ 00122c74 311c
.org 0x122c76
	mov r2, r9	@ 00122c76 4a46
.org 0x122c78
	bl 0x16ac	@ 00122c78 def618fd
.org 0x122c7c
	pop {r3, r4}	@ 00122c7c 18bc
.org 0x122c7e
	mov r8, r3	@ 00122c7e 9846
.org 0x122c80
	mov r9, r4	@ 00122c80 a146
.org 0x122c82
	pop {r4, r5, r6}	@ 00122c82 70bc
.org 0x122c84
	pop {r0}	@ 00122c84 01bc
.org 0x122c86
	bx r0	@ 00122c86 0047
