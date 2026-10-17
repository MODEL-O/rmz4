@ FUN_0812768c  entry 0x0812768c  size 92
.thumb
.org 0x12768c
FUN_0812768c:
	push {r4, r5, r6, r7, lr}	@ 0012768c f0b5
.org 0x12768e
	mov ip, r0	@ 0012768e 8446
.org 0x127690
	lsls r1, r1, #24	@ 00127690 0906
.org 0x127692
	lsrs r6, r1, #24	@ 00127692 0e0e
.org 0x127694
	lsls r7, r2, #24	@ 00127694 1706
.org 0x127696
	cmp r6, #178	@ 00127696 b22e
.org 0x127698
	bls.n 0x1276a0	@ 00127698 02d9
.org 0x12769a
	movs r6, #178	@ 0012769a b226
.org 0x12769c
	movs r7, #255	@ 0012769c ff27
.org 0x12769e
	lsls r7, r7, #24	@ 0012769e 3f06
.org 0x1276a0
	ldr r3, [pc, #68]	@ 001276a0 114b
.org 0x1276a2
	adds r0, r6, r3	@ 001276a2 f018
.org 0x1276a4
	ldrb r5, [r0, #0]	@ 001276a4 0578
.org 0x1276a6
	ldr r4, [pc, #68]	@ 001276a6 114c
.org 0x1276a8
	movs r2, #15	@ 001276a8 0f22
.org 0x1276aa
	adds r0, r5, #0	@ 001276aa 281c
.org 0x1276ac
	ands r0, r2	@ 001276ac 1040
.org 0x1276ae
	lsls r0, r0, #2	@ 001276ae 8000
.org 0x1276b0
	adds r0, r0, r4	@ 001276b0 0019
.org 0x1276b2
	lsrs r1, r5, #4	@ 001276b2 2909
.org 0x1276b4
	ldr r5, [r0, #0]	@ 001276b4 0568
.org 0x1276b6
	lsrs r5, r1	@ 001276b6 cd40
.org 0x1276b8
	adds r0, r6, #1	@ 001276b8 701c
.org 0x1276ba
	adds r0, r0, r3	@ 001276ba c018
.org 0x1276bc
	ldrb r1, [r0, #0]	@ 001276bc 0178
.org 0x1276be
	adds r0, r1, #0	@ 001276be 081c
.org 0x1276c0
	ands r0, r2	@ 001276c0 1040
.org 0x1276c2
	lsls r0, r0, #2	@ 001276c2 8000
.org 0x1276c4
	adds r0, r0, r4	@ 001276c4 0019
.org 0x1276c6
	lsrs r1, r1, #4	@ 001276c6 0909
.org 0x1276c8
	ldr r0, [r0, #0]	@ 001276c8 0068
.org 0x1276ca
	lsrs r0, r1	@ 001276ca c840
.org 0x1276cc
	mov r1, ip	@ 001276cc 6146
.org 0x1276ce
	ldr r4, [r1, #4]	@ 001276ce 4c68
.org 0x1276d0
	subs r0, r0, r5	@ 001276d0 401b
.org 0x1276d2
	adds r1, r7, #0	@ 001276d2 391c
.org 0x1276d4
	bl 0x126af4	@ 001276d4 fff70efa
.org 0x1276d8
	adds r1, r0, #0	@ 001276d8 011c
.org 0x1276da
	adds r1, r5, r1	@ 001276da 6918
.org 0x1276dc
	adds r0, r4, #0	@ 001276dc 201c
.org 0x1276de
	bl 0x126af4	@ 001276de fff709fa
.org 0x1276e2
	pop {r4, r5, r6, r7}	@ 001276e2 f0bc
.org 0x1276e4
	pop {r1}	@ 001276e4 02bc
.org 0x1276e6
	bx r1	@ 001276e6 0847
