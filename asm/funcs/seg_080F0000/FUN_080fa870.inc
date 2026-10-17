@ FUN_080fa870  entry 0x080fa870  size 120
.thumb
.org 0xfa870
FUN_080fa870:
	push {r4, r5, r6, lr}	@ 000fa870 70b5
.org 0xfa872
	sub sp, #8	@ 000fa872 82b0
.org 0xfa874
	adds r5, r0, #0	@ 000fa874 051c
.org 0xfa876
	bl 0x1cff0	@ 000fa876 22f7bbfb
.org 0xfa87a
	ldr r0, [r5, #84]	@ 000fa87a 686d
.org 0xfa87c
	str r0, [sp, #0]	@ 000fa87c 0090
.org 0xfa87e
	ldr r0, [r5, #88]	@ 000fa87e a86d
.org 0xfa880
	ldr r1, [pc, #100]	@ 000fa880 1949
.org 0xfa882
	adds r0, r0, r1	@ 000fa882 4018
.org 0xfa884
	str r0, [sp, #4]	@ 000fa884 0190
.org 0xfa886
	ldr r6, [pc, #100]	@ 000fa886 194e
.org 0xfa888
	ldrb r0, [r5, #10]	@ 000fa888 a87a
.org 0xfa88a
	movs r4, #16	@ 000fa88a 1024
.org 0xfa88c
	adds r3, r4, #0	@ 000fa88c 231c
.org 0xfa88e
	ands r3, r0	@ 000fa88e 0340
.org 0xfa890
	lsls r3, r3, #24	@ 000fa890 1b06
.org 0xfa892
	lsrs r3, r3, #24	@ 000fa892 1b0e
.org 0xfa894
	mov r0, sp	@ 000fa894 6846
.org 0xfa896
	adds r1, r6, #0	@ 000fa896 311c
.org 0xfa898
	movs r2, #0	@ 000fa898 0022
.org 0xfa89a
	bl 0xd4c8c	@ 000fa89a daf7f7f9
.org 0xfa89e
	subs r6, #28	@ 000fa89e 1c3e
.org 0xfa8a0
	ldrb r0, [r5, #10]	@ 000fa8a0 a87a
.org 0xfa8a2
	ands r4, r0	@ 000fa8a2 0440
.org 0xfa8a4
	lsls r4, r4, #24	@ 000fa8a4 2406
.org 0xfa8a6
	lsrs r4, r4, #24	@ 000fa8a6 240e
.org 0xfa8a8
	mov r0, sp	@ 000fa8a8 6846
.org 0xfa8aa
	adds r1, r6, #0	@ 000fa8aa 311c
.org 0xfa8ac
	movs r2, #0	@ 000fa8ac 0022
.org 0xfa8ae
	adds r3, r4, #0	@ 000fa8ae 231c
.org 0xfa8b0
	bl 0xd4c8c	@ 000fa8b0 daf7ecf9
.org 0xfa8b4
	movs r0, #1	@ 000fa8b4 0120
.org 0xfa8b6
	mov r1, sp	@ 000fa8b6 6946
.org 0xfa8b8
	bl 0xd0c88	@ 000fa8b8 d6f7e6f9
.org 0xfa8bc
	movs r0, #42	@ 000fa8bc 2a20
.org 0xfa8be
	bl 0x2b10	@ 000fa8be 08f727f9
.org 0xfa8c2
	adds r2, r5, #0	@ 000fa8c2 2a1c
.org 0xfa8c4
	adds r2, #84	@ 000fa8c4 5432
.org 0xfa8c6
	movs r0, #0	@ 000fa8c6 0020
.org 0xfa8c8
	movs r1, #255	@ 000fa8c8 ff21
.org 0xfa8ca
	bl 0x2ab88	@ 000fa8ca 30f75df9
.org 0xfa8ce
	ldr r1, [pc, #32]	@ 000fa8ce 0849
.org 0xfa8d0
	ldrb r0, [r5, #9]	@ 000fa8d0 687a
.org 0xfa8d2
	lsls r0, r0, #2	@ 000fa8d2 8000
.org 0xfa8d4
	adds r0, r0, r1	@ 000fa8d4 4018
.org 0xfa8d6
	movs r1, #4	@ 000fa8d6 0421
.org 0xfa8d8
	str r1, [r5, #12]	@ 000fa8d8 e960
.org 0xfa8da
	ldr r0, [r0, #0]	@ 000fa8da 0068
.org 0xfa8dc
	ldr r0, [r0, #16]	@ 000fa8dc 0069
.org 0xfa8de
	str r0, [r5, #20]	@ 000fa8de 6861
.org 0xfa8e0
	add sp, #8	@ 000fa8e0 02b0
.org 0xfa8e2
	pop {r4, r5, r6}	@ 000fa8e2 70bc
.org 0xfa8e4
	pop {r0}	@ 000fa8e4 01bc
.org 0xfa8e6
	bx r0	@ 000fa8e6 0047
