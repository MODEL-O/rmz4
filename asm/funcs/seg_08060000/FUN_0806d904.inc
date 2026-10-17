@ FUN_0806d904  entry 0x0806d904  size 70
.thumb
.org 0x6d904
FUN_0806d904:
	push {r4, lr}	@ 0006d904 10b5
.org 0x6d906
	adds r4, r0, #0	@ 0006d906 041c
.org 0x6d908
	ldrb r2, [r4, #14]	@ 0006d908 a27b
.org 0x6d90a
	cmp r2, #0	@ 0006d90a 002a
.org 0x6d90c
	bne.n 0x6d924	@ 0006d90c 0ad1
.org 0x6d90e
	adds r1, r4, #0	@ 0006d90e 211c
.org 0x6d910
	adds r1, #216	@ 0006d910 d831
.org 0x6d912
	adds r0, #212	@ 0006d912 d430
.org 0x6d914
	ldrb r1, [r1, #0]	@ 0006d914 0978
.org 0x6d916
	adds r0, r0, r1	@ 0006d916 4018
.org 0x6d918
	strb r2, [r0, #0]	@ 0006d918 0270
.org 0x6d91a
	movs r0, #64	@ 0006d91a 4020
.org 0x6d91c
	strb r0, [r4, #18]	@ 0006d91c a074
.org 0x6d91e
	ldrb r0, [r4, #14]	@ 0006d91e a07b
.org 0x6d920
	adds r0, #1	@ 0006d920 0130
.org 0x6d922
	strb r0, [r4, #14]	@ 0006d922 a073
.org 0x6d924
	adds r0, r4, #0	@ 0006d924 201c
.org 0x6d926
	bl 0x1cff0	@ 0006d926 aff763fb
.org 0x6d92a
	ldrb r0, [r4, #18]	@ 0006d92a a07c
.org 0x6d92c
	subs r0, #1	@ 0006d92c 0138
.org 0x6d92e
	strb r0, [r4, #18]	@ 0006d92e a074
.org 0x6d930
	lsls r0, r0, #24	@ 0006d930 0006
.org 0x6d932
	lsrs r0, r0, #24	@ 0006d932 000e
.org 0x6d934
	cmp r0, #255	@ 0006d934 ff28
.org 0x6d936
	bne.n 0x6d944	@ 0006d936 05d1
.org 0x6d938
	movs r0, #2	@ 0006d938 0220
.org 0x6d93a
	strb r0, [r4, #13]	@ 0006d93a 6073
.org 0x6d93c
	movs r0, #0	@ 0006d93c 0020
.org 0x6d93e
	strb r0, [r4, #14]	@ 0006d93e a073
.org 0x6d940
	movs r0, #16	@ 0006d940 1020
.org 0x6d942
	strb r0, [r4, #18]	@ 0006d942 a074
.org 0x6d944
	pop {r4}	@ 0006d944 10bc
.org 0x6d946
	pop {r0}	@ 0006d946 01bc
.org 0x6d948
	bx r0	@ 0006d948 0047
