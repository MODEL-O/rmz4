@ FUN_08035ea0  entry 0x08035ea0  size 128
.thumb
.org 0x35ea0
FUN_08035ea0:
	push {r4, r5, lr}	@ 00035ea0 30b5
.org 0x35ea2
	adds r4, r0, #0	@ 00035ea2 041c
.org 0x35ea4
	movs r0, #129	@ 00035ea4 8120
.org 0x35ea6
	lsls r0, r0, #1	@ 00035ea6 4000
.org 0x35ea8
	adds r5, r4, r0	@ 00035ea8 2518
.org 0x35eaa
	ldrb r0, [r5, #0]	@ 00035eaa 2878
.org 0x35eac
	cmp r0, #0	@ 00035eac 0028
.org 0x35eae
	bne.n 0x35eca	@ 00035eae 0cd1
.org 0x35eb0
	movs r1, #200	@ 00035eb0 c821
.org 0x35eb2
	lsls r1, r1, #5	@ 00035eb2 4901
.org 0x35eb4
	adds r0, r4, #0	@ 00035eb4 201c
.org 0x35eb6
	bl 0x1cf00	@ 00035eb6 e7f723f8
.org 0x35eba
	adds r0, r4, #0	@ 00035eba 201c
.org 0x35ebc
	movs r1, #5	@ 00035ebc 0521
.org 0x35ebe
	bl 0x3c464	@ 00035ebe 06f0d1fa
.org 0x35ec2
	ldrb r0, [r5, #0]	@ 00035ec2 2878
.org 0x35ec4
	adds r0, #1	@ 00035ec4 0130
.org 0x35ec6
	strb r0, [r5, #0]	@ 00035ec6 2870
.org 0x35ec8
	b.n 0x35f1e	@ 00035ec8 29e0
.org 0x35eca
	movs r1, #200	@ 00035eca c821
.org 0x35ecc
	lsls r1, r1, #5	@ 00035ecc 4901
.org 0x35ece
	adds r0, r4, #0	@ 00035ece 201c
.org 0x35ed0
	bl 0x3a3b0	@ 00035ed0 04f06efa
.org 0x35ed4
	adds r0, r4, #0	@ 00035ed4 201c
.org 0x35ed6
	adds r0, #113	@ 00035ed6 7130
.org 0x35ed8
	ldrb r0, [r0, #0]	@ 00035ed8 0078
.org 0x35eda
	lsls r0, r0, #24	@ 00035eda 0006
.org 0x35edc
	asrs r0, r0, #24	@ 00035edc 0016
.org 0x35ede
	cmp r0, #5	@ 00035ede 0528
.org 0x35ee0
	bne.n 0x35f1e	@ 00035ee0 1dd1
.org 0x35ee2
	adds r0, r4, #0	@ 00035ee2 201c
.org 0x35ee4
	adds r0, #114	@ 00035ee4 7230
.org 0x35ee6
	ldrb r0, [r0, #0]	@ 00035ee6 0078
.org 0x35ee8
	lsls r0, r0, #24	@ 00035ee8 0006
.org 0x35eea
	asrs r0, r0, #24	@ 00035eea 0016
.org 0x35eec
	cmp r0, #1	@ 00035eec 0128
.org 0x35eee
	bgt.n 0x35f1e	@ 00035eee 16dc
.org 0x35ef0
	movs r1, #150	@ 00035ef0 9621
.org 0x35ef2
	lsls r1, r1, #2	@ 00035ef2 8900
.org 0x35ef4
	adds r0, r4, r1	@ 00035ef4 6018
.org 0x35ef6
	ldr r0, [r0, #0]	@ 00035ef6 0068
.org 0x35ef8
	movs r1, #128	@ 00035ef8 8021
.org 0x35efa
	ands r0, r1	@ 00035efa 0840
.org 0x35efc
	cmp r0, #0	@ 00035efc 0028
.org 0x35efe
	beq.n 0x35f0c	@ 00035efe 05d0
.org 0x35f00
	ldr r0, [pc, #4]	@ 00035f00 0148
.org 0x35f02
	adds r1, r4, r0	@ 00035f02 2118
.org 0x35f04
	movs r0, #2	@ 00035f04 0220
.org 0x35f06
	b.n 0x35f12	@ 00035f06 04e0
.org 0x35f08
	.byte 0x01,0x01,0x00,0x00	@ 00035f08 data
.org 0x35f0c
	ldr r0, [pc, #20]	@ 00035f0c 0548
.org 0x35f0e
	adds r1, r4, r0	@ 00035f0e 2118
.org 0x35f10
	movs r0, #3	@ 00035f10 0320
.org 0x35f12
	strb r0, [r1, #0]	@ 00035f12 0870
.org 0x35f14
	movs r0, #129	@ 00035f14 8120
.org 0x35f16
	lsls r0, r0, #1	@ 00035f16 4000
.org 0x35f18
	adds r1, r4, r0	@ 00035f18 2118
.org 0x35f1a
	movs r0, #0	@ 00035f1a 0020
.org 0x35f1c
	strb r0, [r1, #0]	@ 00035f1c 0870
.org 0x35f1e
	pop {r4, r5}	@ 00035f1e 30bc
