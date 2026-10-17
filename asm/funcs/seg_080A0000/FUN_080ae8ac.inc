@ FUN_080ae8ac  entry 0x080ae8ac  size 120
.thumb
.org 0xae8ac
FUN_080ae8ac:
	push {r4, lr}	@ 000ae8ac 10b5
.org 0xae8ae
	adds r4, r0, #0	@ 000ae8ae 041c
.org 0xae8b0
	ldr r0, [r4, #40]	@ 000ae8b0 a06a
.org 0xae8b2
	adds r0, #215	@ 000ae8b2 d730
.org 0xae8b4
	movs r1, #1	@ 000ae8b4 0121
.org 0xae8b6
	strb r1, [r0, #0]	@ 000ae8b6 0170
.org 0xae8b8
	adds r0, r4, #0	@ 000ae8b8 201c
.org 0xae8ba
	adds r0, #140	@ 000ae8ba 8c30
.org 0xae8bc
	ldr r0, [r0, #0]	@ 000ae8bc 0068
.org 0xae8be
	movs r1, #128	@ 000ae8be 8021
.org 0xae8c0
	lsls r1, r1, #2	@ 000ae8c0 8900
.org 0xae8c2
	ands r0, r1	@ 000ae8c2 0840
.org 0xae8c4
	cmp r0, #0	@ 000ae8c4 0028
.org 0xae8c6
	bne.n 0xae8ea	@ 000ae8c6 10d1
.org 0xae8c8
	ldrb r0, [r4, #18]	@ 000ae8c8 a07c
.org 0xae8ca
	cmp r0, #0	@ 000ae8ca 0028
.org 0xae8cc
	bne.n 0xae90c	@ 000ae8cc 1ed1
.org 0xae8ce
	ldr r0, [pc, #52]	@ 000ae8ce 0d48
.org 0xae8d0
	adds r1, r4, #0	@ 000ae8d0 211c
.org 0xae8d2
	adds r1, #84	@ 000ae8d2 5431
.org 0xae8d4
	bl 0x1fb14	@ 000ae8d4 71f71ef9
.org 0xae8d8
	cmp r0, #0	@ 000ae8d8 0028
.org 0xae8da
	bne.n 0xae8ea	@ 000ae8da 06d1
.org 0xae8dc
	ldr r0, [r4, #84]	@ 000ae8dc 606d
.org 0xae8de
	ldr r1, [r4, #88]	@ 000ae8de a16d
.org 0xae8e0
	bl 0x7020	@ 000ae8e0 58f79efb
.org 0xae8e4
	lsls r0, r0, #16	@ 000ae8e4 0004
.org 0xae8e6
	cmp r0, #0	@ 000ae8e6 0028
.org 0xae8e8
	beq.n 0xae910	@ 000ae8e8 12d0
.org 0xae8ea
	ldr r1, [pc, #28]	@ 000ae8ea 0749
.org 0xae8ec
	ldrb r0, [r4, #9]	@ 000ae8ec 607a
.org 0xae8ee
	lsls r0, r0, #2	@ 000ae8ee 8000
.org 0xae8f0
	adds r0, r0, r1	@ 000ae8f0 4018
.org 0xae8f2
	movs r1, #2	@ 000ae8f2 0221
.org 0xae8f4
	str r1, [r4, #12]	@ 000ae8f4 e160
.org 0xae8f6
	ldr r0, [r0, #0]	@ 000ae8f6 0068
.org 0xae8f8
	ldr r0, [r0, #8]	@ 000ae8f8 8068
.org 0xae8fa
	str r0, [r4, #20]	@ 000ae8fa 6061
.org 0xae8fc
	adds r0, r4, #0	@ 000ae8fc 201c
.org 0xae8fe
	bl 0xae92c	@ 000ae8fe 00f015f8
.org 0xae902
	b.n 0xae926	@ 000ae902 10e0
.org 0xae904
	.byte 0xf8,0xe9,0x02,0x02	@ 000ae904 data
.org 0xae908
	.byte 0x40,0xdb,0x85,0x08	@ 000ae908 data
.org 0xae90c
	subs r0, #1	@ 000ae90c 0138
.org 0xae90e
	strb r0, [r4, #18]	@ 000ae90e a074
.org 0xae910
	adds r0, r4, #0	@ 000ae910 201c
.org 0xae912
	bl 0x1cff0	@ 000ae912 6ef76dfb
.org 0xae916
	ldr r0, [r4, #84]	@ 000ae916 606d
.org 0xae918
	ldr r1, [r4, #92]	@ 000ae918 e16d
.org 0xae91a
	adds r0, r0, r1	@ 000ae91a 4018
.org 0xae91c
	str r0, [r4, #84]	@ 000ae91c 6065
.org 0xae91e
	ldr r0, [r4, #88]	@ 000ae91e a06d
.org 0xae920
	ldr r1, [r4, #96]	@ 000ae920 216e
.org 0xae922
	adds r0, r0, r1	@ 000ae922 4018
