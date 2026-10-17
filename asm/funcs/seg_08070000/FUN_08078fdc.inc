@ FUN_08078fdc  entry 0x08078fdc  size 102
.thumb
.org 0x78fdc
FUN_08078fdc:
	push {r4, r5, r6, lr}	@ 00078fdc 70b5
.org 0x78fde
	adds r2, r0, #0	@ 00078fde 021c
.org 0x78fe0
	lsls r1, r1, #24	@ 00078fe0 0906
.org 0x78fe2
	lsrs r4, r1, #24	@ 00078fe2 0c0e
.org 0x78fe4
	ldr r1, [pc, #20]	@ 00078fe4 0549
.org 0x78fe6
	lsls r0, r4, #2	@ 00078fe6 a000
.org 0x78fe8
	adds r0, r0, r1	@ 00078fe8 4018
.org 0x78fea
	ldr r3, [r0, #0]	@ 00078fea 0368
.org 0x78fec
	adds r6, r1, #0	@ 00078fec 0e1c
.org 0x78fee
	cmp r4, #1	@ 00078fee 012c
.org 0x78ff0
	bne.n 0x79000	@ 00078ff0 06d1
.org 0x78ff2
	ldrb r1, [r2, #10]	@ 00078ff2 917a
.org 0x78ff4
	movs r0, #254	@ 00078ff4 fe20
.org 0x78ff6
	ands r0, r1	@ 00078ff6 0840
.org 0x78ff8
	b.n 0x79006	@ 00078ff8 05e0
.org 0x78ffa
	.byte 0x00	@ 00078ffa data
.org 0x78ffb
	.byte 0x00	@ 00078ffb data
.org 0x78ffc
	.byte 0x4c,0xd2,0x85,0x08	@ 00078ffc data
.org 0x79000
	ldrb r1, [r2, #10]	@ 00079000 917a
.org 0x79002
	movs r0, #1	@ 00079002 0120
.org 0x79004
	orrs r0, r1	@ 00079004 0843
.org 0x79006
	strb r0, [r2, #10]	@ 00079006 9072
.org 0x79008
	adds r0, r2, #0	@ 00079008 101c
.org 0x7900a
	adds r0, #196	@ 0007900a c430
.org 0x7900c
	ldrb r1, [r0, #0]	@ 0007900c 0178
.org 0x7900e
	adds r5, r0, #0	@ 0007900e 051c
.org 0x79010
	cmp r1, #1	@ 00079010 0129
.org 0x79012
	beq.n 0x79018	@ 00079012 01d0
.org 0x79014
	cmp r1, #255	@ 00079014 ff29
.org 0x79016
	bne.n 0x79024	@ 00079016 05d1
.org 0x79018
	lsls r1, r3, #16	@ 00079018 1904
.org 0x7901a
	lsrs r1, r1, #16	@ 0007901a 090c
.org 0x7901c
	adds r0, r2, #0	@ 0007901c 101c
.org 0x7901e
	bl 0x1cf00	@ 0007901e a3f76fff
.org 0x79022
	b.n 0x79040	@ 00079022 0de0
.org 0x79024
	lsls r0, r1, #2	@ 00079024 8800
.org 0x79026
	adds r0, r0, r6	@ 00079026 8019
.org 0x79028
	ldr r1, [r0, #0]	@ 00079028 0168
.org 0x7902a
	movs r0, #156	@ 0007902a 9c20
.org 0x7902c
	lsls r0, r0, #8	@ 0007902c 0002
.org 0x7902e
	cmp r3, r0	@ 0007902e 8342
.org 0x79030
	bne.n 0x79036	@ 00079030 01d1
.org 0x79032
	cmp r3, r1	@ 00079032 8b42
.org 0x79034
	beq.n 0x79040	@ 00079034 04d0
.org 0x79036
	lsls r1, r3, #16	@ 00079036 1904
.org 0x79038
	lsrs r1, r1, #16	@ 00079038 090c
.org 0x7903a
	adds r0, r2, #0	@ 0007903a 101c
.org 0x7903c
	bl 0x1cf00	@ 0007903c a3f760ff
.org 0x79040
	strb r4, [r5, #0]	@ 00079040 2c70
