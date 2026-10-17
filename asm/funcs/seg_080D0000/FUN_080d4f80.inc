@ FUN_080d4f80  entry 0x080d4f80  size 236
.thumb
.org 0xd4f80
FUN_080d4f80:
	push {r4, r5, lr}	@ 000d4f80 30b5
.org 0xd4f82
	adds r4, r0, #0	@ 000d4f82 041c
.org 0xd4f84
	ldr r5, [r4, #124]	@ 000d4f84 e56f
.org 0xd4f86
	bl 0x1cff0	@ 000d4f86 48f733f8
.org 0xd4f8a
	ldrb r1, [r5, #3]	@ 000d4f8a e978
.org 0xd4f8c
	movs r0, #16	@ 000d4f8c 1020
.org 0xd4f8e
	ands r0, r1	@ 000d4f8e 0840
.org 0xd4f90
	cmp r0, #0	@ 000d4f90 0028
.org 0xd4f92
	beq.n 0xd4fae	@ 000d4f92 0cd0
.org 0xd4f94
	ldrb r1, [r4, #18]	@ 000d4f94 a17c
.org 0xd4f96
	movs r0, #1	@ 000d4f96 0120
.org 0xd4f98
	ands r0, r1	@ 000d4f98 0840
.org 0xd4f9a
	cmp r0, #0	@ 000d4f9a 0028
.org 0xd4f9c
	beq.n 0xd4fa6	@ 000d4f9c 03d0
.org 0xd4f9e
	ldrb r1, [r4, #10]	@ 000d4f9e a17a
.org 0xd4fa0
	movs r0, #1	@ 000d4fa0 0120
.org 0xd4fa2
	orrs r0, r1	@ 000d4fa2 0843
.org 0xd4fa4
	b.n 0xd4fac	@ 000d4fa4 02e0
.org 0xd4fa6
	ldrb r1, [r4, #10]	@ 000d4fa6 a17a
.org 0xd4fa8
	movs r0, #254	@ 000d4fa8 fe20
.org 0xd4faa
	ands r0, r1	@ 000d4faa 0840
.org 0xd4fac
	strb r0, [r4, #10]	@ 000d4fac a072
.org 0xd4fae
	ldr r1, [r4, #96]	@ 000d4fae 216e
.org 0xd4fb0
	ldr r0, [r4, #104]	@ 000d4fb0 a06e
.org 0xd4fb2
	adds r2, r1, r0	@ 000d4fb2 0a18
.org 0xd4fb4
	str r2, [r4, #96]	@ 000d4fb4 2266
.org 0xd4fb6
	ldr r0, [r4, #88]	@ 000d4fb6 a06d
.org 0xd4fb8
	adds r3, r0, r2	@ 000d4fb8 8318
.org 0xd4fba
	str r3, [r4, #88]	@ 000d4fba a365
.org 0xd4fbc
	ldrb r1, [r5, #3]	@ 000d4fbc e978
.org 0xd4fbe
	movs r0, #32	@ 000d4fbe 2020
.org 0xd4fc0
	ands r0, r1	@ 000d4fc0 0840
.org 0xd4fc2
	lsls r0, r0, #24	@ 000d4fc2 0006
.org 0xd4fc4
	lsrs r5, r0, #24	@ 000d4fc4 050e
.org 0xd4fc6
	cmp r5, #0	@ 000d4fc6 002d
.org 0xd4fc8
	bne.n 0xd5032	@ 000d4fc8 33d1
.org 0xd4fca
	adds r1, r3, #0	@ 000d4fca 191c
.org 0xd4fcc
	cmp r2, #0	@ 000d4fcc 002a
.org 0xd4fce
	ble.n 0xd4fdc	@ 000d4fce 05dd
.org 0xd4fd0
	adds r0, r4, #0	@ 000d4fd0 201c
.org 0xd4fd2
	adds r0, #118	@ 000d4fd2 7630
.org 0xd4fd4
	movs r2, #0	@ 000d4fd4 0022
.org 0xd4fd6
	ldrsh r0, [r0, r2]	@ 000d4fd6 805e
.org 0xd4fd8
	adds r1, r1, r0	@ 000d4fd8 0918
.org 0xd4fda
	b.n 0xd4fe6	@ 000d4fda 04e0
.org 0xd4fdc
	adds r0, r4, #0	@ 000d4fdc 201c
.org 0xd4fde
	adds r0, #118	@ 000d4fde 7630
.org 0xd4fe0
	movs r1, #0	@ 000d4fe0 0021
.org 0xd4fe2
	ldrsh r0, [r0, r1]	@ 000d4fe2 405e
.org 0xd4fe4
	subs r1, r3, r0	@ 000d4fe4 191a
.org 0xd4fe6
	ldr r0, [r4, #84]	@ 000d4fe6 606d
.org 0xd4fe8
	bl 0x7c7c	@ 000d4fe8 32f748fe
.org 0xd4fec
	lsls r0, r0, #16	@ 000d4fec 0004
.org 0xd4fee
	cmp r0, #0	@ 000d4fee 0028
.org 0xd4ff0
	beq.n 0xd4ff4	@ 000d4ff0 00d0
.org 0xd4ff2
	strb r5, [r4, #18]	@ 000d4ff2 a574
.org 0xd4ff4
	ldr r0, [r4, #92]	@ 000d4ff4 e06d
.org 0xd4ff6
	ldr r1, [r4, #100]	@ 000d4ff6 616e
.org 0xd4ff8
	adds r0, r0, r1	@ 000d4ff8 4018
.org 0xd4ffa
	str r0, [r4, #92]	@ 000d4ffa e065
.org 0xd4ffc
	ldr r1, [r4, #84]	@ 000d4ffc 616d
.org 0xd4ffe
	adds r1, r1, r0	@ 000d4ffe 0918
.org 0xd5000
	str r1, [r4, #84]	@ 000d5000 6165
.org 0xd5002
	adds r2, r1, #0	@ 000d5002 0a1c
.org 0xd5004
	cmp r0, #0	@ 000d5004 0028
.org 0xd5006
	ble.n 0xd5014	@ 000d5006 05dd
.org 0xd5008
	adds r0, r4, #0	@ 000d5008 201c
.org 0xd500a
	adds r0, #116	@ 000d500a 7430
.org 0xd500c
	movs r1, #0	@ 000d500c 0021
.org 0xd500e
	ldrsh r0, [r0, r1]	@ 000d500e 405e
.org 0xd5010
	adds r2, r2, r0	@ 000d5010 1218
.org 0xd5012
	b.n 0xd501e	@ 000d5012 04e0
.org 0xd5014
	adds r0, r4, #0	@ 000d5014 201c
.org 0xd5016
	adds r0, #116	@ 000d5016 7430
.org 0xd5018
	movs r2, #0	@ 000d5018 0022
.org 0xd501a
	ldrsh r0, [r0, r2]	@ 000d501a 805e
.org 0xd501c
	subs r2, r1, r0	@ 000d501c 0a1a
.org 0xd501e
	ldr r1, [r4, #88]	@ 000d501e a16d
.org 0xd5020
	adds r0, r2, #0	@ 000d5020 101c
.org 0xd5022
	bl 0x7c7c	@ 000d5022 32f72bfe
.org 0xd5026
	lsls r0, r0, #16	@ 000d5026 0004
.org 0xd5028
	cmp r0, #0	@ 000d5028 0028
.org 0xd502a
	beq.n 0xd5040	@ 000d502a 09d0
.org 0xd502c
	movs r0, #0	@ 000d502c 0020
.org 0xd502e
	strb r0, [r4, #18]	@ 000d502e a074
.org 0xd5030
	b.n 0xd5040	@ 000d5030 06e0
.org 0xd5032
	ldr r0, [r4, #92]	@ 000d5032 e06d
.org 0xd5034
	ldr r1, [r4, #100]	@ 000d5034 616e
.org 0xd5036
	adds r0, r0, r1	@ 000d5036 4018
.org 0xd5038
	str r0, [r4, #92]	@ 000d5038 e065
.org 0xd503a
	ldr r1, [r4, #84]	@ 000d503a 616d
.org 0xd503c
	adds r1, r1, r0	@ 000d503c 0918
.org 0xd503e
	str r1, [r4, #84]	@ 000d503e 6165
.org 0xd5040
	ldrb r0, [r4, #18]	@ 000d5040 a07c
.org 0xd5042
	subs r0, #1	@ 000d5042 0138
.org 0xd5044
	strb r0, [r4, #18]	@ 000d5044 a074
.org 0xd5046
	lsls r0, r0, #24	@ 000d5046 0006
.org 0xd5048
	lsrs r0, r0, #24	@ 000d5048 000e
.org 0xd504a
	cmp r0, #255	@ 000d504a ff28
.org 0xd504c
	bne.n 0xd5066	@ 000d504c 0bd1
.org 0xd504e
	ldr r1, [pc, #28]	@ 000d504e 0749
.org 0xd5050
	ldrb r0, [r4, #9]	@ 000d5050 607a
.org 0xd5052
	lsls r0, r0, #2	@ 000d5052 8000
.org 0xd5054
	adds r0, r0, r1	@ 000d5054 4018
.org 0xd5056
	movs r1, #2	@ 000d5056 0221
.org 0xd5058
	str r1, [r4, #12]	@ 000d5058 e160
.org 0xd505a
	ldr r0, [r0, #0]	@ 000d505a 0068
.org 0xd505c
	ldr r0, [r0, #8]	@ 000d505c 8068
.org 0xd505e
	str r0, [r4, #20]	@ 000d505e 6061
.org 0xd5060
	adds r0, r4, #0	@ 000d5060 201c
.org 0xd5062
	bl 0xd4ec4	@ 000d5062 fff72fff
.org 0xd5066
	pop {r4, r5}	@ 000d5066 30bc
.org 0xd5068
	pop {r0}	@ 000d5068 01bc
.org 0xd506a
	bx r0	@ 000d506a 0047
