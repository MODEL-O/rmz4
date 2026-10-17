@ FUN_0805977c  entry 0x0805977c  size 42
.thumb
.org 0x5977c
FUN_0805977c:
	push {r4, lr}	@ 0005977c 10b5
.org 0x5977e
	sub sp, #8	@ 0005977e 82b0
.org 0x59780
	adds r4, r0, #0	@ 00059780 041c
.org 0x59782
	ldr r1, [pc, #36]	@ 00059782 0949
.org 0x59784
	mov r0, sp	@ 00059784 6846
.org 0x59786
	movs r2, #5	@ 00059786 0522
.org 0x59788
	bl 0x129258	@ 00059788 cff066fd
.org 0x5978c
	adds r4, #164	@ 0005978c a434
.org 0x5978e
	movs r1, #0	@ 0005978e 0021
.org 0x59790
	ldrsh r0, [r4, r1]	@ 00059790 605e
.org 0x59792
	cmp r0, #0	@ 00059792 0028
.org 0x59794
	bge.n 0x59798	@ 00059794 00da
.org 0x59796
	adds r0, #15	@ 00059796 0f30
.org 0x59798
	asrs r0, r0, #4	@ 00059798 0011
.org 0x5979a
	add r0, sp	@ 0005979a 6844
.org 0x5979c
	ldrb r0, [r0, #0]	@ 0005979c 0078
.org 0x5979e
	add sp, #8	@ 0005979e 02b0
.org 0x597a0
	pop {r4}	@ 000597a0 10bc
.org 0x597a2
	pop {r1}	@ 000597a2 02bc
.org 0x597a4
	bx r1	@ 000597a4 0847
