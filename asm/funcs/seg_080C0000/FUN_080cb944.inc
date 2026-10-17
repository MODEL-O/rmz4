@ FUN_080cb944  entry 0x080cb944  size 100
.thumb
.org 0xcb944
FUN_080cb944:
	push {r4, r5, r6, lr}	@ 000cb944 70b5
.org 0xcb946
	adds r5, r0, #0	@ 000cb946 051c
.org 0xcb948
	adds r6, r1, #0	@ 000cb948 0e1c
.org 0xcb94a
	adds r4, r2, #0	@ 000cb94a 141c
.org 0xcb94c
	ldr r0, [pc, #88]	@ 000cb94c 1648
.org 0xcb94e
	ldr r0, [r0, #0]	@ 000cb94e 0068
.org 0xcb950
	bl 0x5500	@ 000cb950 39f7d6fd
.org 0xcb954
	mov ip, r0	@ 000cb954 8446
.org 0xcb956
	cmp r0, #0	@ 000cb956 0028
.org 0xcb958
	beq.n 0xcb9a0	@ 000cb958 22d0
.org 0xcb95a
	mov r1, ip	@ 000cb95a 6146
.org 0xcb95c
	adds r1, #37	@ 000cb95c 2531
.org 0xcb95e
	movs r3, #0	@ 000cb95e 0023
.org 0xcb960
	movs r0, #8	@ 000cb960 0820
.org 0xcb962
	strb r0, [r1, #0]	@ 000cb962 0870
.org 0xcb964
	ldr r0, [pc, #68]	@ 000cb964 1148
.org 0xcb966
	movs r1, #41	@ 000cb966 2921
.org 0xcb968
	mov r2, ip	@ 000cb968 6246
.org 0xcb96a
	strb r1, [r2, #9]	@ 000cb96a 5172
.org 0xcb96c
	adds r0, #164	@ 000cb96c a430
.org 0xcb96e
	ldr r0, [r0, #0]	@ 000cb96e 0068
.org 0xcb970
	ldr r0, [r0, #0]	@ 000cb970 0068
.org 0xcb972
	str r0, [r2, #20]	@ 000cb972 5061
.org 0xcb974
	movs r2, #0	@ 000cb974 0022
.org 0xcb976
	mov r0, ip	@ 000cb976 6046
.org 0xcb978
	strh r3, [r0, #32]	@ 000cb978 0384
.org 0xcb97a
	adds r0, #34	@ 000cb97a 2230
.org 0xcb97c
	strb r2, [r0, #0]	@ 000cb97c 0270
.org 0xcb97e
	mov r1, ip	@ 000cb97e 6146
.org 0xcb980
	str r5, [r1, #40]	@ 000cb980 8d62
.org 0xcb982
	ldr r0, [r6, #0]	@ 000cb982 3068
.org 0xcb984
	ldr r1, [r6, #4]	@ 000cb984 7168
.org 0xcb986
	mov r3, ip	@ 000cb986 6346
.org 0xcb988
	str r0, [r3, #84]	@ 000cb988 5865
.org 0xcb98a
	str r1, [r3, #88]	@ 000cb98a 9965
.org 0xcb98c
	movs r0, #1	@ 000cb98c 0120
.org 0xcb98e
	strb r0, [r3, #16]	@ 000cb98e 1874
.org 0xcb990
	strb r2, [r3, #17]	@ 000cb990 5a74
.org 0xcb992
	mov r1, ip	@ 000cb992 6146
.org 0xcb994
	adds r1, #180	@ 000cb994 b431
.org 0xcb996
	ldr r0, [r4, #0]	@ 000cb996 2068
.org 0xcb998
	str r0, [r1, #0]	@ 000cb998 0860
.org 0xcb99a
	adds r1, #4	@ 000cb99a 0431
.org 0xcb99c
	ldr r0, [r4, #4]	@ 000cb99c 6068
.org 0xcb99e
	str r0, [r1, #0]	@ 000cb99e 0860
.org 0xcb9a0
	mov r0, ip	@ 000cb9a0 6046
.org 0xcb9a2
	pop {r4, r5, r6}	@ 000cb9a2 70bc
.org 0xcb9a4
	pop {r1}	@ 000cb9a4 02bc
.org 0xcb9a6
	bx r1	@ 000cb9a6 0847
