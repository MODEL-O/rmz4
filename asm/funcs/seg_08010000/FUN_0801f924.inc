@ FUN_0801f924  entry 0x0801f924  size 114
.thumb
.org 0x1f924
FUN_0801f924:
	push {r4, r5, lr}	@ 0001f924 30b5
.org 0x1f926
	adds r4, r0, #0	@ 0001f926 041c
.org 0x1f928
	adds r5, r1, #0	@ 0001f928 0d1c
.org 0x1f92a
	cmp r5, #0	@ 0001f92a 002d
.org 0x1f92c
	bne.n 0x1f940	@ 0001f92c 08d1
.org 0x1f92e
	movs r1, #0	@ 0001f92e 0021
.org 0x1f930
	bl 0x1f908	@ 0001f930 fff7eaff
.org 0x1f934
	str r5, [r4, #72]	@ 0001f934 a564
.org 0x1f936
	strb r5, [r4, #25]	@ 0001f936 6576
.org 0x1f938
	strh r5, [r4, #34]	@ 0001f938 6584
.org 0x1f93a
	str r5, [r4, #48]	@ 0001f93a 2563
.org 0x1f93c
	str r5, [r4, #52]	@ 0001f93c 6563
.org 0x1f93e
	b.n 0x1f990	@ 0001f93e 27e0
.org 0x1f940
	ldrb r1, [r5, #0]	@ 0001f940 2978
.org 0x1f942
	adds r0, r4, #0	@ 0001f942 201c
.org 0x1f944
	bl 0x1f908	@ 0001f944 fff7e0ff
.org 0x1f948
	ldrb r0, [r5, #1]	@ 0001f948 6878
.org 0x1f94a
	movs r1, #0	@ 0001f94a 0021
.org 0x1f94c
	strb r0, [r4, #25]	@ 0001f94c 6076
.org 0x1f94e
	strh r1, [r4, #34]	@ 0001f94e 6184
.org 0x1f950
	str r1, [r4, #72]	@ 0001f950 a164
.org 0x1f952
	ldrb r0, [r5, #0]	@ 0001f952 2878
.org 0x1f954
	cmp r0, #1	@ 0001f954 0128
.org 0x1f956
	bne.n 0x1f960	@ 0001f956 03d1
.org 0x1f958
	ldr r0, [r5, #4]	@ 0001f958 6868
.org 0x1f95a
	str r0, [r4, #48]	@ 0001f95a 2063
.org 0x1f95c
	ldr r0, [r5, #8]	@ 0001f95c a868
.org 0x1f95e
	str r0, [r4, #52]	@ 0001f95e 6063
.org 0x1f960
	ldr r0, [r5, #12]	@ 0001f960 e868
.org 0x1f962
	str r0, [r4, #64]	@ 0001f962 2064
.org 0x1f964
	ldr r0, [r5, #16]	@ 0001f964 2869
.org 0x1f966
	str r0, [r4, #68]	@ 0001f966 6064
.org 0x1f968
	movs r1, #20	@ 0001f968 1421
.org 0x1f96a
	ldrsh r0, [r5, r1]	@ 0001f96a 685e
.org 0x1f96c
	str r0, [r4, #76]	@ 0001f96c e064
.org 0x1f96e
	movs r1, #22	@ 0001f96e 1621
.org 0x1f970
	ldrsh r0, [r5, r1]	@ 0001f970 685e
.org 0x1f972
	str r0, [r4, #80]	@ 0001f972 2065
.org 0x1f974
	movs r1, #24	@ 0001f974 1821
.org 0x1f976
	ldrsh r0, [r5, r1]	@ 0001f976 685e
.org 0x1f978
	str r0, [r4, #84]	@ 0001f978 6065
.org 0x1f97a
	movs r1, #26	@ 0001f97a 1a21
.org 0x1f97c
	ldrsh r0, [r5, r1]	@ 0001f97c 685e
.org 0x1f97e
	str r0, [r4, #88]	@ 0001f97e a065
.org 0x1f980
	ldr r0, [r5, #28]	@ 0001f980 e869
.org 0x1f982
	str r0, [r4, #92]	@ 0001f982 e065
.org 0x1f984
	ldr r0, [r5, #32]	@ 0001f984 286a
.org 0x1f986
	str r0, [r4, #96]	@ 0001f986 2066
.org 0x1f988
	ldr r0, [r5, #36]	@ 0001f988 686a
.org 0x1f98a
	str r0, [r4, #100]	@ 0001f98a 6066
.org 0x1f98c
	ldr r0, [r5, #40]	@ 0001f98c a86a
.org 0x1f98e
	str r0, [r4, #104]	@ 0001f98e a066
.org 0x1f990
	pop {r4, r5}	@ 0001f990 30bc
.org 0x1f992
	pop {r0}	@ 0001f992 01bc
.org 0x1f994
	bx r0	@ 0001f994 0047
