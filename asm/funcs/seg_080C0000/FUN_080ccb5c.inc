@ FUN_080ccb5c  entry 0x080ccb5c  size 216
.thumb
.org 0xccb5c
FUN_080ccb5c:
	push {r4, r5, r6, lr}	@ 000ccb5c 70b5
.org 0xccb5e
	adds r4, r0, #0	@ 000ccb5e 041c
.org 0xccb60
	ldr r1, [r4, #88]	@ 000ccb60 a16d
.org 0xccb62
	ldr r0, [r4, #96]	@ 000ccb62 206e
.org 0xccb64
	adds r1, r1, r0	@ 000ccb64 0918
.org 0xccb66
	str r1, [r4, #88]	@ 000ccb66 a165
.org 0xccb68
	ldr r0, [r4, #84]	@ 000ccb68 606d
.org 0xccb6a
	movs r6, #128	@ 000ccb6a 8026
.org 0xccb6c
	lsls r6, r6, #3	@ 000ccb6c f600
.org 0xccb6e
	adds r1, r1, r6	@ 000ccb6e 8919
.org 0xccb70
	bl 0x7c7c	@ 000ccb70 3bf784f8
.org 0xccb74
	lsls r0, r0, #16	@ 000ccb74 0004
.org 0xccb76
	lsrs r1, r0, #16	@ 000ccb76 010c
.org 0xccb78
	ldr r0, [r4, #96]	@ 000ccb78 206e
.org 0xccb7a
	cmp r0, #0	@ 000ccb7a 0028
.org 0xccb7c
	beq.n 0xccbca	@ 000ccb7c 25d0
.org 0xccb7e
	movs r0, #128	@ 000ccb7e 8020
.org 0xccb80
	lsls r0, r0, #8	@ 000ccb80 0002
.org 0xccb82
	ands r0, r1	@ 000ccb82 0840
.org 0xccb84
	lsls r0, r0, #16	@ 000ccb84 0004
.org 0xccb86
	lsrs r5, r0, #16	@ 000ccb86 050c
.org 0xccb88
	cmp r5, #0	@ 000ccb88 002d
.org 0xccb8a
	bne.n 0xccbca	@ 000ccb8a 1ed1
.org 0xccb8c
	cmp r1, #0	@ 000ccb8c 0029
.org 0xccb8e
	beq.n 0xccbca	@ 000ccb8e 1cd0
.org 0xccb90
	adds r0, r4, #0	@ 000ccb90 201c
.org 0xccb92
	adds r0, #140	@ 000ccb92 8c30
.org 0xccb94
	str r5, [r0, #0]	@ 000ccb94 0560
.org 0xccb96
	adds r0, #4	@ 000ccb96 0430
.org 0xccb98
	str r5, [r0, #0]	@ 000ccb98 0560
.org 0xccb9a
	adds r0, #4	@ 000ccb9a 0430
.org 0xccb9c
	strb r5, [r0, #0]	@ 000ccb9c 0570
.org 0xccb9e
	ldrb r1, [r4, #10]	@ 000ccb9e a17a
.org 0xccba0
	movs r0, #251	@ 000ccba0 fb20
.org 0xccba2
	ands r0, r1	@ 000ccba2 0840
.org 0xccba4
	strb r0, [r4, #10]	@ 000ccba4 a072
.org 0xccba6
	ldr r1, [pc, #140]	@ 000ccba6 2349
.org 0xccba8
	adds r0, r4, #0	@ 000ccba8 201c
.org 0xccbaa
	bl 0x1cf00	@ 000ccbaa 50f7a9f9
.org 0xccbae
	ldr r0, [r4, #88]	@ 000ccbae a06d
.org 0xccbb0
	adds r0, r0, r6	@ 000ccbb0 8019
.org 0xccbb2
	str r0, [r4, #88]	@ 000ccbb2 a065
.org 0xccbb4
	str r5, [r4, #96]	@ 000ccbb4 2566
.org 0xccbb6
	adds r0, r4, #0	@ 000ccbb6 201c
.org 0xccbb8
	adds r0, #84	@ 000ccbb8 5430
.org 0xccbba
	movs r1, #128	@ 000ccbba 8021
.org 0xccbbc
	lsls r1, r1, #2	@ 000ccbbc 8900
.org 0xccbbe
	ldrb r2, [r4, #10]	@ 000ccbbe a27a
.org 0xccbc0
	lsrs r2, r2, #4	@ 000ccbc0 1209
.org 0xccbc2
	movs r3, #1	@ 000ccbc2 0123
.org 0xccbc4
	ands r2, r3	@ 000ccbc4 1a40
.org 0xccbc6
	bl 0xe2914	@ 000ccbc6 15f0a5fe
.org 0xccbca
	adds r0, r4, #0	@ 000ccbca 201c
.org 0xccbcc
	adds r0, #115	@ 000ccbcc 7330
.org 0xccbce
	ldrb r0, [r0, #0]	@ 000ccbce 0078
.org 0xccbd0
	cmp r0, #3	@ 000ccbd0 0328
.org 0xccbd2
	bne.n 0xccbe6	@ 000ccbd2 08d1
.org 0xccbd4
	ldr r1, [pc, #96]	@ 000ccbd4 1849
.org 0xccbd6
	ldrb r0, [r4, #9]	@ 000ccbd6 607a
.org 0xccbd8
	lsls r0, r0, #2	@ 000ccbd8 8000
.org 0xccbda
	adds r0, r0, r1	@ 000ccbda 4018
.org 0xccbdc
	movs r1, #2	@ 000ccbdc 0221
.org 0xccbde
	str r1, [r4, #12]	@ 000ccbde e160
.org 0xccbe0
	ldr r0, [r0, #0]	@ 000ccbe0 0068
.org 0xccbe2
	ldr r0, [r0, #8]	@ 000ccbe2 8068
.org 0xccbe4
	str r0, [r4, #20]	@ 000ccbe4 6061
.org 0xccbe6
	ldr r0, [pc, #84]	@ 000ccbe6 1548
.org 0xccbe8
	adds r1, r4, #0	@ 000ccbe8 211c
.org 0xccbea
	adds r1, #84	@ 000ccbea 5431
.org 0xccbec
	bl 0x1fb14	@ 000ccbec 52f792ff
.org 0xccbf0
	movs r1, #128	@ 000ccbf0 8021
.org 0xccbf2
	lsls r1, r1, #7	@ 000ccbf2 c901
.org 0xccbf4
	cmp r0, r1	@ 000ccbf4 8842
.org 0xccbf6
	bls.n 0xccc2e	@ 000ccbf6 1ad9
.org 0xccbf8
	ldrb r1, [r4, #10]	@ 000ccbf8 a17a
.org 0xccbfa
	movs r0, #254	@ 000ccbfa fe20
.org 0xccbfc
	ands r0, r1	@ 000ccbfc 0840
.org 0xccbfe
	movs r2, #0	@ 000ccbfe 0022
.org 0xccc00
	movs r1, #253	@ 000ccc00 fd21
.org 0xccc02
	ands r0, r1	@ 000ccc02 0840
.org 0xccc04
	strb r0, [r4, #10]	@ 000ccc04 a072
.org 0xccc06
	adds r0, r4, #0	@ 000ccc06 201c
.org 0xccc08
	adds r0, #140	@ 000ccc08 8c30
.org 0xccc0a
	str r2, [r0, #0]	@ 000ccc0a 0260
.org 0xccc0c
	adds r0, #4	@ 000ccc0c 0430
.org 0xccc0e
	str r2, [r0, #0]	@ 000ccc0e 0260
.org 0xccc10
	adds r0, #4	@ 000ccc10 0430
.org 0xccc12
	strb r2, [r0, #0]	@ 000ccc12 0270
.org 0xccc14
	ldrb r1, [r4, #10]	@ 000ccc14 a17a
.org 0xccc16
	movs r0, #251	@ 000ccc16 fb20
.org 0xccc18
	ands r0, r1	@ 000ccc18 0840
.org 0xccc1a
	strb r0, [r4, #10]	@ 000ccc1a a072
.org 0xccc1c
	ldr r1, [pc, #24]	@ 000ccc1c 0649
.org 0xccc1e
	ldrb r0, [r4, #9]	@ 000ccc1e 607a
.org 0xccc20
	lsls r0, r0, #2	@ 000ccc20 8000
.org 0xccc22
	adds r0, r0, r1	@ 000ccc22 4018
.org 0xccc24
	movs r1, #3	@ 000ccc24 0321
.org 0xccc26
	str r1, [r4, #12]	@ 000ccc26 e160
.org 0xccc28
	ldr r0, [r0, #0]	@ 000ccc28 0068
.org 0xccc2a
	ldr r0, [r0, #12]	@ 000ccc2a c068
.org 0xccc2c
	str r0, [r4, #20]	@ 000ccc2c 6061
.org 0xccc2e
	pop {r4, r5, r6}	@ 000ccc2e 70bc
.org 0xccc30
	pop {r0}	@ 000ccc30 01bc
.org 0xccc32
	bx r0	@ 000ccc32 0047
