@ FUN_080dd7cc  entry 0x080dd7cc  size 100
.thumb
.org 0xdd7cc
FUN_080dd7cc:
	push {r4, lr}	@ 000dd7cc 10b5
.org 0xdd7ce
	adds r4, r0, #0	@ 000dd7ce 041c
.org 0xdd7d0
	bl 0x1cc9c	@ 000dd7d0 3ff764fa
.org 0xdd7d4
	ldrb r1, [r4, #10]	@ 000dd7d4 a17a
.org 0xdd7d6
	movs r0, #1	@ 000dd7d6 0120
.org 0xdd7d8
	orrs r0, r1	@ 000dd7d8 0843
.org 0xdd7da
	movs r1, #2	@ 000dd7da 0221
.org 0xdd7dc
	orrs r0, r1	@ 000dd7dc 0843
.org 0xdd7de
	strb r0, [r4, #10]	@ 000dd7de a072
.org 0xdd7e0
	ldr r1, [pc, #28]	@ 000dd7e0 0749
.org 0xdd7e2
	adds r0, r4, #0	@ 000dd7e2 201c
.org 0xdd7e4
	bl 0x1cf00	@ 000dd7e4 3ff78cfb
.org 0xdd7e8
	adds r0, r4, #0	@ 000dd7e8 201c
.org 0xdd7ea
	bl 0x1cff0	@ 000dd7ea 3ff701fc
.org 0xdd7ee
	ldrb r1, [r4, #10]	@ 000dd7ee a17a
.org 0xdd7f0
	movs r2, #16	@ 000dd7f0 1022
.org 0xdd7f2
	adds r0, r2, #0	@ 000dd7f2 101c
.org 0xdd7f4
	ands r0, r1	@ 000dd7f4 0840
.org 0xdd7f6
	cmp r0, #0	@ 000dd7f6 0028
.org 0xdd7f8
	beq.n 0xdd804	@ 000dd7f8 04d0
.org 0xdd7fa
	str r2, [r4, #100]	@ 000dd7fa 6266
.org 0xdd7fc
	b.n 0xdd80a	@ 000dd7fc 05e0
.org 0xdd7fe
	.byte 0x00	@ 000dd7fe data
.org 0xdd7ff
	.byte 0x00	@ 000dd7ff data
.org 0xdd800
	.byte 0x05,0x69,0x00,0x00	@ 000dd800 data
.org 0xdd804
	movs r0, #16	@ 000dd804 1020
.org 0xdd806
	negs r0, r0	@ 000dd806 4042
.org 0xdd808
	str r0, [r4, #100]	@ 000dd808 6066
.org 0xdd80a
	ldr r0, [r4, #100]	@ 000dd80a 606e
.org 0xdd80c
	lsls r0, r0, #4	@ 000dd80c 0001
.org 0xdd80e
	str r0, [r4, #92]	@ 000dd80e e065
.org 0xdd810
	movs r0, #0	@ 000dd810 0020
.org 0xdd812
	str r0, [r4, #96]	@ 000dd812 2066
.org 0xdd814
	movs r0, #20	@ 000dd814 1420
.org 0xdd816
	strb r0, [r4, #18]	@ 000dd816 a074
.org 0xdd818
	ldr r1, [pc, #28]	@ 000dd818 0749
.org 0xdd81a
	ldrb r0, [r4, #9]	@ 000dd81a 607a
.org 0xdd81c
	lsls r0, r0, #2	@ 000dd81c 8000
.org 0xdd81e
	adds r0, r0, r1	@ 000dd81e 4018
.org 0xdd820
	movs r1, #1	@ 000dd820 0121
.org 0xdd822
	str r1, [r4, #12]	@ 000dd822 e160
.org 0xdd824
	ldr r0, [r0, #0]	@ 000dd824 0068
.org 0xdd826
	ldr r0, [r0, #4]	@ 000dd826 4068
.org 0xdd828
	str r0, [r4, #20]	@ 000dd828 6061
.org 0xdd82a
	adds r0, r4, #0	@ 000dd82a 201c
.org 0xdd82c
	bl 0xdd6c8	@ 000dd82c fff74cff
