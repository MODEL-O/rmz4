@ FUN_080d67cc  entry 0x080d67cc  size 94
.thumb
.org 0xd67cc
FUN_080d67cc:
	push {r4, r5, r6, r7, lr}	@ 000d67cc f0b5
.org 0xd67ce
	mov r7, r9	@ 000d67ce 4f46
.org 0xd67d0
	mov r6, r8	@ 000d67d0 4646
.org 0xd67d2
	push {r6, r7}	@ 000d67d2 c0b4
.org 0xd67d4
	mov r8, r0	@ 000d67d4 8046
.org 0xd67d6
	adds r5, r1, #0	@ 000d67d6 0d1c
.org 0xd67d8
	movs r4, #0	@ 000d67d8 0024
.org 0xd67da
	movs r7, #0	@ 000d67da 0027
.org 0xd67dc
	movs r6, #1	@ 000d67dc 0126
.org 0xd67de
	ldr r0, [pc, #76]	@ 000d67de 1348
.org 0xd67e0
	mov r9, r0	@ 000d67e0 8146
.org 0xd67e2
	ldr r0, [pc, #76]	@ 000d67e2 1348
.org 0xd67e4
	ldr r0, [r0, #0]	@ 000d67e4 0068
.org 0xd67e6
	bl 0x5500	@ 000d67e6 2ef78bfe
.org 0xd67ea
	adds r1, r0, #0	@ 000d67ea 011c
.org 0xd67ec
	cmp r1, #0	@ 000d67ec 0029
.org 0xd67ee
	beq.n 0xd6818	@ 000d67ee 13d0
.org 0xd67f0
	adds r0, #37	@ 000d67f0 2530
.org 0xd67f2
	strb r6, [r0, #0]	@ 000d67f2 0670
.org 0xd67f4
	movs r0, #21	@ 000d67f4 1520
.org 0xd67f6
	strb r0, [r1, #9]	@ 000d67f6 4872
.org 0xd67f8
	mov r2, r9	@ 000d67f8 4a46
.org 0xd67fa
	ldr r0, [r2, #84]	@ 000d67fa 506d
.org 0xd67fc
	ldr r0, [r0, #0]	@ 000d67fc 0068
.org 0xd67fe
	str r0, [r1, #20]	@ 000d67fe 4861
.org 0xd6800
	strh r7, [r1, #32]	@ 000d6800 0f84
.org 0xd6802
	adds r0, r1, #0	@ 000d6802 081c
.org 0xd6804
	adds r0, #34	@ 000d6804 2230
.org 0xd6806
	strb r7, [r0, #0]	@ 000d6806 0770
.org 0xd6808
	strb r6, [r1, #16]	@ 000d6808 0e74
.org 0xd680a
	strb r4, [r1, #17]	@ 000d680a 4c74
.org 0xd680c
	mov r0, r8	@ 000d680c 4046
.org 0xd680e
	str r0, [r1, #40]	@ 000d680e 8862
.org 0xd6810
	ldr r0, [r5, #0]	@ 000d6810 2868
.org 0xd6812
	str r0, [r1, #84]	@ 000d6812 4865
.org 0xd6814
	ldr r0, [r5, #4]	@ 000d6814 6868
.org 0xd6816
	str r0, [r1, #88]	@ 000d6816 8865
.org 0xd6818
	adds r4, #1	@ 000d6818 0134
.org 0xd681a
	cmp r4, #3	@ 000d681a 032c
.org 0xd681c
	ble.n 0xd67e2	@ 000d681c e1dd
.org 0xd681e
	pop {r3, r4}	@ 000d681e 18bc
.org 0xd6820
	mov r8, r3	@ 000d6820 9846
.org 0xd6822
	mov r9, r4	@ 000d6822 a146
.org 0xd6824
	pop {r4, r5, r6, r7}	@ 000d6824 f0bc
.org 0xd6826
	pop {r0}	@ 000d6826 01bc
.org 0xd6828
	bx r0	@ 000d6828 0047
