@ FUN_08086794  entry 0x08086794  size 104
.thumb
.org 0x86794
FUN_08086794:
	push {r4, lr}	@ 00086794 10b5
.org 0x86796
	sub sp, #8	@ 00086796 82b0
.org 0x86798
	adds r4, r0, #0	@ 00086798 041c
.org 0x8679a
	bl 0x86b14	@ 0008679a 00f0bbf9
.org 0x8679e
	cmp r0, #0	@ 0008679e 0028
.org 0x867a0
	beq.n 0x867f4	@ 000867a0 28d0
.org 0x867a2
	ldrb r1, [r4, #10]	@ 000867a2 a17a
.org 0x867a4
	movs r0, #254	@ 000867a4 fe20
.org 0x867a6
	ands r0, r1	@ 000867a6 0840
.org 0x867a8
	movs r1, #0	@ 000867a8 0021
.org 0x867aa
	strb r0, [r4, #10]	@ 000867aa a072
.org 0x867ac
	adds r0, r4, #0	@ 000867ac 201c
.org 0x867ae
	adds r0, #140	@ 000867ae 8c30
.org 0x867b0
	str r1, [r0, #0]	@ 000867b0 0160
.org 0x867b2
	adds r0, #4	@ 000867b2 0430
.org 0x867b4
	str r1, [r0, #0]	@ 000867b4 0160
.org 0x867b6
	adds r0, #4	@ 000867b6 0430
.org 0x867b8
	strb r1, [r0, #0]	@ 000867b8 0170
.org 0x867ba
	ldrb r1, [r4, #10]	@ 000867ba a17a
.org 0x867bc
	movs r0, #251	@ 000867bc fb20
.org 0x867be
	ands r0, r1	@ 000867be 0840
.org 0x867c0
	strb r0, [r4, #10]	@ 000867c0 a072
.org 0x867c2
	ldr r0, [r4, #84]	@ 000867c2 606d
.org 0x867c4
	ldr r2, [pc, #52]	@ 000867c4 0d4a
.org 0x867c6
	ands r0, r2	@ 000867c6 1040
.org 0x867c8
	movs r1, #128	@ 000867c8 8021
.org 0x867ca
	lsls r1, r1, #4	@ 000867ca 0901
.org 0x867cc
	adds r0, r0, r1	@ 000867cc 4018
.org 0x867ce
	str r0, [sp, #0]	@ 000867ce 0090
.org 0x867d0
	ldr r0, [r4, #88]	@ 000867d0 a06d
.org 0x867d2
	ands r0, r2	@ 000867d2 1040
.org 0x867d4
	adds r0, r0, r1	@ 000867d4 4018
.org 0x867d6
	str r0, [sp, #4]	@ 000867d6 0190
.org 0x867d8
	movs r0, #0	@ 000867d8 0020
.org 0x867da
	movs r1, #20	@ 000867da 1421
.org 0x867dc
	mov r2, sp	@ 000867dc 6a46
.org 0x867de
	bl 0x2ab88	@ 000867de a4f7d3f9
.org 0x867e2
	ldr r1, [pc, #28]	@ 000867e2 0749
.org 0x867e4
	ldrb r0, [r4, #9]	@ 000867e4 607a
.org 0x867e6
	lsls r0, r0, #2	@ 000867e6 8000
.org 0x867e8
	adds r0, r0, r1	@ 000867e8 4018
.org 0x867ea
	movs r1, #4	@ 000867ea 0421
.org 0x867ec
	str r1, [r4, #12]	@ 000867ec e160
.org 0x867ee
	ldr r0, [r0, #0]	@ 000867ee 0068
.org 0x867f0
	ldr r0, [r0, #16]	@ 000867f0 0069
.org 0x867f2
	str r0, [r4, #20]	@ 000867f2 6061
.org 0x867f4
	add sp, #8	@ 000867f4 02b0
.org 0x867f6
	pop {r4}	@ 000867f6 10bc
.org 0x867f8
	pop {r0}	@ 000867f8 01bc
.org 0x867fa
	bx r0	@ 000867fa 0047
