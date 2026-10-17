@ FUN_080cc8e8  entry 0x080cc8e8  size 92
.thumb
.org 0xcc8e8
FUN_080cc8e8:
	push {r4, r5, lr}	@ 000cc8e8 30b5
.org 0xcc8ea
	adds r4, r0, #0	@ 000cc8ea 041c
.org 0xcc8ec
	ldrb r5, [r4, #14]	@ 000cc8ec a57b
.org 0xcc8ee
	cmp r5, #0	@ 000cc8ee 002d
.org 0xcc8f0
	bne.n 0xcc914	@ 000cc8f0 10d1
.org 0xcc8f2
	ldr r1, [pc, #80]	@ 000cc8f2 1449
.org 0xcc8f4
	bl 0x1cf00	@ 000cc8f4 50f704fb
.org 0xcc8f8
	adds r0, r4, #0	@ 000cc8f8 201c
.org 0xcc8fa
	adds r0, #140	@ 000cc8fa 8c30
.org 0xcc8fc
	str r5, [r0, #0]	@ 000cc8fc 0560
.org 0xcc8fe
	adds r0, #4	@ 000cc8fe 0430
.org 0xcc900
	str r5, [r0, #0]	@ 000cc900 0560
.org 0xcc902
	adds r0, #4	@ 000cc902 0430
.org 0xcc904
	strb r5, [r0, #0]	@ 000cc904 0570
.org 0xcc906
	ldrb r1, [r4, #10]	@ 000cc906 a17a
.org 0xcc908
	movs r0, #251	@ 000cc908 fb20
.org 0xcc90a
	ands r0, r1	@ 000cc90a 0840
.org 0xcc90c
	strb r0, [r4, #10]	@ 000cc90c a072
.org 0xcc90e
	ldrb r0, [r4, #14]	@ 000cc90e a07b
.org 0xcc910
	adds r0, #1	@ 000cc910 0130
.org 0xcc912
	strb r0, [r4, #14]	@ 000cc912 a073
.org 0xcc914
	adds r0, r4, #0	@ 000cc914 201c
.org 0xcc916
	bl 0x1cff0	@ 000cc916 50f76bfb
.org 0xcc91a
	adds r0, r4, #0	@ 000cc91a 201c
.org 0xcc91c
	adds r0, #115	@ 000cc91c 7330
.org 0xcc91e
	ldrb r0, [r0, #0]	@ 000cc91e 0078
.org 0xcc920
	cmp r0, #3	@ 000cc920 0328
.org 0xcc922
	bne.n 0xcc93e	@ 000cc922 0cd1
.org 0xcc924
	ldrb r1, [r4, #10]	@ 000cc924 a17a
.org 0xcc926
	movs r0, #254	@ 000cc926 fe20
.org 0xcc928
	ands r0, r1	@ 000cc928 0840
.org 0xcc92a
	strb r0, [r4, #10]	@ 000cc92a a072
.org 0xcc92c
	ldr r1, [pc, #24]	@ 000cc92c 0649
.org 0xcc92e
	ldrb r0, [r4, #9]	@ 000cc92e 607a
.org 0xcc930
	lsls r0, r0, #2	@ 000cc930 8000
.org 0xcc932
	adds r0, r0, r1	@ 000cc932 4018
.org 0xcc934
	movs r1, #4	@ 000cc934 0421
.org 0xcc936
	str r1, [r4, #12]	@ 000cc936 e160
.org 0xcc938
	ldr r0, [r0, #0]	@ 000cc938 0068
.org 0xcc93a
	ldr r0, [r0, #16]	@ 000cc93a 0069
.org 0xcc93c
	str r0, [r4, #20]	@ 000cc93c 6061
.org 0xcc93e
	pop {r4, r5}	@ 000cc93e 30bc
.org 0xcc940
	pop {r0}	@ 000cc940 01bc
.org 0xcc942
	bx r0	@ 000cc942 0047
