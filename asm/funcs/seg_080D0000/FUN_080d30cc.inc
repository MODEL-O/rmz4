@ FUN_080d30cc  entry 0x080d30cc  size 132
.thumb
.org 0xd30cc
FUN_080d30cc:
	push {r4, r5, r6, lr}	@ 000d30cc 70b5
.org 0xd30ce
	adds r5, r0, #0	@ 000d30ce 051c
.org 0xd30d0
	ldr r6, [r5, #40]	@ 000d30d0 ae6a
.org 0xd30d2
	ldrb r0, [r5, #14]	@ 000d30d2 a87b
.org 0xd30d4
	adds r1, r0, #0	@ 000d30d4 011c
.org 0xd30d6
	cmp r1, #0	@ 000d30d6 0029
.org 0xd30d8
	bne.n 0xd30e0	@ 000d30d8 02d1
.org 0xd30da
	strb r1, [r5, #18]	@ 000d30da a974
.org 0xd30dc
	adds r0, #1	@ 000d30dc 0130
.org 0xd30de
	strb r0, [r5, #14]	@ 000d30de a873
.org 0xd30e0
	ldrb r1, [r5, #18]	@ 000d30e0 a97c
.org 0xd30e2
	adds r0, r1, #1	@ 000d30e2 481c
.org 0xd30e4
	strb r0, [r5, #18]	@ 000d30e4 a874
.org 0xd30e6
	movs r0, #3	@ 000d30e6 0320
.org 0xd30e8
	ands r0, r1	@ 000d30e8 0840
.org 0xd30ea
	cmp r0, #1	@ 000d30ea 0128
.org 0xd30ec
	bls.n 0xd310c	@ 000d30ec 0ed9
.org 0xd30ee
	adds r1, r6, #0	@ 000d30ee 311c
.org 0xd30f0
	adds r1, #140	@ 000d30f0 8c31
.org 0xd30f2
	ldr r0, [r1, #0]	@ 000d30f2 0868
.org 0xd30f4
	movs r4, #1	@ 000d30f4 0124
.org 0xd30f6
	orrs r0, r4	@ 000d30f6 2043
.org 0xd30f8
	str r0, [r1, #0]	@ 000d30f8 0860
.org 0xd30fa
	adds r1, #4	@ 000d30fa 0431
.org 0xd30fc
	ldr r0, [r1, #0]	@ 000d30fc 0868
.org 0xd30fe
	orrs r0, r4	@ 000d30fe 2043
.org 0xd3100
	str r0, [r1, #0]	@ 000d3100 0860
.org 0xd3102
	adds r0, r6, #0	@ 000d3102 301c
.org 0xd3104
	bl 0x1d3fc	@ 000d3104 4af77af9
.org 0xd3108
	strb r4, [r5, #17]	@ 000d3108 6c74
.org 0xd310a
	b.n 0xd312c	@ 000d310a 0fe0
.org 0xd310c
	adds r1, r6, #0	@ 000d310c 311c
.org 0xd310e
	adds r1, #140	@ 000d310e 8c31
.org 0xd3110
	ldr r0, [r1, #0]	@ 000d3110 0868
.org 0xd3112
	movs r2, #2	@ 000d3112 0222
.org 0xd3114
	negs r2, r2	@ 000d3114 5242
.org 0xd3116
	ands r0, r2	@ 000d3116 1040
.org 0xd3118
	str r0, [r1, #0]	@ 000d3118 0860
.org 0xd311a
	adds r1, #4	@ 000d311a 0431
.org 0xd311c
	ldr r0, [r1, #0]	@ 000d311c 0868
.org 0xd311e
	ands r0, r2	@ 000d311e 1040
.org 0xd3120
	str r0, [r1, #0]	@ 000d3120 0860
.org 0xd3122
	adds r0, r6, #0	@ 000d3122 301c
.org 0xd3124
	bl 0x1d330	@ 000d3124 4af704f9
.org 0xd3128
	movs r0, #0	@ 000d3128 0020
.org 0xd312a
	strb r0, [r5, #17]	@ 000d312a 6874
.org 0xd312c
	ldrb r2, [r6, #12]	@ 000d312c 327b
.org 0xd312e
	cmp r2, #4	@ 000d312e 042a
.org 0xd3130
	bne.n 0xd314a	@ 000d3130 0bd1
.org 0xd3132
	ldrb r1, [r5, #10]	@ 000d3132 a97a
.org 0xd3134
	movs r0, #254	@ 000d3134 fe20
.org 0xd3136
	ands r0, r1	@ 000d3136 0840
.org 0xd3138
	strb r0, [r5, #10]	@ 000d3138 a872
.org 0xd313a
	ldr r1, [pc, #20]	@ 000d313a 0549
.org 0xd313c
	ldrb r0, [r5, #9]	@ 000d313c 687a
.org 0xd313e
	lsls r0, r0, #2	@ 000d313e 8000
.org 0xd3140
	adds r0, r0, r1	@ 000d3140 4018
.org 0xd3142
	str r2, [r5, #12]	@ 000d3142 ea60
.org 0xd3144
	ldr r0, [r0, #0]	@ 000d3144 0068
.org 0xd3146
	ldr r0, [r0, #16]	@ 000d3146 0069
.org 0xd3148
	str r0, [r5, #20]	@ 000d3148 6861
.org 0xd314a
	pop {r4, r5, r6}	@ 000d314a 70bc
.org 0xd314c
	pop {r0}	@ 000d314c 01bc
.org 0xd314e
	bx r0	@ 000d314e 0047
