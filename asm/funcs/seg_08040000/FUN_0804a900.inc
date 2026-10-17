@ FUN_0804a900  entry 0x0804a900  size 82
.thumb
.org 0x4a900
FUN_0804a900:
	push {r4, r5, lr}	@ 0004a900 30b5
.org 0x4a902
	adds r4, r0, #0	@ 0004a902 041c
.org 0x4a904
	ldr r1, [pc, #76]	@ 0004a904 1349
.org 0x4a906
	ldrb r0, [r4, #9]	@ 0004a906 607a
.org 0x4a908
	lsls r0, r0, #2	@ 0004a908 8000
.org 0x4a90a
	adds r0, r0, r1	@ 0004a90a 4018
.org 0x4a90c
	movs r1, #1	@ 0004a90c 0121
.org 0x4a90e
	str r1, [r4, #12]	@ 0004a90e e160
.org 0x4a910
	ldr r0, [r0, #0]	@ 0004a910 0068
.org 0x4a912
	ldr r0, [r0, #4]	@ 0004a912 4068
.org 0x4a914
	str r0, [r4, #20]	@ 0004a914 6061
.org 0x4a916
	adds r0, r4, #0	@ 0004a916 201c
.org 0x4a918
	bl 0x1cc9c	@ 0004a918 d2f7c0f9
.org 0x4a91c
	adds r0, r4, #0	@ 0004a91c 201c
.org 0x4a91e
	bl 0x1ceec	@ 0004a91e d2f7e5fa
.org 0x4a922
	ldrb r1, [r4, #10]	@ 0004a922 a17a
.org 0x4a924
	movs r0, #254	@ 0004a924 fe20
.org 0x4a926
	ands r0, r1	@ 0004a926 0840
.org 0x4a928
	movs r5, #0	@ 0004a928 0025
.org 0x4a92a
	movs r1, #2	@ 0004a92a 0221
.org 0x4a92c
	orrs r0, r1	@ 0004a92c 0843
.org 0x4a92e
	strb r0, [r4, #10]	@ 0004a92e a072
.org 0x4a930
	ldr r1, [pc, #36]	@ 0004a930 0949
.org 0x4a932
	adds r0, r4, #0	@ 0004a932 201c
.org 0x4a934
	bl 0x1cf00	@ 0004a934 d2f7e4fa
.org 0x4a938
	movs r0, #8	@ 0004a938 0820
.org 0x4a93a
	strb r0, [r4, #18]	@ 0004a93a a074
.org 0x4a93c
	movs r0, #56	@ 0004a93c 3820
.org 0x4a93e
	strb r0, [r4, #19]	@ 0004a93e e074
.org 0x4a940
	adds r0, r4, #0	@ 0004a940 201c
.org 0x4a942
	adds r0, #189	@ 0004a942 bd30
.org 0x4a944
	strb r5, [r0, #0]	@ 0004a944 0570
.org 0x4a946
	adds r0, r4, #0	@ 0004a946 201c
.org 0x4a948
	bl 0x4a8a0	@ 0004a948 fff7aaff
.org 0x4a94c
	pop {r4, r5}	@ 0004a94c 30bc
.org 0x4a94e
	pop {r0}	@ 0004a94e 01bc
.org 0x4a950
	bx r0	@ 0004a950 0047
