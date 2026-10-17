@ FUN_0800291c  entry 0x0800291c  size 72
.thumb
.org 0x291c
FUN_0800291c:
	push {r4, lr}	@ 0000291c 10b5
.org 0x291e
	sub sp, #4	@ 0000291e 81b0
.org 0x2920
	mov r1, sp	@ 00002920 6946
.org 0x2922
	movs r4, #128	@ 00002922 8024
.org 0x2924
	lsls r4, r4, #19	@ 00002924 e404
.org 0x2926
	ldrh r0, [r4, #0]	@ 00002926 2088
.org 0x2928
	strh r0, [r1, #0]	@ 00002928 0880
.org 0x292a
	mov r2, sp	@ 0000292a 6a46
.org 0x292c
	mov r0, sp	@ 0000292c 6846
.org 0x292e
	ldrh r1, [r0, #0]	@ 0000292e 0188
.org 0x2930
	ldr r0, [pc, #48]	@ 00002930 0c48
.org 0x2932
	ands r0, r1	@ 00002932 0840
.org 0x2934
	strh r0, [r2, #0]	@ 00002934 1080
.org 0x2936
	mov r3, sp	@ 00002936 6b46
.org 0x2938
	mov r0, sp	@ 00002938 6846
.org 0x293a
	ldr r2, [pc, #44]	@ 0000293a 0b4a
.org 0x293c
	ldrh r0, [r0, #0]	@ 0000293c 0088
.org 0x293e
	ldrh r1, [r2, #0]	@ 0000293e 1188
.org 0x2940
	orrs r0, r1	@ 00002940 0843
.org 0x2942
	strh r0, [r3, #0]	@ 00002942 1880
.org 0x2944
	mov r0, sp	@ 00002944 6846
.org 0x2946
	ldrh r0, [r0, #0]	@ 00002946 0088
.org 0x2948
	strh r0, [r4, #0]	@ 00002948 2080
.org 0x294a
	ldr r1, [pc, #32]	@ 0000294a 0849
.org 0x294c
	ldr r0, [r2, #4]	@ 0000294c 5068
.org 0x294e
	str r0, [r1, #0]	@ 0000294e 0860
.org 0x2950
	adds r1, #4	@ 00002950 0431
.org 0x2952
	ldr r0, [r2, #8]	@ 00002952 9068
.org 0x2954
	str r0, [r1, #0]	@ 00002954 0860
.org 0x2956
	adds r1, #4	@ 00002956 0431
.org 0x2958
	ldr r0, [r2, #12]	@ 00002958 d068
.org 0x295a
	str r0, [r1, #0]	@ 0000295a 0860
.org 0x295c
	add sp, #4	@ 0000295c 01b0
.org 0x295e
	pop {r4}	@ 0000295e 10bc
.org 0x2960
	pop {r0}	@ 00002960 01bc
.org 0x2962
	bx r0	@ 00002962 0047
