@ FUN_080cd938  entry 0x080cd938  size 74
.thumb
.org 0xcd938
FUN_080cd938:
	push {r4, r5, r6, lr}	@ 000cd938 70b5
.org 0xcd93a
	adds r6, r0, #0	@ 000cd93a 061c
.org 0xcd93c
	lsls r1, r1, #24	@ 000cd93c 0906
.org 0xcd93e
	lsrs r5, r1, #24	@ 000cd93e 0d0e
.org 0xcd940
	lsls r2, r2, #24	@ 000cd940 1206
.org 0xcd942
	lsrs r4, r2, #24	@ 000cd942 140e
.org 0xcd944
	ldr r0, [pc, #60]	@ 000cd944 0f48
.org 0xcd946
	ldr r0, [r0, #0]	@ 000cd946 0068
.org 0xcd948
	bl 0x5500	@ 000cd948 37f7dafd
.org 0xcd94c
	adds r3, r0, #0	@ 000cd94c 031c
.org 0xcd94e
	cmp r3, #0	@ 000cd94e 002b
.org 0xcd950
	beq.n 0xcd97a	@ 000cd950 13d0
.org 0xcd952
	adds r1, r3, #0	@ 000cd952 191c
.org 0xcd954
	adds r1, #37	@ 000cd954 2531
.org 0xcd956
	movs r2, #0	@ 000cd956 0022
.org 0xcd958
	movs r0, #8	@ 000cd958 0820
.org 0xcd95a
	strb r0, [r1, #0]	@ 000cd95a 0870
.org 0xcd95c
	ldr r0, [pc, #40]	@ 000cd95c 0a48
.org 0xcd95e
	movs r1, #50	@ 000cd95e 3221
.org 0xcd960
	strb r1, [r3, #9]	@ 000cd960 5972
.org 0xcd962
	adds r0, #200	@ 000cd962 c830
.org 0xcd964
	ldr r0, [r0, #0]	@ 000cd964 0068
.org 0xcd966
	ldr r0, [r0, #0]	@ 000cd966 0068
.org 0xcd968
	str r0, [r3, #20]	@ 000cd968 5861
.org 0xcd96a
	movs r0, #0	@ 000cd96a 0020
.org 0xcd96c
	strh r2, [r3, #32]	@ 000cd96c 1a84
.org 0xcd96e
	adds r1, r3, #0	@ 000cd96e 191c
.org 0xcd970
	adds r1, #34	@ 000cd970 2231
.org 0xcd972
	strb r0, [r1, #0]	@ 000cd972 0870
.org 0xcd974
	str r6, [r3, #40]	@ 000cd974 9e62
.org 0xcd976
	strb r5, [r3, #16]	@ 000cd976 1d74
.org 0xcd978
	strb r4, [r3, #17]	@ 000cd978 5c74
.org 0xcd97a
	adds r0, r3, #0	@ 000cd97a 181c
.org 0xcd97c
	pop {r4, r5, r6}	@ 000cd97c 70bc
.org 0xcd97e
	pop {r1}	@ 000cd97e 02bc
.org 0xcd980
	bx r1	@ 000cd980 0847
