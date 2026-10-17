@ FUN_080c4018  entry 0x080c4018  size 88
.thumb
.org 0xc4018
FUN_080c4018:
	push {lr}	@ 000c4018 00b5
.org 0xc401a
	adds r3, r0, #0	@ 000c401a 031c
.org 0xc401c
	ldr r0, [r3, #40]	@ 000c401c 986a
.org 0xc401e
	ldrb r0, [r0, #12]	@ 000c401e 007b
.org 0xc4020
	cmp r0, #1	@ 000c4020 0128
.org 0xc4022
	bls.n 0xc4060	@ 000c4022 1dd9
.org 0xc4024
	ldrb r1, [r3, #10]	@ 000c4024 997a
.org 0xc4026
	movs r0, #254	@ 000c4026 fe20
.org 0xc4028
	ands r0, r1	@ 000c4028 0840
.org 0xc402a
	movs r2, #0	@ 000c402a 0022
.org 0xc402c
	movs r1, #253	@ 000c402c fd21
.org 0xc402e
	ands r0, r1	@ 000c402e 0840
.org 0xc4030
	strb r0, [r3, #10]	@ 000c4030 9872
.org 0xc4032
	adds r0, r3, #0	@ 000c4032 181c
.org 0xc4034
	adds r0, #140	@ 000c4034 8c30
.org 0xc4036
	str r2, [r0, #0]	@ 000c4036 0260
.org 0xc4038
	adds r0, #4	@ 000c4038 0430
.org 0xc403a
	str r2, [r0, #0]	@ 000c403a 0260
.org 0xc403c
	adds r0, #4	@ 000c403c 0430
.org 0xc403e
	strb r2, [r0, #0]	@ 000c403e 0270
.org 0xc4040
	ldrb r1, [r3, #10]	@ 000c4040 997a
.org 0xc4042
	movs r0, #251	@ 000c4042 fb20
.org 0xc4044
	ands r0, r1	@ 000c4044 0840
.org 0xc4046
	strb r0, [r3, #10]	@ 000c4046 9872
.org 0xc4048
	ldr r1, [pc, #16]	@ 000c4048 0449
.org 0xc404a
	ldrb r0, [r3, #9]	@ 000c404a 587a
.org 0xc404c
	lsls r0, r0, #2	@ 000c404c 8000
.org 0xc404e
	adds r0, r0, r1	@ 000c404e 4018
.org 0xc4050
	movs r1, #3	@ 000c4050 0321
.org 0xc4052
	str r1, [r3, #12]	@ 000c4052 d960
.org 0xc4054
	ldr r0, [r0, #0]	@ 000c4054 0068
.org 0xc4056
	ldr r0, [r0, #12]	@ 000c4056 c068
.org 0xc4058
	str r0, [r3, #20]	@ 000c4058 5861
.org 0xc405a
	b.n 0xc4070	@ 000c405a 09e0
.org 0xc405c
	.byte 0xf4,0x49,0x86,0x08	@ 000c405c data
.org 0xc4060
	ldr r0, [pc, #16]	@ 000c4060 0448
.org 0xc4062
	ldrb r1, [r3, #13]	@ 000c4062 597b
.org 0xc4064
	lsls r1, r1, #2	@ 000c4064 8900
.org 0xc4066
	adds r1, r1, r0	@ 000c4066 0918
.org 0xc4068
	ldr r1, [r1, #0]	@ 000c4068 0968
.org 0xc406a
	adds r0, r3, #0	@ 000c406a 181c
.org 0xc406c
	bl 0x128f80	@ 000c406c 64f088ff
