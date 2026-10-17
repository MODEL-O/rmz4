@ FUN_080dba9c  entry 0x080dba9c  size 242
.thumb
.org 0xdba9c
FUN_080dba9c:
	push {r4, r5, r6, r7, lr}	@ 000dba9c f0b5
.org 0xdba9e
	adds r4, r0, #0	@ 000dba9e 041c
.org 0xdbaa0
	ldr r6, [r4, #40]	@ 000dbaa0 a66a
.org 0xdbaa2
	adds r0, #116	@ 000dbaa2 7430
.org 0xdbaa4
	ldrb r7, [r0, #0]	@ 000dbaa4 0778
.org 0xdbaa6
	ldrb r5, [r4, #15]	@ 000dbaa6 e57b
.org 0xdbaa8
	cmp r5, #0	@ 000dbaa8 002d
.org 0xdbaaa
	bne.n 0xdbac0	@ 000dbaaa 09d1
.org 0xdbaac
	ldr r1, [pc, #60]	@ 000dbaac 0f49
.org 0xdbaae
	adds r0, r4, #0	@ 000dbaae 201c
.org 0xdbab0
	bl 0x1cf00	@ 000dbab0 41f726fa
.org 0xdbab4
	movs r0, #28	@ 000dbab4 1c20
.org 0xdbab6
	strb r0, [r4, #18]	@ 000dbab6 a074
.org 0xdbab8
	strb r5, [r4, #19]	@ 000dbab8 e574
.org 0xdbaba
	ldrb r0, [r4, #15]	@ 000dbaba e07b
.org 0xdbabc
	adds r0, #1	@ 000dbabc 0130
.org 0xdbabe
	strb r0, [r4, #15]	@ 000dbabe e073
.org 0xdbac0
	adds r0, r4, #0	@ 000dbac0 201c
.org 0xdbac2
	bl 0x1cff0	@ 000dbac2 41f795fa
.org 0xdbac6
	ldrb r0, [r4, #18]	@ 000dbac6 a07c
.org 0xdbac8
	subs r0, #1	@ 000dbac8 0138
.org 0xdbaca
	strb r0, [r4, #18]	@ 000dbaca a074
.org 0xdbacc
	lsls r0, r0, #24	@ 000dbacc 0006
.org 0xdbace
	cmp r0, #0	@ 000dbace 0028
.org 0xdbad0
	bne.n 0xdbaf4	@ 000dbad0 10d1
.org 0xdbad2
	ldr r1, [pc, #28]	@ 000dbad2 0749
.org 0xdbad4
	ldrb r0, [r4, #9]	@ 000dbad4 607a
.org 0xdbad6
	lsls r0, r0, #2	@ 000dbad6 8000
.org 0xdbad8
	adds r0, r0, r1	@ 000dbad8 4018
.org 0xdbada
	movs r1, #2	@ 000dbada 0221
.org 0xdbadc
	str r1, [r4, #12]	@ 000dbadc e160
.org 0xdbade
	ldr r0, [r0, #0]	@ 000dbade 0068
.org 0xdbae0
	ldr r0, [r0, #8]	@ 000dbae0 8068
.org 0xdbae2
	str r0, [r4, #20]	@ 000dbae2 6061
.org 0xdbae4
	adds r0, r4, #0	@ 000dbae4 201c
.org 0xdbae6
	bl 0xdbba4	@ 000dbae6 00f05df8
.org 0xdbaea
	b.n 0xdbb94	@ 000dbaea 53e0
.org 0xdbaec
	.byte 0x0d,0x40,0x00,0x00	@ 000dbaec data
.org 0xdbaf0
	.byte 0x64,0x6f,0x86,0x08	@ 000dbaf0 data
.org 0xdbaf4
	ldrb r5, [r4, #19]	@ 000dbaf4 e57c
.org 0xdbaf6
	cmp r5, #0	@ 000dbaf6 002d
.org 0xdbaf8
	bne.n 0xdbb54	@ 000dbaf8 2cd1
.org 0xdbafa
	ldrb r0, [r6, #12]	@ 000dbafa 307b
.org 0xdbafc
	cmp r0, #4	@ 000dbafc 0428
.org 0xdbafe
	beq.n 0xdbb54	@ 000dbafe 29d0
.org 0xdbb00
	ldrb r0, [r4, #18]	@ 000dbb00 a07c
.org 0xdbb02
	adds r3, r0, #0	@ 000dbb02 031c
.org 0xdbb04
	subs r3, #12	@ 000dbb04 0c3b
.org 0xdbb06
	ldr r1, [pc, #72]	@ 000dbb06 1249
.org 0xdbb08
	lsls r0, r3, #26	@ 000dbb08 9806
.org 0xdbb0a
	lsrs r0, r0, #23	@ 000dbb0a c00d
.org 0xdbb0c
	adds r0, r0, r1	@ 000dbb0c 4018
.org 0xdbb0e
	movs r1, #0	@ 000dbb0e 0021
.org 0xdbb10
	ldrsh r3, [r0, r1]	@ 000dbb10 435e
.org 0xdbb12
	ldr r1, [r6, #84]	@ 000dbb12 716d
.org 0xdbb14
	ldr r0, [r4, #120]	@ 000dbb14 a06f
.org 0xdbb16
	adds r1, r1, r0	@ 000dbb16 0918
.org 0xdbb18
	lsls r0, r7, #1	@ 000dbb18 7800
.org 0xdbb1a
	subs r0, #1	@ 000dbb1a 0138
.org 0xdbb1c
	lsls r2, r0, #10	@ 000dbb1c 8202
.org 0xdbb1e
	subs r1, r1, r2	@ 000dbb1e 891a
.org 0xdbb20
	lsls r0, r0, #2	@ 000dbb20 8000
.org 0xdbb22
	muls r0, r3	@ 000dbb22 5843
.org 0xdbb24
	adds r1, r1, r0	@ 000dbb24 0918
.org 0xdbb26
	str r1, [r4, #84]	@ 000dbb26 6165
.org 0xdbb28
	ldr r1, [r6, #88]	@ 000dbb28 b16d
.org 0xdbb2a
	ldr r0, [r4, #124]	@ 000dbb2a e06f
.org 0xdbb2c
	adds r1, r1, r0	@ 000dbb2c 0918
.org 0xdbb2e
	lsls r0, r3, #10	@ 000dbb2e 9802
.org 0xdbb30
	negs r0, r0	@ 000dbb30 4042
.org 0xdbb32
	cmp r0, #0	@ 000dbb32 0028
.org 0xdbb34
	bge.n 0xdbb38	@ 000dbb34 00da
.org 0xdbb36
	adds r0, #255	@ 000dbb36 ff30
.org 0xdbb38
	asrs r0, r0, #8	@ 000dbb38 0012
.org 0xdbb3a
	movs r2, #128	@ 000dbb3a 8022
.org 0xdbb3c
	lsls r2, r2, #3	@ 000dbb3c d200
.org 0xdbb3e
	adds r0, r0, r2	@ 000dbb3e 8018
.org 0xdbb40
	adds r0, r1, r0	@ 000dbb40 0818
.org 0xdbb42
	str r0, [r4, #88]	@ 000dbb42 a065
.org 0xdbb44
	cmp r3, #0	@ 000dbb44 002b
.org 0xdbb46
	bgt.n 0xdbb94	@ 000dbb46 25dc
.org 0xdbb48
	movs r0, #1	@ 000dbb48 0120
.org 0xdbb4a
	strb r0, [r4, #19]	@ 000dbb4a e074
.org 0xdbb4c
	str r5, [r4, #96]	@ 000dbb4c 2566
.org 0xdbb4e
	b.n 0xdbb94	@ 000dbb4e 21e0
.org 0xdbb50
	.byte 0x0c,0x93,0x12,0x08	@ 000dbb50 data
.org 0xdbb54
	ldr r0, [r4, #96]	@ 000dbb54 206e
.org 0xdbb56
	adds r0, #64	@ 000dbb56 4030
.org 0xdbb58
	str r0, [r4, #96]	@ 000dbb58 2066
.org 0xdbb5a
	movs r1, #224	@ 000dbb5a e021
.org 0xdbb5c
	lsls r1, r1, #3	@ 000dbb5c c900
.org 0xdbb5e
	cmp r0, r1	@ 000dbb5e 8842
.org 0xdbb60
	ble.n 0xdbb64	@ 000dbb60 00dd
.org 0xdbb62
	str r1, [r4, #96]	@ 000dbb62 2166
.org 0xdbb64
	ldr r1, [r4, #88]	@ 000dbb64 a16d
.org 0xdbb66
	ldr r0, [r4, #96]	@ 000dbb66 206e
.org 0xdbb68
	adds r1, r1, r0	@ 000dbb68 0918
.org 0xdbb6a
	str r1, [r4, #88]	@ 000dbb6a a165
.org 0xdbb6c
	ldr r0, [r4, #84]	@ 000dbb6c 606d
.org 0xdbb6e
	ldr r2, [pc, #44]	@ 000dbb6e 0b4a
.org 0xdbb70
	adds r1, r1, r2	@ 000dbb70 8918
.org 0xdbb72
	bl 0x7c7c	@ 000dbb72 2cf783f8
.org 0xdbb76
	lsls r0, r0, #16	@ 000dbb76 0004
.org 0xdbb78
	cmp r0, #0	@ 000dbb78 0028
.org 0xdbb7a
	beq.n 0xdbb94	@ 000dbb7a 0bd0
.org 0xdbb7c
	ldr r1, [pc, #32]	@ 000dbb7c 0849
.org 0xdbb7e
	ldrb r0, [r4, #9]	@ 000dbb7e 607a
.org 0xdbb80
	lsls r0, r0, #2	@ 000dbb80 8000
.org 0xdbb82
	adds r0, r0, r1	@ 000dbb82 4018
.org 0xdbb84
	movs r1, #2	@ 000dbb84 0221
.org 0xdbb86
	str r1, [r4, #12]	@ 000dbb86 e160
.org 0xdbb88
	ldr r0, [r0, #0]	@ 000dbb88 0068
.org 0xdbb8a
	ldr r0, [r0, #8]	@ 000dbb8a 8068
.org 0xdbb8c
	str r0, [r4, #20]	@ 000dbb8c 6061
