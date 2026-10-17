@ FUN_080b590c  entry 0x080b590c  size 60
.thumb
.org 0xb590c
FUN_080b590c:
	push {r4, lr}	@ 000b590c 10b5
.org 0xb590e
	adds r4, r0, #0	@ 000b590e 041c
.org 0xb5910
	ldrb r0, [r4, #17]	@ 000b5910 607c
.org 0xb5912
	ldrb r2, [r4, #15]	@ 000b5912 e27b
.org 0xb5914
	cmp r2, #0	@ 000b5914 002a
.org 0xb5916
	bne.n 0xb5926	@ 000b5916 06d1
.org 0xb5918
	adds r0, #1	@ 000b5918 0130
.org 0xb591a
	lsls r1, r0, #1	@ 000b591a 4100
.org 0xb591c
	adds r1, r1, r0	@ 000b591c 0918
.org 0xb591e
	lsls r1, r1, #2	@ 000b591e 8900
.org 0xb5920
	strb r1, [r4, #18]	@ 000b5920 a174
.org 0xb5922
	adds r0, r2, #1	@ 000b5922 501c
.org 0xb5924
	strb r0, [r4, #15]	@ 000b5924 e073
.org 0xb5926
	adds r0, r4, #0	@ 000b5926 201c
.org 0xb5928
	bl 0x1cff0	@ 000b5928 67f762fb
.org 0xb592c
	ldrb r0, [r4, #18]	@ 000b592c a07c
.org 0xb592e
	subs r0, #1	@ 000b592e 0138
.org 0xb5930
	strb r0, [r4, #18]	@ 000b5930 a074
.org 0xb5932
	lsls r0, r0, #24	@ 000b5932 0006
.org 0xb5934
	lsrs r1, r0, #24	@ 000b5934 010e
.org 0xb5936
	cmp r1, #0	@ 000b5936 0029
.org 0xb5938
	bne.n 0xb5942	@ 000b5938 03d1
.org 0xb593a
	movs r0, #2	@ 000b593a 0220
.org 0xb593c
	strb r0, [r4, #13]	@ 000b593c 6073
.org 0xb593e
	strb r1, [r4, #14]	@ 000b593e a173
.org 0xb5940
	strb r1, [r4, #15]	@ 000b5940 e173
.org 0xb5942
	pop {r4}	@ 000b5942 10bc
.org 0xb5944
	pop {r0}	@ 000b5944 01bc
.org 0xb5946
	bx r0	@ 000b5946 0047
