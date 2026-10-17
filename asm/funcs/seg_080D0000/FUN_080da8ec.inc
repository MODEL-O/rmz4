@ FUN_080da8ec  entry 0x080da8ec  size 76
.thumb
.org 0xda8ec
FUN_080da8ec:
	push {r4, r5, lr}	@ 000da8ec 30b5
.org 0xda8ee
	adds r4, r0, #0	@ 000da8ee 041c
.org 0xda8f0
	ldr r5, [r4, #40]	@ 000da8f0 a56a
.org 0xda8f2
	ldrb r0, [r5, #12]	@ 000da8f2 287b
.org 0xda8f4
	cmp r0, #1	@ 000da8f4 0128
.org 0xda8f6
	bhi.n 0xda90a	@ 000da8f6 08d8
.org 0xda8f8
	ldrb r0, [r5, #13]	@ 000da8f8 687b
.org 0xda8fa
	cmp r0, #6	@ 000da8fa 0628
.org 0xda8fc
	bne.n 0xda90a	@ 000da8fc 05d1
.org 0xda8fe
	ldrb r0, [r5, #14]	@ 000da8fe a87b
.org 0xda900
	subs r0, #4	@ 000da900 0438
.org 0xda902
	lsls r0, r0, #24	@ 000da902 0006
.org 0xda904
	lsrs r0, r0, #24	@ 000da904 000e
.org 0xda906
	cmp r0, #1	@ 000da906 0128
.org 0xda908
	bls.n 0xda928	@ 000da908 0ed9
.org 0xda90a
	ldr r1, [pc, #24]	@ 000da90a 0649
.org 0xda90c
	ldrb r0, [r4, #9]	@ 000da90c 607a
.org 0xda90e
	lsls r0, r0, #2	@ 000da90e 8000
.org 0xda910
	adds r0, r0, r1	@ 000da910 4018
.org 0xda912
	movs r1, #2	@ 000da912 0221
.org 0xda914
	str r1, [r4, #12]	@ 000da914 e160
.org 0xda916
	ldr r0, [r0, #0]	@ 000da916 0068
.org 0xda918
	ldr r0, [r0, #8]	@ 000da918 8068
.org 0xda91a
	str r0, [r4, #20]	@ 000da91a 6061
.org 0xda91c
	adds r0, r4, #0	@ 000da91c 201c
.org 0xda91e
	bl 0xda93c	@ 000da91e 00f00df8
.org 0xda922
	b.n 0xda936	@ 000da922 08e0
.org 0xda924
	.byte 0x64,0x6f,0x86,0x08	@ 000da924 data
.org 0xda928
	adds r0, r4, #0	@ 000da928 201c
.org 0xda92a
	bl 0x1cff0	@ 000da92a 42f761fb
.org 0xda92e
	ldr r0, [r5, #84]	@ 000da92e 686d
.org 0xda930
	ldr r1, [r5, #88]	@ 000da930 a96d
.org 0xda932
	str r0, [r4, #84]	@ 000da932 6065
.org 0xda934
	str r1, [r4, #88]	@ 000da934 a165
.org 0xda936
	pop {r4, r5}	@ 000da936 30bc
