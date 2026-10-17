@ FUN_080bb8c4  entry 0x080bb8c4  size 136
.thumb
.org 0xbb8c4
FUN_080bb8c4:
	push {r4, r5, lr}	@ 000bb8c4 30b5
.org 0xbb8c6
	adds r4, r0, #0	@ 000bb8c6 041c
.org 0xbb8c8
	ldr r5, [r4, #40]	@ 000bb8c8 a56a
.org 0xbb8ca
	ldrb r0, [r4, #15]	@ 000bb8ca e07b
.org 0xbb8cc
	cmp r0, #0	@ 000bb8cc 0028
.org 0xbb8ce
	bne.n 0xbb906	@ 000bb8ce 1ad1
.org 0xbb8d0
	movs r0, #202	@ 000bb8d0 ca20
.org 0xbb8d2
	lsls r0, r0, #1	@ 000bb8d2 4000
.org 0xbb8d4
	bl 0x2b10	@ 000bb8d4 47f71cf9
.org 0xbb8d8
	adds r0, r4, #0	@ 000bb8d8 201c
.org 0xbb8da
	adds r0, #116	@ 000bb8da 7430
.org 0xbb8dc
	ldr r1, [pc, #108]	@ 000bb8dc 1b49
.org 0xbb8de
	bl 0x5784	@ 000bb8de 49f751ff
.org 0xbb8e2
	ldr r1, [pc, #108]	@ 000bb8e2 1b49
.org 0xbb8e4
	adds r0, r4, #0	@ 000bb8e4 201c
.org 0xbb8e6
	bl 0x1cf00	@ 000bb8e6 61f70bfb
.org 0xbb8ea
	ldr r1, [r4, #88]	@ 000bb8ea a16d
.org 0xbb8ec
	str r1, [r4, #96]	@ 000bb8ec 2166
.org 0xbb8ee
	adds r0, r5, #0	@ 000bb8ee 281c
.org 0xbb8f0
	adds r0, #184	@ 000bb8f0 b830
.org 0xbb8f2
	ldr r2, [pc, #96]	@ 000bb8f2 184a
.org 0xbb8f4
	adds r1, r1, r2	@ 000bb8f4 8918
.org 0xbb8f6
	ldr r0, [r0, #0]	@ 000bb8f6 0068
.org 0xbb8f8
	subs r0, r0, r1	@ 000bb8f8 401a
.org 0xbb8fa
	str r0, [r4, #104]	@ 000bb8fa a066
.org 0xbb8fc
	movs r0, #16	@ 000bb8fc 1020
.org 0xbb8fe
	strb r0, [r4, #18]	@ 000bb8fe a074
.org 0xbb900
	ldrb r0, [r4, #15]	@ 000bb900 e07b
.org 0xbb902
	adds r0, #1	@ 000bb902 0130
.org 0xbb904
	strb r0, [r4, #15]	@ 000bb904 e073
.org 0xbb906
	adds r0, r4, #0	@ 000bb906 201c
.org 0xbb908
	bl 0x1cff0	@ 000bb908 61f772fb
.org 0xbb90c
	ldrb r0, [r4, #18]	@ 000bb90c a07c
.org 0xbb90e
	subs r2, r0, #1	@ 000bb90e 421e
.org 0xbb910
	strb r2, [r4, #18]	@ 000bb910 a274
.org 0xbb912
	ldrb r1, [r4, #18]	@ 000bb912 a17c
.org 0xbb914
	movs r0, #16	@ 000bb914 1020
.org 0xbb916
	subs r0, r0, r1	@ 000bb916 401a
.org 0xbb918
	lsls r0, r0, #26	@ 000bb918 8006
.org 0xbb91a
	ldr r1, [pc, #60]	@ 000bb91a 0f49
.org 0xbb91c
	lsrs r0, r0, #23	@ 000bb91c c00d
.org 0xbb91e
	adds r0, r0, r1	@ 000bb91e 4018
.org 0xbb920
	movs r3, #0	@ 000bb920 0023
.org 0xbb922
	ldrsh r1, [r0, r3]	@ 000bb922 c15e
.org 0xbb924
	ldr r0, [r4, #104]	@ 000bb924 a06e
.org 0xbb926
	muls r0, r1	@ 000bb926 4843
.org 0xbb928
	cmp r0, #0	@ 000bb928 0028
.org 0xbb92a
	bge.n 0xbb92e	@ 000bb92a 00da
.org 0xbb92c
	adds r0, #255	@ 000bb92c ff30
.org 0xbb92e
	asrs r0, r0, #8	@ 000bb92e 0012
.org 0xbb930
	ldr r1, [r4, #96]	@ 000bb930 216e
.org 0xbb932
	adds r1, r1, r0	@ 000bb932 0918
.org 0xbb934
	str r1, [r4, #88]	@ 000bb934 a165
.org 0xbb936
	lsls r0, r2, #24	@ 000bb936 1006
.org 0xbb938
	lsrs r1, r0, #24	@ 000bb938 010e
.org 0xbb93a
	cmp r1, #0	@ 000bb93a 0029
.org 0xbb93c
	bne.n 0xbb946	@ 000bb93c 03d1
.org 0xbb93e
	movs r0, #1	@ 000bb93e 0120
.org 0xbb940
	strb r0, [r4, #13]	@ 000bb940 6073
.org 0xbb942
	strb r1, [r4, #14]	@ 000bb942 a173
.org 0xbb944
	strb r1, [r4, #15]	@ 000bb944 e173
.org 0xbb946
	pop {r4, r5}	@ 000bb946 30bc
.org 0xbb948
	pop {r0}	@ 000bb948 01bc
.org 0xbb94a
	bx r0	@ 000bb94a 0047
