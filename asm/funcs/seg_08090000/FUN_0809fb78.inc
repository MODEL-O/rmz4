@ FUN_0809fb78  entry 0x0809fb78  size 120
.thumb
.org 0x9fb78
FUN_0809fb78:
	push {r4, r5, lr}	@ 0009fb78 30b5
.org 0x9fb7a
	adds r4, r0, #0	@ 0009fb7a 041c
.org 0x9fb7c
	ldr r5, [r4, #40]	@ 0009fb7c a56a
.org 0x9fb7e
	bl 0x1cff0	@ 0009fb7e 7df737fa
.org 0x9fb82
	ldrb r2, [r4, #15]	@ 0009fb82 e27b
.org 0x9fb84
	adds r3, r2, #0	@ 0009fb84 131c
.org 0x9fb86
	cmp r3, #0	@ 0009fb86 002b
.org 0x9fb88
	bne.n 0x9fbae	@ 0009fb88 11d1
.org 0x9fb8a
	ldr r0, [r4, #84]	@ 0009fb8a 606d
.org 0x9fb8c
	ldr r1, [r4, #92]	@ 0009fb8c e16d
.org 0x9fb8e
	adds r0, r0, r1	@ 0009fb8e 4018
.org 0x9fb90
	str r0, [r4, #84]	@ 0009fb90 6065
.org 0x9fb92
	ldr r0, [r4, #100]	@ 0009fb92 606e
.org 0x9fb94
	adds r1, r1, r0	@ 0009fb94 0918
.org 0x9fb96
	str r1, [r4, #92]	@ 0009fb96 e165
.org 0x9fb98
	ldrb r0, [r4, #18]	@ 0009fb98 a07c
.org 0x9fb9a
	adds r1, r0, #1	@ 0009fb9a 411c
.org 0x9fb9c
	strb r1, [r4, #18]	@ 0009fb9c a174
.org 0x9fb9e
	lsls r0, r0, #24	@ 0009fb9e 0006
.org 0x9fba0
	lsrs r0, r0, #24	@ 0009fba0 000e
.org 0x9fba2
	cmp r0, #64	@ 0009fba2 4028
.org 0x9fba4
	bls.n 0x9fbea	@ 0009fba4 21d9
.org 0x9fba6
	adds r0, r2, #1	@ 0009fba6 501c
.org 0x9fba8
	strb r0, [r4, #15]	@ 0009fba8 e073
.org 0x9fbaa
	strb r3, [r4, #18]	@ 0009fbaa a374
.org 0x9fbac
	b.n 0x9fbea	@ 0009fbac 1de0
.org 0x9fbae
	ldrb r0, [r5, #13]	@ 0009fbae 687b
.org 0x9fbb0
	cmp r0, #3	@ 0009fbb0 0328
.org 0x9fbb2
	bls.n 0x9fbea	@ 0009fbb2 1ad9
.org 0x9fbb4
	ldrb r1, [r4, #10]	@ 0009fbb4 a17a
.org 0x9fbb6
	movs r0, #254	@ 0009fbb6 fe20
.org 0x9fbb8
	ands r0, r1	@ 0009fbb8 0840
.org 0x9fbba
	movs r2, #0	@ 0009fbba 0022
.org 0x9fbbc
	movs r1, #253	@ 0009fbbc fd21
.org 0x9fbbe
	ands r0, r1	@ 0009fbbe 0840
.org 0x9fbc0
	strb r0, [r4, #10]	@ 0009fbc0 a072
.org 0x9fbc2
	adds r0, r4, #0	@ 0009fbc2 201c
.org 0x9fbc4
	adds r0, #140	@ 0009fbc4 8c30
.org 0x9fbc6
	str r2, [r0, #0]	@ 0009fbc6 0260
.org 0x9fbc8
	adds r0, #4	@ 0009fbc8 0430
.org 0x9fbca
	str r2, [r0, #0]	@ 0009fbca 0260
.org 0x9fbcc
	adds r0, #4	@ 0009fbcc 0430
.org 0x9fbce
	strb r2, [r0, #0]	@ 0009fbce 0270
.org 0x9fbd0
	ldrb r1, [r4, #10]	@ 0009fbd0 a17a
.org 0x9fbd2
	movs r0, #251	@ 0009fbd2 fb20
.org 0x9fbd4
	ands r0, r1	@ 0009fbd4 0840
.org 0x9fbd6
	strb r0, [r4, #10]	@ 0009fbd6 a072
.org 0x9fbd8
	ldr r1, [pc, #20]	@ 0009fbd8 0549
.org 0x9fbda
	ldrb r0, [r4, #9]	@ 0009fbda 607a
.org 0x9fbdc
	lsls r0, r0, #2	@ 0009fbdc 8000
.org 0x9fbde
	adds r0, r0, r1	@ 0009fbde 4018
.org 0x9fbe0
	movs r1, #3	@ 0009fbe0 0321
.org 0x9fbe2
	str r1, [r4, #12]	@ 0009fbe2 e160
.org 0x9fbe4
	ldr r0, [r0, #0]	@ 0009fbe4 0068
.org 0x9fbe6
	ldr r0, [r0, #12]	@ 0009fbe6 c068
.org 0x9fbe8
	str r0, [r4, #20]	@ 0009fbe8 6061
.org 0x9fbea
	pop {r4, r5}	@ 0009fbea 30bc
.org 0x9fbec
	pop {r0}	@ 0009fbec 01bc
.org 0x9fbee
	bx r0	@ 0009fbee 0047
