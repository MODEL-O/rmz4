@ FUN_080dfcd8  entry 0x080dfcd8  size 150
.thumb
.org 0xdfcd8
FUN_080dfcd8:
	push {r4, lr}	@ 000dfcd8 10b5
.org 0xdfcda
	adds r4, r0, #0	@ 000dfcda 041c
.org 0xdfcdc
	bl 0x1cff0	@ 000dfcdc 3df788f9
.org 0xdfce0
	ldr r1, [pc, #140]	@ 000dfce0 2349
.org 0xdfce2
	ldrb r0, [r4, #16]	@ 000dfce2 207c
.org 0xdfce4
	lsls r0, r0, #2	@ 000dfce4 8000
.org 0xdfce6
	adds r0, r0, r1	@ 000dfce6 4018
.org 0xdfce8
	ldr r1, [r0, #0]	@ 000dfce8 0168
.org 0xdfcea
	adds r0, r4, #0	@ 000dfcea 201c
.org 0xdfcec
	bl 0x128f80	@ 000dfcec 49f048f9
.org 0xdfcf0
	ldr r0, [r4, #84]	@ 000dfcf0 606d
.org 0xdfcf2
	ldr r2, [r4, #92]	@ 000dfcf2 e26d
.org 0xdfcf4
	adds r0, r0, r2	@ 000dfcf4 8018
.org 0xdfcf6
	str r0, [r4, #84]	@ 000dfcf6 6065
.org 0xdfcf8
	ldr r0, [r4, #88]	@ 000dfcf8 a06d
.org 0xdfcfa
	ldr r1, [r4, #96]	@ 000dfcfa 216e
.org 0xdfcfc
	adds r0, r0, r1	@ 000dfcfc 4018
.org 0xdfcfe
	str r0, [r4, #88]	@ 000dfcfe a065
.org 0xdfd00
	ldr r0, [r4, #100]	@ 000dfd00 606e
.org 0xdfd02
	adds r2, r2, r0	@ 000dfd02 1218
.org 0xdfd04
	str r2, [r4, #92]	@ 000dfd04 e265
.org 0xdfd06
	ldr r0, [r4, #104]	@ 000dfd06 a06e
.org 0xdfd08
	adds r1, r1, r0	@ 000dfd08 0918
.org 0xdfd0a
	str r1, [r4, #96]	@ 000dfd0a 2166
.org 0xdfd0c
	ldrb r1, [r4, #10]	@ 000dfd0c a17a
.org 0xdfd0e
	movs r0, #1	@ 000dfd0e 0120
.org 0xdfd10
	orrs r1, r0	@ 000dfd10 0143
.org 0xdfd12
	strb r1, [r4, #10]	@ 000dfd12 a172
.org 0xdfd14
	ldrb r0, [r4, #19]	@ 000dfd14 e07c
.org 0xdfd16
	subs r0, #1	@ 000dfd16 0138
.org 0xdfd18
	strb r0, [r4, #19]	@ 000dfd18 e074
.org 0xdfd1a
	lsls r0, r0, #24	@ 000dfd1a 0006
.org 0xdfd1c
	lsrs r0, r0, #24	@ 000dfd1c 000e
.org 0xdfd1e
	cmp r0, #255	@ 000dfd1e ff28
.org 0xdfd20
	bne.n 0xdfd38	@ 000dfd20 0ad1
.org 0xdfd22
	ldrb r0, [r4, #18]	@ 000dfd22 a07c
.org 0xdfd24
	subs r0, #1	@ 000dfd24 0138
.org 0xdfd26
	strb r0, [r4, #18]	@ 000dfd26 a074
.org 0xdfd28
	strb r0, [r4, #19]	@ 000dfd28 e074
.org 0xdfd2a
	lsls r0, r0, #24	@ 000dfd2a 0006
.org 0xdfd2c
	lsrs r0, r0, #24	@ 000dfd2c 000e
.org 0xdfd2e
	cmp r0, #7	@ 000dfd2e 0728
.org 0xdfd30
	bhi.n 0xdfd38	@ 000dfd30 02d8
.org 0xdfd32
	movs r0, #254	@ 000dfd32 fe20
.org 0xdfd34
	ands r1, r0	@ 000dfd34 0140
.org 0xdfd36
	strb r1, [r4, #10]	@ 000dfd36 a172
.org 0xdfd38
	ldr r0, [pc, #56]	@ 000dfd38 0e48
.org 0xdfd3a
	adds r1, r4, #0	@ 000dfd3a 211c
.org 0xdfd3c
	adds r1, #84	@ 000dfd3c 5431
.org 0xdfd3e
	bl 0x1fb14	@ 000dfd3e 3ff7e9fe
.org 0xdfd42
	movs r1, #128	@ 000dfd42 8021
.org 0xdfd44
	lsls r1, r1, #6	@ 000dfd44 8901
.org 0xdfd46
	cmp r0, r1	@ 000dfd46 8842
.org 0xdfd48
	bhi.n 0xdfd50	@ 000dfd48 02d8
.org 0xdfd4a
	ldrb r0, [r4, #18]	@ 000dfd4a a07c
.org 0xdfd4c
	cmp r0, #0	@ 000dfd4c 0028
.org 0xdfd4e
	bne.n 0xdfd68	@ 000dfd4e 0bd1
.org 0xdfd50
	ldr r1, [pc, #36]	@ 000dfd50 0949
.org 0xdfd52
	ldrb r0, [r4, #9]	@ 000dfd52 607a
.org 0xdfd54
	lsls r0, r0, #2	@ 000dfd54 8000
.org 0xdfd56
	adds r0, r0, r1	@ 000dfd56 4018
.org 0xdfd58
	movs r1, #2	@ 000dfd58 0221
.org 0xdfd5a
	str r1, [r4, #12]	@ 000dfd5a e160
.org 0xdfd5c
	ldr r0, [r0, #0]	@ 000dfd5c 0068
.org 0xdfd5e
	ldr r0, [r0, #8]	@ 000dfd5e 8068
.org 0xdfd60
	str r0, [r4, #20]	@ 000dfd60 6061
.org 0xdfd62
	adds r0, r4, #0	@ 000dfd62 201c
.org 0xdfd64
	bl 0xdfd7c	@ 000dfd64 00f00af8
.org 0xdfd68
	pop {r4}	@ 000dfd68 10bc
.org 0xdfd6a
	pop {r0}	@ 000dfd6a 01bc
.org 0xdfd6c
	bx r0	@ 000dfd6c 0047
