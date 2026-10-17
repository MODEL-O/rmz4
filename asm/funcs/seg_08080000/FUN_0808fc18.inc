@ FUN_0808fc18  entry 0x0808fc18  size 272
.thumb
.org 0x8fc18
FUN_0808fc18:
	push {r4, r5, r6, r7, lr}	@ 0008fc18 f0b5
.org 0x8fc1a
	mov r7, sl	@ 0008fc1a 5746
.org 0x8fc1c
	mov r6, r9	@ 0008fc1c 4e46
.org 0x8fc1e
	mov r5, r8	@ 0008fc1e 4546
.org 0x8fc20
	push {r5, r6, r7}	@ 0008fc20 e0b4
.org 0x8fc22
	sub sp, #4	@ 0008fc22 81b0
.org 0x8fc24
	adds r5, r0, #0	@ 0008fc24 051c
.org 0x8fc26
	ldrb r0, [r5, #10]	@ 0008fc26 a87a
.org 0x8fc28
	lsrs r0, r0, #4	@ 0008fc28 0009
.org 0x8fc2a
	mov r9, r0	@ 0008fc2a 8146
.org 0x8fc2c
	movs r2, #1	@ 0008fc2c 0122
.org 0x8fc2e
	ands r0, r2	@ 0008fc2e 1040
.org 0x8fc30
	mov r9, r0	@ 0008fc30 8146
.org 0x8fc32
	ldr r3, [pc, #244]	@ 0008fc32 3d4b
.org 0x8fc34
	ldr r0, [r3, #0]	@ 0008fc34 1868
.org 0x8fc36
	ldr r7, [pc, #244]	@ 0008fc36 3d4f
.org 0x8fc38
	muls r0, r7	@ 0008fc38 7843
.org 0x8fc3a
	ldr r6, [pc, #244]	@ 0008fc3a 3d4e
.org 0x8fc3c
	adds r0, r0, r6	@ 0008fc3c 8019
.org 0x8fc3e
	lsls r0, r0, #1	@ 0008fc3e 4000
.org 0x8fc40
	lsrs r1, r0, #1	@ 0008fc40 4108
.org 0x8fc42
	str r1, [r3, #0]	@ 0008fc42 1960
.org 0x8fc44
	lsrs r0, r0, #17	@ 0008fc44 400c
.org 0x8fc46
	ands r0, r2	@ 0008fc46 1040
.org 0x8fc48
	adds r4, r0, #2	@ 0008fc48 841c
.org 0x8fc4a
	cmp r4, #0	@ 0008fc4a 002c
.org 0x8fc4c
	beq.n 0x8fca6	@ 0008fc4c 2bd0
.org 0x8fc4e
	mov r1, r9	@ 0008fc4e 4946
.org 0x8fc50
	lsls r0, r1, #1	@ 0008fc50 4800
.org 0x8fc52
	subs r0, #1	@ 0008fc52 0138
.org 0x8fc54
	lsls r0, r0, #11	@ 0008fc54 c002
.org 0x8fc56
	mov sl, r0	@ 0008fc56 8246
.org 0x8fc58
	mov r8, r3	@ 0008fc58 9846
.org 0x8fc5a
	adds r3, r7, #0	@ 0008fc5a 3b1c
.org 0x8fc5c
	movs r6, #7	@ 0008fc5c 0726
.org 0x8fc5e
	ldr r0, [r5, #84]	@ 0008fc5e 686d
.org 0x8fc60
	add r0, sl	@ 0008fc60 5044
.org 0x8fc62
	mov r2, r8	@ 0008fc62 4246
.org 0x8fc64
	ldr r1, [r2, #0]	@ 0008fc64 1168
.org 0x8fc66
	muls r1, r3	@ 0008fc66 5943
.org 0x8fc68
	ldr r7, [pc, #196]	@ 0008fc68 314f
.org 0x8fc6a
	adds r1, r1, r7	@ 0008fc6a c919
.org 0x8fc6c
	lsls r1, r1, #1	@ 0008fc6c 4900
.org 0x8fc6e
	lsrs r2, r1, #1	@ 0008fc6e 4a08
.org 0x8fc70
	lsrs r1, r1, #17	@ 0008fc70 490c
.org 0x8fc72
	ands r1, r6	@ 0008fc72 3140
.org 0x8fc74
	subs r1, #3	@ 0008fc74 0339
.org 0x8fc76
	lsls r1, r1, #8	@ 0008fc76 0902
.org 0x8fc78
	adds r0, r0, r1	@ 0008fc78 4018
.org 0x8fc7a
	muls r2, r3	@ 0008fc7a 5a43
.org 0x8fc7c
	adds r2, r2, r7	@ 0008fc7c d219
.org 0x8fc7e
	lsls r2, r2, #1	@ 0008fc7e 5200
.org 0x8fc80
	lsrs r1, r2, #1	@ 0008fc80 5108
.org 0x8fc82
	mov r7, r8	@ 0008fc82 4746
.org 0x8fc84
	str r1, [r7, #0]	@ 0008fc84 3960
.org 0x8fc86
	lsrs r2, r2, #17	@ 0008fc86 520c
.org 0x8fc88
	ands r2, r6	@ 0008fc88 3240
.org 0x8fc8a
	lsls r2, r2, #8	@ 0008fc8a 1202
.org 0x8fc8c
	movs r1, #160	@ 0008fc8c a021
.org 0x8fc8e
	lsls r1, r1, #3	@ 0008fc8e c900
.org 0x8fc90
	adds r2, r2, r1	@ 0008fc90 5218
.org 0x8fc92
	ldr r1, [r5, #88]	@ 0008fc92 a96d
.org 0x8fc94
	adds r1, r1, r2	@ 0008fc94 8918
.org 0x8fc96
	movs r2, #0	@ 0008fc96 0022
.org 0x8fc98
	str r3, [sp, #0]	@ 0008fc98 0093
.org 0x8fc9a
	bl 0xd0ff4	@ 0008fc9a 41f0abf9
.org 0x8fc9e
	subs r4, #1	@ 0008fc9e 013c
.org 0x8fca0
	ldr r3, [sp, #0]	@ 0008fca0 009b
.org 0x8fca2
	cmp r4, #0	@ 0008fca2 002c
.org 0x8fca4
	bne.n 0x8fc5e	@ 0008fca4 dbd1
.org 0x8fca6
	ldr r2, [pc, #128]	@ 0008fca6 204a
.org 0x8fca8
	ldr r0, [r2, #0]	@ 0008fca8 1068
.org 0x8fcaa
	ldr r3, [pc, #128]	@ 0008fcaa 204b
.org 0x8fcac
	muls r0, r3	@ 0008fcac 5843
.org 0x8fcae
	ldr r6, [pc, #128]	@ 0008fcae 204e
.org 0x8fcb0
	adds r0, r0, r6	@ 0008fcb0 8019
.org 0x8fcb2
	lsls r0, r0, #1	@ 0008fcb2 4000
.org 0x8fcb4
	lsrs r1, r0, #1	@ 0008fcb4 4108
.org 0x8fcb6
	str r1, [r2, #0]	@ 0008fcb6 1160
.org 0x8fcb8
	lsrs r0, r0, #17	@ 0008fcb8 400c
.org 0x8fcba
	movs r1, #1	@ 0008fcba 0121
.org 0x8fcbc
	ands r0, r1	@ 0008fcbc 0840
.org 0x8fcbe
	adds r4, r0, #3	@ 0008fcbe c41c
.org 0x8fcc0
	cmp r4, #0	@ 0008fcc0 002c
.org 0x8fcc2
	beq.n 0x8fd18	@ 0008fcc2 29d0
.org 0x8fcc4
	mov r7, r9	@ 0008fcc4 4f46
.org 0x8fcc6
	lsls r0, r7, #1	@ 0008fcc6 7800
.org 0x8fcc8
	subs r0, #1	@ 0008fcc8 0138
.org 0x8fcca
	lsls r0, r0, #12	@ 0008fcca 0003
.org 0x8fccc
	negs r0, r0	@ 0008fccc 4042
.org 0x8fcce
	mov r9, r0	@ 0008fcce 8146
.org 0x8fcd0
	mov r8, r2	@ 0008fcd0 9046
.org 0x8fcd2
	mov sl, r6	@ 0008fcd2 b246
.org 0x8fcd4
	movs r6, #7	@ 0008fcd4 0726
.org 0x8fcd6
	ldr r0, [r5, #84]	@ 0008fcd6 686d
.org 0x8fcd8
	add r0, r9	@ 0008fcd8 4844
.org 0x8fcda
	mov r2, r8	@ 0008fcda 4246
.org 0x8fcdc
	ldr r1, [r2, #0]	@ 0008fcdc 1168
.org 0x8fcde
	muls r1, r3	@ 0008fcde 5943
.org 0x8fce0
	add r1, sl	@ 0008fce0 5144
.org 0x8fce2
	lsls r1, r1, #1	@ 0008fce2 4900
.org 0x8fce4
	lsrs r2, r1, #1	@ 0008fce4 4a08
.org 0x8fce6
	lsrs r1, r1, #17	@ 0008fce6 490c
.org 0x8fce8
	ands r1, r6	@ 0008fce8 3140
.org 0x8fcea
	subs r1, #3	@ 0008fcea 0339
.org 0x8fcec
	lsls r1, r1, #8	@ 0008fcec 0902
.org 0x8fcee
	adds r0, r0, r1	@ 0008fcee 4018
.org 0x8fcf0
	muls r2, r3	@ 0008fcf0 5a43
.org 0x8fcf2
	add r2, sl	@ 0008fcf2 5244
.org 0x8fcf4
	lsls r2, r2, #1	@ 0008fcf4 5200
.org 0x8fcf6
	lsrs r1, r2, #1	@ 0008fcf6 5108
.org 0x8fcf8
	mov r7, r8	@ 0008fcf8 4746
.org 0x8fcfa
	str r1, [r7, #0]	@ 0008fcfa 3960
.org 0x8fcfc
	lsrs r2, r2, #17	@ 0008fcfc 520c
.org 0x8fcfe
	ands r2, r6	@ 0008fcfe 3240
.org 0x8fd00
	subs r2, #3	@ 0008fd00 033a
.org 0x8fd02
	lsls r2, r2, #8	@ 0008fd02 1202
.org 0x8fd04
	ldr r1, [r5, #88]	@ 0008fd04 a96d
.org 0x8fd06
	adds r1, r1, r2	@ 0008fd06 8918
.org 0x8fd08
	movs r2, #0	@ 0008fd08 0022
.org 0x8fd0a
	str r3, [sp, #0]	@ 0008fd0a 0093
.org 0x8fd0c
	bl 0xd0ff4	@ 0008fd0c 41f072f9
.org 0x8fd10
	subs r4, #1	@ 0008fd10 013c
.org 0x8fd12
	ldr r3, [sp, #0]	@ 0008fd12 009b
.org 0x8fd14
	cmp r4, #0	@ 0008fd14 002c
.org 0x8fd16
	bne.n 0x8fcd6	@ 0008fd16 ded1
.org 0x8fd18
	add sp, #4	@ 0008fd18 01b0
.org 0x8fd1a
	pop {r3, r4, r5}	@ 0008fd1a 38bc
.org 0x8fd1c
	mov r8, r3	@ 0008fd1c 9846
.org 0x8fd1e
	mov r9, r4	@ 0008fd1e a146
.org 0x8fd20
	mov sl, r5	@ 0008fd20 aa46
.org 0x8fd22
	pop {r4, r5, r6, r7}	@ 0008fd22 f0bc
.org 0x8fd24
	pop {r0}	@ 0008fd24 01bc
.org 0x8fd26
	bx r0	@ 0008fd26 0047
