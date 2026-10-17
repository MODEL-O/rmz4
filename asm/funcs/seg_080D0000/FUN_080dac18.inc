@ FUN_080dac18  entry 0x080dac18  size 224
.thumb
.org 0xdac18
FUN_080dac18:
	push {r4, r5, r6, r7, lr}	@ 000dac18 f0b5
.org 0xdac1a
	mov r7, r8	@ 000dac1a 4746
.org 0xdac1c
	push {r7}	@ 000dac1c 80b4
.org 0xdac1e
	sub sp, #12	@ 000dac1e 83b0
.org 0xdac20
	adds r6, r0, #0	@ 000dac20 061c
.org 0xdac22
	ldrb r1, [r6, #10]	@ 000dac22 b17a
.org 0xdac24
	movs r0, #254	@ 000dac24 fe20
.org 0xdac26
	ands r0, r1	@ 000dac26 0840
.org 0xdac28
	strb r0, [r6, #10]	@ 000dac28 b072
.org 0xdac2a
	ldr r0, [pc, #204]	@ 000dac2a 3348
.org 0xdac2c
	mov r8, r0	@ 000dac2c 8046
.org 0xdac2e
	ldr r0, [r0, #0]	@ 000dac2e 0068
.org 0xdac30
	ldr r5, [pc, #200]	@ 000dac30 324d
.org 0xdac32
	muls r0, r5	@ 000dac32 6843
.org 0xdac34
	ldr r4, [pc, #200]	@ 000dac34 324c
.org 0xdac36
	adds r0, r0, r4	@ 000dac36 0019
.org 0xdac38
	lsls r0, r0, #1	@ 000dac38 4000
.org 0xdac3a
	lsrs r3, r0, #1	@ 000dac3a 4308
.org 0xdac3c
	lsrs r0, r0, #17	@ 000dac3c 400c
.org 0xdac3e
	movs r2, #7	@ 000dac3e 0722
.org 0xdac40
	ands r0, r2	@ 000dac40 1040
.org 0xdac42
	subs r0, #3	@ 000dac42 0338
.org 0xdac44
	lsls r0, r0, #8	@ 000dac44 0002
.org 0xdac46
	ldr r1, [r6, #84]	@ 000dac46 716d
.org 0xdac48
	adds r1, r1, r0	@ 000dac48 0918
.org 0xdac4a
	str r1, [sp, #0]	@ 000dac4a 0091
.org 0xdac4c
	adds r0, r3, #0	@ 000dac4c 181c
.org 0xdac4e
	muls r0, r5	@ 000dac4e 6843
.org 0xdac50
	adds r0, r0, r4	@ 000dac50 0019
.org 0xdac52
	lsls r0, r0, #1	@ 000dac52 4000
.org 0xdac54
	lsrs r1, r0, #1	@ 000dac54 4108
.org 0xdac56
	mov r3, r8	@ 000dac56 4346
.org 0xdac58
	str r1, [r3, #0]	@ 000dac58 1960
.org 0xdac5a
	lsrs r0, r0, #17	@ 000dac5a 400c
.org 0xdac5c
	ands r0, r2	@ 000dac5c 1040
.org 0xdac5e
	subs r0, #3	@ 000dac5e 0338
.org 0xdac60
	lsls r0, r0, #8	@ 000dac60 0002
.org 0xdac62
	ldr r1, [r6, #88]	@ 000dac62 b16d
.org 0xdac64
	adds r1, r1, r0	@ 000dac64 0918
.org 0xdac66
	str r1, [sp, #4]	@ 000dac66 0191
.org 0xdac68
	movs r0, #1	@ 000dac68 0120
.org 0xdac6a
	mov r1, sp	@ 000dac6a 6946
.org 0xdac6c
	bl 0xd0c88	@ 000dac6c f6f70cf8
.org 0xdac70
	ldrb r0, [r6, #10]	@ 000dac70 b07a
.org 0xdac72
	lsrs r3, r0, #4	@ 000dac72 0309
.org 0xdac74
	movs r2, #1	@ 000dac74 0122
.org 0xdac76
	ands r3, r2	@ 000dac76 1340
.org 0xdac78
	ldr r0, [r6, #84]	@ 000dac78 706d
.org 0xdac7a
	str r0, [sp, #0]	@ 000dac7a 0090
.org 0xdac7c
	ldr r0, [r6, #88]	@ 000dac7c b06d
.org 0xdac7e
	str r0, [sp, #4]	@ 000dac7e 0190
.org 0xdac80
	mov r1, r8	@ 000dac80 4146
.org 0xdac82
	ldr r0, [r1, #0]	@ 000dac82 0868
.org 0xdac84
	muls r0, r5	@ 000dac84 6843
.org 0xdac86
	adds r0, r0, r4	@ 000dac86 0019
.org 0xdac88
	lsls r0, r0, #1	@ 000dac88 4000
.org 0xdac8a
	lsrs r1, r0, #1	@ 000dac8a 4108
.org 0xdac8c
	lsrs r0, r0, #17	@ 000dac8c 400c
.org 0xdac8e
	ands r0, r2	@ 000dac8e 1040
.org 0xdac90
	adds r7, r0, #1	@ 000dac90 471c
.org 0xdac92
	adds r0, r1, #0	@ 000dac92 081c
.org 0xdac94
	muls r0, r5	@ 000dac94 6843
.org 0xdac96
	adds r0, r0, r4	@ 000dac96 0019
.org 0xdac98
	lsls r0, r0, #1	@ 000dac98 4000
.org 0xdac9a
	lsrs r1, r0, #1	@ 000dac9a 4108
.org 0xdac9c
	mov r2, r8	@ 000dac9c 4246
.org 0xdac9e
	str r1, [r2, #0]	@ 000dac9e 1160
.org 0xdaca0
	lsrs r0, r0, #17	@ 000daca0 400c
.org 0xdaca2
	movs r1, #3	@ 000daca2 0321
.org 0xdaca4
	str r3, [sp, #8]	@ 000daca4 0293
.org 0xdaca6
	bl 0x129198	@ 000daca6 4ef077fa
.org 0xdacaa
	adds r5, r0, #0	@ 000dacaa 051c
.org 0xdacac
	ldr r3, [sp, #8]	@ 000dacac 029b
.org 0xdacae
	cmp r7, #0	@ 000dacae 002f
.org 0xdacb0
	beq.n 0xdacda	@ 000dacb0 13d0
.org 0xdacb2
	lsls r0, r3, #4	@ 000dacb2 1801
.org 0xdacb4
	orrs r3, r0	@ 000dacb4 0343
.org 0xdacb6
	lsls r4, r3, #24	@ 000dacb6 1c06
.org 0xdacb8
	adds r0, r7, r5	@ 000dacb8 7819
.org 0xdacba
	movs r1, #3	@ 000dacba 0321
.org 0xdacbc
	bl 0x129050	@ 000dacbc 4ef0c8f9
.org 0xdacc0
	lsls r1, r0, #3	@ 000dacc0 c100
.org 0xdacc2
	subs r1, r1, r0	@ 000dacc2 091a
.org 0xdacc4
	lsls r1, r1, #2	@ 000dacc4 8900
.org 0xdacc6
	ldr r0, [pc, #60]	@ 000dacc6 0f48
.org 0xdacc8
	adds r1, r1, r0	@ 000dacc8 0918
.org 0xdacca
	mov r0, sp	@ 000dacca 6846
.org 0xdaccc
	movs r2, #0	@ 000daccc 0022
.org 0xdacce
	lsrs r3, r4, #24	@ 000dacce 230e
.org 0xdacd0
	bl 0xd4c8c	@ 000dacd0 f9f7dcff
.org 0xdacd4
	subs r7, #1	@ 000dacd4 013f
.org 0xdacd6
	cmp r7, #0	@ 000dacd6 002f
.org 0xdacd8
	bne.n 0xdacb8	@ 000dacd8 eed1
.org 0xdacda
	ldr r1, [pc, #44]	@ 000dacda 0b49
.org 0xdacdc
	ldrb r0, [r6, #9]	@ 000dacdc 707a
.org 0xdacde
	lsls r0, r0, #2	@ 000dacde 8000
.org 0xdace0
	adds r0, r0, r1	@ 000dace0 4018
.org 0xdace2
	movs r1, #4	@ 000dace2 0421
.org 0xdace4
	str r1, [r6, #12]	@ 000dace4 f160
.org 0xdace6
	ldr r0, [r0, #0]	@ 000dace6 0068
.org 0xdace8
	ldr r0, [r0, #16]	@ 000dace8 0069
.org 0xdacea
	str r0, [r6, #20]	@ 000dacea 7061
.org 0xdacec
	add sp, #12	@ 000dacec 03b0
.org 0xdacee
	pop {r3}	@ 000dacee 08bc
.org 0xdacf0
	mov r8, r3	@ 000dacf0 9846
.org 0xdacf2
	pop {r4, r5, r6, r7}	@ 000dacf2 f0bc
.org 0xdacf4
	pop {r0}	@ 000dacf4 01bc
.org 0xdacf6
	bx r0	@ 000dacf6 0047
