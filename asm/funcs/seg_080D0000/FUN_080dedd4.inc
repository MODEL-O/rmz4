@ FUN_080dedd4  entry 0x080dedd4  size 208
.thumb
.org 0xdedd4
FUN_080dedd4:
	push {r4, r5, r6, r7, lr}	@ 000dedd4 f0b5
.org 0xdedd6
	mov r7, sl	@ 000dedd6 5746
.org 0xdedd8
	mov r6, r9	@ 000dedd8 4e46
.org 0xdedda
	mov r5, r8	@ 000dedda 4546
.org 0xdeddc
	push {r5, r6, r7}	@ 000deddc e0b4
.org 0xdedde
	adds r4, r0, #0	@ 000dedde 041c
.org 0xdede0
	ldr r0, [pc, #192]	@ 000dede0 3048
.org 0xdede2
	mov sl, r0	@ 000dede2 8246
.org 0xdede4
	ldr r7, [r0, #0]	@ 000dede4 0768
.org 0xdede6
	adds r0, r4, #0	@ 000dede6 201c
.org 0xdede8
	bl 0x1cc9c	@ 000dede8 3df758ff
.org 0xdedec
	ldrb r1, [r4, #10]	@ 000dedec a17a
.org 0xdedee
	movs r0, #1	@ 000dedee 0120
.org 0xdedf0
	orrs r0, r1	@ 000dedf0 0843
.org 0xdedf2
	movs r1, #2	@ 000dedf2 0221
.org 0xdedf4
	orrs r0, r1	@ 000dedf4 0843
.org 0xdedf6
	strb r0, [r4, #10]	@ 000dedf6 a072
.org 0xdedf8
	ldr r5, [pc, #172]	@ 000dedf8 2b4d
.org 0xdedfa
	ldr r0, [r5, #0]	@ 000dedfa 2868
.org 0xdedfc
	ldr r1, [pc, #172]	@ 000dedfc 2b49
.org 0xdedfe
	mov r8, r1	@ 000dedfe 8846
.org 0xdee00
	mov r2, r8	@ 000dee00 4246
.org 0xdee02
	muls r2, r0	@ 000dee02 4243
.org 0xdee04
	adds r0, r2, #0	@ 000dee04 101c
.org 0xdee06
	ldr r6, [pc, #168]	@ 000dee06 2a4e
.org 0xdee08
	adds r0, r0, r6	@ 000dee08 8019
.org 0xdee0a
	lsls r0, r0, #1	@ 000dee0a 4000
.org 0xdee0c
	lsrs r1, r0, #1	@ 000dee0c 4108
.org 0xdee0e
	str r1, [r5, #0]	@ 000dee0e 2960
.org 0xdee10
	lsrs r0, r0, #17	@ 000dee10 400c
.org 0xdee12
	movs r1, #6	@ 000dee12 0621
.org 0xdee14
	bl 0x129198	@ 000dee14 4af0c0f9
.org 0xdee18
	adds r1, r0, #0	@ 000dee18 011c
.org 0xdee1a
	ldr r0, [pc, #152]	@ 000dee1a 2648
.org 0xdee1c
	adds r1, r1, r0	@ 000dee1c 0918
.org 0xdee1e
	lsls r1, r1, #16	@ 000dee1e 0904
.org 0xdee20
	lsrs r1, r1, #16	@ 000dee20 090c
.org 0xdee22
	adds r0, r4, #0	@ 000dee22 201c
.org 0xdee24
	bl 0x1cf00	@ 000dee24 3ef76cf8
.org 0xdee28
	ldr r0, [r5, #0]	@ 000dee28 2868
.org 0xdee2a
	mov r1, r8	@ 000dee2a 4146
.org 0xdee2c
	muls r1, r0	@ 000dee2c 4143
.org 0xdee2e
	adds r1, r1, r6	@ 000dee2e 8919
.org 0xdee30
	lsls r1, r1, #1	@ 000dee30 4900
.org 0xdee32
	lsrs r0, r1, #1	@ 000dee32 4808
.org 0xdee34
	lsrs r1, r1, #17	@ 000dee34 490c
.org 0xdee36
	movs r2, #15	@ 000dee36 0f22
.org 0xdee38
	mov r9, r2	@ 000dee38 9146
.org 0xdee3a
	ands r1, r2	@ 000dee3a 1140
.org 0xdee3c
	movs r3, #8	@ 000dee3c 0823
.org 0xdee3e
	subs r1, r3, r1	@ 000dee3e 591a
.org 0xdee40
	lsls r1, r1, #8	@ 000dee40 0902
.org 0xdee42
	str r1, [r4, #100]	@ 000dee42 6166
.org 0xdee44
	mov r2, r8	@ 000dee44 4246
.org 0xdee46
	muls r2, r0	@ 000dee46 4243
.org 0xdee48
	adds r0, r2, #0	@ 000dee48 101c
.org 0xdee4a
	adds r0, r0, r6	@ 000dee4a 8019
.org 0xdee4c
	lsls r0, r0, #1	@ 000dee4c 4000
.org 0xdee4e
	lsrs r2, r0, #1	@ 000dee4e 4208
.org 0xdee50
	str r2, [r5, #0]	@ 000dee50 2a60
.org 0xdee52
	lsrs r0, r0, #17	@ 000dee52 400c
.org 0xdee54
	mov r2, r9	@ 000dee54 4a46
.org 0xdee56
	ands r0, r2	@ 000dee56 1040
.org 0xdee58
	subs r3, r3, r0	@ 000dee58 1b1a
.org 0xdee5a
	lsls r3, r3, #8	@ 000dee5a 1b02
.org 0xdee5c
	str r3, [r4, #104]	@ 000dee5c a366
.org 0xdee5e
	mov r0, sl	@ 000dee5e 5046
.org 0xdee60
	ldr r2, [r0, #0]	@ 000dee60 0268
.org 0xdee62
	ldr r0, [r2, #84]	@ 000dee62 506d
.org 0xdee64
	adds r0, r0, r1	@ 000dee64 4018
.org 0xdee66
	str r0, [r4, #84]	@ 000dee66 6065
.org 0xdee68
	ldr r1, [r2, #88]	@ 000dee68 916d
.org 0xdee6a
	str r1, [r4, #88]	@ 000dee6a a165
.org 0xdee6c
	bl 0x8534	@ 000dee6c 29f762fb
.org 0xdee70
	str r0, [r4, #88]	@ 000dee70 a065
.org 0xdee72
	movs r1, #0	@ 000dee72 0021
.org 0xdee74
	strb r1, [r4, #18]	@ 000dee74 a174
.org 0xdee76
	adds r0, r7, #0	@ 000dee76 381c
.org 0xdee78
	movs r1, #8	@ 000dee78 0821
.org 0xdee7a
	bl 0x2b6b0	@ 000dee7a 4cf719fc
.org 0xdee7e
	ldr r1, [pc, #56]	@ 000dee7e 0e49
.org 0xdee80
	ldrb r0, [r4, #9]	@ 000dee80 607a
.org 0xdee82
	lsls r0, r0, #2	@ 000dee82 8000
.org 0xdee84
	adds r0, r0, r1	@ 000dee84 4018
.org 0xdee86
	movs r1, #1	@ 000dee86 0121
.org 0xdee88
	str r1, [r4, #12]	@ 000dee88 e160
.org 0xdee8a
	ldr r0, [r0, #0]	@ 000dee8a 0068
.org 0xdee8c
	ldr r0, [r0, #4]	@ 000dee8c 4068
.org 0xdee8e
	str r0, [r4, #20]	@ 000dee8e 6061
.org 0xdee90
	adds r0, r4, #0	@ 000dee90 201c
.org 0xdee92
	bl 0xdece0	@ 000dee92 fff725ff
.org 0xdee96
	pop {r3, r4, r5}	@ 000dee96 38bc
.org 0xdee98
	mov r8, r3	@ 000dee98 9846
.org 0xdee9a
	mov r9, r4	@ 000dee9a a146
.org 0xdee9c
	mov sl, r5	@ 000dee9c aa46
.org 0xdee9e
	pop {r4, r5, r6, r7}	@ 000dee9e f0bc
.org 0xdeea0
	pop {r0}	@ 000deea0 01bc
.org 0xdeea2
	bx r0	@ 000deea2 0047
