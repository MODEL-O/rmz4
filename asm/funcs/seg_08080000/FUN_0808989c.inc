@ FUN_0808989c  entry 0x0808989c  size 142
.thumb
.org 0x8989c
FUN_0808989c:
	push {r4, r5, lr}	@ 0008989c 30b5
.org 0x8989e
	sub sp, #8	@ 0008989e 82b0
.org 0x898a0
	adds r5, r0, #0	@ 000898a0 051c
.org 0x898a2
	ldrb r0, [r5, #14]	@ 000898a2 a87b
.org 0x898a4
	cmp r0, #0	@ 000898a4 0028
.org 0x898a6
	beq.n 0x898ae	@ 000898a6 02d0
.org 0x898a8
	cmp r0, #1	@ 000898a8 0128
.org 0x898aa
	beq.n 0x898fa	@ 000898aa 26d0
.org 0x898ac
	b.n 0x89922	@ 000898ac 39e0
.org 0x898ae
	ldr r3, [pc, #124]	@ 000898ae 1f4b
.org 0x898b0
	ldrb r1, [r5, #10]	@ 000898b0 a97a
.org 0x898b2
	movs r0, #16	@ 000898b2 1020
.org 0x898b4
	ands r0, r1	@ 000898b4 0840
.org 0x898b6
	lsls r0, r0, #24	@ 000898b6 0006
.org 0x898b8
	lsrs r0, r0, #24	@ 000898b8 000e
.org 0x898ba
	negs r0, r0	@ 000898ba 4042
.org 0x898bc
	asrs r0, r0, #31	@ 000898bc c017
.org 0x898be
	movs r4, #8	@ 000898be 0824
.org 0x898c0
	ands r0, r4	@ 000898c0 2040
.org 0x898c2
	adds r2, r0, r3	@ 000898c2 c218
.org 0x898c4
	ldr r1, [r5, #84]	@ 000898c4 696d
.org 0x898c6
	ldr r2, [r2, #0]	@ 000898c6 1268
.org 0x898c8
	adds r1, r1, r2	@ 000898c8 8918
.org 0x898ca
	str r1, [sp, #0]	@ 000898ca 0091
.org 0x898cc
	adds r3, #4	@ 000898cc 0433
.org 0x898ce
	adds r0, r0, r3	@ 000898ce c018
.org 0x898d0
	ldr r1, [r5, #88]	@ 000898d0 a96d
.org 0x898d2
	ldr r0, [r0, #0]	@ 000898d2 0068
.org 0x898d4
	adds r1, r1, r0	@ 000898d4 0918
.org 0x898d6
	str r1, [sp, #4]	@ 000898d6 0191
.org 0x898d8
	adds r0, r5, #0	@ 000898d8 281c
.org 0x898da
	adds r0, #192	@ 000898da c030
.org 0x898dc
	ldr r2, [pc, #80]	@ 000898dc 144a
.org 0x898de
	adds r1, r2, #0	@ 000898de 111c
.org 0x898e0
	ldrb r0, [r0, #0]	@ 000898e0 0078
.org 0x898e2
	adds r1, r1, r0	@ 000898e2 0918
.org 0x898e4
	adds r0, r5, #0	@ 000898e4 281c
.org 0x898e6
	bl 0x1cf00	@ 000898e6 93f70bfb
.org 0x898ea
	movs r0, #2	@ 000898ea 0220
.org 0x898ec
	mov r1, sp	@ 000898ec 6946
.org 0x898ee
	bl 0xd0c88	@ 000898ee 47f0cbf9
.org 0x898f2
	strb r4, [r5, #18]	@ 000898f2 ac74
.org 0x898f4
	ldrb r0, [r5, #14]	@ 000898f4 a87b
.org 0x898f6
	adds r0, #1	@ 000898f6 0130
.org 0x898f8
	strb r0, [r5, #14]	@ 000898f8 a873
.org 0x898fa
	adds r0, r5, #0	@ 000898fa 281c
.org 0x898fc
	bl 0x1cff0	@ 000898fc 93f778fb
.org 0x89900
	adds r0, r5, #0	@ 00089900 281c
.org 0x89902
	adds r0, #115	@ 00089902 7330
.org 0x89904
	ldrb r0, [r0, #0]	@ 00089904 0078
.org 0x89906
	cmp r0, #3	@ 00089906 0328
.org 0x89908
	bne.n 0x89922	@ 00089908 0bd1
.org 0x8990a
	ldrb r0, [r5, #18]	@ 0008990a a87c
.org 0x8990c
	cmp r0, #0	@ 0008990c 0028
.org 0x8990e
	beq.n 0x8991a	@ 0008990e 04d0
.org 0x89910
	subs r0, #1	@ 00089910 0138
.org 0x89912
	strb r0, [r5, #18]	@ 00089912 a874
.org 0x89914
	lsls r0, r0, #24	@ 00089914 0006
.org 0x89916
	cmp r0, #0	@ 00089916 0028
.org 0x89918
	bne.n 0x89922	@ 00089918 03d1
.org 0x8991a
	movs r1, #0	@ 0008991a 0021
.org 0x8991c
	movs r0, #1	@ 0008991c 0120
.org 0x8991e
	strb r0, [r5, #13]	@ 0008991e 6873
.org 0x89920
	strb r1, [r5, #14]	@ 00089920 a973
.org 0x89922
	add sp, #8	@ 00089922 02b0
.org 0x89924
	pop {r4, r5}	@ 00089924 30bc
.org 0x89926
	pop {r0}	@ 00089926 01bc
.org 0x89928
	bx r0	@ 00089928 0047
