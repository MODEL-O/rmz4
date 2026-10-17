@ FUN_0808fddc  entry 0x0808fddc  size 142
.thumb
.org 0x8fddc
FUN_0808fddc:
	push {r4, r5, r6, r7, lr}	@ 0008fddc f0b5
.org 0x8fdde
	mov r7, r9	@ 0008fdde 4f46
.org 0x8fde0
	mov r6, r8	@ 0008fde0 4646
.org 0x8fde2
	push {r6, r7}	@ 0008fde2 c0b4
.org 0x8fde4
	adds r6, r0, #0	@ 0008fde4 061c
.org 0x8fde6
	ldrb r0, [r6, #10]	@ 0008fde6 b07a
.org 0x8fde8
	lsrs r3, r0, #4	@ 0008fde8 0309
.org 0x8fdea
	movs r2, #1	@ 0008fdea 0122
.org 0x8fdec
	ands r3, r2	@ 0008fdec 1340
.org 0x8fdee
	ldr r5, [pc, #124]	@ 0008fdee 1f4d
.org 0x8fdf0
	ldr r0, [r5, #0]	@ 0008fdf0 2868
.org 0x8fdf2
	ldr r7, [pc, #124]	@ 0008fdf2 1f4f
.org 0x8fdf4
	muls r0, r7	@ 0008fdf4 7843
.org 0x8fdf6
	ldr r1, [pc, #124]	@ 0008fdf6 1f49
.org 0x8fdf8
	mov ip, r1	@ 0008fdf8 8c46
.org 0x8fdfa
	add r0, ip	@ 0008fdfa 6044
.org 0x8fdfc
	lsls r0, r0, #1	@ 0008fdfc 4000
.org 0x8fdfe
	lsrs r1, r0, #1	@ 0008fdfe 4108
.org 0x8fe00
	str r1, [r5, #0]	@ 0008fe00 2960
.org 0x8fe02
	lsrs r0, r0, #17	@ 0008fe02 400c
.org 0x8fe04
	ands r0, r2	@ 0008fe04 1040
.org 0x8fe06
	adds r4, r0, #2	@ 0008fe06 841c
.org 0x8fe08
	cmp r4, #0	@ 0008fe08 002c
.org 0x8fe0a
	beq.n 0x8fe5e	@ 0008fe0a 28d0
.org 0x8fe0c
	lsls r0, r3, #1	@ 0008fe0c 5800
.org 0x8fe0e
	subs r0, #1	@ 0008fe0e 0138
.org 0x8fe10
	lsls r0, r0, #12	@ 0008fe10 0003
.org 0x8fe12
	negs r0, r0	@ 0008fe12 4042
.org 0x8fe14
	mov r9, r0	@ 0008fe14 8146
.org 0x8fe16
	mov r8, r5	@ 0008fe16 a846
.org 0x8fe18
	mov r5, ip	@ 0008fe18 6546
.org 0x8fe1a
	ldr r0, [r6, #84]	@ 0008fe1a 706d
.org 0x8fe1c
	add r0, r9	@ 0008fe1c 4844
.org 0x8fe1e
	mov r2, r8	@ 0008fe1e 4246
.org 0x8fe20
	ldr r1, [r2, #0]	@ 0008fe20 1168
.org 0x8fe22
	muls r1, r7	@ 0008fe22 7943
.org 0x8fe24
	adds r1, r1, r5	@ 0008fe24 4919
.org 0x8fe26
	lsls r1, r1, #1	@ 0008fe26 4900
.org 0x8fe28
	lsrs r3, r1, #1	@ 0008fe28 4b08
.org 0x8fe2a
	lsrs r1, r1, #17	@ 0008fe2a 490c
.org 0x8fe2c
	movs r2, #15	@ 0008fe2c 0f22
.org 0x8fe2e
	ands r1, r2	@ 0008fe2e 1140
.org 0x8fe30
	subs r1, #7	@ 0008fe30 0739
.org 0x8fe32
	lsls r1, r1, #8	@ 0008fe32 0902
.org 0x8fe34
	adds r0, r0, r1	@ 0008fe34 4018
.org 0x8fe36
	adds r2, r3, #0	@ 0008fe36 1a1c
.org 0x8fe38
	muls r2, r7	@ 0008fe38 7a43
.org 0x8fe3a
	adds r2, r2, r5	@ 0008fe3a 5219
.org 0x8fe3c
	lsls r2, r2, #1	@ 0008fe3c 5200
.org 0x8fe3e
	lsrs r1, r2, #1	@ 0008fe3e 5108
.org 0x8fe40
	mov r3, r8	@ 0008fe40 4346
.org 0x8fe42
	str r1, [r3, #0]	@ 0008fe42 1960
.org 0x8fe44
	lsrs r2, r2, #17	@ 0008fe44 520c
.org 0x8fe46
	movs r1, #7	@ 0008fe46 0721
.org 0x8fe48
	ands r2, r1	@ 0008fe48 0a40
.org 0x8fe4a
	subs r2, #3	@ 0008fe4a 033a
.org 0x8fe4c
	lsls r2, r2, #8	@ 0008fe4c 1202
.org 0x8fe4e
	ldr r1, [r6, #88]	@ 0008fe4e b16d
.org 0x8fe50
	adds r1, r1, r2	@ 0008fe50 8918
.org 0x8fe52
	movs r2, #0	@ 0008fe52 0022
.org 0x8fe54
	bl 0xd0ff4	@ 0008fe54 41f0cef8
.org 0x8fe58
	subs r4, #1	@ 0008fe58 013c
.org 0x8fe5a
	cmp r4, #0	@ 0008fe5a 002c
.org 0x8fe5c
	bne.n 0x8fe1a	@ 0008fe5c ddd1
.org 0x8fe5e
	pop {r3, r4}	@ 0008fe5e 18bc
.org 0x8fe60
	mov r8, r3	@ 0008fe60 9846
.org 0x8fe62
	mov r9, r4	@ 0008fe62 a146
.org 0x8fe64
	pop {r4, r5, r6, r7}	@ 0008fe64 f0bc
.org 0x8fe66
	pop {r0}	@ 0008fe66 01bc
.org 0x8fe68
	bx r0	@ 0008fe68 0047
