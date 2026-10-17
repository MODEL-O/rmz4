@ FUN_0810da7c  entry 0x0810da7c  size 92
.thumb
.org 0x10da7c
FUN_0810da7c:
	push {r4, r5, r6, lr}	@ 0010da7c 70b5
.org 0x10da7e
	adds r4, r0, #0	@ 0010da7e 041c
.org 0x10da80
	adds r5, r1, #0	@ 0010da80 0d1c
.org 0x10da82
	lsls r3, r3, #24	@ 0010da82 1b06
.org 0x10da84
	lsrs r3, r3, #24	@ 0010da84 1b0e
.org 0x10da86
	ldr r0, [pc, #20]	@ 0010da86 0548
.org 0x10da88
	ldr r1, [r0, #0]	@ 0010da88 0168
.org 0x10da8a
	cmp r2, #31	@ 0010da8a 1f2a
.org 0x10da8c
	bhi.n 0x10dad8	@ 0010da8c 24d8
.org 0x10da8e
	lsls r0, r2, #5	@ 0010da8e 5001
.org 0x10da90
	adds r0, r5, r0	@ 0010da90 2818
.org 0x10da92
	lsls r0, r0, #1	@ 0010da92 4000
.org 0x10da94
	adds r1, r1, r0	@ 0010da94 0918
.org 0x10da96
	movs r2, #0	@ 0010da96 0022
.org 0x10da98
	b.n 0x10dace	@ 0010da98 19e0
.org 0x10da9a
	.byte 0x00	@ 0010da9a data
.org 0x10da9b
	.byte 0x00	@ 0010da9b data
.org 0x10da9c
	.byte 0xc0,0xed,0x02,0x02	@ 0010da9c data
.org 0x10daa0
	cmp r5, #31	@ 0010daa0 1f2d
.org 0x10daa2
	bhi.n 0x10dad8	@ 0010daa2 19d8
.org 0x10daa4
	cmp r0, #96	@ 0010daa4 6028
.org 0x10daa6
	bhi.n 0x10daae	@ 0010daa6 02d8
.org 0x10daa8
	movs r6, #232	@ 0010daa8 e826
.org 0x10daaa
	lsls r6, r6, #2	@ 0010daaa b600
.org 0x10daac
	b.n 0x10dabc	@ 0010daac 06e0
.org 0x10daae
	cmp r0, #159	@ 0010daae 9f28
.org 0x10dab0
	bhi.n 0x10dab8	@ 0010dab0 02d8
.org 0x10dab2
	movs r6, #224	@ 0010dab2 e026
.org 0x10dab4
	lsls r6, r6, #2	@ 0010dab4 b600
.org 0x10dab6
	b.n 0x10dabc	@ 0010dab6 01e0
.org 0x10dab8
	movs r6, #184	@ 0010dab8 b826
.org 0x10daba
	lsls r6, r6, #2	@ 0010daba b600
.org 0x10dabc
	adds r0, r6, #0	@ 0010dabc 301c
.org 0x10dabe
	ldrb r6, [r4, #0]	@ 0010dabe 2678
.org 0x10dac0
	adds r0, r0, r6	@ 0010dac0 8019
.org 0x10dac2
	strh r0, [r1, #0]	@ 0010dac2 0880
.org 0x10dac4
	adds r4, #1	@ 0010dac4 0134
.org 0x10dac6
	adds r1, #2	@ 0010dac6 0231
.org 0x10dac8
	adds r0, r2, #1	@ 0010dac8 501c
.org 0x10daca
	lsls r0, r0, #24	@ 0010daca 0006
.org 0x10dacc
	lsrs r2, r0, #24	@ 0010dacc 020e
.org 0x10dace
	ldrb r0, [r4, #0]	@ 0010dace 2078
.org 0x10dad0
	cmp r0, #0	@ 0010dad0 0028
.org 0x10dad2
	beq.n 0x10dad8	@ 0010dad2 01d0
.org 0x10dad4
	cmp r2, r3	@ 0010dad4 9a42
.org 0x10dad6
	bcc.n 0x10daa0	@ 0010dad6 e3d3
