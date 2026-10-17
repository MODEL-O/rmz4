@ FUN_08009688  entry 0x08009688  size 160
.thumb
.org 0x9688
FUN_08009688:
	push {r4, r5, r6, r7, lr}	@ 00009688 f0b5
.org 0x968a
	mov r7, sl	@ 0000968a 5746
.org 0x968c
	mov r6, r9	@ 0000968c 4e46
.org 0x968e
	mov r5, r8	@ 0000968e 4546
.org 0x9690
	push {r5, r6, r7}	@ 00009690 e0b4
.org 0x9692
	sub sp, #4	@ 00009692 81b0
.org 0x9694
	str r0, [sp, #0]	@ 00009694 0090
.org 0x9696
	adds r7, r1, #0	@ 00009696 0f1c
.org 0x9698
	adds r5, r2, #0	@ 00009698 151c
.org 0x969a
	cmp r5, r7	@ 0000969a bd42
.org 0x969c
	bge.n 0x96a6	@ 0000969c 03da
.org 0x969e
	adds r1, r5, #0	@ 0000969e 291c
.org 0x96a0
	bl 0x9420	@ 000096a0 fff7befe
.org 0x96a4
	b.n 0x9718	@ 000096a4 38e0
.org 0x96a6
	subs r0, r5, r7	@ 000096a6 e81b
.org 0x96a8
	asrs r0, r0, #1	@ 000096a8 4010
.org 0x96aa
	mov sl, r0	@ 000096aa 8246
.org 0x96ac
	add r7, sl	@ 000096ac 5744
.org 0x96ae
	ldr r0, [pc, #120]	@ 000096ae 1e48
.org 0x96b0
	movs r2, #233	@ 000096b0 e922
.org 0x96b2
	lsls r2, r2, #1	@ 000096b2 5200
.org 0x96b4
	adds r1, r0, r2	@ 000096b4 8118
.org 0x96b6
	ldrb r1, [r1, #0]	@ 000096b6 0978
.org 0x96b8
	cmp r1, #0	@ 000096b8 0029
.org 0x96ba
	beq.n 0x9716	@ 000096ba 2cd0
.org 0x96bc
	movs r3, #240	@ 000096bc f023
.org 0x96be
	lsls r3, r3, #1	@ 000096be 5b00
.org 0x96c0
	adds r3, r3, r0	@ 000096c0 1b18
.org 0x96c2
	mov r9, r3	@ 000096c2 9946
.org 0x96c4
	adds r2, #10	@ 000096c4 0a32
.org 0x96c6
	adds r2, r2, r0	@ 000096c6 1218
.org 0x96c8
	mov r8, r2	@ 000096c8 9046
.org 0x96ca
	mov ip, r0	@ 000096ca 8446
.org 0x96cc
	adds r6, r1, #0	@ 000096cc 0e1c
.org 0x96ce
	movs r0, #236	@ 000096ce ec20
.org 0x96d0
	lsls r0, r0, #1	@ 000096d0 4000
.org 0x96d2
	add r0, ip	@ 000096d2 6044
.org 0x96d4
	ldrh r1, [r0, #0]	@ 000096d4 0188
.org 0x96d6
	lsls r2, r1, #1	@ 000096d6 4a00
.org 0x96d8
	mov r3, r8	@ 000096d8 4346
.org 0x96da
	ldr r0, [r3, #0]	@ 000096da 1868
.org 0x96dc
	ldr r3, [sp, #0]	@ 000096dc 009b
.org 0x96de
	subs r0, r3, r0	@ 000096de 181a
.org 0x96e0
	adds r0, r0, r1	@ 000096e0 4018
.org 0x96e2
	cmp r2, r0	@ 000096e2 8242
.org 0x96e4
	bls.n 0x9708	@ 000096e4 10d9
.org 0x96e6
	movs r0, #237	@ 000096e6 ed20
.org 0x96e8
	lsls r0, r0, #1	@ 000096e8 4000
.org 0x96ea
	add r0, ip	@ 000096ea 6044
.org 0x96ec
	ldrh r4, [r0, #0]	@ 000096ec 0488
.org 0x96ee
	mov r1, sl	@ 000096ee 5146
.org 0x96f0
	adds r0, r4, r1	@ 000096f0 6018
.org 0x96f2
	lsls r2, r0, #1	@ 000096f2 4200
.org 0x96f4
	mov r1, r9	@ 000096f4 4946
.org 0x96f6
	ldr r3, [r1, #0]	@ 000096f6 0b68
.org 0x96f8
	subs r1, r7, r3	@ 000096f8 f91a
.org 0x96fa
	adds r1, r1, r0	@ 000096fa 0918
.org 0x96fc
	cmp r2, r1	@ 000096fc 8a42
.org 0x96fe
	bls.n 0x9708	@ 000096fe 03d9
.org 0x9700
	subs r0, r3, r4	@ 00009700 181b
.org 0x9702
	cmp r5, r0	@ 00009702 8542
.org 0x9704
	ble.n 0x9708	@ 00009704 00dd
.org 0x9706
	adds r5, r0, #0	@ 00009706 051c
.org 0x9708
	movs r2, #24	@ 00009708 1822
.org 0x970a
	add r9, r2	@ 0000970a 9144
.org 0x970c
	add r8, r2	@ 0000970c 9044
.org 0x970e
	add ip, r2	@ 0000970e 9444
.org 0x9710
	subs r6, #1	@ 00009710 013e
.org 0x9712
	cmp r6, #0	@ 00009712 002e
.org 0x9714
	bne.n 0x96ce	@ 00009714 dbd1
.org 0x9716
	adds r0, r5, #0	@ 00009716 281c
.org 0x9718
	add sp, #4	@ 00009718 01b0
.org 0x971a
	pop {r3, r4, r5}	@ 0000971a 38bc
.org 0x971c
	mov r8, r3	@ 0000971c 9846
.org 0x971e
	mov r9, r4	@ 0000971e a146
.org 0x9720
	mov sl, r5	@ 00009720 aa46
.org 0x9722
	pop {r4, r5, r6, r7}	@ 00009722 f0bc
.org 0x9724
	pop {r1}	@ 00009724 02bc
.org 0x9726
	bx r1	@ 00009726 0847
