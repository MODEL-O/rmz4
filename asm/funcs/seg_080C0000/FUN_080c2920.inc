@ FUN_080c2920  entry 0x080c2920  size 98
.thumb
.org 0xc2920
FUN_080c2920:
	push {r4, r5, r6, lr}	@ 000c2920 70b5
.org 0xc2922
	adds r4, r0, #0	@ 000c2922 041c
.org 0xc2924
	adds r5, r1, #0	@ 000c2924 0d1c
.org 0xc2926
	lsls r2, r2, #24	@ 000c2926 1206
.org 0xc2928
	lsrs r6, r2, #24	@ 000c2928 160e
.org 0xc292a
	ldr r0, [pc, #88]	@ 000c292a 1648
.org 0xc292c
	ldr r0, [r0, #0]	@ 000c292c 0068
.org 0xc292e
	bl 0x5500	@ 000c292e 42f7e7fd
.org 0xc2932
	mov ip, r0	@ 000c2932 8446
.org 0xc2934
	cmp r0, #0	@ 000c2934 0028
.org 0xc2936
	beq.n 0xc297a	@ 000c2936 20d0
.org 0xc2938
	mov r1, ip	@ 000c2938 6146
.org 0xc293a
	adds r1, #37	@ 000c293a 2531
.org 0xc293c
	movs r3, #0	@ 000c293c 0023
.org 0xc293e
	movs r0, #8	@ 000c293e 0820
.org 0xc2940
	strb r0, [r1, #0]	@ 000c2940 0870
.org 0xc2942
	ldr r1, [pc, #68]	@ 000c2942 1149
.org 0xc2944
	movs r0, #16	@ 000c2944 1020
.org 0xc2946
	mov r2, ip	@ 000c2946 6246
.org 0xc2948
	strb r0, [r2, #9]	@ 000c2948 5072
.org 0xc294a
	ldr r0, [r1, #64]	@ 000c294a 086c
.org 0xc294c
	ldr r0, [r0, #0]	@ 000c294c 0068
.org 0xc294e
	str r0, [r2, #20]	@ 000c294e 5061
.org 0xc2950
	movs r2, #0	@ 000c2950 0022
.org 0xc2952
	mov r0, ip	@ 000c2952 6046
.org 0xc2954
	strh r3, [r0, #32]	@ 000c2954 0384
.org 0xc2956
	adds r0, #34	@ 000c2956 2230
.org 0xc2958
	strb r2, [r0, #0]	@ 000c2958 0270
.org 0xc295a
	mov r1, ip	@ 000c295a 6146
.org 0xc295c
	str r4, [r1, #40]	@ 000c295c 8c62
.org 0xc295e
	ldr r0, [r5, #0]	@ 000c295e 2868
.org 0xc2960
	ldr r1, [r5, #4]	@ 000c2960 6968
.org 0xc2962
	mov r3, ip	@ 000c2962 6346
.org 0xc2964
	str r0, [r3, #84]	@ 000c2964 5865
.org 0xc2966
	str r1, [r3, #88]	@ 000c2966 9965
.org 0xc2968
	strb r2, [r3, #16]	@ 000c2968 1a74
.org 0xc296a
	strb r6, [r3, #17]	@ 000c296a 5e74
.org 0xc296c
	mov r0, ip	@ 000c296c 6046
.org 0xc296e
	adds r0, #180	@ 000c296e b430
.org 0xc2970
	strb r2, [r0, #0]	@ 000c2970 0270
.org 0xc2972
	adds r0, #1	@ 000c2972 0130
.org 0xc2974
	strb r2, [r0, #0]	@ 000c2974 0270
.org 0xc2976
	adds r0, #1	@ 000c2976 0130
.org 0xc2978
	strb r2, [r0, #0]	@ 000c2978 0270
.org 0xc297a
	mov r0, ip	@ 000c297a 6046
.org 0xc297c
	pop {r4, r5, r6}	@ 000c297c 70bc
.org 0xc297e
	pop {r1}	@ 000c297e 02bc
.org 0xc2980
	bx r1	@ 000c2980 0847
