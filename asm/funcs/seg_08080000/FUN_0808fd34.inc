@ FUN_0808fd34  entry 0x0808fd34  size 154
.thumb
.org 0x8fd34
FUN_0808fd34:
	push {r4, r5, r6, r7, lr}	@ 0008fd34 f0b5
.org 0x8fd36
	mov r7, sl	@ 0008fd36 5746
.org 0x8fd38
	mov r6, r9	@ 0008fd38 4e46
.org 0x8fd3a
	mov r5, r8	@ 0008fd3a 4546
.org 0x8fd3c
	push {r5, r6, r7}	@ 0008fd3c e0b4
.org 0x8fd3e
	sub sp, #4	@ 0008fd3e 81b0
.org 0x8fd40
	adds r6, r0, #0	@ 0008fd40 061c
.org 0x8fd42
	ldrb r0, [r6, #10]	@ 0008fd42 b07a
.org 0x8fd44
	lsrs r3, r0, #4	@ 0008fd44 0309
.org 0x8fd46
	movs r2, #1	@ 0008fd46 0122
.org 0x8fd48
	ands r3, r2	@ 0008fd48 1340
.org 0x8fd4a
	ldr r5, [pc, #132]	@ 0008fd4a 214d
.org 0x8fd4c
	ldr r0, [r5, #0]	@ 0008fd4c 2868
.org 0x8fd4e
	ldr r1, [pc, #132]	@ 0008fd4e 2149
.org 0x8fd50
	mov ip, r1	@ 0008fd50 8c46
.org 0x8fd52
	mov r7, ip	@ 0008fd52 6746
.org 0x8fd54
	muls r7, r0	@ 0008fd54 4743
.org 0x8fd56
	adds r0, r7, #0	@ 0008fd56 381c
.org 0x8fd58
	ldr r7, [pc, #124]	@ 0008fd58 1f4f
.org 0x8fd5a
	adds r0, r0, r7	@ 0008fd5a c019
.org 0x8fd5c
	lsls r0, r0, #1	@ 0008fd5c 4000
.org 0x8fd5e
	lsrs r1, r0, #1	@ 0008fd5e 4108
.org 0x8fd60
	str r1, [r5, #0]	@ 0008fd60 2960
.org 0x8fd62
	lsrs r0, r0, #17	@ 0008fd62 400c
.org 0x8fd64
	ands r0, r2	@ 0008fd64 1040
.org 0x8fd66
	adds r4, r0, #1	@ 0008fd66 441c
.org 0x8fd68
	cmp r4, #0	@ 0008fd68 002c
.org 0x8fd6a
	beq.n 0x8fdbe	@ 0008fd6a 28d0
.org 0x8fd6c
	lsls r0, r3, #1	@ 0008fd6c 5800
.org 0x8fd6e
	subs r0, #1	@ 0008fd6e 0138
.org 0x8fd70
	lsls r0, r0, #11	@ 0008fd70 c002
.org 0x8fd72
	mov r9, r0	@ 0008fd72 8146
.org 0x8fd74
	mov r8, r5	@ 0008fd74 a846
.org 0x8fd76
	mov r3, ip	@ 0008fd76 6346
.org 0x8fd78
	mov sl, r7	@ 0008fd78 ba46
.org 0x8fd7a
	movs r5, #7	@ 0008fd7a 0725
.org 0x8fd7c
	ldr r0, [r6, #84]	@ 0008fd7c 706d
.org 0x8fd7e
	add r0, r9	@ 0008fd7e 4844
.org 0x8fd80
	mov r2, r8	@ 0008fd80 4246
.org 0x8fd82
	ldr r1, [r2, #0]	@ 0008fd82 1168
.org 0x8fd84
	muls r1, r3	@ 0008fd84 5943
.org 0x8fd86
	add r1, sl	@ 0008fd86 5144
.org 0x8fd88
	lsls r1, r1, #1	@ 0008fd88 4900
.org 0x8fd8a
	lsrs r2, r1, #1	@ 0008fd8a 4a08
.org 0x8fd8c
	lsrs r1, r1, #17	@ 0008fd8c 490c
.org 0x8fd8e
	ands r1, r5	@ 0008fd8e 2940
.org 0x8fd90
	subs r1, #3	@ 0008fd90 0339
.org 0x8fd92
	lsls r1, r1, #8	@ 0008fd92 0902
.org 0x8fd94
	adds r0, r0, r1	@ 0008fd94 4018
.org 0x8fd96
	muls r2, r3	@ 0008fd96 5a43
.org 0x8fd98
	add r2, sl	@ 0008fd98 5244
.org 0x8fd9a
	lsls r2, r2, #1	@ 0008fd9a 5200
.org 0x8fd9c
	lsrs r1, r2, #1	@ 0008fd9c 5108
.org 0x8fd9e
	mov r7, r8	@ 0008fd9e 4746
.org 0x8fda0
	str r1, [r7, #0]	@ 0008fda0 3960
.org 0x8fda2
	lsrs r2, r2, #17	@ 0008fda2 520c
.org 0x8fda4
	ands r2, r5	@ 0008fda4 2a40
.org 0x8fda6
	subs r2, #3	@ 0008fda6 033a
.org 0x8fda8
	lsls r2, r2, #8	@ 0008fda8 1202
.org 0x8fdaa
	ldr r1, [r6, #88]	@ 0008fdaa b16d
.org 0x8fdac
	adds r1, r1, r2	@ 0008fdac 8918
.org 0x8fdae
	movs r2, #0	@ 0008fdae 0022
.org 0x8fdb0
	str r3, [sp, #0]	@ 0008fdb0 0093
.org 0x8fdb2
	bl 0xd0ff4	@ 0008fdb2 41f01ff9
.org 0x8fdb6
	subs r4, #1	@ 0008fdb6 013c
.org 0x8fdb8
	ldr r3, [sp, #0]	@ 0008fdb8 009b
.org 0x8fdba
	cmp r4, #0	@ 0008fdba 002c
.org 0x8fdbc
	bne.n 0x8fd7c	@ 0008fdbc ded1
.org 0x8fdbe
	add sp, #4	@ 0008fdbe 01b0
.org 0x8fdc0
	pop {r3, r4, r5}	@ 0008fdc0 38bc
.org 0x8fdc2
	mov r8, r3	@ 0008fdc2 9846
.org 0x8fdc4
	mov r9, r4	@ 0008fdc4 a146
.org 0x8fdc6
	mov sl, r5	@ 0008fdc6 aa46
.org 0x8fdc8
	pop {r4, r5, r6, r7}	@ 0008fdc8 f0bc
.org 0x8fdca
	pop {r0}	@ 0008fdca 01bc
.org 0x8fdcc
	bx r0	@ 0008fdcc 0047
