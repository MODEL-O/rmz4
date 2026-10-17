@ FUN_08027d68  entry 0x08027d68  size 96
.thumb
.org 0x27d68
FUN_08027d68:
	push {lr}	@ 00027d68 00b5
.org 0x27d6a
	sub sp, #8	@ 00027d6a 82b0
.org 0x27d6c
	movs r1, #167	@ 00027d6c a721
.org 0x27d6e
	lsls r1, r1, #1	@ 00027d6e 4900
.org 0x27d70
	adds r0, r0, r1	@ 00027d70 4018
.org 0x27d72
	ldrh r3, [r0, #0]	@ 00027d72 0388
.org 0x27d74
	cmp r3, #0	@ 00027d74 002b
.org 0x27d76
	beq.n 0x27dc2	@ 00027d76 24d0
.org 0x27d78
	ldr r2, [pc, #76]	@ 00027d78 134a
.org 0x27d7a
	ldr r1, [r2, #0]	@ 00027d7a 1168
.org 0x27d7c
	ldr r0, [pc, #76]	@ 00027d7c 1348
.org 0x27d7e
	muls r0, r1	@ 00027d7e 4843
.org 0x27d80
	ldr r1, [pc, #76]	@ 00027d80 1349
.org 0x27d82
	adds r0, r0, r1	@ 00027d82 4018
.org 0x27d84
	lsls r0, r0, #1	@ 00027d84 4000
.org 0x27d86
	lsrs r1, r0, #1	@ 00027d86 4108
.org 0x27d88
	str r1, [r2, #0]	@ 00027d88 1160
.org 0x27d8a
	lsrs r1, r0, #17	@ 00027d8a 410c
.org 0x27d8c
	movs r0, #15	@ 00027d8c 0f20
.org 0x27d8e
	ands r1, r0	@ 00027d8e 0140
.org 0x27d90
	movs r0, #255	@ 00027d90 ff20
.org 0x27d92
	ands r0, r3	@ 00027d92 1840
.org 0x27d94
	cmp r1, r0	@ 00027d94 8142
.org 0x27d96
	bgt.n 0x27da0	@ 00027d96 03dc
.org 0x27d98
	adds r0, r1, #0	@ 00027d98 081c
.org 0x27d9a
	ldr r1, [pc, #56]	@ 00027d9a 0e49
.org 0x27d9c
	bl 0x1fe64	@ 00027d9c f8f762f8
.org 0x27da0
	ldr r1, [pc, #52]	@ 00027da0 0d49
.org 0x27da2
	movs r0, #24	@ 00027da2 1820
.org 0x27da4
	ldrsb r0, [r1, r0]	@ 00027da4 0856
.org 0x27da6
	cmp r0, #0	@ 00027da6 0028
.org 0x27da8
	bne.n 0x27dc2	@ 00027da8 0bd1
.org 0x27daa
	adds r0, r1, #0	@ 00027daa 081c
.org 0x27dac
	adds r0, #48	@ 00027dac 3030
.org 0x27dae
	mov r1, sp	@ 00027dae 6946
.org 0x27db0
	bl 0x1febc	@ 00027db0 f8f784f8
.org 0x27db4
	ldr r1, [pc, #36]	@ 00027db4 0949
.org 0x27db6
	ldr r0, [sp, #0]	@ 00027db6 0098
.org 0x27db8
	asrs r0, r0, #8	@ 00027db8 0012
.org 0x27dba
	strh r0, [r1, #0]	@ 00027dba 0880
.org 0x27dbc
	ldr r0, [sp, #4]	@ 00027dbc 0198
.org 0x27dbe
	asrs r0, r0, #8	@ 00027dbe 0012
.org 0x27dc0
	strh r0, [r1, #2]	@ 00027dc0 4880
.org 0x27dc2
	add sp, #8	@ 00027dc2 02b0
.org 0x27dc4
	pop {r0}	@ 00027dc4 01bc
.org 0x27dc6
	bx r0	@ 00027dc6 0047
