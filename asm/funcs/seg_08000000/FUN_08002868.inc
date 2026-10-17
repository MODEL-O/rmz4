@ FUN_08002868  entry 0x08002868  size 100
.thumb
.org 0x2868
FUN_08002868:
	push {r4, r5, lr}	@ 00002868 30b5
.org 0x286a
	sub sp, #4	@ 0000286a 81b0
.org 0x286c
	mov r1, sp	@ 0000286c 6946
.org 0x286e
	movs r3, #128	@ 0000286e 8023
.org 0x2870
	lsls r3, r3, #19	@ 00002870 db04
.org 0x2872
	ldrh r0, [r3, #0]	@ 00002872 1888
.org 0x2874
	strh r0, [r1, #0]	@ 00002874 0880
.org 0x2876
	ldr r5, [pc, #84]	@ 00002876 154d
.org 0x2878
	ldr r4, [r5, #0]	@ 00002878 2c68
.org 0x287a
	mov r2, sp	@ 0000287a 6a46
.org 0x287c
	mov r0, sp	@ 0000287c 6846
.org 0x287e
	ldrh r1, [r0, #0]	@ 0000287e 0188
.org 0x2880
	ldr r0, [pc, #76]	@ 00002880 1348
.org 0x2882
	ands r0, r1	@ 00002882 0840
.org 0x2884
	strh r0, [r2, #0]	@ 00002884 1080
.org 0x2886
	mov r1, sp	@ 00002886 6946
.org 0x2888
	ldr r0, [r5, #4]	@ 00002888 6868
.org 0x288a
	ldrh r1, [r1, #0]	@ 0000288a 0988
.org 0x288c
	orrs r0, r1	@ 0000288c 0843
.org 0x288e
	strh r0, [r2, #0]	@ 0000288e 1080
.org 0x2890
	mov r0, sp	@ 00002890 6846
.org 0x2892
	ldrh r0, [r0, #0]	@ 00002892 0088
.org 0x2894
	strh r0, [r3, #0]	@ 00002894 1880
.org 0x2896
	ldr r0, [pc, #60]	@ 00002896 0f48
.org 0x2898
	adds r2, r5, r0	@ 00002898 2a18
.org 0x289a
	cmp r4, r5	@ 0000289a ac42
.org 0x289c
	bcs.n 0x28ac	@ 0000289c 06d2
.org 0x289e
	movs r1, #128	@ 0000289e 8021
.org 0x28a0
	lsls r1, r1, #2	@ 000028a0 8900
.org 0x28a2
	adds r0, r1, #0	@ 000028a2 081c
.org 0x28a4
	strh r0, [r4, #0]	@ 000028a4 2080
.org 0x28a6
	adds r4, #8	@ 000028a6 0834
.org 0x28a8
	cmp r4, r5	@ 000028a8 ac42
.org 0x28aa
	bcc.n 0x28a4	@ 000028aa fbd3
.org 0x28ac
	ldr r1, [pc, #40]	@ 000028ac 0a49
.org 0x28ae
	str r2, [r1, #0]	@ 000028ae 0a60
.org 0x28b0
	movs r0, #224	@ 000028b0 e020
.org 0x28b2
	lsls r0, r0, #19	@ 000028b2 c004
.org 0x28b4
	str r0, [r1, #4]	@ 000028b4 4860
.org 0x28b6
	ldr r0, [pc, #36]	@ 000028b6 0948
.org 0x28b8
	str r0, [r1, #8]	@ 000028b8 8860
.org 0x28ba
	ldr r0, [r1, #8]	@ 000028ba 8868
.org 0x28bc
	movs r1, #128	@ 000028bc 8021
.org 0x28be
	lsls r1, r1, #3	@ 000028be c900
.org 0x28c0
	adds r0, r2, r1	@ 000028c0 5018
.org 0x28c2
	str r2, [r0, #0]	@ 000028c2 0260
.org 0x28c4
	add sp, #4	@ 000028c4 01b0
.org 0x28c6
	pop {r4, r5}	@ 000028c6 30bc
.org 0x28c8
	pop {r0}	@ 000028c8 01bc
.org 0x28ca
	bx r0	@ 000028ca 0047
