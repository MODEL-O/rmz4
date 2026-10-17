@ FUN_0808fe78  entry 0x0808fe78  size 128
.thumb
.org 0x8fe78
FUN_0808fe78:
	push {r4, r5, r6, r7, lr}	@ 0008fe78 f0b5
.org 0x8fe7a
	mov r7, r9	@ 0008fe7a 4f46
.org 0x8fe7c
	mov r6, r8	@ 0008fe7c 4646
.org 0x8fe7e
	push {r6, r7}	@ 0008fe7e c0b4
.org 0x8fe80
	sub sp, #4	@ 0008fe80 81b0
.org 0x8fe82
	adds r5, r0, #0	@ 0008fe82 051c
.org 0x8fe84
	ldr r2, [pc, #112]	@ 0008fe84 1c4a
.org 0x8fe86
	ldr r0, [r2, #0]	@ 0008fe86 1068
.org 0x8fe88
	ldr r3, [pc, #112]	@ 0008fe88 1c4b
.org 0x8fe8a
	muls r0, r3	@ 0008fe8a 5843
.org 0x8fe8c
	ldr r6, [pc, #112]	@ 0008fe8c 1c4e
.org 0x8fe8e
	adds r0, r0, r6	@ 0008fe8e 8019
.org 0x8fe90
	lsls r0, r0, #1	@ 0008fe90 4000
.org 0x8fe92
	lsrs r1, r0, #1	@ 0008fe92 4108
.org 0x8fe94
	str r1, [r2, #0]	@ 0008fe94 1160
.org 0x8fe96
	lsrs r0, r0, #17	@ 0008fe96 400c
.org 0x8fe98
	movs r1, #1	@ 0008fe98 0121
.org 0x8fe9a
	ands r0, r1	@ 0008fe9a 0840
.org 0x8fe9c
	adds r4, r0, #4	@ 0008fe9c 041d
.org 0x8fe9e
	cmp r4, #0	@ 0008fe9e 002c
.org 0x8fea0
	beq.n 0x8feea	@ 0008fea0 23d0
.org 0x8fea2
	mov r8, r2	@ 0008fea2 9046
.org 0x8fea4
	mov r9, r6	@ 0008fea4 b146
.org 0x8fea6
	movs r6, #31	@ 0008fea6 1f26
.org 0x8fea8
	mov r1, r8	@ 0008fea8 4146
.org 0x8feaa
	ldr r0, [r1, #0]	@ 0008feaa 0868
.org 0x8feac
	adds r1, r0, #0	@ 0008feac 011c
.org 0x8feae
	muls r1, r3	@ 0008feae 5943
.org 0x8feb0
	add r1, r9	@ 0008feb0 4944
.org 0x8feb2
	lsls r1, r1, #1	@ 0008feb2 4900
.org 0x8feb4
	lsrs r2, r1, #1	@ 0008feb4 4a08
.org 0x8feb6
	lsrs r1, r1, #17	@ 0008feb6 490c
.org 0x8feb8
	ands r1, r6	@ 0008feb8 3140
.org 0x8feba
	subs r1, #15	@ 0008feba 0f39
.org 0x8febc
	lsls r1, r1, #8	@ 0008febc 0902
.org 0x8febe
	ldr r0, [r5, #84]	@ 0008febe 686d
.org 0x8fec0
	adds r0, r0, r1	@ 0008fec0 4018
.org 0x8fec2
	muls r2, r3	@ 0008fec2 5a43
.org 0x8fec4
	add r2, r9	@ 0008fec4 4a44
.org 0x8fec6
	lsls r2, r2, #1	@ 0008fec6 5200
.org 0x8fec8
	lsrs r1, r2, #1	@ 0008fec8 5108
.org 0x8feca
	mov r7, r8	@ 0008feca 4746
.org 0x8fecc
	str r1, [r7, #0]	@ 0008fecc 3960
.org 0x8fece
	lsrs r2, r2, #17	@ 0008fece 520c
.org 0x8fed0
	ands r2, r6	@ 0008fed0 3240
.org 0x8fed2
	subs r2, #15	@ 0008fed2 0f3a
.org 0x8fed4
	lsls r2, r2, #8	@ 0008fed4 1202
.org 0x8fed6
	ldr r1, [r5, #88]	@ 0008fed6 a96d
.org 0x8fed8
	adds r1, r1, r2	@ 0008fed8 8918
.org 0x8feda
	movs r2, #0	@ 0008feda 0022
.org 0x8fedc
	str r3, [sp, #0]	@ 0008fedc 0093
.org 0x8fede
	bl 0xd0ff4	@ 0008fede 41f089f8
.org 0x8fee2
	subs r4, #1	@ 0008fee2 013c
.org 0x8fee4
	ldr r3, [sp, #0]	@ 0008fee4 009b
.org 0x8fee6
	cmp r4, #0	@ 0008fee6 002c
.org 0x8fee8
	bne.n 0x8fea8	@ 0008fee8 ded1
.org 0x8feea
	add sp, #4	@ 0008feea 01b0
.org 0x8feec
	pop {r3, r4}	@ 0008feec 18bc
.org 0x8feee
	mov r8, r3	@ 0008feee 9846
.org 0x8fef0
	mov r9, r4	@ 0008fef0 a146
.org 0x8fef2
	pop {r4, r5, r6, r7}	@ 0008fef2 f0bc
.org 0x8fef4
	pop {r0}	@ 0008fef4 01bc
.org 0x8fef6
	bx r0	@ 0008fef6 0047
